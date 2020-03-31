/*
 * parameters.h
 *
 *  Created on: 15.03.2020
 *      Author: Adrian
 */
#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "settings.h"

extern const setting_t *parametersTable[];
extern const uint16_t paramsTableLen;

//change every time if you change parameters table
#define PARAMETERS_VERSION 1

#define PARAMETERS_MAX_NAME_LENGTH 20

/* Parameters for motor during printing */
#define PARAMETER_PRINT_SPEED_Y 100
#define PARAMETER_PRINT_SPEED_Y_MIN 100
#define PARAMETER_PRINT_SPEED_Y_MAX 1000

#define PARAMETER_PRINT_ACCEL_Y 1000
#define PARAMETER_PRINT_ACCEL_Y_MIN 100
#define PARAMETER_PRINT_ACCEL_Y_MAX 20000

#define PARAMETER_PRINT_DECEL_Y 1000
#define PARAMETER_PRINT_DECEL_Y_MIN 100
#define PARAMETER_PRINT_DECEL_Y_MAX 20000

/* Parameters for motor during movement*/
#define PARAMETER_MOVE_SPEED_Y 100
#define PARAMETER_MOVE_SPEED_Y_MIN 100
#define PARAMETER_MOVE_SPEED_Y_MAX 1000

#define PARAMETER_MOVE_ACCEL_Y 1000
#define PARAMETER_MOVE_ACCEL_Y_MIN 100
#define PARAMETER_MOVE_ACCEL_Y_MAX 20000

#define PARAMETER_MOVE_DECEL_Y 1000
#define PARAMETER_MOVE_DECEL_Y_MIN 100
#define PARAMETER_MOVE_DECEL_Y_MAX 20000

/* Parameters for motor during jog */
#define PARAMETER_JOG_SPEED_Y 4000
#define PARAMETER_JOG_SPEED_Y_MIN 100
#define PARAMETER_JOG_SPEED_Y_MAX 10000

#define PARAMETER_JOG_ACCEL_Y 10000
#define PARAMETER_JOG_ACCEL_Y_MIN 100
#define PARAMETER_JOG_ACCEL_Y_MAX 100000

#define PARAMETER_JOG_DECEL_Y 10000
#define PARAMETER_JOG_DECEL_Y_MIN 100
#define PARAMETER_JOG_DECEL_Y_MAX 100000

#endif /* PARAMETERS_H_ */
