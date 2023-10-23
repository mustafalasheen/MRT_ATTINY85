/* 
 * File:   mcal_interrupt_manger.h
 * Author: OMEN
 *
 * Created on October 22, 2023, 4:28 PM
 */

#ifndef MCAL_INTERRUPT_MANGER_H
#define	MCAL_INTERRUPT_MANGER_H


 
#include "mcal_interrupt_config.h"

/*  Section: Macro Declarations  */

#define PIN0_Logic			READ_BIT(PINB, PINB0)
#define PIN1_Logic			READ_BIT(PINB, PINB1)
#define PIN2_Logic			READ_BIT(PINB, PINB2)
#define PIN3_Logic			READ_BIT(PINB, PINB3)
#define PIN4_Logic			READ_BIT(PINB, PINB4)
#define PIN5_Logic			READ_BIT(PINB, PINB5)
/*  Section: Macro Functions Declarations  */

/*  Section: Data Type Declarations  */

/*  Section: Software Interfaces Declarations  */
void INT0_ISR(void);

void PCINT0_ISR(uint8 PCINT0_Source);
void PCINT1_ISR(uint8 PCINT1_Source);
void PCINT2_ISR(uint8 PCINT2_Source);
void PCINT3_ISR(uint8 PCINT3_Source);
void PCINT4_ISR(uint8 PCINT4_Source);
void PCINT5_ISR(uint8 PCINT5_Source);


#endif	/* MCAL_INTERRUPT_MANGER_H */

