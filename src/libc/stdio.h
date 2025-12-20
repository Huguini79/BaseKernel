#ifndef STDIO_H
#define STDIO_H

#include "vga.h"

void printf(const char* str) {
    printb(str);
}

#endif