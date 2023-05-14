/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: conversionYUV.h
 *
 * Code generated for Simulink model 'conversionYUV'.
 *
 * Model version                  : 7.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Feb  5 17:45:49 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_conversionYUV_h_
#define RTW_HEADER_conversionYUV_h_
#ifndef conversionYUV_COMMON_INCLUDES_
#define conversionYUV_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* conversionYUV_COMMON_INCLUDES_ */

#include "conversionYUV_types.h"

/* Block signals for model 'conversionYUV' */
typedef struct {
  uint8_T Reshape[19200];              /* '<Root>/Reshape' */
} B_conversionYUV_c_T;

/* Parameters (default storage) */
struct P_conversionYUV_T_ {
  real_T Constant1_Value[9600];        /* Expression: 1:2:120*160
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value[9600];        /* Expression: 2:2:120*160
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant1_Value_l[9600];      /* Expression: 1:2:120*160
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant2_Value_l[9600];      /* Expression: 2:2:120*160
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant1_Value_i[9600];      /* Expression: 1:2:120*160
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant2_Value_g[9600];      /* Expression: 2:2:120*160
                                        * Referenced by: '<S3>/Constant2'
                                        */
  uint8_T Constant_Value[19200];       /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint8_T Constant_Value_d[19200];     /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint8_T Constant_Value_i[19200];     /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S3>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_conversionYUV_T {
  const char_T **errorStatus;
};

typedef struct {
  B_conversionYUV_c_T rtb;
  RT_MODEL_conversionYUV_T rtm;
} MdlrefDW_conversionYUV_T;

/* Model reference registration function */
extern void conversionYUV_initialize(const char_T **rt_errorStatus,
  RT_MODEL_conversionYUV_T *const conversionYUV_M);
extern void conversionYUV(const uint8_T rtu_ImageData[38400], uint8_T rty_Y
  [19200], uint8_T rty_Cb[19200], uint8_T rty_Cr[19200], B_conversionYUV_c_T
  *localB);

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
 * '<Root>' : 'conversionYUV'
 * '<S1>'   : 'conversionYUV/Cb select'
 * '<S2>'   : 'conversionYUV/Cr select'
 * '<S3>'   : 'conversionYUV/Y' select'
 */
#endif                                 /* RTW_HEADER_conversionYUV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
