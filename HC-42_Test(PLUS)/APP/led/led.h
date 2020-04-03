#ifndef _led_H
#define _led_H

#include "system.h"

/*  LED时钟端口、引脚定义 */
#define LED_PORT 			GPIOC   
#define LED_PIN 			(GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7)
#define LED_PORT_RCC		RCC_APB2Periph_GPIOC


#define led1 PCout(0)
#define led2 PCout(1)
#define led3 PCout(2)

#define LED_ON1 GPIO_ResetBits(LED_PORT, GPIO_Pin_0)
#define LED_ON2 GPIO_ResetBits(LED_PORT, GPIO_Pin_1)
#define LED_ON3 GPIO_ResetBits(LED_PORT, GPIO_Pin_2)

#define LED_OFF1 GPIO_SetBits(LED_PORT, GPIO_Pin_0)
#define LED_OFF2 GPIO_SetBits(LED_PORT, GPIO_Pin_1)
#define LED_OFF3 GPIO_SetBits(LED_PORT, GPIO_Pin_2)

void LED_Init(void);


#endif
