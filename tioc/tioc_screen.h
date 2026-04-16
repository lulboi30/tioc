/*
 * tioc_screen.h
 * Terminal Input Ouput Control screen module
 * 
 * Copyright (c) 2026 lulboi30
 * SPDX-License-Identifier: MIT
 */

#ifndef TIOC_SCREEN_H
#define TIOC_SCREEN_H 1

#include <stdio.h>

#define TO_END 0
#define TO_BEG 1
#define ALL 2

#define erasedisplay(range) printf("\e[%iJ", range)
#define eraseline(range) printf("\e[%iK", range)
#define altscron() printf("\e[?1049h")
#define altscroff() printf("\e[?1049l")

#endif
