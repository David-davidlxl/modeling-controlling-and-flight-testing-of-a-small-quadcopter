/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_data.c
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 7.25
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Jan 21 19:02:01 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"

/* Model block global parameters (default storage) */
struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors = {
  { 1.00596, 1.00383, 0.99454 },

  { 0.99861, 1.00644, 0.99997 },

  {
    { 0.0, 0.0, 0.0 },

    { 0.0, 0.0, 0.0 },
    190.0,
    0.707,

    { 1.00596, 0.0, 0.0, 0.0, 1.00383, 0.0, 0.0, 0.0, 0.99454 },

    { 0.09, -0.06, 0.33699999999999974 },

    { -50.0, -50.0, -50.0, 50.0, 50.0, 50.0 },
    190.0,
    0.707,

    { 0.99861, 0.0, 0.0, 0.0, 1.00644, 0.0, 0.0, 0.0, 0.99997 },

    { -0.0095, -0.0075, 0.0015 },

    { 0.0, 0.0, 0.0 },

    { -10.0, -10.0, -10.0, 10.0, 10.0, 10.0 },

    { 41.0, 41.0, 41.0, 41.0, 41.0, 41.0 },

    { 0.8, 0.8, 0.8, 0.025, 0.025, 0.025 },

    { 0.00021831529882618725, 0.00018641345254680647, 0.00037251068300213613,
      1.0651514622688397e-8, 1.3021327403798377e-8, 1.1929474437781302e-8 }
  },

  {
    1.0,
    41.0
  },
  -99.0,
  -9.0,

  {
    { -99.0, 0.0, 0.0, -9.0 },
    0.0,

    { 3.5, 70.0 }
  },
  1.0,
  1.225,
  12.01725,
  101270.95,

  { 0.99407531114557246, 0.99618461293246863, 1.0054899752649467,
    1.0013919347893572, 0.99360120821906917, 1.0000300009000269 },
  0.44,
  1.0,

  { 160.0, 120.0 }
} ;                                    /* Variable: Sensors
                                        * Referenced by: '<S1>/estimator'
                                        */

boolean_T rtP_enableLanding = false;   /* Variable: enableLanding
                                        * Referenced by: '<S5>/Constant'
                                        */

/* Block parameters (default storage) */
P_flightControlSystem_T flightControlSystem_P = {
  /* Expression: true
   * Referenced by: '<S2>/One1'
   */
  true,

  /* Expression: false
   * Referenced by: '<S2>/One2'
   */
  false,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<Root>/Rate Transition'
   */
  false,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S2>/Constant'
   */
  100U,

  /* Computed Parameter: One_Value
   * Referenced by: '<S2>/One'
   */
  1U,

  /* Start of '<Root>/Flight Control System' */
  {
    /* Mask Parameter: CompareToConstant_const
     * Referenced by: '<S7>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant1_const
     * Referenced by: '<S8>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant2_const
     * Referenced by: '<S9>/Constant'
     */
    0.01F,

    /* Mask Parameter: CompareToConstant6_const
     * Referenced by: '<S12>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant3_const
     * Referenced by: '<S10>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant5_const
     * Referenced by: '<S11>/Constant'
     */
    0.01F,

    /* Mask Parameter: WrapToZero_Threshold
     * Referenced by: '<S23>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_o
     * Referenced by: '<S25>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: CompareToConstant_const_g
     * Referenced by: '<S16>/Constant'
     */
    110U,

    /* Computed Parameter: Memory_InitialCondition
     * Referenced by: '<S5>/Memory'
     */
    {
      0.0F,                            /* X */
      0.0F,                            /* Y */
      0.0F,                            /* Z */
      0.0F,                            /* yaw */
      0.0F,                            /* pitch */
      0.0F,                            /* roll */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* dz */
      0.0F,                            /* p */
      0.0F,                            /* q */
      0.0F                             /* r */
    },

    /* Expression: landingAltitude-measurementTolerance
     * Referenced by: '<S5>/landingOverrideLimit'
     */
    -0.61,

    /* Expression: landingAltitude
     * Referenced by: '<S5>/Constant2'
     */
    -0.6F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S5>/Constant3'
     */
    { 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S17>/Constant'
     */
    0.0F,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S18>/Constant'
     */
    0.0F,

    /* Computed Parameter: Gain2_Gain
     * Referenced by: '<S3>/Gain2'
     */
    1.0F,

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S3>/Gain1'
     */
    1.0F,

    /* Computed Parameter: Output_InitialCondition
     * Referenced by: '<S20>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_p
     * Referenced by: '<S19>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value
     * Referenced by: '<S22>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_f
     * Referenced by: '<S23>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_f
     * Referenced by: '<S24>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_c
     * Referenced by: '<S25>/Constant'
     */
    0U,

    /* Expression: true
     * Referenced by: '<S5>/Constant1'
     */
    true,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S3>/Merge'
     */
    0U,

    /* Start of '<S3>/Normal condition' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S14>/Constant'
       */
      0U
    }
    ,

    /* End of '<S3>/Normal condition' */

    /* Start of '<S3>/estimator//Optical flow error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S15>/Constant'
       */
      99U
    }
    ,

    /* End of '<S3>/estimator//Optical flow error' */

    /* Start of '<S3>/Geofencing error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S13>/Constant'
       */
      1U
    }
    /* End of '<S3>/Geofencing error' */
  }
  /* End of '<Root>/Flight Control System' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
