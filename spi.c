/***************************************************************************
  FileName:        spi.c
  Processor:       ATSAML10E16
  IDE :            SEGGER ver 4.16
  Created by:      http://strefapic.blogspot.com
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* SPI configuration + SPI send function                                   */
/*-------------------------------------------------------------------------*/
//      
//    Reqired SPI connections :
//     - SCK   - PA25 SERCOM0 PAD[3]
//     - MISO  - not used 
//     - MOSI  - PA24 SERCOM0 PAD[2]
//     - CS    - not used
//     
//***************************************************************************
#include <saml10.h>
#include "spi.h"

/*SPI on SERCOM0*/
void SPI_Sercom0_init(void){
/*CTRLA --> ENABLE --> 0 / switch off SPI */
SERCOM0->SPI.CTRLA.bit.ENABLE = 0;
/*wait for synchro*/
while(SERCOM0->SPI.SYNCBUSY.bit.ENABLE == 1);
/*CTRLA --> MODE --> 0x3  / switch on SPI MASTER for SERCOM*/
SERCOM0->SPI.CTRLA.bit.MODE = 0x3;
/*CTRLB --> RXENABLE --> 0 / switch off RX, not use MISO*/
SERCOM0->SPI.CTRLB.bit.RXEN = 0;
/*wait for synchro*/
while(SERCOM0->SPI.SYNCBUSY.bit.CTRLB);
/*CTRLA --> DOPO -->  0x1 / in mode MASTER allocate PAD[2] to the MOSI and PAD[3] to the CLK*/
SERCOM0->SPI.CTRLA.bit.DOPO = 0x1;
/*BAUD --> BAUD --> 0 / set Baud Generator (0-255)*/
SERCOM0->SPI.BAUD.reg = 0x0; //for Baud = 0 --> f max = F Core / 2
/*Interrupt flag TXC on*/
SERCOM0->SPI.INTENSET.bit.TXC = 1;
/*CTRLA --> ENABLE --> 1 / switch on SPI*/
SERCOM0->SPI.CTRLA.bit.ENABLE = 1;
/*wait for synchro*/
while(SERCOM0->SPI.SYNCBUSY.bit.ENABLE == 1);
/*End  SPI configuration*/
}

void SPI_Sercom0_send(uint8_t data)
{  
    SERCOM0->SPI.DATA.reg = data; //send data
     /*wait for transfer complete*/
    while(!SERCOM0->SPI.INTFLAG.bit.TXC);
       
}