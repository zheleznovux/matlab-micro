#include <ADuC812.h>
#include <stdio.h>	    

// ������������ ������ � ������� ����
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
// ------- ������������� UART -----------
TH1 = 0xFD; // �������� 9600 ���/�
TMOD = 0x20;// ������ 1 � ������ autoreload
TCON = 0x40;// ������ ������� 1
SCON = 0x50;// 8 bit UART, ���������� ������
PCON &= 0x7F;// ���������� �������� ��������
TI = 1; // ��������� ��� ������ �
RI = 1;// stdio.h
EA = 0;// ���������� ����������
do{
	printf ("Hello World\n");// ����� �� �������� "Hello World"
	svet = svet<<1;// ����� �����
	if(svet==0) svet=1;
	WriteMax(0x7,svet);//����� �� ���������
	for(pause=0;pause<=32000;pause++);// ��������
} while(1);
}