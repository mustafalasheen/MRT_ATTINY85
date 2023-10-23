/* 
 * File:   ECU_RELAY.h
 * Author: OMEN
 *
 * Created on October 14, 2023, 12:07 AM
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H


/*  Section: Includes  */
#include "ECU_RELAY_CFG.h"
#include "../../MCAL_LAYER/GPIO/GPIO.h"

/*  Section: Macro Declarations  */
#define RELAY_ON_STATUS 0x01U
#define RELAY_OFF_STATUS 0x00U

/*  Section: Macro Functions Declarations  */

/*  Section: Data Type Declarations  */

typedef struct{
    uint8 relay_port :4;
    uint8 relay_pin :3;
    uint8 relay_status :1;

}relay_t;

/*  Section: Functions Declarations  */
Std_ReturnType relay_intilialize(const relay_t *_realy);
Std_ReturnType relay_turn_on(const relay_t *_realy);
Std_ReturnType relay_turn_off(const relay_t *_realy);

#endif	/* ECU_RELAY_H */

