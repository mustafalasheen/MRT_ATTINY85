/* 
 * File:   mcal_interrupt_manger.c 
 * Author: OMEN
 *
 * Created on October 22, 2023, 4:28 PM
 */



#include"mcal_interrupt_manger.h"
volatile uint8 PCINT0_flag = 1, PCINT1_flag = 1, PCINT2_flag = 1, PCINT3_flag = 1, PCINT4_flag = 1, PCINT5_flag = 1;

ISR_INT(INT0_vect){
	INT0_ISR();
}


ISR(PCINT0_vect){
	if((PIN0_Logic == GPIO_HIGH) && (PCINT0_flag == 1)){
		PCINT0_flag = 0 ;
		PCINT0_ISR(1);
	}
	else{/* Nothing */}
	if((PIN0_Logic== GPIO_LOW) && (PCINT0_flag == 0)){
		PCINT0_flag = 1 ;
		PCINT0_ISR(0);
	}
	else{/* Nothing */}
		
	if((PIN1_Logic == GPIO_HIGH) && (PCINT1_flag == 1)){
		PCINT1_flag =0;
		PCINT1_ISR(1);
	}
	else{/* Nothing */}
	if((PIN1_Logic == GPIO_LOW) && (PCINT1_flag == 0)){
		PCINT1_flag = 1 ;
		PCINT1_ISR(0);
	}
	else{/* Nothing */}
		
	if((PIN2_Logic == GPIO_HIGH) && (PCINT2_flag == 1)){
		PCINT2_flag = 0 ;
		PCINT2_ISR(1);
	}
	else{/* Nothing */}
	if((PIN2_Logic == GPIO_LOW) && (PCINT2_flag == 0)){
		PCINT2_flag = 1 ;
		PCINT2_ISR(0);
	}
	else{/* Nothing */}	
	
	
	if((PIN3_Logic == GPIO_HIGH) && (PCINT3_flag == 1)){
		PCINT3_flag = 0 ;
		PCINT3_ISR(1);
	}
	else{/* Nothing */}
	if((PIN3_Logic == GPIO_LOW) && (PCINT3_flag == 0)){
		PCINT3_flag = 1 ;
		PCINT3_ISR(0);
	}
	else{/* Nothing */}
		
	if((PIN4_Logic == GPIO_HIGH) && (PCINT4_flag == 1)){
		PCINT4_flag = 0 ;
		PCINT4_ISR(1);
	}
	else{/* Nothing */}
	if((PIN4_Logic == GPIO_LOW) && (PCINT4_flag == 0)){
		PCINT4_flag = 1 ;
		PCINT4_ISR(0);
	}
	else{/* Nothing */}
}


