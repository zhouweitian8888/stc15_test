/*----------------------------------------------------------   
 * 项目名称:

     串口通信驱动程序

 * 功能描述:

     1、串口初始化  
	 2、查询法接收一个字节 
	 3、串口发送一个字节
	 4、串口发送一个字符串 

 * 版权信息:

     (c) 飞翼电子, 2012.

 * 历史版本:
     2012-06-30:
       - 初始版本 V1.0.0;

 * 配置说明:
     MCU:             STC15W408AS
     开发板:       	  STC15W408AS开发板
     晶振:      	  内部时钟：11.0592MHz
     扩展模块:  	  -
     软件:            Keil.C51.V9.01

 * 备注:
     - 将开发板的串口与电脑串口连接

----------------------------------------------------------*/   
#ifndef _USART_H_
#define _USART_H_

extern unsigned char *pchar;

void InitSerialPort(void);					//串口初始化设置
unsigned char ReceiveByte(void);			//串口查询法接收一个字节
void SendByte(unsigned char sbyte);			//串口发送一个字节
void SendString(unsigned char *pstr);		//串口发送一个字符串

#endif

//-------------------------THE END------------------------*/   

