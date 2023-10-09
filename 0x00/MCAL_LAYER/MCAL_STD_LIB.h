/* 
 * File:   MCAL_STD_LIB.h
 * Author: OMEN
 *
 * Created on October 9, 2023, 4:08 PM
 */

#ifndef MCAL_STD_LIB_H
#define	MCAL_STD_LIB_H



/* Section: Includes */
#include "COMPILER.h"
#include "STD_LIB.h"
/*  Section: Data Type Declarations  */
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef signed char    sint8;
typedef signed short   sint16;
typedef signed int     sint32;


typedef uint8 Std_ReturnType;

/*  Section: Functions Declarations  */
 
/*  Section: Macro Functions Declarations  */

#define STD_HIGHT       0x01
#define STD_LOW         0x00



#define STD_ON          0x01
#define STD_OFF         0x00

#define STD_ACTIVE      0x01
#define STD_IDLE        0x00

#define E_OK        (Std_ReturnType)0x01
#define E_NOT_OK    (Std_ReturnType)0x00

/*  Section: Macro Declarations  */


#endif	/* MCAL_STD_LIB_H */

