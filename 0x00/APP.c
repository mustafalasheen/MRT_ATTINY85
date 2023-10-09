/* 
 * File:   APP.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:16 PM
 */

/* include section */
#include "APP.h"


pin_config_t led_1 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN0,
 .direction = GPIO_DIRECTION_OUTPUT,
 .logic = GPIO_LOW
};

pin_config_t led_2 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN1,
 .direction = GPIO_DIRECTION_OUTPUT,
 .logic = GPIO_LOW
};

pin_config_t led_3 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN2,
 .direction = GPIO_DIRECTION_OUTPUT,
 .logic = GPIO_LOW
};
pin_config_t led_4 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN2,
 .direction = GPIO_DIRECTION_OUTPUT,
 .logic = GPIO_LOW
};
pin_config_t led_5 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN2,
 .direction = GPIO_DIRECTION_OUTPUT,
 .logic = GPIO_LOW
};

pin_config_t btn_1 ={
 .port = PORTB_INDEX,
 .pin = GPIO_PIN0,
 .direction = GPIO_DIRECTION_INPUT,
 .logic = GPIO_LOW
};

      /* Global Variables:*/

 Std_ReturnType ret = E_NOT_OK;
 direction_t ler_1_st ;
 logic_t btn_status;
 
 uint8 portb_dir_stu; 
 uint8 portb_logic_stu;
 
     
    /* main function */
    int main(){

        application_initilaized();
        
        
         while(1){
       
       ret=gpio_pin_toggle_logic(&led_1);
       ret=gpio_pin_toggle_logic(&led_2);
       ret=gpio_pin_toggle_logic(&led_3);
       ret=gpio_pin_toggle_logic(&led_4);
       ret=gpio_pin_toggle_logic(&led_5);

         }
        
        

         return (EXIT_SUCCESS);
        
    }
        void application_initilaized(void){
          
             ret = gpio_pin_intialize(&led_1);
             ret = gpio_pin_intialize(&led_2);
             ret = gpio_pin_intialize(&led_3);
             ret = gpio_pin_intialize(&led_4);
             ret = gpio_pin_intialize(&led_5);
        }

        
        
        
        
        
    