/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_types.h
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 7.29
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Feb 23 18:50:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControlSystem_types_h_
#define RTW_HEADER_flightControlSystem_types_h_
#include "rtwtypes.h"
#include "C:\ProgramData\MATLAB\SupportPackages\R2022b\toolbox\target\supportpackages\parrot\include\HAL.h"
#ifndef DEFINED_TYPEDEF_FOR_CommandBus_
#define DEFINED_TYPEDEF_FOR_CommandBus_

typedef struct {
  boolean_T controlModePosVSOrient;
  real32_T pos_ref[3];
  boolean_T takeoff_flag;
  real32_T orient_ref[3];
  uint32_T live_time_ticks;
} CommandBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_extraSensorData_t_
#define DEFINED_TYPEDEF_FOR_extraSensorData_t_

typedef struct {
  real32_T opticalFlow_data[3];
  real32_T posVIS_data[4];
  real32_T usePosVIS_flag;
} extraSensorData_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SensorsBus_
#define DEFINED_TYPEDEF_FOR_SensorsBus_

typedef struct {
  extraSensorData_t VisionSensors;
  HAL_acquisition_t HALSensors;
  real32_T SensorCalibration[8];
} SensorsBus;

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

#ifndef DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_
#define DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_

typedef struct {
  real_T Ts2Q[16];
  real_T Q2Ts[16];
  real_T takeoffGain;
  real_T totalThrustMaxRelative;
  real_T motorsThrustPerMotorMax;
} struct_eAf0NJvzCY9HYTXF7bLNgB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_
#define DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_

typedef struct {
  real_T initGreenwich;
  real_T quatGain;
} struct_XRMsui9C07VjBvdq1msujB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_
#define DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_

typedef struct {
  real_T xAxis;
} struct_hxsmtt0xTZOLDNa2Rz7GAF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_
#define DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_

typedef struct {
  real_T href;
  struct_hxsmtt0xTZOLDNa2Rz7GAF FlatEarthToLLA;
} struct_IZWOW0zYvpphl7qLgSfN7E;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_
#define DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T d;
  real_T xy;
  real_T h;
  real_T Cdx;
  real_T Cdy;
  real_T diameter;
} struct_q6UUpnZ4gTjFvULFx6Rxa;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_
#define DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_

typedef struct {
  real_T blades;
  real_T radius;
  real_T chord;
  real_T flappingOffset;
  real_T bladeMass;
  real_T bladeInertia;
  real_T hubMass;
  real_T hubInertia;
  real_T inertia;
  real_T Ct;
  real_T Cq;
  real_T solidity;
  real_T theta0;
  real_T thetaTip;
  real_T theta1;
  real_T theta34;
  real_T a;
  real_T area;
  real_T lock;
  real_T b;
  real_T k;
  real_T w2ToThrustGain;
} struct_OMRgDnJcZuQneKEj9vdTyD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_
#define DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_

typedef struct {
  real_T maxLimit;
  real_T minLimit;
  real_T commandToW2Gain;
  real_T thrustToMotorCommand;
} struct_p3FXZIgqtjF2uqDpmYjb6C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_
#define DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_

typedef struct {
  struct_XRMsui9C07VjBvdq1msujB SixDOF;
  struct_IZWOW0zYvpphl7qLgSfN7E PositionOnEarth;
  struct_q6UUpnZ4gTjFvULFx6Rxa Airframe;
  struct_OMRgDnJcZuQneKEj9vdTyD Rotor;
  struct_p3FXZIgqtjF2uqDpmYjb6C Motor;
} struct_OSJpyIZcrpXqReVWwh9iuG;

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

/* Parameters for system: '<S3>/Geofencing error' */
typedef struct P_Geofencingerror_flightControlSystem_T_
  P_Geofencingerror_flightControlSystem_T;

/* Parameters for system: '<Root>/Flight Control System' */
typedef struct P_FlightControlSystem_flightControlSystem_T_
  P_FlightControlSystem_flightControlSystem_T;

/* Parameters (default storage) */
typedef struct P_flightControlSystem_T_ P_flightControlSystem_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_flightControlSystem_T RT_MODEL_flightControlSystem_T;

#endif                             /* RTW_HEADER_flightControlSystem_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
