#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include"std_types.h"
#include"bit_math.h"


//#define TOP_VALUE_IN_PWM             65536

/////////////////////////////////////////////////////pins and ports configuration for h_bridge////////////////////////////////////////////////////////////////////////////////

/*we just use only one h-bridge to drive the two back dc motors*/
/*enable pin in the h_bridge for back DCmotors*/
#define H_BRIDGE_BACK_ENABLE_PORT  PORTB_ID
#define H_BRIDGE1_BACK_ENABLE_PIN   PIN3_ID

/*input pins in the h_bridge for back DCmotors*/
#define H_BRIDGE1_BACK_INPUT_PORT  PORTB_ID
#define H_BRIDGE1_BACK_INPUT1_PIN   PIN0_ID
#define H_BRIDGE1_BACK_INPUT2_PIN   PIN1_ID


/*enable pin in the h_bridge for front DCmotors*/
#define H_BRIDGE_FRONT_ENABLE_PORT  PORTB_ID
#define H_BRIDGE_FRONT_ENABLE_PIN   PIN3_ID

/*input pins in the h_bridge for front DCmotors*/
#define H_BRIDGE_FRONT_INPUT_PORT  PORTB_ID
#define H_BRIDGE_FRONT_INPUT1_PIN   PIN0_ID
#define H_BRIDGE_FRONT_INPUT2_PIN   PIN1_ID


/*motor states at the beginning and during run time*/
typedef enum
{
	DcMotor_stop,DcMotor_ACW,DcMotor_CW
}DcMotor_State;


/////////////////////////////////////////////////////functions prototypes////////////////////////////////////////////////////////////////////////////////
/*
pins and ports setting
*/
void DCmotor_Init(void);
/*
setting duty cycle based on the car speed and state
*/
void DCmotor_Rotate(DcMotor_State state,u8 speed);
/*
if we wanted to stop the motor with no regard to pwm
*/
void DCmotor_stop(void);

#endif /* DC_MOTOR_H_ */
