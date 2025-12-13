**BaseKernel IS A 32 BIT OPERATING SYSTEM FROM SCRATCH made BT Huguini79 TO SHOW PEOPLE HOW TO CREATE AN OPERATING SYSTEM FROM SCRATCH WITH A LOT OF DETAILS, LIKE A LOT OF COMMENTS IN C OR IN X86 ASSEMBLY
**

<img width="747" height="243" alt="Screenshot 2025-12-13 21 32 37" src="https://github.com/user-attachments/assets/40764e62-b25c-4cd7-a032-6a76ad449543" />

=======DIRECTORIES========
/build --> All the object files are here
/src ---> All the source code files are here
/iso | iso/boot | iso/boot/grub --> The GRUB configuration file and the elf kernel file are here
/bin --> The final ISO image of the operating system is here

=====FILES=====
build.sh --> The build file
src/linker/linker.ld --> The linker file
iso/boot/grub/grub.cfg --> The GRUB configuration file
src/kernel/kernel.asm --> The entry point from GRUB and the C kernel file
src/kernel/kernel.c --> The C kernel file
src/kernel/kernel.h --> The C kernel header file
src/vga.h --> The VGA header file
src/vga/vga.c --> The VGA implementation in C from scratch
src/io.h --> The I/O header file
src/io/io.asm --> The I/O implementation in X86 Assembly from scratch
src/keyboard.h - The Keyboard header file
src/io/keyboard/keyboard.c - The Keyboard implementation in C from scratch

BOOTING IN REAL HARDWARE
![BaseKernel image3](https://github.com/user-attachments/assets/55fb20fa-a24b-4038-9819-c333b756a765)
![BaseKernel image 1](https://github.com/user-attachments/assets/f4d3427f-abf3-487f-bec6-a3cee915cc88)
![BaseKernel image 2](https://github.com/user-attachments/assets/5daaf12c-8558-4369-b75e-75b791737d1e)
