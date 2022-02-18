#include <STC15Fxxxx.h>
#include <delay.h>
#include <USART.h>
#include <stdio.h>
#include <stdlib.h>

#define u8 unsigned char


int a;
u8 *a_char;

char* int2String(int num, char *str)
{
    sprintf(str,"%d",num);

    return str;
}

void main()
{
    InitSerialPort(); 
  
    for (a=0;a<100;a++)
    {
        P10=0;
        delay_ms(200);
        delay_ms(200);
        delay_ms(200);
        P10=1;
        delay_ms(200);

        int2String(a, a_char);

        SendByte('\t');
		SendString("AD_Value = ");
		SendString(a_char);
		SendByte('\n');
    }
 

    
}

