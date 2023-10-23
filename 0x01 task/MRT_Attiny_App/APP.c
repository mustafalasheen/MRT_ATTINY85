/* 
 * File:   APP.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:16 PM
 */

/* include section */
#include "APP.h"
#include <util/delay.h>


led_t LED_1 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN0,
    .led_Status = GPIO_LOW
};

led_t LED_2 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN1,
    .led_Status = GPIO_LOW
};
led_t LED_3 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN2,
    .led_Status = GPIO_LOW
};
led_t LED_4 = {
    .port_name = PORTB_INDEX ,
    .pin = GPIO_PIN3,
    .led_Status = GPIO_LOW
};


button_t btn_pullup = {
    .button_pin.pin = GPIO_PIN4,
    .button_pin.port = PORTB_INDEX,
    .button_pin.direction = GPIO_DIRECTION_INPUT, 
    .button_pin.logic = GPIO_LOW,
    .button_state= BUTTON_RELEASED,
    .button_coniction= BUTTON_ACTIV_HIGH,
};

button_t btn_pulldown = {
    .button_pin.pin = GPIO_PIN0,
    .button_pin.port = PORTB_INDEX,
    .button_pin.direction = GPIO_DIRECTION_INPUT, 
    .button_pin.logic = GPIO_HIGH,
    .button_state= BUTTON_RELEASED,
    .button_coniction= BUTTON_ACTIV_LOW,
};


relay_t relay_1 ={
    
    .relay_port = PORTB_INDEX, 
    .relay_pin = GPIO_PIN0,
     .relay_status = RELAY_OFF_STATUS
};
relay_t relay_2 ={
    
    .relay_port = PORTB_INDEX, 
    .relay_pin = GPIO_PIN1,
     .relay_status = RELAY_OFF_STATUS
};
 
dc_motor_t dc_motor_1 = {
    .dc_motor[0].pin =GPIO_PIN0 ,
    .dc_motor[0].port = PORTB_INDEX,
    .dc_motor[0].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor[0].direction = GPIO_DIRECTION_OUTPUT,
    .dc_motor[1].pin =GPIO_PIN1 ,
    .dc_motor[1].port = PORTB_INDEX,
    .dc_motor[1].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor[1].direction = GPIO_DIRECTION_OUTPUT,
};
dc_motor_t dc_motor_2 = {
    .dc_motor[0].pin =GPIO_PIN2 ,
    .dc_motor[0].port = PORTB_INDEX,
    .dc_motor[0].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor[0].direction = GPIO_DIRECTION_OUTPUT,
    .dc_motor[1].pin =GPIO_PIN3 ,
    .dc_motor[1].port = PORTB_INDEX,
    .dc_motor[1].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor[1].direction = GPIO_DIRECTION_OUTPUT,
};

      /* Global Variables:*/

          Std_ReturnType ret = E_OK ; 

 
     
    /* main function */
    int main(){

     Std_ReturnType ret = E_OK ; 
 
    application_initilaized();
      
       while(1){    
                ret = dc_motor_move_right(&dc_motor_1);
                ret = dc_motor_move_right(&dc_motor_2);
                     _delay_ms(5500);
                ret = dc_motor_move_left(&dc_motor_1);
                ret = dc_motor_move_left(&dc_motor_2);
                     _delay_ms(5500);
                ret = dc_motor_stop(&dc_motor_1);     
                ret = dc_motor_stop(&dc_motor_2);  
                     _delay_ms(5500);
                ret = dc_motor_move_right(&dc_motor_1);
                ret = dc_motor_move_left(&dc_motor_2);
                     _delay_ms(5500);
                ret = dc_motor_move_right(&dc_motor_2);
                ret = dc_motor_move_left(&dc_motor_1);

     
        }
        
        

         return (EXIT_SUCCESS);
        
    }
        void application_initilaized(void){
              /* "LEDs Initializations"

             ret = gpio_pin_intialize(&LED_1);
             ret = gpio_pin_intialize(&LED_2);
             ret = gpio_pin_intialize(&LED_3);
             ret = gpio_pin_intialize(&LED_4);
           
               * */
            /* "PUSH_BUTTONs Initializations"
     ret=button_initialize(&btn_pullup);
     ret=button_initialize(&btn_pulldown);
    
    */
    /* "RELAY Initializations"
    ret=relay_initialize(&relay_1);
    ret=relay_initialize(&relay_2);

     */
    
    ret=dc_motor_initialize(&dc_motor_1);
    ret=dc_motor_initialize(&dc_motor_2);
    
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
        
        
        
    