/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightController.h
 *
 * Code generated for Simulink model 'flightController'.
 *
 * Model version                  : 7.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Nov  2 22:19:23 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightController_h_
#define RTW_HEADER_flightController_h_
#ifndef flightController_COMMON_INCLUDES_
#define flightController_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* flightController_COMMON_INCLUDES_ */

#include "flightController_types.h"

/* Block states (default storage) for model 'flightController' */
#ifndef flightController_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T DiscreteTimeIntegrator_DSTATE[2];/* '<S2>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE[2];            /* '<S2>/Delay' */
} DW_flightController_f_T;

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

#ifndef flightController_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_flightController_T_ {
  real32_T D_xy_Gain[2];               /* Computed Parameter: D_xy_Gain
                                        * Referenced by: '<S4>/D_xy'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T Saturation_UpperSat;       /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T P_xy_Gain[2];               /* Computed Parameter: P_xy_Gain
                                        * Referenced by: '<S4>/P_xy'
                                        */
  real32_T takeoff_gain_Gain;          /* Expression: Controller.takeoffGain
                                        * Referenced by: '<S6>/takeoff_gain'
                                        */
  real32_T D_z_Gain;                   /* Computed Parameter: D_z_Gain
                                        * Referenced by: '<S6>/D_z'
                                        */
  real32_T P_z_Gain;                   /* Computed Parameter: P_z_Gain
                                        * Referenced by: '<S6>/P_z'
                                        */
  real32_T TorqueTotalThrustToThrustPerMotor_Value[16];/* Expression: Controller.Q2Ts
                                                        * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
                                                        */
  real32_T D_pr_Gain[2];               /* Computed Parameter: D_pr_Gain
                                        * Referenced by: '<S2>/D_pr'
                                        */
  real32_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S2>/Discrete-Time Integrator'
                            */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S2>/Discrete-Time Integrator'
                                 */
  real32_T DiscreteTimeIntegrator_UpperSat;
                          /* Computed Parameter: DiscreteTimeIntegrator_UpperSat
                           * Referenced by: '<S2>/Discrete-Time Integrator'
                           */
  real32_T DiscreteTimeIntegrator_LowerSat;
                          /* Computed Parameter: DiscreteTimeIntegrator_LowerSat
                           * Referenced by: '<S2>/Discrete-Time Integrator'
                           */
  real32_T I_pr_Gain;                  /* Computed Parameter: I_pr_Gain
                                        * Referenced by: '<S2>/I_pr'
                                        */
  real32_T P_pr_Gain[2];               /* Computed Parameter: P_pr_Gain
                                        * Referenced by: '<S2>/P_pr'
                                        */
  real32_T w0_Value;                   /* Computed Parameter: w0_Value
                                        * Referenced by: '<S6>/w0'
                                        */
  real32_T SaturationThrust_UpperSat;
                                /* Computed Parameter: SaturationThrust_UpperSat
                                 * Referenced by: '<S6>/SaturationThrust'
                                 */
  real32_T SaturationThrust_LowerSat;
                                /* Computed Parameter: SaturationThrust_LowerSat
                                 * Referenced by: '<S6>/SaturationThrust'
                                 */
  real32_T P_yaw_Gain;                 /* Computed Parameter: P_yaw_Gain
                                        * Referenced by: '<S5>/P_yaw'
                                        */
  real32_T D_yaw_Gain;                 /* Computed Parameter: D_yaw_Gain
                                        * Referenced by: '<S5>/D_yaw'
                                        */
  real32_T ThrustToMotorCommand_Gain;
                                /* Computed Parameter: ThrustToMotorCommand_Gain
                                 * Referenced by: '<S7>/ThrustToMotorCommand'
                                 */
  real32_T Saturation5_UpperSat;       /* Expression: Vehicle.Motor.maxLimit
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Expression: Vehicle.Motor.minLimit
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T MotorDirections_Gain[4];  /* Computed Parameter: MotorDirections_Gain
                                      * Referenced by: '<S7>/MotorDirections'
                                      */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S2>/Delay'
                                    */
  real32_T antiWU_Gain_Gain;           /* Computed Parameter: antiWU_Gain_Gain
                                        * Referenced by: '<S2>/antiWU_Gain'
                                        */
};

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

#ifndef flightController_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_flightController_T {
  const char_T **errorStatus;
};

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

#ifndef flightController_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_flightController_T rtm;
} MdlrefDW_flightController_T;

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

extern void flightController_Init(void);
extern void flightController_run(const CommandBus *arg_ReferenceValueServerBus,
  const statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8]);

/* Model reference registration function */
extern void flightController_g_initialize(const char_T **rt_errorStatus);

#ifndef flightController_MDLREF_HIDE_CHILD_

extern MdlrefDW_flightController_T flightController_MdlrefDW;

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

#ifndef flightController_MDLREF_HIDE_CHILD_

/* Block states (default storage) */
extern DW_flightController_f_T flightController_DW;

#endif                                 /*flightController_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flightController'
 * '<S1>'   : 'flightController/Flight Controller'
 * '<S2>'   : 'flightController/Flight Controller/Attitude'
 * '<S3>'   : 'flightController/Flight Controller/ControlMixer'
 * '<S4>'   : 'flightController/Flight Controller/XY-to-reference-orientation'
 * '<S5>'   : 'flightController/Flight Controller/Yaw'
 * '<S6>'   : 'flightController/Flight Controller/gravity feedforward//equilibrium thrust'
 * '<S7>'   : 'flightController/Flight Controller/thrustsToMotorCommands'
 */
#endif                                 /* RTW_HEADER_flightController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
