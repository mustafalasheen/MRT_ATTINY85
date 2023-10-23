/* 
 * File:   APP.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:16 PM
 */

#ifndef APP_H
#define	APP_H
/* Section: Includes */

#include "ECU_LAYER/LED/LED.h"
#include "ECU_LAYER/botton/ECU_BUTTON.h"
#include "ECU_LAYER/relay/ECU_RELAY.h"
#include "ECU_LAYER/dc_motor/ECU_DC_MOTOR.h"
/*  Section: Macro Declarations  */
/*  Section: Macro Declarations  */

/*  Section: Macro Functions Declarations  */
#define   _XTAL_FREQ    8000000
#define F_CPU 1000000UL


/*  Section: Data Type Declarations  */

/*  Section: Functions Declarations  */
 void application_initilaized(void);


#endif	/* APP_H */

