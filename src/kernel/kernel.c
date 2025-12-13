// MAIN FILE OF THE C KERNEL OF THE "BaseKernel" X86 OPERATING SYSTEM FROM SCRATCH - https://github.com/Huguini79/BaseKernel

// IMPORT OUR LOCAL LIBRARIES
#include "kernel.h"
#include "vga.h"
#include "io.h"
#include "keyboard.h"
// #include "pci.h"
// #include "memory.h"
// #include "heap.h"
// #include "kheap.h"
// #include "paging.h"
// #include "gdt.h"
// #include "tss.h"

// DEFINE THE KERNEL_MAIN FUNCTION (THE START OF OUR C KERNEL)
void kernel_main() {
	// INIT OUR VGA DRIVER
	init_screen();

	// PUT AN EXAMPLE INTO THE SCREEN
	printb("BaseKernel - github.com/Huguini79/BaseKernel");

	/*
	go_down();
	go_down();
	*/
	row_plus();
	row_plus();
	printb("root@BaseKernel$");
	go_right();

	// INIT THE KEYBOARD
	init_keyboard();

}
