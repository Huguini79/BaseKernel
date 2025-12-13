// KEYBOARD IMPLEMENTATION FROM SCRATCH FOR THE "BaseKernel" X86 OPERATING SYSTEM FROM SCRATCH - https://github.com/Huguini79/BaseKernel

// IMPORT THE LIBRARIES THAT WE NEED

#include "keyboard.h"
#include "kernel.h"
#include "vga.h"
#include "io.h"

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

			if(scancode == 0x1E) { // A SCANCODE
				printb("a");
			}

		}

	}
}
