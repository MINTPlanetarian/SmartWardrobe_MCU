#include "system.h"
#include "SysTick.h"
#include "led.h"
#include "usart.h"

int main()
{
	u8 i=0; 
	//char str[]="�յ�!";	
	SysTick_Init(72);
	char str[]="��ã�����";	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //�ж����ȼ����� ��2��
	LED_Init();
	USART1_Init(9600);
	USART2_Init(9600);
	
	while(1)
	{
		i++;
		if(i%20==0)
		{
			
			led1=!led1;
			
		  printf("%s\r\n",str);	//����ַ���str
			
		}
		delay_ms(10);		
	}
}
