/* 
 * File:   LED.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:07 PM
 */

#ifndef LED_H
#define	LED_H



/* Section: Includes */
#include "../../MCAL_LAYER/GPIO/GPIO.h"
#include "LED_CFG.h"


/*  Section: Macro Declarations  */

/*  Section: Macro Functions Declarations  */

/*  Section: Data Type Declarations  */

typedef enum{
    LED_OFF=0,
    LED_ON
}led_status_t;

typedef struct{
    uint8 port_name :4;
    uint8 pin :3;
    uint8 led_Status :1;
}led_t;

/*  Section: Functions Declarations  */

Std_ReturnType led_initialize(const led_t *led);
Std_ReturnType led_turn_off (const led_t *led);
Std_ReturnType led_turn_on (const led_t *led);
Std_ReturnType led_turn_toggle (const led_t *led);


#endif	/* LED_H */

