/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator_types.h
 *
 * Code generated for Simulink model 'stateEstimator'.
 *
 * Model version                  : 7.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Feb  5 19:52:27 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stateEstimator_types_h_
#define RTW_HEADER_stateEstimator_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_sensordata_t_
#define DEFINED_TYPEDEF_FOR_sensordata_t_

typedef struct {
  real32_T ddx;
  real32_T ddy;
  real32_T ddz;
  real32_T p;
  real32_T q;
  real32_T r;
  real32_T altitude_sonar;
  real32_T prs;
  real32_T vbat_V;
  uint32_T vbat_percentage;
} sensordata_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_statesEstim_t_
#define DEFINED_TYPEDEF_FOR_statesEstim_t_

typedef struct {
  real32_T X;
  real32_T Y;
  real32_T Z;
  real32_T yaw;
  real32_T pitch;
  real32_T roll;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T p;
  real32_T q;
  real32_T r;
} statesEstim_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hE1099BMemg5OfzqcWAA6G_
#define DEFINED_TYPEDEF_FOR_struct_hE1099BMemg5OfzqcWAA6G_

typedef struct {
  real_T date[6];
  real_T posLLA[3];
  real_T posNED[3];
  real_T vb[3];
  real_T euler[3];
  real_T angRates[3];
} struct_hE1099BMemg5OfzqcWAA6G;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_
#define DEFINED_TYPEDEF_FOR_struct_eF5OUT33sX0T9pzS8027m_

typedef struct {
  real_T cg[3];
  real_T location[3];
  real_T accNatFreq;
  real_T accDamping;
  real_T accScaleCross[9];
  real_T accBias[3];
  real_T accLimits[6];
  real_T gyroNatFreq;
  real_T gyroDamping;
  real_T gyroScaleCross[9];
  real_T gyroBias[3];
  real_T gyroGBias[3];
  real_T gyroLimits[6];
  real_T noiseSeeds[6];
  real_T noiseWeights[6];
  real_T noisePower[6];
} struct_eF5OUT33sX0T9pzS8027m;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_
#define DEFINED_TYPEDEF_FOR_struct_FIfaVnupBjYAxo1EdNiDlF_

typedef struct {
  real_T noisePower;
  real_T noiseSeeds;
} struct_FIfaVnupBjYAxo1EdNiDlF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_
#define DEFINED_TYPEDEF_FOR_struct_eFnp8sKFNJLN84XLbLzaFF_

typedef struct {
  real_T posVISNoVisionAvail[4];
  real_T usePosVISFlag;
  real_T batteryStatus[2];
} struct_eFnp8sKFNJLN84XLbLzaFF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_pAcs5k38eV6MpgiqrKAV4_
#define DEFINED_TYPEDEF_FOR_struct_pAcs5k38eV6MpgiqrKAV4_

typedef struct {
  real_T IMUAccelGain[3];
  real_T IMUGyroGain[3];
  struct_eF5OUT33sX0T9pzS8027m IMU;
  struct_FIfaVnupBjYAxo1EdNiDlF Sonar;
  real_T NO_VIS_X;
  real_T NO_VIS_YAW;
  struct_eFnp8sKFNJLN84XLbLzaFF dummy;
  real_T sensorDelay;
  real_T airDensity;
  real_T altToPrsGain;
  real_T altToPrsBias;
  real_T inverseIMUGain[6];
  real_T altSensorMin;
  real_T velocityToOpticalFlowGain;
  real_T cameraResolution[2];
} struct_pAcs5k38eV6MpgiqrKAV4;

#endif

/* Parameters for system: '<S115>/MeasurementUpdate' */
typedef struct P_MeasurementUpdate_stateEstimator_T_
  P_MeasurementUpdate_stateEstimator_T;

/* Parameters for system: '<S122>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_stateEstimator_T_
  P_EnabledSubsystem_stateEstimator_T;

/* Parameters (default storage) */
typedef struct P_stateEstimator_T_ P_stateEstimator_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_stateEstimator_T RT_MODEL_stateEstimator_T;

#endif                                 /* RTW_HEADER_stateEstimator_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
