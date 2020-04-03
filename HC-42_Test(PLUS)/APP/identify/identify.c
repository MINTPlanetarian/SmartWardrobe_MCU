#include "identify.h"
#include "led.h"

void identify_open(u8 n)
{
	switch(n)
	{
		case 1: LED_ON1;	break;
	  case 2: LED_ON2;	break;
		case 3: LED_ON3; 	break;
	}
}

void identify_close(u8 n)
{
	switch(n)
	{
		case 1: LED_OFF1; break;
	  case 2: LED_OFF2; break;
		case 3: LED_OFF3; break;
	}
}

void identify_glimmer(u8 n)
{
	for(int i=0;i<=10;i++)
	{		
		switch(n)
		{
			case 1: led1 = !led1;	break;
			case 2: led2 = !led2; break;
			case 3: led3 = !led3; break;
		}
			delay_ms(100);
	}
}

void clear_char(char *cmd, int SIZE)
{
	for(int i=0;i<=SIZE;i++){ cmd[i]='\0'; }
}

void identify(char *cmd, u8 n, int SIZE)
{
	if(cmd[0] == 'o' && cmd[1] == 'p' && cmd[2] == 'e' && cmd[3] == 'n')
	//if(cmd[0] == 'o')
	{
		identify_open(n);
		clear_char(cmd, SIZE);
	}
	if(cmd[0] == 'c' && cmd[1] == 'l' && cmd[2] == 'o' && cmd[3] == 's' && cmd[4] == 'e')
	//if(cmd[0] == 'c')
	{
		identify_close(n);
		clear_char(cmd, SIZE);
	}
	if(cmd[0] == 'g' && cmd[1] == 'l' && cmd[2] == 'i' && cmd[3] == 'm')
	//if(cmd[0] == 'g')
	{
		identify_glimmer(n);
		clear_char(cmd, SIZE);
	}
	
	/*********DEBUGÓÃ************/
	if(cmd[12] == 'd')
	//if(cmd[0] == 'g')
	{
		identify_open(3);
		clear_char(cmd, SIZE);
	}
}
