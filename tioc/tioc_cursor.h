/*
 * tioc_cursor.h
 * Terminal Input Ouput Control cursor module
 * 
 * Copyright (c) 2026 lulboi30
 * SPDX-License-Identifier: MIT
 */

#ifndef TIOC_CURSOR_H
#define TIOC_CURSOR_H 1

#include <stdio.h>

#define DIR_UP 'A'
#define DIR_DOWN 'B'
#define DIR_RIGHT 'C'
#define DIR_LEFT 'D'

#define gotoyx(y, x) printf("\x1b[%i;%iH", y, x)
#define gotoxy(x, y) printf("\x1b[%i;%iH", y, x)
#define goindir(n, d) printf("\x1b[%i%c", n, d)
#define hidecursor() printf("\033[?25l")
#define showcursor() printf("\033[?25h")
#define savecursor() printf("\033[s")
#define restorecursor() printf("\033[u")

#endif
