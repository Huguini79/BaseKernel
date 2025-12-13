// KEYBOARD IMPLEMENTATION FROM SCRATCH FOR THE "BaseKernel" X86 OPERATING SYSTEM FROM SCRATCH - https://github.com/Huguini79/BaseKernel

// IMPORT THE LIBRARIES THAT WE NEED

#include "keyboard.h"
#include "kernel.h"
#include "vga.h"
#include "io.h"

char buffer[512];
int pos = 0;

void anadir_caracter(char c) {
    buffer[pos++] = c;
    buffer[pos] = '\0';
}

int strncmp(const char* str1, const char* str2, int n)
{
    unsigned char u1, u2;

    while(n-- > 0)
    {
        u1 = (unsigned char)*str1++;
        u2 = (unsigned char)*str2++;
        if (u1 != u2)
            return u1 - u2;
        if (u1 == '\0')
            return 0;
    }

    return 0;
}

// DEFINE THE INIT_KEYBOARD FUNCTION
void init_keyboard() {
	// INFINITE LOOP
	while(1) {
		// MANUAL POLLING
		uint8_t status = insb(0x64); // READ THE STATUS OF THE KEYBOARD

		// THE KEYBOARD HAS BEEN PRESSED
		if(status & 0x01) {
			uint8_t scancode = insb(0x60); // READ THE SCANCODE (read the key that we have pressed in our keyboard)

			// TEST
			if(scancode == 0x01) { // ESC SCANCODE
				printb("ESC HAS BEEN PRESSED");
			}

			if(scancode == 0x0E) { // BACKSPACE SCANCODE
				backspace_vga();
			}

			if(scancode == 0x4B) { // LEFT ARROW
				go_left();
			}

			if(scancode == 0x4D) { // RIGHT ARROW
				go_right();
			}

			if(scancode == 0x48) { // UP ARROW
				go_up();
			}

			if(scancode == 0x50) { // DOWN ARROW
				go_down();
			}

			if(scancode == 0x1C) {
				overwrite();
				row_plus();
				printb("root@BaseKernel$");
				go_right();
			}

			if(scancode == 0x1E) { // A SCANCODE
				perfectchar2('a', 0x2F);
                anadir_caracter('a');
			}
            if(scancode == 0x30) { // B SCANCODE
				perfectchar2('b', 0x2F);
                anadir_caracter('b');
			}
            if(scancode == 0x2E) { // C SCANCODE
				perfectchar2('c', 0x2F);
                anadir_caracter('c');
			}
            if(scancode == 0x20) { // D SCANCODE
				perfectchar2('d', 0x2F);
                anadir_caracter('d');
			}
            if(scancode == 0x12) { // E SCANCODE
				perfectchar2('e', 0x2F);
                anadir_caracter('e');
			}
            if(scancode == 0x21) { // F SCANCODE
				perfectchar2('f', 0x2F);
                anadir_caracter('f');
			}
            if(scancode == 0x22) { // G SCANCODE
				perfectchar2('g', 0x2F);
                anadir_caracter('g');
			}
            if(scancode == 0x23) { // H SCANCODE
				perfectchar2('h', 0x2F);
                anadir_caracter('h');
			}
            if(scancode == 0x17) { // I SCANCODE
				perfectchar2('i', 0x2F);
                anadir_caracter('i');
			}
            if(scancode == 0x24) { // J SCANCODE
				perfectchar2('j', 0x2F);
                anadir_caracter('j');
			}
            if(scancode == 0x25) { // K SCANCODE
				perfectchar2('k', 0x2F);
                anadir_caracter('k');
			}
            if(scancode == 0x26) { // L SCANCODE
				perfectchar2('l', 0x2F);
                anadir_caracter('l');
			}
            if(scancode == 0x32) { // M SCANCODE
				perfectchar2('m', 0x2F);
                anadir_caracter('m');
			}
            if(scancode == 0x31) { // N SCANCODE
				perfectchar2('n', 0x2F);
                anadir_caracter('n');
			}
            if(scancode == 0x18) { // O SCANCODE
				perfectchar2('o', 0x2F);
                anadir_caracter('o');
			}
            if(scancode == 0x19) { // P SCANCODE
				perfectchar2('p', 0x2F);
                anadir_caracter('p');
			}
            if(scancode == 0x10) { // Q SCANCODE
				perfectchar2('q', 0x2F);
                anadir_caracter('q');
			}
            if(scancode == 0x13) { // R SCANCODE
				perfectchar2('r', 0x2F);
                anadir_caracter('r');
			}
            if(scancode == 0x1F) { // S SCANCODE
				perfectchar2('s', 0x2F);
                anadir_caracter('s');
			}
            if(scancode == 0x14) { // T SCANCODE
				perfectchar2('t', 0x2F);
                anadir_caracter('t');
			}
            if(scancode == 0x16) { // U SCANCODE
				perfectchar2('u', 0x2F);
                anadir_caracter('u');
			}
            if(scancode == 0x2F) { // V SCANCODE
				perfectchar2('v', 0x2F);
                anadir_caracter('v');
			}
            if(scancode == 0x11) { // W SCANCODE
				perfectchar2('w', 0x2F);
                anadir_caracter('w');
			}
            if(scancode == 0x2D) { // X SCANCODE
				perfectchar2('x', 0x2F);
                anadir_caracter('x');
			}
            if(scancode == 0x15) { // Y SCANCODE
				perfectchar2('y', 0x2F);
                anadir_caracter('y');
			}
            if(scancode == 0x2C) { // Z SCANCODE
				perfectchar2('z', 0x2F);
                anadir_caracter('z');
			}
            if(scancode == 0x39) { // SPACE SCANCODE
				perfectchar2(' ', 0x2F);
                anadir_caracter(' ');
			}
            if(scancode == 0x27) { // ; SCANCODE
                perfectchar2(';', 0x2F);
                anadir_caracter(';');
            }

		}

	}
}
