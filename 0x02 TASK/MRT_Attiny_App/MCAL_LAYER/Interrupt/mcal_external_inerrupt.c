/* 
 * File:   mcal_external_interrupt.c
 * Author: OMEN
 *
 * Created on October 22, 2023, 4:30 PM
 */


#include "mcal_external_interrupt.h"


/*pointer to function to hold the callback for INTx */
static void (* INT0_InterruptHandler)(void) = NULL;

static void (* PCINT0_InterruptHandler_High)(void) = NULL;
static void (* PCINT0_InterruptHandler_Low)(void) = NULL;
static void (* PCINT1_InterruptHandler_High)(void) = NULL;
static void (* PCINT1_InterruptHandler_Low)(void) = NULL;
static void (* PCINT2_InterruptHandler_High)(void) = NULL;
static void (* PCINT2_InterruptHandler_Low)(void) = NULL;
static void (* PCINT3_InterruptHandler_High)(void) = NULL;
static void (* PCINT3_InterruptHandler_Low)(void) = NULL;
static void (* PCINT4_InterruptHandler_High)(void) = NULL;
static void (* PCINT4_InterruptHandler_Low)(void) = NULL;

static Std_ReturnType Interrupt_INTx_SetInterruptHandler(const interrupt_INTx_t *int_obj);
static Std_ReturnType Interrupt_INTx_Sense_Init(const interrupt_INTx_t *int_obj);

static Std_ReturnType Interrupt_PCINTx_SetInterruptHandler(const interrupt_PCINT_t *int_obj);


/*
 * @brief  
 * @param int_obj
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType Interrupt_INTx_Init(const interrupt_INTx_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		/* Disable the External interrupt */
	       EXT_INT0_INTERRUPTDISABLE ();
		/* Clear Interrupt Flag : External interrupt did not occur */
		 EXT_INT0_INTERRUPTFLAGCLEAR ();
		/* Configure External interrupt sense */
		ret = Interrupt_INTx_Sense_Init(int_obj);
		/* Configure External interrupt I/O pin */
		ret |= gpio_pin_direction_intialize(&(int_obj->mcu_pin));
		/* Configure Default Interrupt CallBack */
		ret |= Interrupt_INTx_SetInterruptHandler(int_obj);
		/* Enable the External interrupt */
		INTERRUPT_GLOBALINTERRUPTENABLE();
		EXT_INT0_INTERRUPTENABLE();	
	}
	return ret;
}


/*
 * @brief  
 * @param int_obj
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType Interrupt_INTx_Deinit(const interrupt_INTx_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		EXT_INT0_INTERRUPTDISABLE() ;
	}
	return ret;
}


void INT0_ISR (void){
    /* THE INT0 EXTERNAL INTERRUPT OCCURED (MUST BE CLEARED IN SOFTWARE)*/
    EXT_INT0_INTERRUPTFLAGCLEAR();
    /* code */
    
    /* callback function gets called every time this ISR executes */
    if (INT0_InterruptHandler){INT0_InterruptHandler();}
}



static Std_ReturnType Interrupt_INTx_Sense_Init(const interrupt_INTx_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj){
		ret = E_NOT_OK;
	}
	else{
		switch(int_obj->sense){
			case INTERRUPT_FALLING_EDGE :
			EXT_INT0_FALLINGGEDGESET();
			break;
			case INTERRUPT_RISING_EDGE :
			EXT_INT0_RISINGEDGESET();
			break;
			case INTERRUPT_LOW_LEVEL :
			EXT_INT0_LowLevelSet();
			break;
			case INTERRUPT_ANY_CHANGE :
			EXT_INT0_AnyChangeSet();
			break;
			default : ret = E_NOT_OK;
		}
	}
	return ret;
}




static Std_ReturnType Interrupt_INTx_SetInterruptHandler(const interrupt_INTx_t *int_obj){
	Std_ReturnType ret = E_OK;
	if( NULL == int_obj){
		ret = E_NOT_OK;
	}
	else{
		INT0_InterruptHandler = (int_obj->EXT_InterruptHandler);
	}
	return ret;
}


/*----------------------------------------------------------*/

Std_ReturnType Interrupt_PCINTx_Init(const interrupt_PCINT_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		/* PCINT Disable */
		EXT_PCINTx_INTERRUPTDISABLE();
		/* PCINT Clear Flag */
		EXT_PCINTx_INTERRUPTFLAGCLEAR();
		INTERRUPT_GLOBALINTERRUPTENABLE();
		/* Pin initialization */
		ret |= gpio_pin_direction_intialize(&(int_obj->mcu_pin));
		/* Set the interrupt handler */
		ret |=  Interrupt_PCINTx_SetInterruptHandler(int_obj);
		/* PCINT Enable */
		ret |= Interrupt_PCINTx_Enable(int_obj);
	}
	return ret;
}

Std_ReturnType Interrupt_PCINTx_Deinit(const interrupt_PCINT_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		ret = Interrupt_PCINTx_Disable(int_obj);
	}
	return ret;
}

Std_ReturnType Interrupt_PCINTx_Enable(const interrupt_PCINT_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		switch(int_obj->source){
			case INTERRUPT_EXTERNAL_PCINT0 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT0_INTERRUPTENABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT1 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT1_INTERRUPTENABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT2 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT2_INTERRUPTENABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT3 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT3_INTERRUPTENABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT4 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT4_INTERRUPTENABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT5 :
				EXT_PCINTx_INTERRUPTENABLE();
				EXT_PCINT5_INTERRUPTENABLE();
				break;
			default : ret = E_NOT_OK; 
		}
	}
	return ret;
}

Std_ReturnType Interrupt_PCINTx_Disable(const interrupt_PCINT_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj ){
		ret = E_NOT_OK;
	}
	else{
		switch(int_obj->source){
			case INTERRUPT_EXTERNAL_PCINT0 :
				EXT_PCINT0_INTERRUPTDISABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT1 :
				EXT_PCINT1_INTERRUPTDISABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT2 :
				EXT_PCINT2_INTERRUPTDISABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT3 :
				EXT_PCINT3_INTERRUPTDISABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT4 :
				EXT_PCINT4_INTERRUPTDISABLE();
				break;
			case INTERRUPT_EXTERNAL_PCINT5 :
				EXT_PCINT5_INTERRUPTDISABLE();
				break;
			default : ret = E_NOT_OK; 
		}
	}
	return ret;
}

static Std_ReturnType Interrupt_PCINTx_SetInterruptHandler(const interrupt_PCINT_t *int_obj){
	Std_ReturnType ret = E_OK;
	if(NULL == int_obj){
		ret = E_NOT_OK;
	}
	else{
		switch(int_obj->source){
			case INTERRUPT_EXTERNAL_PCINT0 :
			PCINT0_InterruptHandler_High = int_obj->EXT_InterruptHandler_High;
			PCINT0_InterruptHandler_Low = int_obj->EXT_InterruptHandler_Low;
			break;
			case INTERRUPT_EXTERNAL_PCINT1 :
			PCINT1_InterruptHandler_High = int_obj->EXT_InterruptHandler_High;
			PCINT1_InterruptHandler_Low = int_obj->EXT_InterruptHandler_Low;
			break;
			case INTERRUPT_EXTERNAL_PCINT2 :
			PCINT2_InterruptHandler_High = int_obj->EXT_InterruptHandler_High;
			PCINT2_InterruptHandler_Low = int_obj->EXT_InterruptHandler_Low;
			break;
			case INTERRUPT_EXTERNAL_PCINT3 :
			PCINT3_InterruptHandler_High = int_obj->EXT_InterruptHandler_High;
			PCINT3_InterruptHandler_Low = int_obj->EXT_InterruptHandler_Low;
			break;
			case INTERRUPT_EXTERNAL_PCINT4 :
			PCINT4_InterruptHandler_High = int_obj->EXT_InterruptHandler_High;
			PCINT4_InterruptHandler_Low = int_obj->EXT_InterruptHandler_Low;
			break;
			
			default : ret = E_NOT_OK;
		}
	}
	return ret;
}


void PCINT0_ISR(uint8 PCINT0_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
		   
	if(PCINT0_source == 1){
		if(PCINT0_InterruptHandler_High){PCINT0_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT0_source == 0){
		if(PCINT0_InterruptHandler_Low){PCINT0_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}

void PCINT1_ISR(uint8 PCINT1_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
	
	if(PCINT1_source == 1){
		if(PCINT1_InterruptHandler_High){PCINT1_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT1_source == 0){
		if(PCINT1_InterruptHandler_Low){PCINT1_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}

void PCINT2_ISR(uint8 PCINT2_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
	
	if(PCINT2_source == 1){
		if(PCINT2_InterruptHandler_High){PCINT2_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT2_source == 0){
		if(PCINT2_InterruptHandler_Low){PCINT2_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}

void PCINT3_ISR(uint8 PCINT3_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
	
	if(PCINT3_source == 1){
		if(PCINT3_InterruptHandler_High){PCINT3_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT3_source == 0){
		if(PCINT3_InterruptHandler_Low){PCINT3_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}

void PCINT4_ISR(uint8 PCINT4_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
		
	if(PCINT4_source == 1){
		if(PCINT4_InterruptHandler_High){PCINT4_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT4_source == 0){
		if(PCINT2_InterruptHandler_Low){PCINT4_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}


void PCINT5_ISR(uint8 PCINT5_source){
	EXT_PCINTx_INTERRUPTFLAGCLEAR();
	/* Code Section */
		
	if(PCINT5_source == 1){
		if(PCINT4_InterruptHandler_High){PCINT4_InterruptHandler_High();}
		else{/* Nothing*/}
	}
	else if(PCINT5_source == 0){
		if(PCINT2_InterruptHandler_Low){PCINT4_InterruptHandler_Low();}
		else{/* Nothing*/}
	}
	else{/* Nothing*/}
}