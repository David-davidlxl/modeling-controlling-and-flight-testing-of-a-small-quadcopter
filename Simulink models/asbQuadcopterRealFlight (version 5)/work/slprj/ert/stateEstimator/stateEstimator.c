/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.c
 *
 * Code generated for Simulink model 'stateEstimator'.
 *
 * Model version                  : 7.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Feb 23 18:11:30 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateEstimator.h"
#include "rtwtypes.h"
#include "stateEstimator_types.h"
#include "stateEstimator_private.h"
#include <math.h>
#include "rt_powf_snf.h"
#include "rt_nonfinite.h"

P_stateEstimator_T stateEstimator_P_g = {
  /* Mask Parameter: outlierBelowFloor_const
   * Referenced by: '<S17>/Constant'
   */
  0.0,

  /* Mask Parameter: outlierJump_const
   * Referenced by: '<S72>/Constant'
   */
  0.3,

  /* Mask Parameter: currentStateVeryOffsonarflt_const
   * Referenced by: '<S71>/Constant'
   */
  0.4,

  /* Mask Parameter: currentEstimateVeryOffFromPressure_const
   * Referenced by: '<S70>/Constant'
   */
  0.8,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
   * Referenced by: '<S84>/UD'
   */
  0.0F,

  /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
   * Referenced by: '<S210>/Constant'
   */
  -99.0F,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S6>/Constant'
   */
  9.79038F,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S7>/Constant'
   */
  9.82962F,

  /* Mask Parameter: maxp3_const
   * Referenced by: '<S206>/Constant'
   */
  0.18F,

  /* Mask Parameter: maxq3_const
   * Referenced by: '<S207>/Constant'
   */
  0.18F,

  /* Mask Parameter: checkifPosavailable_const
   * Referenced by: '<S205>/Constant'
   */
  -99.0F,

  /* Mask Parameter: planarjumpsVISPOS_const
   * Referenced by: '<S208>/Constant'
   */
  1.0F,

  /* Mask Parameter: maxp_const
   * Referenced by: '<S87>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxq_const
   * Referenced by: '<S89>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxw1_const
   * Referenced by: '<S91>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxw2_const
   * Referenced by: '<S92>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxdw1_const
   * Referenced by: '<S85>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxdw2_const
   * Referenced by: '<S86>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxp2_const
   * Referenced by: '<S88>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxq2_const
   * Referenced by: '<S90>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxw3_const
   * Referenced by: '<S93>/Constant'
   */
  5.0F,

  /* Mask Parameter: maxw4_const
   * Referenced by: '<S94>/Constant'
   */
  5.0F,

  /* Mask Parameter: minHeightforOF_const
   * Referenced by: '<S95>/Constant'
   */
  -0.4F,

  /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
   * Referenced by: '<S79>/Constant'
   */
  -0.4F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S81>/Constant'
   */
  0.0F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S82>/Constant'
   */
  0.0F,

  /* Expression: 0
   * Referenced by: '<S66>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S68>/deltax'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Data Store Memory'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S152>/KalmanGainM'
   */
  { 0.0057568600814403873, 0.0, 0.0, 0.0057568600814411038 },

  /* Expression: pInitialization.M
   * Referenced by: '<S18>/KalmanGainM'
   */
  { 0.026241420641870929, 0.069776736071493164 },

  /* Expression: pInitialization.C
   * Referenced by: '<S14>/C'
   */
  { 1.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S3>/Delay2'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S14>/X0'
   */
  { -0.046, 0.0 },

  /* Expression: -inf
   * Referenced by: '<S15>/SaturationSonar'
   */
  0.0,

  /* Expression: Estimator.alt.filterSonarNum
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  { 3.7568380197512489E-6, 1.1270514059253748E-5, 1.1270514059253748E-5,
    3.7568380197512489E-6 },

  /* Expression: Estimator.alt.filterSonarDen
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  { 1.0, -2.9371707284498907, 2.8762997234793319, -0.939098940325283 },

  /* Expression: 0
   * Referenced by: '<S15>/soonarFilter_IIR'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S96>/KalmanGainM'
   */
  { 0.12546560898608972, 0.0, 0.0, 0.12546560898608972 },

  /* Expression: [0 0 g]
   * Referenced by: '<S3>/Constant'
   */
  { 0.0, 0.0, 9.81 },

  /* Expression: pInitialization.A
   * Referenced by: '<S14>/A'
   */
  { 1.0, 0.0, 0.005, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S14>/B'
   */
  { 0.0, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S18>/CovarianceZ'
   */
  { 0.002624142064187093, 0.0069776736071493163, 0.0069776736071493163,
    0.0376076929350565 },

  /* Expression: pInitialization.L
   * Referenced by: '<S18>/KalmanGainL'
   */
  { 0.026590304322228395, 0.069776736071493775 },

  /* Expression: pInitialization.D
   * Referenced by: '<S14>/D'
   */
  0.0,

  /* Expression: pInitialization.P0
   * Referenced by: '<S14>/P0'
   */
  { 0.002694858992581965, 0.0071657120718245986, 0.0071657120718245986,
    0.038107692935056517 },

  /* Expression: pInitialization.G
   * Referenced by: '<S14>/G'
   */
  { 0.0, 1.0 },

  /* Expression: pInitialization.H
   * Referenced by: '<S14>/H'
   */
  0.0,

  /* Expression: pInitialization.N
   * Referenced by: '<S14>/N'
   */
  0.0,

  /* Expression: pInitialization.Q
   * Referenced by: '<S14>/Q'
   */
  0.0005,

  /* Expression: pInitialization.R
   * Referenced by: '<S14>/R'
   */
  0.1,

  /* Expression: [0 0 -g]
   * Referenced by: '<S76>/gravity'
   */
  { 0.0, 0.0, -9.81 },

  /* Expression: Estimator.pos.accelerationInputGain
   * Referenced by: '<S76>/gainaccinput'
   */
  0.2,

  /* Expression: pInitialization.Z
   * Referenced by: '<S96>/CovarianceZ'
   */
  { 0.62732804493044869, 0.0, 0.0, 0.62732804493044869 },

  /* Expression: pInitialization.L
   * Referenced by: '<S96>/KalmanGainL'
   */
  { 0.12546560898608977, 0.0, 0.0, 0.12546560898608977 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S152>/CovarianceZ'
   */
  { 0.0017270580244321163, 0.0, 0.0, 0.0017270580244323314 },

  /* Expression: pInitialization.L
   * Referenced by: '<S152>/KalmanGainL'
   */
  { 0.0057568600814403873, 0.0, 0.0, 0.0057568600814411012 },

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S8>/Gain'
   */
  0.999F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S8>/Gain1'
   */
  0.001F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S8>/Gain2'
   */
  0.101936802F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S8>/Gain3'
   */
  0.001F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S8>/Gain4'
   */
  0.999F,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S9>/Gain'
   */
  0.8F,

  /* Computed Parameter: Gain1_Gain_k
   * Referenced by: '<S9>/Gain1'
   */
  0.2F,

  /* Computed Parameter: C_Value_p
   * Referenced by: '<S149>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: X0_Value_j
   * Referenced by: '<S149>/X0'
   */
  { 0.1F, 0.0F },

  /* Expression: single(Estimator.complementaryFilterInit)
   * Referenced by: '<S2>/Memory'
   */
  { 0.0F, 0.0F, 0.0F },

  /* Expression: single(0)
   * Referenced by: '<S12>/Constant'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S12>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Bias_Bias
   * Referenced by: '<S5>/Bias'
   */
  { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: inverseIMU_gain_Gain
   * Referenced by: '<S5>/inverseIMU_gain'
   */
  { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F },

  /* Computed Parameter: IIR_IMUgyro_r_NumCoef
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIR_IMUgyro_r_DenCoef
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIR_IMUgyro_r_InitialStates
   * Referenced by: '<S5>/IIR_IMUgyro_r'
   */
  0.0F,

  /* Computed Parameter: gyro_sensitivity_Gain
   * Referenced by: '<S2>/gyro_sensitivity'
   */
  0.005F,

  /* Computed Parameter: FIR_IMUaccel_InitialStates
   * Referenced by: '<S5>/FIR_IMUaccel'
   */
  0.0F,

  /* Computed Parameter: FIR_IMUaccel_Coefficients
   * Referenced by: '<S5>/FIR_IMUaccel'
   */
  { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
    0.0264077242F },

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S2>/Constant'
   */
  2.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S2>/Merge'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S75>/Delay'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S150>/Constant'
   */
  2.0F,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S75>/Integrator'
   */
  0.005F,

  /* Computed Parameter: Integrator_IC
   * Referenced by: '<S75>/Integrator'
   */
  0.0F,

  /* Computed Parameter: UseIPPosSwitch_Threshold
   * Referenced by: '<S75>/UseIPPosSwitch'
   */
  0.0F,

  /* Computed Parameter: invertzaxisGain_Gain
   * Referenced by: '<S3>/invertzaxisGain'
   */
  -1.0F,

  /* Computed Parameter: prsToAltGain_Gain
   * Referenced by: '<S3>/prsToAltGain'
   */
  0.0832137167F,

  /* Computed Parameter: pressureFilter_IIR_NumCoef
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

  /* Computed Parameter: pressureFilter_IIR_DenCoef
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

  /* Computed Parameter: pressureFilter_IIR_InitialStates
   * Referenced by: '<S15>/pressureFilter_IIR'
   */
  0.0F,

  /* Computed Parameter: C_Value_f
   * Referenced by: '<S78>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: opticalFlowToVelocity_gain_Gain
   * Referenced by: '<S74>/opticalFlowToVelocity_gain'
   */
  1.0F,

  /* Computed Parameter: X0_Value_e
   * Referenced by: '<S78>/X0'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: IIRgyroz_NumCoef
   * Referenced by: '<S77>/IIRgyroz'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIRgyroz_DenCoef
   * Referenced by: '<S77>/IIRgyroz'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIRgyroz_InitialStates
   * Referenced by: '<S77>/IIRgyroz'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S84>/TSamp'
   */
  200.0F,

  /* Computed Parameter: Delay_InitialCondition_b
   * Referenced by: '<S74>/Delay'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition_bg
   * Referenced by: '<S1>/Delay'
   */
  0.0F,

  /* Computed Parameter: A_Value_c
   * Referenced by: '<S78>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_p
   * Referenced by: '<S78>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_f
   * Referenced by: '<S78>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: P0_Value_m
   * Referenced by: '<S78>/P0'
   */
  { 0.717328072F, -0.0F, -0.0F, 0.717328072F },

  /* Computed Parameter: G_Value_h
   * Referenced by: '<S78>/G'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: H_Value_c
   * Referenced by: '<S78>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_g
   * Referenced by: '<S78>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_f
   * Referenced by: '<S78>/Q'
   */
  { 0.09F, 0.0F, 0.0F, 0.09F },

  /* Computed Parameter: R_Value_k
   * Referenced by: '<S78>/R'
   */
  { 5.0F, 0.0F, 0.0F, 5.0F },

  /* Computed Parameter: A_Value_b
   * Referenced by: '<S149>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_pu
   * Referenced by: '<S149>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_b
   * Referenced by: '<S149>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: P0_Value_h
   * Referenced by: '<S149>/P0'
   */
  { 0.00173705805F, -0.0F, -0.0F, 0.00173705805F },

  /* Computed Parameter: G_Value_p
   * Referenced by: '<S149>/G'
   */
  { 0.1F, 0.0F, 0.0F, 0.1F },

  /* Computed Parameter: H_Value_d
   * Referenced by: '<S149>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_j
   * Referenced by: '<S149>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_n
   * Referenced by: '<S149>/Q'
   */
  { 0.001F, 0.0F, 0.0F, 0.001F },

  /* Computed Parameter: R_Value_kf
   * Referenced by: '<S149>/R'
   */
  { 0.3F, 0.0F, 0.0F, 0.3F },

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S64>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S144>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S200>/isSqrtUsed'
   */
  false,

  /* Start of '<S178>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S204>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S178>/Enabled Subsystem' */

  /* Start of '<S171>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S202>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  ,

  /* End of '<S171>/MeasurementUpdate' */

  /* Start of '<S122>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S148>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S122>/Enabled Subsystem' */

  /* Start of '<S115>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S146>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  /* End of '<S115>/MeasurementUpdate' */
};

MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

/* Block signals (default storage) */
B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
DW_stateEstimator_f_T stateEstimator_DW;

/*
 * Output and update for atomic system:
 *    '<S144>/SqrtUsedFcn'
 *    '<S200>/SqrtUsedFcn'
 */
void stateEstimator_SqrtUsedFcn(const real32_T rtu_u[4], boolean_T
  rtu_isSqrtUsed, real32_T rty_P[4])
{
  int32_T i;
  real32_T tmp;
  if (rtu_isSqrtUsed) {
    for (i = 0; i < 2; i++) {
      tmp = rtu_u[i + 2];
      rty_P[i] = tmp * rtu_u[2] + rtu_u[i] * rtu_u[0];
      rty_P[i + 2] = tmp * rtu_u[3] + rtu_u[i] * rtu_u[1];
    }
  } else {
    for (i = 0; i < 2; i++) {
      rty_P[i] = rtu_u[i];
      rty_P[i + 2] = rtu_u[i + 2];
    }
  }
}

/*
 * System initialize for enable system:
 *    '<S115>/MeasurementUpdate'
 *    '<S171>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S146>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S115>/MeasurementUpdate'
 *    '<S171>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S115>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S146>/Enable'
   */
  /* Disable for Outport: '<S146>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;

  /* End of Outputs for SubSystem: '<S115>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S115>/MeasurementUpdate'
 *    '<S171>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const real32_T
  rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2], real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S115>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S146>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S146>/Sum' incorporates:
     *  Product: '<S146>/C[k]*xhat[k|k-1]'
     *  Product: '<S146>/D[k]*u[k]'
     *  Sum: '<S146>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]) + (rtu_Dk[0] * rtu_uk[0] + rtu_uk[1] * rtu_Dk[2]));
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]) + (rtu_uk[0] * rtu_Dk[1] + rtu_uk[1] * rtu_Dk[3]));

    /* Product: '<S146>/Product3' */
    rty_Lykyhatkk1[0] = 0.0F;
    rty_Lykyhatkk1[0] += rtu_Lk[0] * rtu_yk_idx_0;
    rty_Lykyhatkk1[0] += rtu_Lk[2] * rtu_yk_idx_1;
    rty_Lykyhatkk1[1] = 0.0F;
    rty_Lykyhatkk1[1] += rtu_Lk[1] * rtu_yk_idx_0;
    rty_Lykyhatkk1[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else if (localDW->MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(rty_Lykyhatkk1, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S115>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S122>/Enabled Subsystem'
 *    '<S178>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S148>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S122>/Enabled Subsystem'
 *    '<S178>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S122>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S148>/Enable'
   */
  /* Disable for Outport: '<S148>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;

  /* End of Outputs for SubSystem: '<S122>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S122>/Enabled Subsystem'
 *    '<S178>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S122>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S148>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S148>/Add1' incorporates:
     *  Product: '<S148>/Product'
     */
    rtu_yk_idx_0 = rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]);
    rtu_yk_idx_1 = rtu_yk[1] - (rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]);

    /* Product: '<S148>/Product2' */
    rty_deltax[0] = 0.0F;
    rty_deltax[0] += rtu_Mk[0] * rtu_yk_idx_0;
    rty_deltax[0] += rtu_Mk[2] * rtu_yk_idx_1;
    rty_deltax[1] = 0.0F;
    rty_deltax[1] += rtu_Mk[1] * rtu_yk_idx_0;
    rty_deltax[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else if (localDW->EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(rty_deltax, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S122>/Enabled Subsystem' */
}

/* System initialize for referenced model: 'stateEstimator' */
void stateEstimator_Init(void)
{
  int32_T i;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
  stateEstimator_DW.x_est_at_15s =
    stateEstimator_P_g.DataStoreMemory_InitialValue;

  /* InitializeConditions for Delay: '<S149>/MemoryX' */
  stateEstimator_DW.icLoad = true;

  /* InitializeConditions for Memory: '<S2>/Memory' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_DW.Memory_PreviousInput[0] =
    stateEstimator_P_g.Memory_InitialCondition[0];
  stateEstimator_DW.Memory_PreviousInput[1] =
    stateEstimator_P_g.Memory_InitialCondition[1];
  stateEstimator_DW.Memory_PreviousInput[2] =
    stateEstimator_P_g.Memory_InitialCondition[2];

  /* InitializeConditions for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] =
      stateEstimator_P_g.IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S5>/FIR_IMUaccel' */
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] =
      stateEstimator_P_g.FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S5>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S75>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S75>/Integrator' */
  stateEstimator_DW.Integrator_DSTATE[0] = stateEstimator_P_g.Integrator_IC;

  /* InitializeConditions for Delay: '<S75>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S75>/Integrator' */
  stateEstimator_DW.Integrator_DSTATE[1] = stateEstimator_P_g.Integrator_IC;
  stateEstimator_DW.Integrator_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S3>/Delay2' */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_P_g.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S14>/MemoryX' */
  stateEstimator_DW.icLoad_p = true;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for Delay: '<S78>/MemoryX' */
  stateEstimator_DW.icLoad_i = true;

  /* InitializeConditions for DiscreteFilter: '<S77>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] =
      stateEstimator_P_g.IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S77>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S84>/UD' incorporates:
   *  Sum: '<S84>/Diff'
   *
   * Block description for '<S84>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S84>/Diff':
   *
   *  Add in CPU
   */
  stateEstimator_DW.UD_DSTATE[0] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S74>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[0] =
    stateEstimator_P_g.Delay_InitialCondition_b;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  stateEstimator_DW.Delay_DSTATE_p[0] =
    stateEstimator_P_g.Delay_InitialCondition_bg;

  /* SystemInitialize for Merge: '<S2>/Merge' */
  stateEstimator_B.Merge[0] = stateEstimator_P_g.Merge_InitialOutput;

  /* InitializeConditions for UnitDelay: '<S84>/UD' incorporates:
   *  Sum: '<S84>/Diff'
   *
   * Block description for '<S84>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S84>/Diff':
   *
   *  Add in CPU
   */
  stateEstimator_DW.UD_DSTATE[1] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S74>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[1] =
    stateEstimator_P_g.Delay_InitialCondition_b;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  stateEstimator_DW.Delay_DSTATE_p[1] =
    stateEstimator_P_g.Delay_InitialCondition_bg;

  /* SystemInitialize for Merge: '<S2>/Merge' */
  stateEstimator_B.Merge[1] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S178>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_e,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S178>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S68>/Product2' incorporates:
   *  Outport: '<S68>/deltax'
   */
  stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
  stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S42>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S122>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_k,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S122>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S66>/Product3' incorporates:
   *  Outport: '<S66>/L*(y[k]-yhat[k|k-1])'
   */
  stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
  stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S36>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S115>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_m,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of SystemInitialize for SubSystem: '<S115>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S171>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_j,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of SystemInitialize for SubSystem: '<S171>/MeasurementUpdate' */
}

/* Disable for referenced model: 'stateEstimator' */
void stateEstimator_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S178>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_m.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_e,
      &stateEstimator_DW.EnabledSubsystem_m,
      &stateEstimator_P_g.EnabledSubsystem_m);
  }

  /* End of Disable for SubSystem: '<S178>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S68>/Product2' incorporates:
     *  Outport: '<S68>/deltax'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S42>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S122>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_f.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_k,
      &stateEstimator_DW.EnabledSubsystem_f,
      &stateEstimator_P_g.EnabledSubsystem_f);
  }

  /* End of Disable for SubSystem: '<S122>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S66>/Product3' incorporates:
     *  Outport: '<S66>/L*(y[k]-yhat[k|k-1])'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S115>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_e.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_m,
      &stateEstimator_DW.MeasurementUpdate_e,
      &stateEstimator_P_g.MeasurementUpdate_e);
  }

  /* End of Disable for SubSystem: '<S115>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S171>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_b.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_j,
      &stateEstimator_DW.MeasurementUpdate_b,
      &stateEstimator_P_g.MeasurementUpdate_b);
  }

  /* End of Disable for SubSystem: '<S171>/MeasurementUpdate' */
}

/* Output and update for referenced model: 'stateEstimator' */
void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin, const
  sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin, const
  real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8])
{
  /* local block i/o variables */
  boolean_T rtb_DataTypeConversionEnable;
  boolean_T rtb_DataTypeConversionEnable_i;
  int32_T cff;
  int32_T denIdx;
  int32_T i;
  int32_T memOffset;
  real32_T rtb_Akxhatkk1_g_idx_1;
  real32_T rtb_TmpSignalConversionAtProductInport2_idx_0;
  real32_T rtb_TmpSignalConversionAtProductInport2_idx_1;
  real32_T rtb_sincos_o1_f_idx_0;
  real32_T rtb_sincos_o1_f_idx_1;
  real32_T rtb_sincos_o1_f_idx_2;
  real32_T rtb_sincos_o1_idx_2_tmp;
  boolean_T rtb_Compare_i;
  boolean_T rtb_LogicalOperator_cg;

  /* DataTypeConversion: '<S195>/Conversion' incorporates:
   *  Constant: '<S152>/KalmanGainM'
   */
  stateEstimator_B.Conversion_g[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[0];
  stateEstimator_B.Conversion_g[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[1];
  stateEstimator_B.Conversion_g[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[2];
  stateEstimator_B.Conversion_g[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[3];

  /* Reshape: '<S149>/Reshapey' */
  stateEstimator_B.Reshapey_a[0] = arg_posVIS_datin[0];
  stateEstimator_B.Reshapey_a[1] = arg_posVIS_datin[1];

  /* Delay: '<S149>/MemoryX' incorporates:
   *  Constant: '<S149>/X0'
   *  Reshape: '<S149>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad) {
    stateEstimator_DW.MemoryX_DSTATE_d[0] = stateEstimator_P_g.X0_Value_j[0];
    stateEstimator_DW.MemoryX_DSTATE_d[1] = stateEstimator_P_g.X0_Value_j[1];
  }

  /* Delay: '<S149>/MemoryX' */
  stateEstimator_B.MemoryX_f[0] = stateEstimator_DW.MemoryX_DSTATE_d[0];
  stateEstimator_B.MemoryX_f[1] = stateEstimator_DW.MemoryX_DSTATE_d[1];

  /* SignalConversion generated from: '<S12>/Trigonometric Function' incorporates:
   *  Memory: '<S2>/Memory'
   */
  rtb_sincos_o1_f_idx_0 = stateEstimator_DW.Memory_PreviousInput[2];
  rtb_sincos_o1_f_idx_1 = stateEstimator_DW.Memory_PreviousInput[1];
  rtb_sincos_o1_f_idx_2 = stateEstimator_DW.Memory_PreviousInput[0];

  /* SignalConversion generated from: '<S13>/Vector Concatenate' incorporates:
   *  Constant: '<S12>/Constant'
   */
  stateEstimator_B.MathFunction_b[0] = stateEstimator_P_g.Constant_Value_i;

  /* SignalConversion generated from: '<S13>/Vector Concatenate' incorporates:
   *  Constant: '<S12>/Constant'
   */
  stateEstimator_B.MathFunction_b[1] = stateEstimator_P_g.Constant_Value_i;

  /* Trigonometry: '<S12>/Trigonometric Function' incorporates:
   *  Memory: '<S2>/Memory'
   *  SignalConversion generated from: '<S12>/Trigonometric Function'
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_TmpSignalConversionAtProductInport2_idx_0 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);
  stateEstimator_DW.Memory_PreviousInput[1] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_TmpSignalConversionAtProductInport2_idx_1 = (real32_T)cos
    (rtb_sincos_o1_f_idx_1);

  /* SignalConversion generated from: '<S13>/Vector Concatenate' */
  stateEstimator_B.MathFunction_b[2] =
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* SignalConversion generated from: '<S13>/Vector Concatenate' */
  stateEstimator_B.MathFunction_b[3] = stateEstimator_DW.Memory_PreviousInput[0];

  /* Product: '<S12>/Product1' */
  stateEstimator_B.MathFunction_b[4] =
    rtb_TmpSignalConversionAtProductInport2_idx_0 *
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Product: '<S12>/Product3' */
  stateEstimator_B.MathFunction_b[5] = stateEstimator_DW.Memory_PreviousInput[0]
    * stateEstimator_DW.Memory_PreviousInput[1];

  /* SignalConversion generated from: '<S13>/Vector Concatenate' */
  stateEstimator_B.MathFunction_b[6] =
    rtb_TmpSignalConversionAtProductInport2_idx_0;

  /* Product: '<S12>/Product2' incorporates:
   *  Gain: '<S12>/Gain'
   */
  stateEstimator_B.MathFunction_b[7] = stateEstimator_P_g.Gain_Gain_c *
    stateEstimator_DW.Memory_PreviousInput[0] *
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Product: '<S12>/Product4' */
  stateEstimator_B.MathFunction_b[8] =
    rtb_TmpSignalConversionAtProductInport2_idx_0 *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Product: '<S12>/Divide' incorporates:
   *  Reshape: '<S13>/Reshape (9) to [3x3] column-major'
   */
  for (i = 0; i < 9; i++) {
    stateEstimator_B.Divide[i] = stateEstimator_B.MathFunction_b[i] /
      rtb_TmpSignalConversionAtProductInport2_idx_1;
  }

  /* End of Product: '<S12>/Divide' */

  /* Bias: '<S5>/Bias' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  for (i = 0; i < 6; i++) {
    stateEstimator_B.Sum1[i] = arg_sensorCalibration_datin[i] +
      stateEstimator_P_g.Bias_Bias[i];
  }

  /* End of Bias: '<S5>/Bias' */

  /* Gain: '<S5>/inverseIMU_gain' incorporates:
   *  Sum: '<S5>/Sum1'
   */
  stateEstimator_B.inverseIMU_gain[0] = (arg_sensordata_datin->ddx -
    stateEstimator_B.Sum1[0]) * stateEstimator_P_g.inverseIMU_gain_Gain[0];
  stateEstimator_B.inverseIMU_gain[1] = (arg_sensordata_datin->ddy -
    stateEstimator_B.Sum1[1]) * stateEstimator_P_g.inverseIMU_gain_Gain[1];
  stateEstimator_B.inverseIMU_gain[2] = (arg_sensordata_datin->ddz -
    stateEstimator_B.Sum1[2]) * stateEstimator_P_g.inverseIMU_gain_Gain[2];
  stateEstimator_B.inverseIMU_gain[3] = (arg_sensordata_datin->p -
    stateEstimator_B.Sum1[3]) * stateEstimator_P_g.inverseIMU_gain_Gain[3];
  stateEstimator_B.inverseIMU_gain[4] = (arg_sensordata_datin->q -
    stateEstimator_B.Sum1[4]) * stateEstimator_P_g.inverseIMU_gain_Gain[4];
  stateEstimator_B.inverseIMU_gain[5] = (arg_sensordata_datin->r -
    stateEstimator_B.Sum1[5]) * stateEstimator_P_g.inverseIMU_gain_Gain[5];

  /* DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  stateEstimator_B.denAccum = stateEstimator_B.inverseIMU_gain[5];
  denIdx = 1;
  for (i = 0; i < 5; i++) {
    stateEstimator_B.denAccum -= stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[denIdx]
      * stateEstimator_DW.IIR_IMUgyro_r_states[i];
    denIdx++;
  }

  stateEstimator_DW.IIR_IMUgyro_r_tmp = stateEstimator_B.denAccum /
    stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[0];
  stateEstimator_B.numAccum = stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[0] *
    stateEstimator_DW.IIR_IMUgyro_r_tmp;
  denIdx = 1;
  for (i = 0; i < 5; i++) {
    stateEstimator_B.numAccum += stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[denIdx]
      * stateEstimator_DW.IIR_IMUgyro_r_states[i];
    denIdx++;
  }

  /* SignalConversion generated from: '<S2>/Product' */
  rtb_TmpSignalConversionAtProductInport2_idx_0 =
    stateEstimator_B.inverseIMU_gain[3];
  rtb_TmpSignalConversionAtProductInport2_idx_1 =
    stateEstimator_B.inverseIMU_gain[4];

  /* Product: '<S2>/Product' incorporates:
   *  DiscreteFilter: '<S5>/IIR_IMUgyro_r'
   *  Product: '<S12>/Divide'
   */
  for (i = 0; i < 3; i++) {
    stateEstimator_B.MathFunction[i] = (stateEstimator_B.Divide[i + 3] *
      rtb_TmpSignalConversionAtProductInport2_idx_1 + stateEstimator_B.Divide[i]
      * rtb_TmpSignalConversionAtProductInport2_idx_0) +
      stateEstimator_B.Divide[i + 6] * stateEstimator_B.numAccum;
  }

  /* End of Product: '<S2>/Product' */

  /* Gain: '<S2>/gyro_sensitivity' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_DW.Memory_PreviousInput[0] =
    stateEstimator_P_g.gyro_sensitivity_Gain * stateEstimator_B.MathFunction[2];
  stateEstimator_DW.Memory_PreviousInput[1] =
    stateEstimator_P_g.gyro_sensitivity_Gain * stateEstimator_B.MathFunction[1];
  stateEstimator_DW.Memory_PreviousInput[2] =
    stateEstimator_P_g.gyro_sensitivity_Gain * stateEstimator_B.MathFunction[0];

  /* Sum: '<S2>/Sum' */
  rtb_sincos_o1_f_idx_2 += stateEstimator_DW.Memory_PreviousInput[2];

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_TmpSignalConversionAtProductInport2_idx_1 =
    stateEstimator_B.inverseIMU_gain[0] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  cff = 1;
  for (i = stateEstimator_DW.FIR_IMUaccel_circBuf; i < 5; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  for (i = 0; i < stateEstimator_DW.FIR_IMUaccel_circBuf; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  stateEstimator_B.FIR_IMUaccel[0] =
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/Constant'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  stateEstimator_B.denAccum = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_n);
  if ((rtb_TmpSignalConversionAtProductInport2_idx_1 < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_n > stateEstimator_B.denAccum)) {
    rtb_TmpSignalConversionAtProductInport2_idx_0 = -rt_powf_snf
      (-rtb_TmpSignalConversionAtProductInport2_idx_1,
       stateEstimator_P_g.Constant_Value_n);
  } else {
    rtb_TmpSignalConversionAtProductInport2_idx_0 = rt_powf_snf
      (rtb_TmpSignalConversionAtProductInport2_idx_1,
       stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_TmpSignalConversionAtProductInport2_idx_1 =
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0] *
    stateEstimator_B.inverseIMU_gain[1];
  cff = 1;
  for (i = stateEstimator_DW.FIR_IMUaccel_circBuf; i < 5; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i + 5] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  for (i = 0; i < stateEstimator_DW.FIR_IMUaccel_circBuf; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i + 5] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  stateEstimator_B.FIR_IMUaccel[1] =
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  rtb_Akxhatkk1_g_idx_1 = rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* DiscreteFir: '<S5>/FIR_IMUaccel' */
  rtb_TmpSignalConversionAtProductInport2_idx_1 =
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0] *
    stateEstimator_B.inverseIMU_gain[2];
  cff = 1;
  for (i = stateEstimator_DW.FIR_IMUaccel_circBuf; i < 5; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i + 10] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  for (i = 0; i < stateEstimator_DW.FIR_IMUaccel_circBuf; i++) {
    rtb_TmpSignalConversionAtProductInport2_idx_1 +=
      stateEstimator_DW.FIR_IMUaccel_states[i + 10] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[cff];
    cff++;
  }

  stateEstimator_B.FIR_IMUaccel[2] =
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/Constant'
   *  DiscreteFir: '<S5>/FIR_IMUaccel'
   */
  if ((rtb_Akxhatkk1_g_idx_1 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.denAccum)) {
    rtb_sincos_o1_idx_2_tmp = -rt_powf_snf(-rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_n);
  } else {
    rtb_sincos_o1_idx_2_tmp = rt_powf_snf(rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_n);
  }

  if ((rtb_TmpSignalConversionAtProductInport2_idx_1 < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_n > stateEstimator_B.denAccum)) {
    stateEstimator_B.denAccum = -rt_powf_snf
      (-rtb_TmpSignalConversionAtProductInport2_idx_1,
       stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.denAccum = rt_powf_snf
      (rtb_TmpSignalConversionAtProductInport2_idx_1,
       stateEstimator_P_g.Constant_Value_n);
  }

  /* Sqrt: '<S2>/Sqrt' incorporates:
   *  Math: '<S2>/Math Function'
   *  Sum: '<S2>/Sum of Elements'
   */
  rtb_TmpSignalConversionAtProductInport2_idx_0 = (real32_T)sqrt
    ((rtb_TmpSignalConversionAtProductInport2_idx_0 + rtb_sincos_o1_idx_2_tmp) +
     stateEstimator_B.denAccum);

  /* If: '<S2>/If' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Logic: '<S2>/Logical Operator'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   */
  if ((rtb_TmpSignalConversionAtProductInport2_idx_0 >
       stateEstimator_P_g.CompareToConstant_const) &&
      (rtb_TmpSignalConversionAtProductInport2_idx_0 <
       stateEstimator_P_g.CompareToConstant1_const)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Sum: '<S8>/Sum' incorporates:
     *  DiscreteFir: '<S5>/FIR_IMUaccel'
     *  Gain: '<S8>/Gain'
     *  Gain: '<S8>/Gain1'
     *  Merge: '<S2>/Merge'
     *  Product: '<S8>/Divide'
     *  Sum: '<S2>/Sum'
     *  Trigonometry: '<S8>/Trigonometric Function'
     */
    stateEstimator_B.Merge[1] = (rtb_sincos_o1_f_idx_0 +
      stateEstimator_DW.Memory_PreviousInput[0]) * stateEstimator_P_g.Gain_Gain
      + (real32_T)atan(stateEstimator_B.FIR_IMUaccel[1] /
                       rtb_TmpSignalConversionAtProductInport2_idx_1) *
      stateEstimator_P_g.Gain1_Gain;

    /* Gain: '<S8>/Gain2' */
    rtb_Akxhatkk1_g_idx_1 = stateEstimator_P_g.Gain2_Gain *
      stateEstimator_B.FIR_IMUaccel[0];

    /* Trigonometry: '<S8>/Trigonometric Function1' */
    if (rtb_Akxhatkk1_g_idx_1 > 1.0F) {
      rtb_Akxhatkk1_g_idx_1 = 1.0F;
    } else if (rtb_Akxhatkk1_g_idx_1 < -1.0F) {
      rtb_Akxhatkk1_g_idx_1 = -1.0F;
    }

    /* Sum: '<S8>/Sum1' incorporates:
     *  Gain: '<S8>/Gain3'
     *  Gain: '<S8>/Gain4'
     *  Merge: '<S2>/Merge'
     *  Sum: '<S2>/Sum'
     *  Trigonometry: '<S8>/Trigonometric Function1'
     */
    stateEstimator_B.Merge[0] = (rtb_sincos_o1_f_idx_1 +
      stateEstimator_DW.Memory_PreviousInput[1]) * stateEstimator_P_g.Gain4_Gain
      + stateEstimator_P_g.Gain3_Gain * (real32_T)asin(rtb_Akxhatkk1_g_idx_1);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Merge: '<S2>/Merge' incorporates:
     *  SignalConversion generated from: '<S10>/prin'
     *  Sum: '<S2>/Sum'
     */
    stateEstimator_B.Merge[0] = rtb_sincos_o1_f_idx_1 +
      stateEstimator_DW.Memory_PreviousInput[1];
    stateEstimator_B.Merge[1] = rtb_sincos_o1_f_idx_0 +
      stateEstimator_DW.Memory_PreviousInput[0];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
  }

  /* End of If: '<S2>/If' */

  /* If: '<S2>/If1' incorporates:
   *  Constant: '<S210>/Constant'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S210>/Compare'
   */
  if ((arg_usePosVIS_flagin != 0.0F) && (arg_posVIS_datin[0] !=
       stateEstimator_P_g.Checkifvalidvisualpositionestimateavailable_const)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Sum: '<S9>/Sum'
     */
    stateEstimator_B.MathFunction[0] = stateEstimator_P_g.Gain_Gain_i *
      rtb_sincos_o1_f_idx_2 + stateEstimator_P_g.Gain1_Gain_k *
      arg_posVIS_datin[3];

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
     *  SignalConversion generated from: '<S11>/yawin'
     */
    stateEstimator_B.MathFunction[0] = rtb_sincos_o1_f_idx_2;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
  }

  /* End of If: '<S2>/If1' */

  /* Sum: '<S150>/Add1' incorporates:
   *  Delay: '<S75>/Delay'
   */
  rtb_Akxhatkk1_g_idx_1 = arg_posVIS_datin[0] - stateEstimator_DW.Delay_DSTATE[0];

  /* Math: '<S150>/Math Function' incorporates:
   *  Constant: '<S150>/Constant'
   */
  stateEstimator_B.denAccum = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_e);
  if ((rtb_Akxhatkk1_g_idx_1 < 0.0F) && (stateEstimator_P_g.Constant_Value_e >
       stateEstimator_B.denAccum)) {
    stateEstimator_B.Integrator[0] = -rt_powf_snf(-rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_B.Integrator[0] = rt_powf_snf(rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_e);
  }

  /* Sum: '<S150>/Add1' incorporates:
   *  Delay: '<S75>/Delay'
   */
  rtb_Akxhatkk1_g_idx_1 = arg_posVIS_datin[1] - stateEstimator_DW.Delay_DSTATE[1];

  /* Abs: '<S150>/Abs1' incorporates:
   *  Abs: '<S77>/Abs3'
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   */
  rtb_TmpSignalConversionAtProductInport2_idx_0 = (real32_T)fabs
    (stateEstimator_B.Merge[1]);

  /* Abs: '<S150>/Abs' incorporates:
   *  Abs: '<S77>/Abs2'
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   */
  rtb_sincos_o1_f_idx_0 = (real32_T)fabs(stateEstimator_B.Merge[0]);

  /* Math: '<S150>/Math Function' incorporates:
   *  Constant: '<S150>/Constant'
   */
  if ((rtb_Akxhatkk1_g_idx_1 < 0.0F) && (stateEstimator_P_g.Constant_Value_e >
       stateEstimator_B.denAccum)) {
    stateEstimator_B.denAccum = -rt_powf_snf(-rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_B.denAccum = rt_powf_snf(rtb_Akxhatkk1_g_idx_1,
      stateEstimator_P_g.Constant_Value_e);
  }

  /* Logic: '<S150>/Logical Operator3' incorporates:
   *  Abs: '<S150>/Abs'
   *  Abs: '<S150>/Abs1'
   *  Constant: '<S205>/Constant'
   *  Constant: '<S206>/Constant'
   *  Constant: '<S207>/Constant'
   *  Constant: '<S208>/Constant'
   *  Math: '<S150>/Math Function'
   *  RelationalOperator: '<S205>/Compare'
   *  RelationalOperator: '<S206>/Compare'
   *  RelationalOperator: '<S207>/Compare'
   *  RelationalOperator: '<S208>/Compare'
   *  Sqrt: '<S150>/Sqrt'
   *  Sum: '<S150>/Sum of Elements'
   */
  stateEstimator_B.LogicalOperator3 = ((rtb_sincos_o1_f_idx_0 <=
    stateEstimator_P_g.maxp3_const) &&
    (rtb_TmpSignalConversionAtProductInport2_idx_0 <=
     stateEstimator_P_g.maxq3_const) && (arg_posVIS_datin[0] !=
    stateEstimator_P_g.checkifPosavailable_const) && ((real32_T)sqrt
    (stateEstimator_B.Integrator[0] + stateEstimator_B.denAccum) <
    stateEstimator_P_g.planarjumpsVISPOS_const));

  /* DataTypeConversion: '<S149>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable = stateEstimator_B.LogicalOperator3;

  /* Outputs for Enabled SubSystem: '<S178>/Enabled Subsystem' */
  /* Constant: '<S149>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable,
    stateEstimator_B.Conversion_g, stateEstimator_P_g.C_Value_p,
    stateEstimator_B.Reshapey_a, stateEstimator_B.MemoryX_f,
    stateEstimator_B.Product2_e, &stateEstimator_DW.EnabledSubsystem_m,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of Outputs for SubSystem: '<S178>/Enabled Subsystem' */

  /* Reshape: '<S149>/Reshapexhat' incorporates:
   *  Delay: '<S75>/Delay'
   *  Sum: '<S178>/Add'
   */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_B.Product2_e[0] +
    stateEstimator_B.MemoryX_f[0];
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_B.Product2_e[1] +
    stateEstimator_B.MemoryX_f[1];

  /* DiscreteIntegrator: '<S75>/Integrator' */
  if (arg_controlModePosVSOrient_flagin &&
      (stateEstimator_DW.Integrator_PrevResetState <= 0)) {
    stateEstimator_DW.Integrator_DSTATE[0] = stateEstimator_P_g.Integrator_IC;
    stateEstimator_DW.Integrator_DSTATE[1] = stateEstimator_P_g.Integrator_IC;
  }

  /* Switch: '<S75>/UseIPPosSwitch' incorporates:
   *  Delay: '<S75>/Delay'
   *  DiscreteIntegrator: '<S75>/Integrator'
   */
  if (arg_usePosVIS_flagin > stateEstimator_P_g.UseIPPosSwitch_Threshold) {
    /* BusCreator generated from: '<Root>/states_estimout' incorporates:
     *  Delay: '<S75>/Delay'
     */
    arg_states_estimout->X = stateEstimator_DW.Delay_DSTATE[0];
    rtb_Akxhatkk1_g_idx_1 = stateEstimator_DW.Delay_DSTATE[1];
  } else {
    /* BusCreator generated from: '<Root>/states_estimout' incorporates:
     *  DiscreteIntegrator: '<S75>/Integrator'
     */
    arg_states_estimout->X = stateEstimator_DW.Integrator_DSTATE[0];
    rtb_Akxhatkk1_g_idx_1 = stateEstimator_DW.Integrator_DSTATE[1];
  }

  /* End of Switch: '<S75>/UseIPPosSwitch' */

  /* Gain: '<S3>/invertzaxisGain' */
  stateEstimator_B.invertzaxisGain = (real_T)
    stateEstimator_P_g.invertzaxisGain_Gain *
    arg_sensordata_datin->altitude_sonar;

  /* RelationalOperator: '<S17>/Compare' incorporates:
   *  Constant: '<S17>/Constant'
   *  Delay: '<S3>/Delay2'
   */
  stateEstimator_B.Compare = (stateEstimator_DW.Delay2_DSTATE >
    stateEstimator_P_g.outlierBelowFloor_const);

  /* Delay: '<S14>/MemoryX' incorporates:
   *  Constant: '<S14>/X0'
   *  DataTypeConversion: '<S14>/DataTypeConversionReset'
   *  Reshape: '<S14>/ReshapeX0'
   */
  stateEstimator_DW.icLoad_p = (stateEstimator_B.Compare ||
    stateEstimator_DW.icLoad_p);
  if (stateEstimator_DW.icLoad_p) {
    stateEstimator_DW.MemoryX_DSTATE[0] = stateEstimator_P_g.X0_Value[0];
    stateEstimator_DW.MemoryX_DSTATE[1] = stateEstimator_P_g.X0_Value[1];
  }

  /* DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_tmp = (((stateEstimator_B.invertzaxisGain -
    stateEstimator_DW.soonarFilter_IIR_states[0] *
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[1]) -
    stateEstimator_DW.soonarFilter_IIR_states[1] *
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[2]) -
    stateEstimator_DW.soonarFilter_IIR_states[2] *
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[3]) /
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[0];

  /* DiscreteFilter: '<S15>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Gain: '<S3>/prsToAltGain'
   *  Sum: '<S5>/Sum2'
   */
  stateEstimator_DW.pressureFilter_IIR_tmp = ((((arg_sensordata_datin->prs -
    arg_sensorCalibration_datin[6]) * stateEstimator_P_g.prsToAltGain_Gain -
    stateEstimator_DW.pressureFilter_IIR_states[0] *
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[1]) -
    stateEstimator_DW.pressureFilter_IIR_states[1] *
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[2]) -
    stateEstimator_DW.pressureFilter_IIR_states[2] *
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[3]) /
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[0];

  /* Saturate: '<S15>/SaturationSonar' */
  if (stateEstimator_B.invertzaxisGain > -rtP_Sensors.altSensorMin) {
    stateEstimator_B.rtb_Add_j_idx_0 = -rtP_Sensors.altSensorMin;
  } else if (stateEstimator_B.invertzaxisGain <
             stateEstimator_P_g.SaturationSonar_LowerSat) {
    stateEstimator_B.rtb_Add_j_idx_0 =
      stateEstimator_P_g.SaturationSonar_LowerSat;
  } else {
    stateEstimator_B.rtb_Add_j_idx_0 = stateEstimator_B.invertzaxisGain;
  }

  /* Logic: '<S15>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S15>/Absestdiff'
   *  Abs: '<S15>/Absestdiff1'
   *  Abs: '<S15>/Absestdiff2'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Delay: '<S3>/Delay2'
   *  DiscreteFilter: '<S15>/pressureFilter_IIR'
   *  DiscreteFilter: '<S15>/soonarFilter_IIR'
   *  Logic: '<S15>/findingoutliers'
   *  Logic: '<S15>/newupdateneeded'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  Saturate: '<S15>/SaturationSonar'
   *  Sum: '<S15>/Add'
   *  Sum: '<S15>/Add1'
   *  Sum: '<S15>/Add2'
   */
  stateEstimator_B.nicemeasurementornewupdateneeded = (((fabs
    (stateEstimator_DW.Delay2_DSTATE - stateEstimator_B.rtb_Add_j_idx_0) <=
    stateEstimator_P_g.outlierJump_const) && (stateEstimator_B.invertzaxisGain <
    -rtP_Sensors.altSensorMin)) || ((fabs
    ((((stateEstimator_P_g.soonarFilter_IIR_NumCoef[0] *
        stateEstimator_DW.soonarFilter_IIR_tmp +
        stateEstimator_DW.soonarFilter_IIR_states[0] *
        stateEstimator_P_g.soonarFilter_IIR_NumCoef[1]) +
       stateEstimator_DW.soonarFilter_IIR_states[1] *
       stateEstimator_P_g.soonarFilter_IIR_NumCoef[2]) +
      stateEstimator_DW.soonarFilter_IIR_states[2] *
      stateEstimator_P_g.soonarFilter_IIR_NumCoef[3]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentStateVeryOffsonarflt_const) && (fabs
    ((((stateEstimator_P_g.pressureFilter_IIR_NumCoef[0] *
        stateEstimator_DW.pressureFilter_IIR_tmp +
        stateEstimator_DW.pressureFilter_IIR_states[0] *
        stateEstimator_P_g.pressureFilter_IIR_NumCoef[1]) +
       stateEstimator_DW.pressureFilter_IIR_states[1] *
       stateEstimator_P_g.pressureFilter_IIR_NumCoef[2]) +
      stateEstimator_DW.pressureFilter_IIR_states[2] *
      stateEstimator_P_g.pressureFilter_IIR_NumCoef[3]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentEstimateVeryOffFromPressure_const)));

  /* Outputs for Enabled SubSystem: '<S42>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  /* DataTypeConversion: '<S14>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    stateEstimator_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S68>/Add1' incorporates:
     *  Constant: '<S14>/C'
     *  Delay: '<S14>/MemoryX'
     *  Product: '<S68>/Product'
     *  Reshape: '<S14>/Reshapey'
     */
    stateEstimator_B.Sum_k = stateEstimator_B.invertzaxisGain -
      (stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
       stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]);

    /* Product: '<S68>/Product2' incorporates:
     *  Constant: '<S18>/KalmanGainM'
     *  DataTypeConversion: '<S59>/Conversion'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.KalmanGainM_Value_p[0] *
      stateEstimator_B.Sum_k;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.KalmanGainM_Value_p[1] *
      stateEstimator_B.Sum_k;
  } else if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S68>/Product2' incorporates:
     *  Outport: '<S68>/deltax'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S42>/Enabled Subsystem' */

  /* Sum: '<S42>/Add' incorporates:
   *  Delay: '<S14>/MemoryX'
   */
  stateEstimator_B.rtb_Add_j_idx_0 = stateEstimator_B.Product2[0] +
    stateEstimator_DW.MemoryX_DSTATE[0];
  stateEstimator_B.rtb_Add_j_idx_1 = stateEstimator_B.Product2[1] +
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* DataTypeConversion: '<S139>/Conversion' incorporates:
   *  Constant: '<S96>/KalmanGainM'
   */
  stateEstimator_B.Conversion_p[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[0];
  stateEstimator_B.Conversion_p[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[1];
  stateEstimator_B.Conversion_p[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[2];
  stateEstimator_B.Conversion_p[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[3];

  /* Gain: '<S74>/opticalFlowToVelocity_gain' */
  stateEstimator_B.opticalFlowToVelocity_gain[0] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[0];
  stateEstimator_B.opticalFlowToVelocity_gain[1] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[1];
  stateEstimator_B.opticalFlowToVelocity_gain[2] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[2];

  /* Reshape: '<S78>/Reshapey' */
  stateEstimator_B.Reshapey_o[0] = stateEstimator_B.opticalFlowToVelocity_gain[0];
  stateEstimator_B.Reshapey_o[1] = stateEstimator_B.opticalFlowToVelocity_gain[1];

  /* Delay: '<S78>/MemoryX' incorporates:
   *  Constant: '<S78>/X0'
   *  Reshape: '<S78>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad_i) {
    stateEstimator_DW.MemoryX_DSTATE_d5[0] = stateEstimator_P_g.X0_Value_e[0];
    stateEstimator_DW.MemoryX_DSTATE_d5[1] = stateEstimator_P_g.X0_Value_e[1];
  }

  /* Delay: '<S78>/MemoryX' */
  stateEstimator_B.MemoryX_m[0] = stateEstimator_DW.MemoryX_DSTATE_d5[0];
  stateEstimator_B.MemoryX_m[1] = stateEstimator_DW.MemoryX_DSTATE_d5[1];
  for (cff = 0; cff < 2; cff++) {
    /* DiscreteFilter: '<S77>/IIRgyroz' */
    memOffset = cff * 5;
    stateEstimator_B.denAccum = stateEstimator_B.inverseIMU_gain[cff + 3];
    denIdx = 1;
    for (i = 0; i < 5; i++) {
      stateEstimator_B.denAccum -= stateEstimator_DW.IIRgyroz_states[memOffset +
        i] * stateEstimator_P_g.IIRgyroz_DenCoef[denIdx];
      denIdx++;
    }

    stateEstimator_DW.IIRgyroz_tmp[cff] = stateEstimator_B.denAccum /
      stateEstimator_P_g.IIRgyroz_DenCoef[0];
    stateEstimator_B.denAccum = stateEstimator_P_g.IIRgyroz_NumCoef[0] *
      stateEstimator_DW.IIRgyroz_tmp[cff];
    denIdx = 1;
    for (i = 0; i < 5; i++) {
      stateEstimator_B.denAccum += stateEstimator_DW.IIRgyroz_states[memOffset +
        i] * stateEstimator_P_g.IIRgyroz_NumCoef[denIdx];
      denIdx++;
    }

    /* SampleTimeMath: '<S84>/TSamp' incorporates:
     *  DiscreteFilter: '<S77>/IIRgyroz'
     *
     * About '<S84>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.denAccum *= stateEstimator_P_g.TSamp_WtEt;

    /* Sum: '<S84>/Diff' incorporates:
     *  UnitDelay: '<S84>/UD'
     *
     * Block description for '<S84>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S84>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[cff] = stateEstimator_B.denAccum -
      stateEstimator_DW.UD_DSTATE[cff];

    /* DiscreteFilter: '<S77>/IIRgyroz' incorporates:
     *  Delay: '<S74>/Delay'
     *  Sum: '<S77>/Add'
     */
    stateEstimator_B.Delay[cff] =
      stateEstimator_B.opticalFlowToVelocity_gain[cff] -
      stateEstimator_DW.Delay_DSTATE_g[cff];

    /* SampleTimeMath: '<S84>/TSamp'
     *
     * About '<S84>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.Integrator[cff] = stateEstimator_B.denAccum;
  }

  /* Abs: '<S77>/Abs' incorporates:
   *  Abs: '<S77>/Abs4'
   */
  stateEstimator_B.denAccum = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[3]);

  /* Abs: '<S77>/Abs1' incorporates:
   *  Abs: '<S77>/Abs5'
   */
  rtb_sincos_o1_f_idx_1 = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[4]);

  /* Logic: '<S77>/Logical Operator3' incorporates:
   *  Abs: '<S77>/Abs'
   *  Abs: '<S77>/Abs1'
   *  Abs: '<S77>/Abs6'
   *  Abs: '<S77>/Abs7'
   *  Abs: '<S77>/Abs8'
   *  Abs: '<S77>/Abs9'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S90>/Constant'
   *  Constant: '<S91>/Constant'
   *  Constant: '<S92>/Constant'
   *  Constant: '<S93>/Constant'
   *  Constant: '<S94>/Constant'
   *  Constant: '<S95>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Logic: '<S77>/Logical Operator'
   *  Logic: '<S77>/Logical Operator1'
   *  Logic: '<S77>/Logical Operator2'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   *  RelationalOperator: '<S91>/Compare'
   *  RelationalOperator: '<S92>/Compare'
   *  RelationalOperator: '<S93>/Compare'
   *  RelationalOperator: '<S94>/Compare'
   *  RelationalOperator: '<S95>/Compare'
   *  Reshape: '<S14>/Reshapexhat'
   */
  stateEstimator_B.LogicalOperator3_a = ((((rtb_sincos_o1_f_idx_0 <=
    stateEstimator_P_g.maxp_const) &&
    (rtb_TmpSignalConversionAtProductInport2_idx_0 <=
     stateEstimator_P_g.maxq_const) && (stateEstimator_B.denAccum <=
    stateEstimator_P_g.maxw1_const) && (rtb_sincos_o1_f_idx_1 <=
    stateEstimator_P_g.maxw2_const) && ((real32_T)fabs
    (stateEstimator_DW.UD_DSTATE[0]) <= stateEstimator_P_g.maxdw1_const) &&
    ((real32_T)fabs(stateEstimator_DW.UD_DSTATE[1]) <=
     stateEstimator_P_g.maxdw2_const)) || ((stateEstimator_B.denAccum <=
    stateEstimator_P_g.maxp2_const) && (rtb_sincos_o1_f_idx_1 <=
    stateEstimator_P_g.maxq2_const))) && ((real32_T)fabs(stateEstimator_B.Delay
    [0]) <= stateEstimator_P_g.maxw3_const) && ((real32_T)fabs
    (stateEstimator_B.Delay[1]) <= stateEstimator_P_g.maxw4_const) && ((real32_T)
    stateEstimator_B.rtb_Add_j_idx_0 <= stateEstimator_P_g.minHeightforOF_const));

  /* DataTypeConversion: '<S78>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_i = stateEstimator_B.LogicalOperator3_a;

  /* Outputs for Enabled SubSystem: '<S122>/Enabled Subsystem' */
  /* Constant: '<S78>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_p, stateEstimator_P_g.C_Value_f,
    stateEstimator_B.Reshapey_o, stateEstimator_B.MemoryX_m,
    stateEstimator_B.Product2_k, &stateEstimator_DW.EnabledSubsystem_f,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S122>/Enabled Subsystem' */

  /* Reshape: '<S78>/Reshapexhat' incorporates:
   *  Delay: '<S74>/Delay'
   *  Sum: '<S122>/Add'
   */
  stateEstimator_DW.Delay_DSTATE_g[0] = stateEstimator_B.Product2_k[0] +
    stateEstimator_B.MemoryX_m[0];
  stateEstimator_DW.Delay_DSTATE_g[1] = stateEstimator_B.Product2_k[1] +
    stateEstimator_B.MemoryX_m[1];

  /* Trigonometry: '<S16>/sincos' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   *  Trigonometry: '<S151>/sincos'
   *  Trigonometry: '<S80>/sincos'
   */
  rtb_TmpSignalConversionAtProductInport2_idx_0 = (real32_T)sin
    (stateEstimator_B.MathFunction[0]);
  rtb_sincos_o1_f_idx_0 = (real32_T)cos(stateEstimator_B.MathFunction[0]);
  stateEstimator_DW.Memory_PreviousInput[0] = rtb_sincos_o1_f_idx_0;
  stateEstimator_B.denAccum = (real32_T)sin(stateEstimator_B.Merge[0]);
  stateEstimator_DW.Memory_PreviousInput[1] = (real32_T)cos
    (stateEstimator_B.Merge[0]);
  rtb_sincos_o1_idx_2_tmp = (real32_T)sin(stateEstimator_B.Merge[1]);
  stateEstimator_DW.Memory_PreviousInput[2] = (real32_T)cos
    (stateEstimator_B.Merge[1]);

  /* Fcn: '<S16>/Fcn11' */
  stateEstimator_B.Reshape9to3x3columnmajor[0] =
    stateEstimator_DW.Memory_PreviousInput[0] *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Fcn: '<S16>/Fcn21' incorporates:
   *  Fcn: '<S16>/Fcn22'
   *  Trigonometry: '<S16>/sincos'
   */
  rtb_sincos_o1_f_idx_1 = stateEstimator_B.denAccum * rtb_sincos_o1_idx_2_tmp;
  stateEstimator_B.Reshape9to3x3columnmajor[1] = rtb_sincos_o1_f_idx_1 *
    stateEstimator_DW.Memory_PreviousInput[0] -
    rtb_TmpSignalConversionAtProductInport2_idx_0 *
    stateEstimator_DW.Memory_PreviousInput[2];

  /* Fcn: '<S16>/Fcn31' incorporates:
   *  Fcn: '<S16>/Fcn32'
   *  Trigonometry: '<S16>/sincos'
   */
  rtb_sincos_o1_f_idx_2 = stateEstimator_B.denAccum *
    stateEstimator_DW.Memory_PreviousInput[2];
  stateEstimator_B.Reshape9to3x3columnmajor[2] = rtb_sincos_o1_f_idx_2 *
    stateEstimator_DW.Memory_PreviousInput[0] +
    rtb_TmpSignalConversionAtProductInport2_idx_0 * rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S16>/Fcn12' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[3] =
    rtb_TmpSignalConversionAtProductInport2_idx_0 *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Fcn: '<S16>/Fcn22' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[4] = rtb_sincos_o1_f_idx_1 *
    rtb_TmpSignalConversionAtProductInport2_idx_0 +
    stateEstimator_DW.Memory_PreviousInput[0] *
    stateEstimator_DW.Memory_PreviousInput[2];

  /* Fcn: '<S16>/Fcn32' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[5] = rtb_sincos_o1_f_idx_2 *
    rtb_TmpSignalConversionAtProductInport2_idx_0 -
    stateEstimator_DW.Memory_PreviousInput[0] * rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S16>/Fcn13' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[6] = -stateEstimator_B.denAccum;

  /* Fcn: '<S16>/Fcn23' incorporates:
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[7] =
    stateEstimator_DW.Memory_PreviousInput[1] * rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S16>/Fcn33' */
  stateEstimator_B.Reshape9to3x3columnmajor[8] =
    stateEstimator_DW.Memory_PreviousInput[1] *
    stateEstimator_DW.Memory_PreviousInput[2];

  /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
   *  Delay: '<S1>/Delay'
   */
  stateEstimator_B.unnamed_idx_0_tmp_tmp = stateEstimator_DW.Delay_DSTATE_p[0];
  stateEstimator_B.unnamed_idx_1_tmp_tmp = stateEstimator_DW.Delay_DSTATE_p[1];

  /* BusCreator generated from: '<Root>/states_estimout' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Delay: '<S74>/Delay'
   *  Reshape: '<S14>/Reshapexhat'
   */
  arg_states_estimout->Y = rtb_Akxhatkk1_g_idx_1;
  arg_states_estimout->Z = (real32_T)stateEstimator_B.rtb_Add_j_idx_0;
  arg_states_estimout->yaw = stateEstimator_B.MathFunction[0];
  arg_states_estimout->pitch = stateEstimator_B.Merge[0];
  arg_states_estimout->roll = stateEstimator_B.Merge[1];
  arg_states_estimout->dx = stateEstimator_DW.Delay_DSTATE_g[0];
  arg_states_estimout->dy = stateEstimator_DW.Delay_DSTATE_g[1];

  /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
   *  Delay: '<S1>/Delay'
   */
  stateEstimator_B.Sum_k = stateEstimator_DW.Delay_DSTATE_p[0];
  stateEstimator_B.unnamed_idx_1 = stateEstimator_DW.Delay_DSTATE_p[1];

  /* Product: '<S3>/Product1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Reshape: '<S14>/Reshapexhat'
   *  Reshape: '<S83>/Reshape (9) to [3x3] column-major'
   *  SignalConversion generated from: '<S3>/Product1'
   */
  for (i = 0; i < 3; i++) {
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp =
      stateEstimator_B.Reshape9to3x3columnmajor[i + 3];
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp_c =
      stateEstimator_B.Reshape9to3x3columnmajor[i + 6] *
      stateEstimator_B.rtb_Add_j_idx_1;
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_m[i] =
      (stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp *
       stateEstimator_B.unnamed_idx_1_tmp_tmp +
       stateEstimator_B.Reshape9to3x3columnmajor[i] *
       stateEstimator_B.unnamed_idx_0_tmp_tmp) +
      stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp_c;
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[i] =
      (stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp *
       stateEstimator_B.unnamed_idx_1 +
       stateEstimator_B.Reshape9to3x3columnmajor[i] * stateEstimator_B.Sum_k) +
      stateEstimator_B.rtb_Reshape9to3x3columnmajor_tmp_c;
  }

  /* End of Product: '<S3>/Product1' */

  /* DataTypeConversion: '<S3>/Data Type Conversion2' */
  rtb_Akxhatkk1_g_idx_1 = (real32_T)
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_m[2];

  /* BusCreator generated from: '<Root>/states_estimout' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion2'
   *  DiscreteFilter: '<S5>/IIR_IMUgyro_r'
   *  SignalConversion generated from: '<S2>/Product'
   */
  arg_states_estimout->dz = (real32_T)
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_c[2];
  arg_states_estimout->p = stateEstimator_B.inverseIMU_gain[3];
  arg_states_estimout->q = stateEstimator_B.inverseIMU_gain[4];
  arg_states_estimout->r = stateEstimator_B.numAccum;

  /* MATLAB Function: '<S64>/SqrtUsedFcn' incorporates:
   *  Constant: '<S18>/CovarianceZ'
   *  Constant: '<S64>/isSqrtUsed'
   */
  if (stateEstimator_P_g.isSqrtUsed_Value) {
    for (i = 0; i < 2; i++) {
      stateEstimator_B.Sum_k = stateEstimator_P_g.CovarianceZ_Value[i + 2];
      stateEstimator_B.P[i] = stateEstimator_B.Sum_k *
        stateEstimator_P_g.CovarianceZ_Value[2] +
        stateEstimator_P_g.CovarianceZ_Value[i] *
        stateEstimator_P_g.CovarianceZ_Value[0];
      stateEstimator_B.P[i + 2] = stateEstimator_B.Sum_k *
        stateEstimator_P_g.CovarianceZ_Value[3] +
        stateEstimator_P_g.CovarianceZ_Value[i] *
        stateEstimator_P_g.CovarianceZ_Value[1];
    }
  } else {
    for (i = 0; i < 2; i++) {
      stateEstimator_B.P[i] = stateEstimator_P_g.CovarianceZ_Value[i];
      stateEstimator_B.P[i + 2] = stateEstimator_P_g.CovarianceZ_Value[i + 2];
    }
  }

  /* End of MATLAB Function: '<S64>/SqrtUsedFcn' */
  for (i = 0; i < 3; i++) {
    /* Sum: '<S3>/Sum' incorporates:
     *  Constant: '<S3>/Constant'
     *  DiscreteFir: '<S5>/FIR_IMUaccel'
     *  Math: '<S3>/Math Function'
     *  Product: '<S3>/Product'
     *  Reshape: '<S83>/Reshape (9) to [3x3] column-major'
     */
    stateEstimator_B.Sum[i] = ((stateEstimator_B.Reshape9to3x3columnmajor[3 * i
      + 1] * stateEstimator_B.FIR_IMUaccel[1] +
      stateEstimator_B.Reshape9to3x3columnmajor[3 * i] *
      stateEstimator_B.FIR_IMUaccel[0]) +
      stateEstimator_B.Reshape9to3x3columnmajor[3 * i + 2] *
      rtb_TmpSignalConversionAtProductInport2_idx_1) +
      stateEstimator_P_g.Constant_Value[i];
  }

  /* Outputs for Enabled SubSystem: '<S36>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S66>/Enable'
   */
  /* DataTypeConversion: '<S14>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    stateEstimator_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S66>/D[k]*u[k]' incorporates:
     *  Constant: '<S14>/D'
     *  Delay: '<S3>/Delay2'
     *  Reshape: '<S14>/Reshapeu'
     */
    stateEstimator_DW.Delay2_DSTATE = stateEstimator_P_g.D_Value *
      stateEstimator_B.Sum[2];

    /* Sum: '<S66>/Sum' incorporates:
     *  Constant: '<S14>/C'
     *  Delay: '<S14>/MemoryX'
     *  Delay: '<S3>/Delay2'
     *  Product: '<S66>/C[k]*xhat[k|k-1]'
     *  Reshape: '<S14>/Reshapey'
     *  Sum: '<S66>/Add1'
     */
    stateEstimator_B.Sum_k = stateEstimator_B.invertzaxisGain -
      ((stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
        stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]) +
       stateEstimator_DW.Delay2_DSTATE);

    /* Product: '<S66>/Product3' incorporates:
     *  Constant: '<S18>/KalmanGainL'
     *  DataTypeConversion: '<S58>/Conversion'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.KalmanGainL_Value[0] *
      stateEstimator_B.Sum_k;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.KalmanGainL_Value[1] *
      stateEstimator_B.Sum_k;
  } else if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S66>/Product3' incorporates:
     *  Outport: '<S66>/L*(y[k]-yhat[k|k-1])'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S36>/MeasurementUpdate' */

  /* Trigonometry: '<S80>/sincos' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   */
  stateEstimator_B.denAccum = (real32_T)sin(stateEstimator_B.Merge[0]);
  rtb_TmpSignalConversionAtProductInport2_idx_1 = (real32_T)cos
    (stateEstimator_B.Merge[0]);
  rtb_sincos_o1_idx_2_tmp = (real32_T)sin(stateEstimator_B.Merge[1]);
  stateEstimator_B.numAccum = (real32_T)cos(stateEstimator_B.Merge[1]);

  /* Fcn: '<S80>/Fcn11' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[0] = rtb_sincos_o1_f_idx_0 *
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Fcn: '<S80>/Fcn21' incorporates:
   *  Fcn: '<S80>/Fcn22'
   *  Trigonometry: '<S80>/sincos'
   */
  rtb_sincos_o1_f_idx_1 = stateEstimator_B.denAccum * rtb_sincos_o1_idx_2_tmp;
  stateEstimator_B.Reshape9to3x3columnmajor[1] = rtb_sincos_o1_f_idx_1 *
    rtb_sincos_o1_f_idx_0 - rtb_TmpSignalConversionAtProductInport2_idx_0 *
    stateEstimator_B.numAccum;

  /* Fcn: '<S80>/Fcn31' incorporates:
   *  Fcn: '<S80>/Fcn32'
   *  Trigonometry: '<S80>/sincos'
   */
  rtb_sincos_o1_f_idx_2 = stateEstimator_B.denAccum * stateEstimator_B.numAccum;
  stateEstimator_B.Reshape9to3x3columnmajor[2] = rtb_sincos_o1_f_idx_2 *
    rtb_sincos_o1_f_idx_0 + rtb_TmpSignalConversionAtProductInport2_idx_0 *
    rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S80>/Fcn12' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[3] =
    rtb_TmpSignalConversionAtProductInport2_idx_0 *
    rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Fcn: '<S80>/Fcn22' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[4] = rtb_sincos_o1_f_idx_1 *
    rtb_TmpSignalConversionAtProductInport2_idx_0 + rtb_sincos_o1_f_idx_0 *
    stateEstimator_B.numAccum;

  /* Fcn: '<S80>/Fcn32' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[5] = rtb_sincos_o1_f_idx_2 *
    rtb_TmpSignalConversionAtProductInport2_idx_0 - rtb_sincos_o1_f_idx_0 *
    rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S80>/Fcn13' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[6] = -stateEstimator_B.denAccum;

  /* Fcn: '<S80>/Fcn23' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[7] =
    rtb_TmpSignalConversionAtProductInport2_idx_1 * rtb_sincos_o1_idx_2_tmp;

  /* Fcn: '<S80>/Fcn33' incorporates:
   *  Trigonometry: '<S80>/sincos'
   */
  stateEstimator_B.Reshape9to3x3columnmajor[8] =
    rtb_TmpSignalConversionAtProductInport2_idx_1 * stateEstimator_B.numAccum;

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Reshape: '<S14>/Reshapexhat'
   */
  rtb_Compare_i = ((real32_T)stateEstimator_B.rtb_Add_j_idx_0 <=
                   stateEstimator_P_g.DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S76>/Logical Operator' incorporates:
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   */
  rtb_LogicalOperator_cg = ((stateEstimator_B.opticalFlowToVelocity_gain[0] !=
    stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
    || (stateEstimator_B.opticalFlowToVelocity_gain[1] !=
        stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));

  /* Sum: '<S76>/Add' incorporates:
   *  Constant: '<S76>/gravity'
   *  Product: '<S76>/Product1'
   *  Reshape: '<S83>/Reshape (9) to [3x3] column-major'
   */
  for (i = 0; i < 3; i++) {
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_m[i] =
      stateEstimator_B.FIR_IMUaccel[i] -
      ((stateEstimator_B.Reshape9to3x3columnmajor[i + 3] *
        stateEstimator_P_g.gravity_Value[1] +
        stateEstimator_B.Reshape9to3x3columnmajor[i] *
        stateEstimator_P_g.gravity_Value[0]) +
       stateEstimator_B.Reshape9to3x3columnmajor[i + 6] *
       stateEstimator_P_g.gravity_Value[2]);
  }

  /* End of Sum: '<S76>/Add' */

  /* Product: '<S76>/Product' incorporates:
   *  Gain: '<S76>/gainaccinput'
   */
  stateEstimator_B.Product[0] = (real32_T)(stateEstimator_P_g.gainaccinput_Gain *
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_m[0]) * (real32_T)
    rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;
  stateEstimator_B.Product[1] = (real32_T)(stateEstimator_P_g.gainaccinput_Gain *
    stateEstimator_B.rtb_Reshape9to3x3columnmajor_m[1]) * (real32_T)
    rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;

  /* DataTypeConversion: '<S138>/Conversion' incorporates:
   *  Constant: '<S96>/KalmanGainL'
   */
  stateEstimator_B.Conversion_n4[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_f[0];
  stateEstimator_B.Conversion_n4[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_f[1];
  stateEstimator_B.Conversion_n4[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_f[2];
  stateEstimator_B.Conversion_n4[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_f[3];

  /* DataTypeConversion: '<S141>/Conversion' incorporates:
   *  Constant: '<S96>/CovarianceZ'
   */
  stateEstimator_B.Conversion_i[0] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_b[0];
  stateEstimator_B.Conversion_i[1] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_b[1];
  stateEstimator_B.Conversion_i[2] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_b[2];
  stateEstimator_B.Conversion_i[3] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_b[3];

  /* MATLAB Function: '<S144>/SqrtUsedFcn' incorporates:
   *  Constant: '<S144>/isSqrtUsed'
   */
  stateEstimator_SqrtUsedFcn(stateEstimator_B.Conversion_i,
    stateEstimator_P_g.isSqrtUsed_Value_l, stateEstimator_B.P_b);

  /* DataTypeConversion: '<S111>/Conversion' */
  stateEstimator_B.Conversion_j[0] = stateEstimator_B.MemoryX_m[0];
  stateEstimator_B.Conversion_j[1] = stateEstimator_B.MemoryX_m[1];

  /* Reshape: '<S78>/Reshapeu' */
  stateEstimator_B.Reshapeu_h[0] = stateEstimator_B.Product[0];
  stateEstimator_B.Reshapeu_h[1] = stateEstimator_B.Product[1];

  /* Outputs for Enabled SubSystem: '<S115>/MeasurementUpdate' */
  /* Constant: '<S78>/C' incorporates:
   *  Constant: '<S78>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_n4, stateEstimator_B.Reshapey_o,
    stateEstimator_P_g.C_Value_f, stateEstimator_B.Conversion_j,
    stateEstimator_P_g.D_Value_f, stateEstimator_B.Reshapeu_h,
    stateEstimator_B.Product3_m, &stateEstimator_DW.MeasurementUpdate_e,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of Outputs for SubSystem: '<S115>/MeasurementUpdate' */

  /* DataTypeConversion: '<S194>/Conversion' incorporates:
   *  Constant: '<S152>/KalmanGainL'
   */
  stateEstimator_B.Conversion_a[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[0];
  stateEstimator_B.Conversion_a[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[1];
  stateEstimator_B.Conversion_a[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[2];
  stateEstimator_B.Conversion_a[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[3];

  /* DataTypeConversion: '<S197>/Conversion' incorporates:
   *  Constant: '<S152>/CovarianceZ'
   */
  stateEstimator_B.Conversion_ao[0] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_l[0];
  stateEstimator_B.Conversion_ao[1] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_l[1];
  stateEstimator_B.Conversion_ao[2] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_l[2];
  stateEstimator_B.Conversion_ao[3] = (real32_T)
    stateEstimator_P_g.CovarianceZ_Value_l[3];

  /* MATLAB Function: '<S200>/SqrtUsedFcn' incorporates:
   *  Constant: '<S200>/isSqrtUsed'
   */
  stateEstimator_SqrtUsedFcn(stateEstimator_B.Conversion_ao,
    stateEstimator_P_g.isSqrtUsed_Value_h, stateEstimator_B.P_k);

  /* DataTypeConversion: '<S167>/Conversion' */
  stateEstimator_B.Conversion_pu[0] = stateEstimator_B.MemoryX_f[0];
  stateEstimator_B.Conversion_pu[1] = stateEstimator_B.MemoryX_f[1];

  /* Trigonometry: '<S151>/sincos' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   */
  rtb_TmpSignalConversionAtProductInport2_idx_1 = (real32_T)sin
    (stateEstimator_B.Merge[0]);
  stateEstimator_B.denAccum = (real32_T)cos(stateEstimator_B.Merge[0]);
  stateEstimator_B.numAccum = (real32_T)sin(stateEstimator_B.Merge[1]);
  rtb_sincos_o1_f_idx_1 = (real32_T)cos(stateEstimator_B.Merge[1]);

  /* Fcn: '<S151>/Fcn11' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[0] = rtb_sincos_o1_f_idx_0 *
    stateEstimator_B.denAccum;

  /* Fcn: '<S151>/Fcn21' incorporates:
   *  Fcn: '<S151>/Fcn22'
   *  Trigonometry: '<S151>/sincos'
   */
  rtb_sincos_o1_f_idx_2 = rtb_TmpSignalConversionAtProductInport2_idx_1 *
    stateEstimator_B.numAccum;
  stateEstimator_B.MathFunction_b[1] = rtb_sincos_o1_f_idx_2 *
    rtb_sincos_o1_f_idx_0 - rtb_TmpSignalConversionAtProductInport2_idx_0 *
    rtb_sincos_o1_f_idx_1;

  /* Fcn: '<S151>/Fcn31' incorporates:
   *  Fcn: '<S151>/Fcn32'
   *  Trigonometry: '<S151>/sincos'
   */
  rtb_sincos_o1_idx_2_tmp = rtb_TmpSignalConversionAtProductInport2_idx_1 *
    rtb_sincos_o1_f_idx_1;
  stateEstimator_B.MathFunction_b[2] = rtb_sincos_o1_idx_2_tmp *
    rtb_sincos_o1_f_idx_0 + rtb_TmpSignalConversionAtProductInport2_idx_0 *
    stateEstimator_B.numAccum;

  /* Fcn: '<S151>/Fcn12' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[3] =
    rtb_TmpSignalConversionAtProductInport2_idx_0 * stateEstimator_B.denAccum;

  /* Fcn: '<S151>/Fcn22' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[4] = rtb_sincos_o1_f_idx_2 *
    rtb_TmpSignalConversionAtProductInport2_idx_0 + rtb_sincos_o1_f_idx_0 *
    rtb_sincos_o1_f_idx_1;

  /* Fcn: '<S151>/Fcn32' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[5] = rtb_sincos_o1_idx_2_tmp *
    rtb_TmpSignalConversionAtProductInport2_idx_0 - rtb_sincos_o1_f_idx_0 *
    stateEstimator_B.numAccum;

  /* Fcn: '<S151>/Fcn13' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[6] =
    -rtb_TmpSignalConversionAtProductInport2_idx_1;

  /* Fcn: '<S151>/Fcn23' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[7] = stateEstimator_B.denAccum *
    stateEstimator_B.numAccum;

  /* Fcn: '<S151>/Fcn33' incorporates:
   *  Trigonometry: '<S151>/sincos'
   */
  stateEstimator_B.MathFunction_b[8] = stateEstimator_B.denAccum *
    rtb_sincos_o1_f_idx_1;

  /* SignalConversion generated from: '<S75>/Product' incorporates:
   *  Delay: '<S74>/Delay'
   */
  stateEstimator_B.numAccum = stateEstimator_DW.Delay_DSTATE_g[0];
  rtb_TmpSignalConversionAtProductInport2_idx_1 =
    stateEstimator_DW.Delay_DSTATE_g[1];
  for (i = 0; i < 3; i++) {
    /* Product: '<S75>/Product' incorporates:
     *  Math: '<S75>/Math Function'
     *  SignalConversion generated from: '<S75>/Product'
     */
    stateEstimator_B.Product_l[i] = 0.0F;
    stateEstimator_B.Product_l[i] += stateEstimator_B.MathFunction_b[3 * i] *
      stateEstimator_B.numAccum;
    stateEstimator_B.Product_l[i] += stateEstimator_B.MathFunction_b[3 * i + 1] *
      rtb_TmpSignalConversionAtProductInport2_idx_1;
    stateEstimator_B.Product_l[i] += stateEstimator_B.MathFunction_b[3 * i + 2] *
      rtb_Akxhatkk1_g_idx_1;
  }

  /* Reshape: '<S149>/Reshapeu' */
  stateEstimator_B.Reshapeu_i[0] = stateEstimator_B.Product_l[0];
  stateEstimator_B.Reshapeu_i[1] = stateEstimator_B.Product_l[1];

  /* Outputs for Enabled SubSystem: '<S171>/MeasurementUpdate' */
  /* Constant: '<S149>/C' incorporates:
   *  Constant: '<S149>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable,
    stateEstimator_B.Conversion_a, stateEstimator_B.Reshapey_a,
    stateEstimator_P_g.C_Value_p, stateEstimator_B.Conversion_pu,
    stateEstimator_P_g.D_Value_b, stateEstimator_B.Reshapeu_i,
    stateEstimator_B.Product3_j, &stateEstimator_DW.MeasurementUpdate_b,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of Outputs for SubSystem: '<S171>/MeasurementUpdate' */

  /* Update for Delay: '<S149>/MemoryX' incorporates:
   *  Constant: '<S149>/A'
   *  Constant: '<S149>/B'
   *  Product: '<S171>/A[k]*xhat[k|k-1]'
   *  Product: '<S171>/B[k]*u[k]'
   *  Sum: '<S171>/Add'
   */
  stateEstimator_DW.icLoad = false;
  stateEstimator_DW.MemoryX_DSTATE_d[0] = ((stateEstimator_P_g.B_Value_pu[0] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_B.Reshapeu_i[1] *
    stateEstimator_P_g.B_Value_pu[2]) + (stateEstimator_P_g.A_Value_b[0] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_B.Conversion_pu[1] *
    stateEstimator_P_g.A_Value_b[2])) + stateEstimator_B.Product3_j[0];
  stateEstimator_DW.MemoryX_DSTATE_d[1] = ((stateEstimator_B.Reshapeu_i[0] *
    stateEstimator_P_g.B_Value_pu[1] + stateEstimator_B.Reshapeu_i[1] *
    stateEstimator_P_g.B_Value_pu[3]) + (stateEstimator_B.Conversion_pu[0] *
    stateEstimator_P_g.A_Value_b[1] + stateEstimator_B.Conversion_pu[1] *
    stateEstimator_P_g.A_Value_b[3])) + stateEstimator_B.Product3_j[1];

  /* Update for Memory: '<S2>/Memory' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion3'
   *  Trigonometry: '<S16>/sincos'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = stateEstimator_B.MathFunction[0];
  stateEstimator_DW.Memory_PreviousInput[1] = stateEstimator_B.Merge[0];
  stateEstimator_DW.Memory_PreviousInput[2] = stateEstimator_B.Merge[1];

  /* Update for DiscreteFilter: '<S5>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_states[4] =
    stateEstimator_DW.IIR_IMUgyro_r_states[3];
  stateEstimator_DW.IIR_IMUgyro_r_states[3] =
    stateEstimator_DW.IIR_IMUgyro_r_states[2];
  stateEstimator_DW.IIR_IMUgyro_r_states[2] =
    stateEstimator_DW.IIR_IMUgyro_r_states[1];
  stateEstimator_DW.IIR_IMUgyro_r_states[1] =
    stateEstimator_DW.IIR_IMUgyro_r_states[0];
  stateEstimator_DW.IIR_IMUgyro_r_states[0] =
    stateEstimator_DW.IIR_IMUgyro_r_tmp;

  /* Update for DiscreteFir: '<S5>/FIR_IMUaccel' */
  /* Update circular buffer index */
  stateEstimator_DW.FIR_IMUaccel_circBuf--;
  if (stateEstimator_DW.FIR_IMUaccel_circBuf < 0) {
    stateEstimator_DW.FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf] =
    stateEstimator_B.inverseIMU_gain[0];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    5] = stateEstimator_B.inverseIMU_gain[1];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    10] = stateEstimator_B.inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S5>/FIR_IMUaccel' */

  /* Update for DiscreteIntegrator: '<S75>/Integrator' */
  stateEstimator_DW.Integrator_PrevResetState = (int8_T)
    arg_controlModePosVSOrient_flagin;

  /* Update for Delay: '<S3>/Delay2' incorporates:
   *  Reshape: '<S14>/Reshapexhat'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_B.rtb_Add_j_idx_0;

  /* Update for Delay: '<S14>/MemoryX' */
  stateEstimator_DW.icLoad_p = false;

  /* Update for DiscreteIntegrator: '<S75>/Integrator' */
  stateEstimator_DW.Integrator_DSTATE[0] +=
    stateEstimator_P_g.Integrator_gainval * stateEstimator_B.Product_l[0];

  /* Product: '<S36>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S14>/A'
   *  Delay: '<S14>/MemoryX'
   */
  stateEstimator_B.Sum_k = stateEstimator_P_g.A_Value[0] *
    stateEstimator_DW.MemoryX_DSTATE[0] + stateEstimator_DW.MemoryX_DSTATE[1] *
    stateEstimator_P_g.A_Value[2];

  /* Update for DiscreteIntegrator: '<S75>/Integrator' */
  stateEstimator_DW.Integrator_DSTATE[1] +=
    stateEstimator_P_g.Integrator_gainval * stateEstimator_B.Product_l[1];

  /* Product: '<S36>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S14>/A'
   *  Delay: '<S14>/MemoryX'
   */
  stateEstimator_B.unnamed_idx_1 = stateEstimator_DW.MemoryX_DSTATE[0] *
    stateEstimator_P_g.A_Value[1] + stateEstimator_DW.MemoryX_DSTATE[1] *
    stateEstimator_P_g.A_Value[3];

  /* Update for Delay: '<S14>/MemoryX' incorporates:
   *  Constant: '<S14>/B'
   *  Product: '<S36>/B[k]*u[k]'
   *  Product: '<S66>/Product3'
   *  Reshape: '<S14>/Reshapeu'
   *  Sum: '<S36>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[0] = (stateEstimator_P_g.B_Value[0] *
    stateEstimator_B.Sum[2] + stateEstimator_B.Sum_k) +
    stateEstimator_B.Product3[0];

  /* Update for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_DW.soonarFilter_IIR_states[1];

  /* Update for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_DW.pressureFilter_IIR_states[1];

  /* Update for Delay: '<S14>/MemoryX' incorporates:
   *  Constant: '<S14>/B'
   *  Product: '<S36>/B[k]*u[k]'
   *  Product: '<S66>/Product3'
   *  Reshape: '<S14>/Reshapeu'
   *  Sum: '<S36>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[1] = (stateEstimator_P_g.B_Value[1] *
    stateEstimator_B.Sum[2] + stateEstimator_B.unnamed_idx_1) +
    stateEstimator_B.Product3[1];

  /* Update for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_DW.soonarFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_DW.pressureFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S15>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_DW.soonarFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S15>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_DW.pressureFilter_IIR_tmp;

  /* Update for Delay: '<S78>/MemoryX' incorporates:
   *  Constant: '<S78>/A'
   *  Constant: '<S78>/B'
   *  Product: '<S115>/A[k]*xhat[k|k-1]'
   *  Product: '<S115>/B[k]*u[k]'
   *  Sum: '<S115>/Add'
   */
  stateEstimator_DW.icLoad_i = false;
  stateEstimator_DW.MemoryX_DSTATE_d5[0] = ((stateEstimator_P_g.B_Value_p[0] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_B.Reshapeu_h[1] *
    stateEstimator_P_g.B_Value_p[2]) + (stateEstimator_P_g.A_Value_c[0] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_B.Conversion_j[1] *
    stateEstimator_P_g.A_Value_c[2])) + stateEstimator_B.Product3_m[0];
  stateEstimator_DW.MemoryX_DSTATE_d5[1] = ((stateEstimator_B.Reshapeu_h[0] *
    stateEstimator_P_g.B_Value_p[1] + stateEstimator_B.Reshapeu_h[1] *
    stateEstimator_P_g.B_Value_p[3]) + (stateEstimator_B.Conversion_j[0] *
    stateEstimator_P_g.A_Value_c[1] + stateEstimator_B.Conversion_j[1] *
    stateEstimator_P_g.A_Value_c[3])) + stateEstimator_B.Product3_m[1];
  for (cff = 0; cff < 2; cff++) {
    /* Update for DiscreteFilter: '<S77>/IIRgyroz' */
    memOffset = cff * 5;
    stateEstimator_DW.IIRgyroz_states[memOffset + 4] =
      stateEstimator_DW.IIRgyroz_states[memOffset + 3];
    stateEstimator_DW.IIRgyroz_states[memOffset + 3] =
      stateEstimator_DW.IIRgyroz_states[memOffset + 2];
    stateEstimator_DW.IIRgyroz_states[memOffset + 2] =
      stateEstimator_DW.IIRgyroz_states[memOffset + 1];
    stateEstimator_DW.IIRgyroz_states[memOffset + 1] =
      stateEstimator_DW.IIRgyroz_states[memOffset];
    stateEstimator_DW.IIRgyroz_states[memOffset] =
      stateEstimator_DW.IIRgyroz_tmp[cff];

    /* Update for UnitDelay: '<S84>/UD' incorporates:
     *  Sum: '<S84>/Diff'
     *
     * Block description for '<S84>/UD':
     *
     *  Store in Global RAM
     *
     * Block description for '<S84>/Diff':
     *
     *  Add in CPU
     */
    stateEstimator_DW.UD_DSTATE[cff] = stateEstimator_B.Integrator[cff];

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Delay: '<S74>/Delay'
     */
    stateEstimator_DW.Delay_DSTATE_p[cff] = stateEstimator_DW.Delay_DSTATE_g[cff];
  }
}

/* Model initialize function */
void stateEstimator_o_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_stateEstimator_T *const stateEstimator_M =
    &(stateEstimator_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  stateEstimator_P_g.SaturationSonar_LowerSat = rtMinusInf;

  /* initialize error status */
  rtmSetErrorStatusPointer(stateEstimator_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
