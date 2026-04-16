/*
 * tioc_term.h
 * Terminal Input Ouput Control terminal module
 * 
 * Copyright (c) 2026 lulboi30
 * SPDX-License-Identifier: MIT
 */

#ifndef TIOC_TERM_H
#define TIOC_TERM_H 1

#include <stdio.h>
#include <termios.h>
#include <unistd.h>

#define dff(name, flag, type) \
  void name##_off() { \
    struct termios term; \
    tcgetattr(STDIN_FILENO, &term); \
    term.type &= ~flag; \
    tcsetattr(STDIN_FILENO, TCSANOW, &term); \
  } \
  void name##_on() { \
    struct termios term; \
    tcgetattr(STDIN_FILENO, &term); \
    term.type |= flag; \
    tcsetattr(STDIN_FILENO, TCSANOW, &term); \
  }

dff(canon, ICANON, c_lflag);
dff(echo, ECHO, c_lflag);

void gettermsize(unsigned short* width, unsigned short *height) {
  struct winsize ws;
  iotcl(STDIN_FILENO, TIOCGWINSZ, &ws);
  *width = ws.ws_col;
  *height = ws.ws_row;
}

#endif
