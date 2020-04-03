#ifndef __identify_H
#define __identify_H

#include "system.h" 
#include "SysTick.h"

void identify_open(u8 n);
void identify_close(u8 n);
void identify_glimmer(u8 n);
void identify(char *cmd, u8 n, int SIZE);
void clear_char(char *cmd, int SIZE);

#endif
