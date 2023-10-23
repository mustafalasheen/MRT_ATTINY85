/* 
 * File:   ECU_DC_MOTOR.c
 * Author: OMEN
 *
 * Created on October 14, 2023, 12:06 AM
 */

#include "ECU_DC_MOTOR.h"

static pin_config_t pin_obj_1;
 static pin_config_t pin_obj_2 ;

/*
 * @brief  initialize the assigned pin to the output and turn the led on or off
 * @param _realy pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType dc_motor_initialize(const dc_motor_t *_dc_motor){
       Std_ReturnType ret = E_OK;
   
    if(NULL == _dc_motor ){
        ret = E_NOT_OK;
    }
    else{
        
        gpio_pin_intialize(&(_dc_motor->dc_motor[DC_MOTOR_PIN_1]));
        gpio_pin_intialize(&(_dc_motor->dc_motor[DC_MOTOR_PIN_2]));    
    }        
    return ret;    
}

/*
 * @brief   move the motor to the right direction
 * @param _dc_motor pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType dc_motor_move_right(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
   
    if(NULL == _dc_motor ){
        ret = E_NOT_OK;
    }
    else{
       gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_1]),GPIO_HIGH);
       gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_2]),GPIO_LOW);

    }        
    return ret;
}

/*
 * @brief  move the motor to the left direction
 * @param _dc_motor pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType dc_motor_move_left(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
   
    if(NULL == _dc_motor ){
        ret = E_NOT_OK;
    }
    else{
      gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_1]),GPIO_HIGH);
      gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_2]),GPIO_LOW);
    }        
    return ret;
}

/*
 * @brief  stop the movement of the motor
 * @param _dc_motor pointer to the relay module configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType dc_motor_stop(const dc_motor_t *_dc_motor){
        Std_ReturnType ret = E_OK;
   
    if(NULL == _dc_motor ){
        ret = E_NOT_OK;
    }
    else{
       gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_1]),GPIO_LOW);
       gpio_pin_write_logic(&(_dc_motor->dc_motor[DC_MOTOR_PIN_2]),GPIO_LOW);
    }        
    return ret;
}