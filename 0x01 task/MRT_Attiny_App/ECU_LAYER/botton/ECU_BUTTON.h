/* 
 * File:   ECU_BUTTON.h
 * Author: OMEN
 *
 * Created on October 14, 2023, 12:05 AM
 */

#ifndef ECU_BUTTON_H
#define	ECU_BUTTON_H

/*  Section: Includes  */

#include "../../MCAL_LAYER/GPIO/GPIO.h"
#include "ECU_BUTTON_CFG.h"

/*  Section: Macro Declarations  */

/*  Section: Macro Functions Declarations  */

/*  Section: Data Type Declarations  */

typedef enum {
    BUTTON_PRESSED,
    BUTTON_RELEASED
}BUTTON_STATE_T;  

typedef enum{
  BUTTON_ACTIV_HIGH,
  BUTTON_ACTIV_LOW
    
}BUTTON_ACTIVE_T;
typedef struct {
  pin_config_t button_pin;
  BUTTON_STATE_T button_state;
  BUTTON_ACTIVE_T button_coniction;
}button_t;

/*  Section: Functions Declarations  */

/*
 * @brief  initialize the assigned pin to the input
 * @param btn pointer to the configuration  
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType button_initialize (const button_t *btn);

/*
 * @brief  read the state of the button
 * @param btn pointer to the configuration  
 * @param btn_state pointer to the configuration  @ref BUTTON_STATE_T
 * @return Status of the function
 *               (E_OK) : The function done successfully
 *                (E_NOT _OK) : The function has issue to preform this action  
 */
Std_ReturnType button_read_state (const button_t *btn, BUTTON_STATE_T *btn_state);


#endif	/* ECU_BUTTON_H */

