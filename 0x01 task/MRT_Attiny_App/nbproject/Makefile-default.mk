#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=ECU_LAYER/botton/ECU_BUTTON_.c ECU_LAYER/dc_motor/ECU_DC_MOTOR.c ECU_LAYER/LED/LED.c ECU_LAYER/relay/ECU_RELAY.c MCAL_LAYER/GPIO/GPIO.c APP.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o ${OBJECTDIR}/ECU_LAYER/LED/LED.o ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o ${OBJECTDIR}/APP.o
POSSIBLE_DEPFILES=${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d ${OBJECTDIR}/ECU_LAYER/LED/LED.o.d ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d ${OBJECTDIR}/APP.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o ${OBJECTDIR}/ECU_LAYER/LED/LED.o ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o ${OBJECTDIR}/APP.o

# Source Files
SOURCEFILES=ECU_LAYER/botton/ECU_BUTTON_.c ECU_LAYER/dc_motor/ECU_DC_MOTOR.c ECU_LAYER/LED/LED.c ECU_LAYER/relay/ECU_RELAY.c MCAL_LAYER/GPIO/GPIO.c APP.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATtiny85
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o: ECU_LAYER/botton/ECU_BUTTON_.c  .generated_files/flags/default/fa150969b7dbedc1ecb8c9b5275f91f76a63ea1f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/botton" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d" -MT "${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d" -MT ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o -o ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o ECU_LAYER/botton/ECU_BUTTON_.c 
	
${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o: ECU_LAYER/dc_motor/ECU_DC_MOTOR.c  .generated_files/flags/default/e0d97b1a49850779aee42d60cf2bfb23b2a2a5ef .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/dc_motor" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d" -MT "${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d" -MT ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o -o ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o ECU_LAYER/dc_motor/ECU_DC_MOTOR.c 
	
${OBJECTDIR}/ECU_LAYER/LED/LED.o: ECU_LAYER/LED/LED.c  .generated_files/flags/default/d9822a1be333622bc70e8f6e00c2d0f4ccdd6ca6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/LED" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/LED.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/LED.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/LED/LED.o.d" -MT "${OBJECTDIR}/ECU_LAYER/LED/LED.o.d" -MT ${OBJECTDIR}/ECU_LAYER/LED/LED.o -o ${OBJECTDIR}/ECU_LAYER/LED/LED.o ECU_LAYER/LED/LED.c 
	
${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o: ECU_LAYER/relay/ECU_RELAY.c  .generated_files/flags/default/85f735c883db63284406fc464bda72469466a405 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/relay" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d" -MT "${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d" -MT ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o -o ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o ECU_LAYER/relay/ECU_RELAY.c 
	
${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o: MCAL_LAYER/GPIO/GPIO.c  .generated_files/flags/default/eceda1f26b367dccd4000aa91f659a32c5040f99 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_LAYER/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d 
	@${RM} ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d" -MT "${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d" -MT ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o -o ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o MCAL_LAYER/GPIO/GPIO.c 
	
${OBJECTDIR}/APP.o: APP.c  .generated_files/flags/default/50aad8a3ff2003b93c795e3b80b50dc69b5861dd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/APP.o.d 
	@${RM} ${OBJECTDIR}/APP.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/APP.o.d" -MT "${OBJECTDIR}/APP.o.d" -MT ${OBJECTDIR}/APP.o -o ${OBJECTDIR}/APP.o APP.c 
	
else
${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o: ECU_LAYER/botton/ECU_BUTTON_.c  .generated_files/flags/default/683b7c8ae745b663d092e5e327723815104cbd36 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/botton" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d" -MT "${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o.d" -MT ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o -o ${OBJECTDIR}/ECU_LAYER/botton/ECU_BUTTON_.o ECU_LAYER/botton/ECU_BUTTON_.c 
	
${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o: ECU_LAYER/dc_motor/ECU_DC_MOTOR.c  .generated_files/flags/default/46e00bb786273888c626390bbbbf701ad9387af7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/dc_motor" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d" -MT "${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o.d" -MT ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o -o ${OBJECTDIR}/ECU_LAYER/dc_motor/ECU_DC_MOTOR.o ECU_LAYER/dc_motor/ECU_DC_MOTOR.c 
	
${OBJECTDIR}/ECU_LAYER/LED/LED.o: ECU_LAYER/LED/LED.c  .generated_files/flags/default/80dc44e070c64ec57f7bdaa2dda937b29149df70 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/LED" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/LED.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/LED.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/LED/LED.o.d" -MT "${OBJECTDIR}/ECU_LAYER/LED/LED.o.d" -MT ${OBJECTDIR}/ECU_LAYER/LED/LED.o -o ${OBJECTDIR}/ECU_LAYER/LED/LED.o ECU_LAYER/LED/LED.c 
	
${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o: ECU_LAYER/relay/ECU_RELAY.c  .generated_files/flags/default/3694116d528e24a067a0856b115fd6691f070eff .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/relay" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d" -MT "${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o.d" -MT ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o -o ${OBJECTDIR}/ECU_LAYER/relay/ECU_RELAY.o ECU_LAYER/relay/ECU_RELAY.c 
	
${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o: MCAL_LAYER/GPIO/GPIO.c  .generated_files/flags/default/6b50b56d22d8a9b084eb95548bd117db270e7f22 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/MCAL_LAYER/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d 
	@${RM} ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d" -MT "${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o.d" -MT ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o -o ${OBJECTDIR}/MCAL_LAYER/GPIO/GPIO.o MCAL_LAYER/GPIO/GPIO.c 
	
${OBJECTDIR}/APP.o: APP.c  .generated_files/flags/default/c19459804eceddbe9e18b2fbc13218c7832b9e2e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/APP.o.d 
	@${RM} ${OBJECTDIR}/APP.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     -MD -MP -MF "${OBJECTDIR}/APP.o.d" -MT "${OBJECTDIR}/APP.o.d" -MT ${OBJECTDIR}/APP.o -o ${OBJECTDIR}/APP.o APP.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"   -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3 -mconst-data-in-progmem -mno-const-data-in-config-mapped-progmem     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}\\avr-objcopy -O ihex "${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "${DISTDIR}/MRT_Attiny_App.${IMAGE_TYPE}.hex"
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
