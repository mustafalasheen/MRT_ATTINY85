/* 
 * File:   mcal_external_interrupt.h
 * Author: OMEN
 *
 * Created on October 22, 2023, 4:30 PM
 */

#ifndef MCAL_EXTERNAL_INTERRUPT_H
#define	MCAL_EXTERNAL_INTERRUPT_H



#include "mcal_interrupt_config.h"

/*  Section: Macro Declarations  */
#if EXTERNAL_INTERRUPT_INTx_FEATURE_ENABLE == INTERRUPT_FEATURE_ENABLE

/* ----------------------FOR INT0------------------------*/
 /* THIS ROTINE CLEARS THE INTERRUPTS ENABLE FOR EXTERNAL INTERRUPT, INT0*/
#define EXT_INT0_INTERRUPTDISABLE()   (CLEAR_BIT(GIMSK,INT0))
 /* THIS ROTINE SET THE INTERRUPTS ENABLE FOR EXTERNAL INTERRUPT, INT0*/
#define EXT_INT0_INTERRUPTENABLE()   (SET_BIT(GIMSK,INT0))
 /* THIS ROTINE CLEAR THE INTERRUPTS FLAG FOR EXTERNAL INTERRUPT, INT0*/
#define EXT_INT0_INTERRUPTFLAGCLEAR()   (CLEAR_BIT(GIFR,INTF0))
 /* THIS ROTINE SET THE EDGE DETECT OF THE EXTERNAL INTERRUPT TO NEGATIVE EDGE, INT0*/
#define EXT_INT0_RISINGEDGESET()      (MCUCR|= 0x03)
 /* THIS ROTINE SET THE EDGE DETECT OF THE EXTERNAL INTERRUPT TO POSITIVE EDGE, INT0*/
#define EXT_INT0_FALLINGGEDGESET()   (MCUCR|= 0x02)
/* This macro sets the edge detect of INT0 to low level*/
#define EXT_INT0_LowLevelSet()                  (MCUCR |= 0x00)
/* This macro sets the edge detect of INT0 to any change*/
#define EXT_INT0_AnyChangeSet()                 (MCUCR |= 0x01)

#endif


#if EXTERNAL_INTERRUPT_OnChnge_FEATURE_ENABLE == INTERRUPT_FEATURE_ENABLE

/*-----------------------PCINT0------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT0*/
#define EXT_PCINT0_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT0))
/* This routine set the interrupt enable for external interrupt, PCINT0*/
#define EXT_PCINT0_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT0))
/*-----------------------PCINT1------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT1*/
#define EXT_PCINT1_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT1))
/* This routine set the interrupt enable for external interrupt, PCINT1*/
#define EXT_PCINT1_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT1))
/*-----------------------PCINT2------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT2*/
#define EXT_PCINT2_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT2))
/* This routine set the interrupt enable for external interrupt, PCINT2*/
#define EXT_PCINT2_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT2))
/*-----------------------PCINT3------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT3*/
#define EXT_PCINT3_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT3))
/* This routine set the interrupt enable for external interrupt, PCINT3*/
#define EXT_PCINT3_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT3))
/*-----------------------PCINT4------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT4*/
#define EXT_PCINT4_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT4))
/* This routine set the interrupt enable for external interrupt, PCINT4*/
#define EXT_PCINT4_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT4))
/*-----------------------PCINT5------------------*/
/* This routine clears the interrupt enable for external interrupt, PCINT5*/
#define EXT_PCINT5_INTERRUPTDISABLE()    (SET_BIT(PCMSK,PCINT5))
/* This routine set the interrupt enable for external interrupt, PCINT5*/
#define EXT_PCINT5_INTERRUPTENABLE()   (CLEAR_BIT(PCMSK,PCINT5))


/*----GLOBAL PCINTx FUNCTIONS--------*/

/* This routine clears the interrupt enable for external interrupt, PCINTx*/
#define EXT_PCINTx_INTERRUPTDISABLE()    (SET_BIT(GIMSK,PCIE))
/* This routine set the interrupt enable for external interrupt, PCINTx*/
#define EXT_PCINTx_INTERRUPTENABLE()   (CLEAR_BIT(GIMSK,PCIE))
/* This routine CLEar the interrupt flag for external interrupt, PCINTx*/
#define EXT_PCINTx_INTERRUPTFLAGCLEAR()  (CLEAR_BIT(GIFR,PCIF))


#endif
/*  Section: Macro Functions Declarations  */

/*  Section: Data Type Declarations  */
typedef enum{
	INTERRUPT_FALLING_EDGE = 0,
	INTERRUPT_RISING_EDGE,
	INTERRUPT_LOW_LEVEL,
	INTERRUPT_ANY_CHANGE
}interrupt_INTx_sense;

typedef enum{
	INTERRUPT_EXTERNAL_INT0 = 0,
}interrupt_INTx_src;

typedef enum{
	INTERRUPT_EXTERNAL_PCINT0 = 0,
	INTERRUPT_EXTERNAL_PCINT1,
	INTERRUPT_EXTERNAL_PCINT2,
	INTERRUPT_EXTERNAL_PCINT3,
	INTERRUPT_EXTERNAL_PCINT4,
	INTERRUPT_EXTERNAL_PCINT5
}interrupt_PCINT_src;

typedef struct {
	void(*EXT_InterruptHandler)(void);
	interrupt_INTx_src source;
	pin_config_t mcu_pin;
	interrupt_INTx_sense sense;
}interrupt_INTx_t;

typedef struct{
	void (*EXT_InterruptHandler_High)(void);
	void (*EXT_InterruptHandler_Low)(void);
	pin_config_t mcu_pin;
	interrupt_PCINT_src source ;
}interrupt_PCINT_t;


/*----------Section: Software Interfaces Declarations--------------*/
/*
 * @brief  
 * @param int_obj
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType Interrupt_INTx_Init(const interrupt_INTx_t *int_obj);
/*
 * @brief  
 * @param int_obj
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType Interrupt_INTx_DeInit(const interrupt_INTx_t *int_obj);


Std_ReturnType Interrupt_PCINTx_Init(const interrupt_PCINT_t *int_obj);
Std_ReturnType Interrupt_PCINTx_Deinit(const interrupt_PCINT_t *int_obj);
Std_ReturnType Interrupt_PCINTx_Enable(const interrupt_PCINT_t *int_obj);
Std_ReturnType Interrupt_PCINTx_Disable(const interrupt_PCINT_t *int_obj);



#endif	/* MCAL_EXTERNAL_INTERRUPT_H */


