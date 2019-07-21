/***************************************************************************
  FileName:        spi.h
  Processor:       ATSAML10E16
  IDE :            SEGGER ver 4.16
  Created by:      http://strefapic.blogspot.com
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* SPI configuration                                                       */
/*-------------------------------------------------------------------------*/
//      
//  //     Signal LCD ---> MCU ATSAML21G18B
//     CS     (Chip Select)     --> Ground
//     RESET                    --> PA30
//     DC/RS  (Command / Data)  --> PA31
//     MOSI   (Serial Data)     --> PA24
//     SCK    (Serial Clock)    --> PA25
//     LED                      --> +3.3V
//
//***************************************************************************

void SPI_Sercom0_init(void);
void SPI_Sercom0_send(uint8_t data);