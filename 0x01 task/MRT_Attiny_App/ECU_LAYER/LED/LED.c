/* 
 * File:   LED.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:07 PM
 */



/* include section */
#include "LED.h"

/*
 * @brief  initialize the assigned pin to the output and turn the led off
 * @param led pointer to the configuration  @ref let_t 
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType led_initialize(const led_t *led){
    Std_ReturnType ret = E_OK;
   
    if(NULL == led ){
        ret = E_NOT_OK;
    }
    else{
         pin_config_t pin_obj = {.port = led->port_name,
                            .pin = led->pin,
                            .direction = GPIO_DIRECTION_OUTPUT,
                            .logic = led->led_Status};
        gpio_pin_intialize(&pin_obj);
    }
    return ret;
}
/*
 * @brief  turn the led off @ref 
 * @param led pointer to the configuration  @ref let_t 
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType led_turn_off (const led_t *led){
      Std_ReturnType ret = E_OK;
    if(NULL == led ){
        ret = E_NOT_OK;
    }
    else{
         pin_config_t pin_obj = {.port = led->port_name,
                            .pin = led->pin,
                            .direction = GPIO_DIRECTION_OUTPUT,
                            .logic = led->led_Status};
         gpio_pin_write_logic(&pin_obj, GPIO_LOW);
   
   }
    return ret; 
}
/*
 * @brief  turn the led on @ref 
 * @param led pointer to the configuration  @ref let_t 
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType led_turn_on (const led_t *led){
      Std_ReturnType ret = E_OK;
    if(NULL == led ){
        ret = E_NOT_OK;
    }
    else{
         pin_config_t pin_obj = {.port = led->port_name,
                            .pin = led->pin,
                            .direction = GPIO_DIRECTION_OUTPUT,
                            .logic = led->led_Status};
         gpio_pin_write_logic(&pin_obj, GPIO_HIGH);
   }
      
    return ret;
    
}
/*
 * @brief toggle the led  @ref 
 * @param led pointer to the configuration  @ref let_t 
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType led_turn_toggle (const led_t *led){
      Std_ReturnType ret = E_OK;
    if(NULL == led ){
        ret = E_NOT_OK;
    }
    else{
         pin_config_t pin_obj = {.port = led->port_name,
                            .pin = led->pin,
                            .direction = GPIO_DIRECTION_OUTPUT,
                            .logic = led->led_Status};
         gpio_pin_toggle_logic(&pin_obj);
   }
    return ret;   
}
