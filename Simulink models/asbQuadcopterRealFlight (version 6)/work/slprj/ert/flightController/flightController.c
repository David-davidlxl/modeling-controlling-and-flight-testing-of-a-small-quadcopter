/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightController.c
 *
 * Code generated for Simulink model 'flightController'.
 *
 * Model version                  : 7.56
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Apr  1 16:42:19 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightController.h"
#include "flightController_types.h"
#include "rtwtypes.h"
#include "flightController_private.h"
#include <math.h>

P_flightController_T flightController_P_g = {
  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S17>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: WrapToZero_Threshold_m
   * Referenced by: '<S15>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: WrapToZero_Threshold_d
   * Referenced by: '<S19>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S10>/Constant'
   */
  1000U,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S8>/Constant'
   */
  1000U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S9>/Constant'
   */
  1000U,

  /* Expression: [-0.1 0.1]
   * Referenced by: '<S4>/I_pr'
   */
  { -0.1, 0.1 },

  /* Expression: [0, 0]
   * Referenced by: '<S4>/Constant1'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.005,

  /* Expression: 0
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  2.0,

  /* Expression: -2
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  -2.0,

  /* Expression: 0
   * Referenced by: '<S4>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/antiWU_Gain'
   */
  0.0,

  /* Computed Parameter: P_xy1_Gain
   * Referenced by: '<S4>/P_xy1'
   */
  { -0.24F, 0.18F },

  /* Computed Parameter: P_xy_Gain
   * Referenced by: '<S4>/P_xy'
   */
  { -0.24F, 0.24F },

  /* Computed Parameter: D_xy1_Gain
   * Referenced by: '<S4>/D_xy1'
   */
  { 0.1F, -0.14F },

  /* Computed Parameter: D_xy_Gain
   * Referenced by: '<S4>/D_xy'
   */
  { 0.1F, -0.14F },

  /* Expression: Controller.takeoffGain
   * Referenced by: '<S6>/takeoff_gain'
   */
  0.166871876F,

  /* Computed Parameter: D_z_Gain
   * Referenced by: '<S6>/D_z'
   */
  0.3F,

  /* Computed Parameter: P_z_Gain
   * Referenced by: '<S6>/P_z'
   */
  0.8F,

  /* Expression: Controller.Q2Ts
   * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
   */
  { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
    -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F, 5.66592F,
    5.66592F, -5.66592F },

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S4>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S4>/Saturation'
   */
  3.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S4>/Saturation'
   */
  -3.0F,

  /* Computed Parameter: D_pr_Gain
   * Referenced by: '<S2>/D_pr'
   */
  { 0.002F, 0.0028F },

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_n
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC_p
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_UpperSat_i
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  2.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_LowerSat_g
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  -2.0F,

  /* Computed Parameter: I_pr_Gain_n
   * Referenced by: '<S2>/I_pr'
   */
  0.01F,

  /* Computed Parameter: P_pr_Gain
   * Referenced by: '<S2>/P_pr'
   */
  { 0.013F, 0.01F },

  /* Computed Parameter: w0_Value
   * Referenced by: '<S6>/w0'
   */
  -0.7848F,

  /* Computed Parameter: SaturationThrust_UpperSat
   * Referenced by: '<S6>/SaturationThrust'
   */
  1.20204329F,

  /* Computed Parameter: SaturationThrust_LowerSat
   * Referenced by: '<S6>/SaturationThrust'
   */
  -1.20204329F,

  /* Computed Parameter: P_yaw_Gain
   * Referenced by: '<S5>/P_yaw'
   */
  0.004F,

  /* Computed Parameter: D_yaw_Gain
   * Referenced by: '<S5>/D_yaw'
   */
  0.0012F,

  /* Computed Parameter: ThrustToMotorCommand_Gain
   * Referenced by: '<S7>/ThrustToMotorCommand'
   */
  -1530.72681F,

  /* Expression: Vehicle.Motor.maxLimit
   * Referenced by: '<S7>/Saturation5'
   */
  500.0F,

  /* Expression: Vehicle.Motor.minLimit
   * Referenced by: '<S7>/Saturation5'
   */
  10.0F,

  /* Computed Parameter: MotorDirections_Gain
   * Referenced by: '<S7>/MotorDirections'
   */
  { 1.0F, -1.0F, 1.0F, -1.0F },

  /* Computed Parameter: Delay_InitialCondition_l
   * Referenced by: '<S2>/Delay'
   */
  0.0F,

  /* Computed Parameter: antiWU_Gain_Gain_o
   * Referenced by: '<S2>/antiWU_Gain'
   */
  0.001F,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S13>/Output'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition_h
   * Referenced by: '<S11>/Output'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition_i
   * Referenced by: '<S12>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S16>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S17>/Constant'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value_o
   * Referenced by: '<S14>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S15>/Constant'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value_e
   * Referenced by: '<S18>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S19>/Constant'
   */
  0U
};

MdlrefDW_flightController_T flightController_MdlrefDW;

/* Block signals (default storage) */
B_flightController_c_T flightController_B;

/* Block states (default storage) */
DW_flightController_f_T flightController_DW;

/* System initialize for referenced model: 'flightController' */
void flightController_Init(void)
{
  /* InitializeConditions for Sum: '<S18>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S13>/Output'
   */
  flightController_DW.Output_DSTATE =
    flightController_P_g.Output_InitialCondition;

  /* InitializeConditions for Sum: '<S14>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S11>/Output'
   */
  flightController_DW.Output_DSTATE_g =
    flightController_P_g.Output_InitialCondition_h;

  /* InitializeConditions for Sum: '<S16>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S12>/Output'
   */
  flightController_DW.Output_DSTATE_c =
    flightController_P_g.Output_InitialCondition_i;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] =
    flightController_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
    flightController_P_g.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE_e[0] =
    flightController_P_g.Delay_InitialCondition_l;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightController_DW.Delay_DSTATE[0] =
    flightController_P_g.Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] =
    flightController_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
    flightController_P_g.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE_e[1] =
    flightController_P_g.Delay_InitialCondition_l;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightController_DW.Delay_DSTATE[1] =
    flightController_P_g.Delay_InitialCondition;
}

/* Output and update for referenced model: 'flightController' */
void flightController_run(const CommandBus *arg_ReferenceValueServerBus, const
  statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8])
{
  real_T tmp;
  int32_T i;
  real32_T rtb_D_yaw;
  real32_T rtb_SaturationThrust;
  real32_T rtb_SaturationThrust_idx_2;
  real32_T rtb_SaturationThrust_idx_3;
  real32_T rtb_Saturation_idx_0;
  real32_T rtb_Sum2;
  real32_T rtb_pitchrollcmd_a_idx_0;
  real32_T rtb_pitchrollcmd_a_idx_1;
  real32_T rtb_pitchrollcmd_e_idx_0;
  real32_T rtb_pitchrollcmd_e_idx_1;
  real32_T u0;
  boolean_T rtb_Compare;

  /* Trigonometry: '<S4>/Trigonometric Function' */
  rtb_D_yaw = (real32_T)sin(arg_states_estim->yaw);
  rtb_SaturationThrust = (real32_T)cos(arg_states_estim->yaw);

  /* Sum: '<S4>/Sum17' */
  rtb_pitchrollcmd_e_idx_0 = arg_ReferenceValueServerBus->pos_ref[0] -
    arg_states_estim->X;
  rtb_pitchrollcmd_e_idx_1 = arg_ReferenceValueServerBus->pos_ref[1] -
    arg_states_estim->Y;

  /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightController_B.rtb_DiscreteTimeIntegrator_idx_0 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0];

  /* Product: '<S4>/Product' incorporates:
   *  SignalConversion generated from: '<S4>/Vector Concatenate1'
   *  SignalConversion generated from: '<S4>/Vector Concatenate'
   */
  rtb_Saturation_idx_0 = rtb_SaturationThrust * rtb_pitchrollcmd_e_idx_0 +
    rtb_D_yaw * rtb_pitchrollcmd_e_idx_1;

  /* Saturate: '<S4>/Saturation' */
  if (rtb_Saturation_idx_0 > flightController_P_g.Saturation_UpperSat) {
    rtb_Saturation_idx_0 = flightController_P_g.Saturation_UpperSat;
  } else if (rtb_Saturation_idx_0 < flightController_P_g.Saturation_LowerSat) {
    rtb_Saturation_idx_0 = flightController_P_g.Saturation_LowerSat;
  }

  /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightController_B.rtb_DiscreteTimeIntegrator_idx_1 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1];

  /* Product: '<S4>/Product' incorporates:
   *  Gain: '<S4>/Gain'
   *  SignalConversion generated from: '<S4>/Vector Concatenate1'
   */
  rtb_D_yaw = flightController_P_g.Gain_Gain * rtb_D_yaw *
    rtb_pitchrollcmd_e_idx_0 + rtb_SaturationThrust * rtb_pitchrollcmd_e_idx_1;

  /* Saturate: '<S4>/Saturation' */
  if (rtb_D_yaw > flightController_P_g.Saturation_UpperSat) {
    rtb_D_yaw = flightController_P_g.Saturation_UpperSat;
  } else if (rtb_D_yaw < flightController_P_g.Saturation_LowerSat) {
    rtb_D_yaw = flightController_P_g.Saturation_LowerSat;
  }

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   *  Gain: '<S4>/I_pr'
   *  Sum: '<S4>/Sum18'
   */
  if (arg_ReferenceValueServerBus->controlModePosVSOrient) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S8>/Constant'
     *  Gain: '<S4>/D_xy'
     *  Gain: '<S4>/D_xy1'
     *  RelationalOperator: '<S8>/Compare'
     *  UnitDelay: '<S11>/Output'
     */
    if (flightController_DW.Output_DSTATE_g >=
        flightController_P_g.CompareToConstant_const) {
      rtb_pitchrollcmd_a_idx_0 = flightController_P_g.D_xy1_Gain[0] *
        arg_states_estim->dx;
      rtb_pitchrollcmd_a_idx_1 = flightController_P_g.D_xy1_Gain[1] *
        arg_states_estim->dy;
    } else {
      rtb_pitchrollcmd_a_idx_0 = flightController_P_g.D_xy_Gain[0] *
        arg_states_estim->dx;
      rtb_pitchrollcmd_a_idx_1 = flightController_P_g.D_xy_Gain[1] *
        arg_states_estim->dy;
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S10>/Constant'
     *  Gain: '<S4>/P_xy'
     *  Gain: '<S4>/P_xy1'
     *  RelationalOperator: '<S10>/Compare'
     *  UnitDelay: '<S13>/Output'
     */
    if (flightController_DW.Output_DSTATE >=
        flightController_P_g.CompareToConstant2_const) {
      rtb_pitchrollcmd_e_idx_0 = flightController_P_g.P_xy1_Gain[0] *
        rtb_Saturation_idx_0;
      rtb_pitchrollcmd_e_idx_1 = flightController_P_g.P_xy1_Gain[1] * rtb_D_yaw;
    } else {
      rtb_pitchrollcmd_e_idx_0 = flightController_P_g.P_xy_Gain[0] *
        rtb_Saturation_idx_0;
      rtb_pitchrollcmd_e_idx_1 = flightController_P_g.P_xy_Gain[1] * rtb_D_yaw;
    }

    /* End of Switch: '<S4>/Switch2' */
    rtb_pitchrollcmd_e_idx_0 = ((real32_T)(flightController_P_g.I_pr_Gain[0] *
      flightController_DW.DiscreteTimeIntegrator_DSTATE[0]) +
      rtb_pitchrollcmd_e_idx_0) + rtb_pitchrollcmd_a_idx_0;
    rtb_pitchrollcmd_e_idx_1 = ((real32_T)(flightController_P_g.I_pr_Gain[1] *
      flightController_DW.DiscreteTimeIntegrator_DSTATE[1]) +
      rtb_pitchrollcmd_e_idx_1) + rtb_pitchrollcmd_a_idx_1;
  } else {
    rtb_pitchrollcmd_e_idx_0 = arg_ReferenceValueServerBus->orient_ref[1];
    rtb_pitchrollcmd_e_idx_1 = arg_ReferenceValueServerBus->orient_ref[2];
  }

  /* End of Switch: '<S1>/Switch_refAtt' */

  /* SignalConversion generated from: '<Root>/pose_refout' incorporates:
   *  SignalConversion generated from: '<S1>/ReferenceValueServerBus_BusSelector'
   */
  arg_pose_refout[0] = arg_ReferenceValueServerBus->pos_ref[0];
  arg_pose_refout[3] = arg_ReferenceValueServerBus->orient_ref[0];
  arg_pose_refout[1] = arg_ReferenceValueServerBus->pos_ref[1];
  arg_pose_refout[4] = arg_ReferenceValueServerBus->orient_ref[1];
  arg_pose_refout[2] = arg_ReferenceValueServerBus->pos_ref[2];
  arg_pose_refout[5] = arg_ReferenceValueServerBus->orient_ref[2];
  arg_pose_refout[6] = rtb_pitchrollcmd_e_idx_0;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_pitchrollcmd_a_idx_0 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0];

  /* SignalConversion generated from: '<Root>/pose_refout' */
  arg_pose_refout[7] = rtb_pitchrollcmd_e_idx_1;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_pitchrollcmd_a_idx_1 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1];

  /* Sum: '<S2>/Sum19' */
  rtb_pitchrollcmd_e_idx_0 -= arg_states_estim->pitch;
  rtb_pitchrollcmd_e_idx_1 -= arg_states_estim->roll;

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  Gain: '<S6>/D_z'
   *  Gain: '<S6>/P_z'
   *  Gain: '<S6>/takeoff_gain'
   *  Sum: '<S6>/Sum15'
   *  Sum: '<S6>/Sum3'
   */
  if (arg_ReferenceValueServerBus->takeoff_flag) {
    rtb_SaturationThrust = flightController_P_g.takeoff_gain_Gain *
      flightController_P_g.w0_Value;
  } else {
    rtb_SaturationThrust = (arg_ReferenceValueServerBus->pos_ref[2] -
      arg_states_estim->Z) * flightController_P_g.P_z_Gain -
      flightController_P_g.D_z_Gain * arg_states_estim->dz;
  }

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   *  Switch: '<S6>/TakeoffOrControl_Switch'
   */
  rtb_SaturationThrust += flightController_P_g.w0_Value;

  /* Saturate: '<S6>/SaturationThrust' */
  if (rtb_SaturationThrust > flightController_P_g.SaturationThrust_UpperSat) {
    rtb_SaturationThrust = flightController_P_g.SaturationThrust_UpperSat;
  } else if (rtb_SaturationThrust <
             flightController_P_g.SaturationThrust_LowerSat) {
    rtb_SaturationThrust = flightController_P_g.SaturationThrust_LowerSat;
  }

  /* End of Saturate: '<S6>/SaturationThrust' */

  /* Sum: '<S5>/Sum2' incorporates:
   *  Gain: '<S5>/D_yaw'
   *  Gain: '<S5>/P_yaw'
   *  Sum: '<S5>/Sum1'
   */
  rtb_Sum2 = (arg_ReferenceValueServerBus->orient_ref[0] - arg_states_estim->yaw)
    * flightController_P_g.P_yaw_Gain - flightController_P_g.D_yaw_Gain *
    arg_states_estim->r;

  /* SignalConversion generated from: '<S3>/Product' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   *  Gain: '<S2>/D_pr'
   *  Gain: '<S2>/I_pr'
   *  Gain: '<S2>/P_pr'
   *  Sum: '<S2>/Sum16'
   */
  rtb_SaturationThrust_idx_2 = (flightController_P_g.P_pr_Gain[0] *
    rtb_pitchrollcmd_e_idx_0 + flightController_P_g.I_pr_Gain_n *
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0]) -
    flightController_P_g.D_pr_Gain[0] * arg_states_estim->q;
  rtb_SaturationThrust_idx_3 = (flightController_P_g.P_pr_Gain[1] *
    rtb_pitchrollcmd_e_idx_1 + flightController_P_g.I_pr_Gain_n *
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1]) -
    flightController_P_g.D_pr_Gain[1] * arg_states_estim->p;
  for (i = 0; i < 4; i++) {
    /* Saturate: '<S7>/Saturation5' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  Gain: '<S7>/ThrustToMotorCommand'
     *  Product: '<S3>/Product'
     *  SignalConversion generated from: '<S3>/Product'
     */
    u0 = (((flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 4] *
            rtb_Sum2 +
            flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i] *
            rtb_SaturationThrust) +
           flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 8] *
           rtb_SaturationThrust_idx_2) +
          flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 12] *
          rtb_SaturationThrust_idx_3) *
      flightController_P_g.ThrustToMotorCommand_Gain;
    if (u0 > flightController_P_g.Saturation5_UpperSat) {
      u0 = flightController_P_g.Saturation5_UpperSat;
    } else if (u0 < flightController_P_g.Saturation5_LowerSat) {
      u0 = flightController_P_g.Saturation5_LowerSat;
    }

    /* Gain: '<S7>/MotorDirections' incorporates:
     *  Saturate: '<S7>/Saturation5'
     */
    arg_motors_refout[i] = flightController_P_g.MotorDirections_Gain[i] * u0;
  }

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Constant: '<S9>/Constant'
   *  UnitDelay: '<S12>/Output'
   */
  rtb_Compare = (flightController_DW.Output_DSTATE_c >=
                 flightController_P_g.CompareToConstant1_const);

  /* Sum: '<S16>/FixPt Sum1' incorporates:
   *  Constant: '<S16>/FixPt Constant'
   *  UnitDelay: '<S12>/Output'
   */
  flightController_DW.Output_DSTATE_c +=
    flightController_P_g.FixPtConstant_Value;

  /* Sum: '<S14>/FixPt Sum1' incorporates:
   *  Constant: '<S14>/FixPt Constant'
   *  UnitDelay: '<S11>/Output'
   */
  flightController_DW.Output_DSTATE_g +=
    flightController_P_g.FixPtConstant_Value_o;

  /* Switch: '<S15>/FixPt Switch' */
  if (flightController_DW.Output_DSTATE_g >
      flightController_P_g.WrapToZero_Threshold_m) {
    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S15>/Constant'
     */
    flightController_DW.Output_DSTATE_g = flightController_P_g.Constant_Value_j;
  }

  /* End of Switch: '<S15>/FixPt Switch' */

  /* Sum: '<S18>/FixPt Sum1' incorporates:
   *  Constant: '<S18>/FixPt Constant'
   *  UnitDelay: '<S13>/Output'
   */
  flightController_DW.Output_DSTATE +=
    flightController_P_g.FixPtConstant_Value_e;

  /* Switch: '<S19>/FixPt Switch' */
  if (flightController_DW.Output_DSTATE >
      flightController_P_g.WrapToZero_Threshold_d) {
    /* Sum: '<S18>/FixPt Sum1' incorporates:
     *  Constant: '<S19>/Constant'
     */
    flightController_DW.Output_DSTATE = flightController_P_g.Constant_Value_b;
  }

  /* End of Switch: '<S19>/FixPt Switch' */

  /* Switch: '<S17>/FixPt Switch' */
  if (flightController_DW.Output_DSTATE_c >
      flightController_P_g.WrapToZero_Threshold) {
    /* Sum: '<S16>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/Constant'
     *  UnitDelay: '<S12>/Output'
     */
    flightController_DW.Output_DSTATE_c = flightController_P_g.Constant_Value;
  }

  /* End of Switch: '<S17>/FixPt Switch' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant1'
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  if (rtb_Compare) {
    tmp = rtb_Saturation_idx_0;
  } else {
    tmp = flightController_P_g.Constant1_Value[0];
  }

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S4>/Delay'
   *  Gain: '<S4>/antiWU_Gain'
   *  Sum: '<S4>/Add'
   *  Switch: '<S4>/Switch1'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] += (tmp -
    flightController_P_g.antiWU_Gain_Gain * flightController_DW.Delay_DSTATE[0])
    * flightController_P_g.DiscreteTimeIntegrator_gainval;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] >=
      flightController_P_g.DiscreteTimeIntegrator_UpperSat) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0] =
      flightController_P_g.DiscreteTimeIntegrator_UpperSat;
  } else if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] <=
             flightController_P_g.DiscreteTimeIntegrator_LowerSat) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0] =
      flightController_P_g.DiscreteTimeIntegrator_LowerSat;
  }

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] +=
    (rtb_pitchrollcmd_e_idx_0 - flightController_P_g.antiWU_Gain_Gain_o *
     flightController_DW.Delay_DSTATE_e[0]) *
    flightController_P_g.DiscreteTimeIntegrator_gainval_n;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] >=
      flightController_P_g.DiscreteTimeIntegrator_UpperSat_i) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
      flightController_P_g.DiscreteTimeIntegrator_UpperSat_i;
  } else if (flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] <=
             flightController_P_g.DiscreteTimeIntegrator_LowerSat_g) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
      flightController_P_g.DiscreteTimeIntegrator_LowerSat_g;
  }

  /* Update for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE_e[0] = rtb_pitchrollcmd_a_idx_0;

  /* Update for Delay: '<S4>/Delay' */
  flightController_DW.Delay_DSTATE[0] =
    flightController_B.rtb_DiscreteTimeIntegrator_idx_0;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant1'
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  if (rtb_Compare) {
    tmp = rtb_D_yaw;
  } else {
    tmp = flightController_P_g.Constant1_Value[1];
  }

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S4>/Delay'
   *  Gain: '<S4>/antiWU_Gain'
   *  Sum: '<S4>/Add'
   *  Switch: '<S4>/Switch1'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] += (tmp -
    flightController_P_g.antiWU_Gain_Gain * flightController_DW.Delay_DSTATE[1])
    * flightController_P_g.DiscreteTimeIntegrator_gainval;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] >=
      flightController_P_g.DiscreteTimeIntegrator_UpperSat) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1] =
      flightController_P_g.DiscreteTimeIntegrator_UpperSat;
  } else if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] <=
             flightController_P_g.DiscreteTimeIntegrator_LowerSat) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1] =
      flightController_P_g.DiscreteTimeIntegrator_LowerSat;
  }

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] +=
    (rtb_pitchrollcmd_e_idx_1 - flightController_P_g.antiWU_Gain_Gain_o *
     flightController_DW.Delay_DSTATE_e[1]) *
    flightController_P_g.DiscreteTimeIntegrator_gainval_n;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] >=
      flightController_P_g.DiscreteTimeIntegrator_UpperSat_i) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
      flightController_P_g.DiscreteTimeIntegrator_UpperSat_i;
  } else if (flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] <=
             flightController_P_g.DiscreteTimeIntegrator_LowerSat_g) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
      flightController_P_g.DiscreteTimeIntegrator_LowerSat_g;
  }

  /* Update for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE_e[1] = rtb_pitchrollcmd_a_idx_1;

  /* Update for Delay: '<S4>/Delay' */
  flightController_DW.Delay_DSTATE[1] =
    flightController_B.rtb_DiscreteTimeIntegrator_idx_1;
}

/* Model initialize function */
void flightController_g_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_flightController_T *const flightController_M =
    &(flightController_MdlrefDW.rtm);

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(flightController_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
