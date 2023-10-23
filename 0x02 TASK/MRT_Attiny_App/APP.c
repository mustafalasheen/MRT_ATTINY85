/* 
 * File:   APP.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:16 PM
 */

/* include section */
#include "APP.h"
#include <util/delay.h>

void inter1_high (void);
void inter1_low (void);
void inter_2 (void);



interrupt_PCINT_t inter1 = {
  .EXT_InterruptHandler_High = inter1_high,
  .EXT_InterruptHandler_Low = inter1_low,
  .mcu_pin.pin = GPIO_PIN2,
  .mcu_pin.port = PORTB_INDEX,
  .mcu_pin.direction  = GPIO_DIRECTION_INPUT,
  .source = INTERRUPT_EXTERNAL_PCINT2,
 
};

interrupt_INTx_t inter2 ={
 .EXT_InterruptHandler = inter_2,
  .mcu_pin.pin = GPIO_PIN0,
  .mcu_pin.port = PORTB_INDEX,
  .mcu_pin.direction  = GPIO_DIRECTION_INPUT,
  .source = INTERRUPT_EXTERNAL_INT0, 
  .sense = INTERRUPT_RISING_EDGE
   
};
led_t LED_2 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN3,
    .led_Status = GPIO_HIGH
    
};
led_t LED_3 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN4,
    .led_Status = GPIO_HIGH
};

void inter1_high (void){
   
      led_turn_on(&LED_2);
}
void inter1_low (void){
    led_turn_on(&LED_3);

}
void inter_2 (void){
    led_turn_toggle(&LED_2);
    led_turn_toggle(&LED_3);

}
        
      /* Global Variables:*/
          Std_ReturnType ret = E_NOT_OK ; 
    
    /* main function */
    int main(){ 
 
    application_initilaized();
      
       while(1){               
     
    }        
        
         return (EXIT_SUCCESS);
        
    }
        void application_initilaized(void){
            led_initialize(&LED_2);
            led_initialize(&LED_3);                           
            Interrupt_PCINTx_Init(&inter1);
            Interrupt_INTx_Init(&inter2); 
        }

        
   void debouncing(void){
//       if(BUTTON_PRESSED == btn_pullup_status){
//               btn_pullup_valid++ ;
//               if(btn_pullup_valid > 500){
//                   btn_pullup_valid_status = BUTTON_PRESSED;
//               }
//           }
//           else{
//               btn_pullup_valid = 0;
//                btn_pullup_valid_status = BUTTON_RELEASED;
// 
//           }
 }      
       

        
    