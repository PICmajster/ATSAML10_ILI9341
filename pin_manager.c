/***************************************************************************
  FileName:        pin_manager.c
  Processor:       ATSAML10E16
  IDE :            SEGGER ver 4.16
  Created by:      http://strefapic.blogspot.com
 ***************************************************************************/
/*-------------------------------------------------------------------------*/
/* PORT (pin) configuration                                                */
/*-------------------------------------------------------------------------*/
#include <saml10.h>
#include "pin_manager.h"

void PIN_Manager_init(void){
/****************************************************************************
* Setting direction to Output 
****************************************************************************/
PORT->Group[0].DIRSET.reg = PORT_PA06 | PORT_PA07;//Set pin PA06,PA07 direction to Output
PORT->Group[0].DIRSET.reg = PORT_PA27;//Set pin PA27 direction to Output
/****************************************************************************
* Setting direction to Input 
****************************************************************************/

/****************************************************************************
* Setting the Pull Up
****************************************************************************/

/****************************************************************************
* Setting PINMUX  
****************************************************************************/
/*PORTA --> PINCFG24 --> PMUXEN --> 1 / connect PA24 to the module PMUX*/
PORT->Group[0].PINCFG[24].bit.PMUXEN = 1;
/*PORTA --> PINCFG25 --> PMUXEN --> 1 / connect PA25 to the module PMUX*/
PORT->Group[0].PINCFG[25].bit.PMUXEN = 1;

/****************************************************************************
* Setting connect PINMUX to Peripheral  
****************************************************************************/
/*PORTA --> PMUX12 --> PMUXO --> 0x2 / connect PA24 (even pin 2*n) to the module SERCOM0 (put C)*/
/*Pin  24 = 2*n stąd n = 24/2 = 12 */
PORT->Group[0].PMUX[12].bit.PMUXO = 0x2;
/*PORTA --> PMUX1 --> PMUXE --> 0x2 / connect PA25 (odd pin 2*n+1) to the module SERCOM0 (put C)*/
/*Pin  25 = 2*n+1 stąd n = (25 - 1)/2 = 12 */
PORT->Group[0].PMUX[12].bit.PMUXE = 0x2;

}
