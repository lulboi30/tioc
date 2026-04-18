/*
 * tioc_color.h
 * Terminal Input Ouput Control color module
 * 
 * Copyright (c) 2026 lulboi30
 * SPDX-License-Identifier: MIT
 */

#ifndef TIOC_COLOR_H
#define TIOC_COLOR_H 1

#include <stdio.h>

#define COLOR_BLACK '0'
#define COLOR_RED '1'
#define COLOR_GREEN '2'
#define COLOR_YELLOW '3'
#define COLOR_BLUE '4'
#define COLOR_MAGENTA '5'
#define COLOR_CYAN '6'
#define COLOR_WHITE '7'

#define FOREGROUND '3'
#define BACKGROUND '4'

#define setcolor8(color, plane)\
	printf("\x1b[%c%cm", plane, color)

#define setcolor256(color, plane)\
	printf("\x1b[%c8;5;%im", plane, color)

#define setcolorRGB(r, g, b, plane)\
	printf("\x1b[%c8;2;%i;%i;%im", plane, r, g, b)

#define resetcolors()\
  printf("\x1b[0m")

#endif
