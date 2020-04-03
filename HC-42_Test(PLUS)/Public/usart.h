#ifndef __usart_H
#define __usart_H

#include "system.h" 
#include "stdio.h" 


void USART1_Init(u32 bound);
void USART2_Init(u32 bound);
void USART2_IRQHandler(void);
void USART1_IRQHandler(void);

#endif