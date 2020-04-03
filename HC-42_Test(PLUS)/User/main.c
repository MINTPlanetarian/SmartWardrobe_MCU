#include "system.h"
#include "SysTick.h"
#include "led.h"
#include "usart.h"

int main()
{
	u8 i=0; 
	//char str[]="收到!";	
	SysTick_Init(72);
	char str[]="你好！！！";	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //中断优先级分组 分2组
	LED_Init();
	USART1_Init(9600);
	USART2_Init(9600);
	
	while(1)
	{
		i++;
		if(i%20==0)
		{
			
			led1=!led1;
			
		  printf("%s\r\n",str);	//输出字符串str
			
		}
		delay_ms(10);		
	}
}
