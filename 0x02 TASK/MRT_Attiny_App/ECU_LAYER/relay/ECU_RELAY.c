/* 
 * File:   ECU_RELAY.c
 * Author: OMEN
 *
 * Created on October 14, 2023, 12:07 AM
 */


#include "ECU_RELAY.h"



/*
 * @brief  initialize the assigned pin to the output and turn the led on or off
 * @param _realy pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */

Std_ReturnType relay_intilialize(const relay_t *_realy){
        Std_ReturnType ret = E_OK;
   
    if(NULL == _realy ){
        ret = E_NOT_OK;
    }
    else{
        pin_config_t pin_obj = {.port = _realy->relay_port, 
                                .pin = _realy->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _realy->relay_status};
            gpio_pin_intialize(&pin_obj);
    }        
    return ret;
    
}

/*
 * @brief  turn on the relay
 * @param _realy pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType relay_turn_on(const relay_t *_realy){
     Std_ReturnType ret = E_OK;
   
    if(NULL == _realy ){
        ret = E_NOT_OK;
    }
    else{
        
        pin_config_t pin_obj = {.port = _realy->relay_port, 
                                .pin = _realy->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _realy->relay_status};
        gpio_pin_write_logic(&pin_obj, GPIO_HIGH);
    }
    return ret;
    
    
    
}

/*
 * @brief  turn off the relay
 * @param _realy pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType relay_turn_off(const relay_t *_realy){
          Std_ReturnType ret = E_OK;
   
    if(NULL == _realy ){
        ret = E_NOT_OK;
    }
    else{
       
        pin_config_t pin_obj = {.port = _realy->relay_port, 
                                .pin = _realy->relay_pin,
                                .direction = GPIO_DIRECTION_OUTPUT,
                                .logic = _realy->relay_status};
        gpio_pin_write_logic(&pin_obj, GPIO_LOW);
    }
    return ret;
    
    
    
}