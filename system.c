/***************************************************************************
  FileName:        system.c
  Processor:       ATSAML10E16
  IDE :            SEGGER ver 4.16
  Created by:      http://strefapic.blogspot.com
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* system configuration                                                    */
/*-------------------------------------------------------------------------*/

#include <saml10.h>
#include "system.h"
#include "clock.h"
#include "pin_manager.h"
#include "spi.h"

void MySystemInit(void)
{
    PIN_Manager_init();
    Clock_Sercom_init();//the sequence is important, first Clock_Sercom() next SPI_Sercom_init()
    SPI_Sercom0_init();
    
}