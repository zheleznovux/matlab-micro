#include <ADuC812.h>
#include <stdio.h>	    

// Подпрограмма работы с портами ПЛИС
void WriteMax(unsigned char xdata *regnum, unsigned char val)
{
#define MAXBASE 0x8;
unsigned char oldDPP=DPP;

DPP=MAXBASE;
*regnum=val;
DPP=oldDPP;
}

void main(void)
{
unsigned char svet = 1;
unsigned int pause;
// ------- Инициализация UART -----------
TH1 = 0xFD; // Скорость 9600 бит/с
TMOD = 0x20;// Таймер 1 в режиме autoreload
TCON = 0x40;// Запуск таймера 1
SCON = 0x50;// 8 bit UART, разрешение приема
PCON &= 0x7F;// Отключение удвоения скорости
TI = 1; // Требуется для работы с
RI = 1;// stdio.h
EA = 0;// Запрещение прерываний
do{
	printf ("Hello World\n");// вывод на терминал "Hello World"
	svet = svet<<1;// сдвиг влево
	if(svet==0) svet=1;
	WriteMax(0x7,svet);//вывод на светодиды
	for(pause=0;pause<=32000;pause++);// задержка
} while(1);
}