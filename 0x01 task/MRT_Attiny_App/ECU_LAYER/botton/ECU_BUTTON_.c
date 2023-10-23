/* 
 * File:   ECU_BUTTON.c
 * Author: OMEN
 *
 * Created on October 14, 2023, 12:05 AM
 */

#include "ECU_BUTTON.h"




/*
 * @brief  initialize the assigned pin to the input
 * @param btn pointer to the configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType button_initialize (const button_t *btn){
       Std_ReturnType ret = E_OK;
   
    if(NULL == btn ){
        ret = E_NOT_OK;
    }
    else{
        ret = gpio_pin_direction_intialize(&(btn->button_pin));
    }
    return ret;
    
    
}
/*
 * @brief  read the state of the button
 * @param btn pointer to the configuration  
 * @param btn_state pointer to the configuration  @ref BUTTON_STATE_T
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType button_read_state (const button_t *btn, BUTTON_STATE_T *btn_state){
       Std_ReturnType ret = E_NOT_OK;
   
    if(NULL == btn || NULL == btn_state){
        ret = E_NOT_OK;
    }
    else{
        logic_t btn_logic_status = GPIO_LOW; 
        gpio_pin_read_logic(&(btn->button_pin),&btn_logic_status );
        if(BUTTON_ACTIV_HIGH == btn->button_coniction ){
            if(GPIO_HIGH == btn_logic_status){
                *btn_state = BUTTON_PRESSED;
            }
            
            else{
               *btn_state = BUTTON_RELEASED;

            }
        }
        else if(BUTTON_ACTIV_LOW == btn->button_coniction){
             if(GPIO_LOW == btn_logic_status){
                *btn_state = BUTTON_PRESSED;

            }
            
            else{
              *btn_state = BUTTON_RELEASED;

            }
        }
        
        else{/* NOTHING */}
        ret = E_OK;
    }
    return ret;
 
}

