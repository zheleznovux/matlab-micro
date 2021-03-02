;---------------------------------------------
; ADuC812.inc
; ADuC812 processor declarations
; reference tech note - uC002
; "Writing an ADuC812 Application in C"
; available at www.analog.com/microconverter
; rev 1.4 - 14 April 1998
;---------------------------------------------
$SAVE
$NOLIST
;
; BYTE Register
P0       DATA    80H
SP       DATA    81H
DPL      DATA    82H
DPH      DATA    83H
DPP      DATA    84H
PCON     DATA    87H
TCON     DATA    88H
TMOD     DATA    89H
TL0      DATA    8AH
TL1      DATA    8BH
TH0      DATA    8CH
TH1      DATA    8DH
P1       DATA    90H
SCON     DATA    98H
SBUF     DATA    99H
I2CDAT   DATA    9AH
I2CADD   DATA    9BH
P2       DATA    0A0H
IE       DATA    0A8H
IE2      DATA    0A9H
P3       DATA    0B0H
IP       DATA    0B8H
ECON     DATA    0B9H
EDATA1   DATA    0BCH
EDATA2   DATA    0BDH
EDATA3   DATA    0BEH
EDATA4   DATA    0BFH
WDCON    DATA    0C0H
EADRL    DATA    0C6H
T2CON    DATA    0C8H
RCAP2L   DATA    0CAH
RCAP2H   DATA    0CBH
TL2      DATA    0CCH
TH2      DATA    0CDH
PSW      DATA    0D0H
DMAL     DATA    0D2H
DMAH     DATA    0D3H
DMAP     DATA    0D4H
ADCCON2  DATA    0D8H
ADCDATAL DATA    0D9H
ADCDATAH DATA    0DAH
PSMCON   DATA    0DFH
ACC      DATA    0E0H
I2CCON   DATA    0E8H
ADCCON1  DATA    0EFH
B        DATA    0F0H
ADCOFSL  DATA    0F1H
ADCOFSH  DATA    0F2H
ADCGAINL DATA    0F3H
ADCGAINH DATA    0F4H
ADCCON3  DATA    0F5H
SPIDAT   DATA    0F7H
SPICON   DATA    0F8H
DAC0L    DATA    0F9H
DAC0H    DATA    0FAH
DAC1L    DATA    0FBH
DAC1H    DATA    0FCH
DACCON   DATA    0FDH	

; BIT Registers
; TCON
TF1     BIT     8FH
TR1     BIT     8EH
TF0     BIT     8DH
TR0     BIT     8CH
IE1     BIT     8BH
IT1     BIT     8AH
IE0     BIT     89H
IT0     BIT     88H
; P1
T2EX    BIT     91H
T2      BIT     90H
; SCON
SM0     BIT     9FH
SM1     BIT     9EH
SM2     BIT     9DH
REN     BIT     9CH
TB8     BIT     9BH
RB8     BIT     9AH
TI      BIT     99H
RI      BIT     98H
; IE
EA      BIT     0AFH
EADC    BIT     0AEH
ET2     BIT     0ADH
ES      BIT     0ACH
ET1     BIT     0ABH
EX1     BIT     0AAH
ET0     BIT     0A9H
EX0     BIT     0A8H
;P3
RD      BIT     0B7H
WR      BIT     0B6H
T1      BIT     0B5H
T0      BIT     0B4H
INT1    BIT     0B3H
INT0    BIT     0B2H
TXD     BIT     0B1H
RXD     BIT     0B0H
; IP
PSI     BIT     0BFH
PADC    BIT     0BEH
PT2     BIT     0BDH
PS      BIT     0BCH
PT1     BIT     0BBH
PX1     BIT     0BAH
PT0     BIT     0B9H
PX0     BIT     0B8H
; WDCON
PRE2    BIT     0C7H
PRE1    BIT     0C6H
PRE0    BIT     0C5H
WDR1    BIT     0C3H
WDR2    BIT     0C2H
WDS     BIT     0C1H
WDE     BIT     0C0H
; T2CON
TF2     BIT     0CFH
EXF2    BIT     0CEH
RCLK    BIT     0CDH
TCLK    BIT     0CCH
XEN     BIT     0CBH
TR2     BIT     0CAH
CNT2    BIT     0C9H
CAP2    BIT     0C8H
; PSW
CY      BIT     0D7H
AC      BIT     0D6H
F0      BIT     0D5H
RS1     BIT     0D4H
RS0     BIT     0D3H
OV      BIT     0D2H
F1	BIT	0D1H
P       BIT     0D0H
; ADCCON2
ADCI    BIT     0DFH
DMA     BIT     0DEH
CCONV   BIT     0DDH
SCONV   BIT     0DCH
CS3     BIT     0DBH
CS2     BIT     0DAH
CS1     BIT     0D9H
CS0     BIT     0D8H
; I2CCON
MDO     BIT     0EFH
MDE     BIT     0EEH
MCO     BIT     0EDH
MDI     BIT     0ECH
I2CM    BIT     0EBH
I2CRS   BIT     0EAH
I2CTX   BIT     0E9H
I2CI    BIT     0E8H
; SPICON
ISPI    BIT     0FFH
WCOL    BIT     0FEH
SPE     BIT     0FDH
SPIM    BIT     0FCH
CPOL    BIT     0FBH
CPHA    BIT     0FAH
SPR1    BIT     0F9H
SPR0    BIT     0F8H
$RESTORE
