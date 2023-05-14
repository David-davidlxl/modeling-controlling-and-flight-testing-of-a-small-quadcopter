/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.h
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

#ifndef RTW_HEADER_stateEstimator_h_
#define RTW_HEADER_stateEstimator_h_
#ifndef stateEstimator_COMMON_INCLUDES_
#define stateEstimator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* stateEstimator_COMMON_INCLUDES_ */

#include "stateEstimator_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block states (default storage) for system '<S115>/MeasurementUpdate' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S115>/MeasurementUpdate' */
} DW_MeasurementUpdate_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S122>/Enabled Subsystem' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S122>/Enabled Subsystem' */
} DW_EnabledSubsystem_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T MathFunction_b[9];          /* '<S75>/Math Function' */
  real32_T Divide[9];                  /* '<S12>/Divide' */
  real32_T Reshape9to3x3columnmajor[9];
                                 /* '<S83>/Reshape (9) to [3x3] column-major' */
  real_T P[4];                         /* '<S64>/SqrtUsedFcn' */
  real_T rtb_Reshape9to3x3columnmajor_m[3];
  real_T rtb_Reshape9to3x3columnmajor_c[3];
  real32_T Sum1[6];                    /* '<S5>/Sum1' */
  real32_T inverseIMU_gain[6];
  real_T Product2[2];                  /* '<S68>/Product2' */
  real_T Product3[2];                  /* '<S66>/Product3' */
  real32_T Conversion_g[4];            /* '<S195>/Conversion' */
  real32_T Conversion_p[4];            /* '<S139>/Conversion' */
  real32_T Conversion_i[4];            /* '<S141>/Conversion' */
  real32_T P_b[4];                     /* '<S144>/SqrtUsedFcn' */
  real32_T Conversion_n4[4];           /* '<S138>/Conversion' */
  real32_T Conversion_ao[4];           /* '<S197>/Conversion' */
  real32_T P_k[4];                     /* '<S200>/SqrtUsedFcn' */
  real32_T Conversion_a[4];            /* '<S194>/Conversion' */
  real32_T Product_l[3];               /* '<S75>/Product' */
  real32_T MathFunction[3];            /* '<S2>/Math Function' */
  real32_T FIR_IMUaccel[3];            /* '<S5>/FIR_IMUaccel' */
  real_T invertzaxisGain;              /* '<S3>/invertzaxisGain' */
  real_T Sum[3];                       /* '<S3>/Sum' */
  real_T Sum_k;                        /* '<S66>/Sum' */
  real_T rtb_Add_j_idx_0;
  real_T rtb_Add_j_idx_1;
  real_T rtb_Reshape9to3x3columnmajor_tmp;
  real_T rtb_Reshape9to3x3columnmajor_tmp_c;
  real_T unnamed_idx_0_tmp_tmp;
  real_T unnamed_idx_1_tmp_tmp;
  real_T unnamed_idx_1;
  real32_T Merge[2];                   /* '<S2>/Merge' */
  real32_T opticalFlowToVelocity_gain[3];/* '<S74>/opticalFlowToVelocity_gain' */
  real32_T Product[2];                 /* '<S76>/Product' */
  real32_T Product2_e[2];              /* '<S204>/Product2' */
  real32_T Product3_j[2];              /* '<S202>/Product3' */
  real32_T Product2_k[2];              /* '<S148>/Product2' */
  real32_T Product3_m[2];              /* '<S146>/Product3' */
  real32_T Integrator[2];              /* '<S75>/Integrator' */
  real32_T Delay[2];                   /* '<S1>/Delay' */
  real32_T Reshapey_a[2];              /* '<S149>/Reshapey' */
  real32_T MemoryX_f[2];               /* '<S149>/MemoryX' */
  real32_T Reshapey_o[2];              /* '<S78>/Reshapey' */
  real32_T MemoryX_m[2];               /* '<S78>/MemoryX' */
  real32_T Conversion_j[2];            /* '<S111>/Conversion' */
  real32_T Reshapeu_h[2];              /* '<S78>/Reshapeu' */
  real32_T Conversion_pu[2];           /* '<S167>/Conversion' */
  real32_T Reshapeu_i[2];              /* '<S149>/Reshapeu' */
  real32_T numAccum;
  real32_T denAccum;
  boolean_T LogicalOperator3;          /* '<S150>/Logical Operator3' */
  boolean_T Compare;                   /* '<S17>/Compare' */
  boolean_T nicemeasurementornewupdateneeded;
                                 /* '<S15>/nicemeasurementor newupdateneeded' */
  boolean_T LogicalOperator3_a;        /* '<S77>/Logical Operator3' */
} B_stateEstimator_c_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Delay2_DSTATE;                /* '<S3>/Delay2' */
  real_T MemoryX_DSTATE[2];            /* '<S14>/MemoryX' */
  real_T soonarFilter_IIR_states[3];   /* '<S15>/soonarFilter_IIR' */
  real_T x_est_at_15s;                 /* '<S1>/Data Store Memory' */
  real_T soonarFilter_IIR_tmp;         /* '<S15>/soonarFilter_IIR' */
  real32_T MemoryX_DSTATE_d[2];        /* '<S149>/MemoryX' */
  real32_T IIR_IMUgyro_r_states[5];    /* '<S5>/IIR_IMUgyro_r' */
  real32_T FIR_IMUaccel_states[15];    /* '<S5>/FIR_IMUaccel' */
  real32_T Delay_DSTATE[2];            /* '<S75>/Delay' */
  real32_T Integrator_DSTATE[2];       /* '<S75>/Integrator' */
  real32_T pressureFilter_IIR_states[3];/* '<S15>/pressureFilter_IIR' */
  real32_T MemoryX_DSTATE_d5[2];       /* '<S78>/MemoryX' */
  real32_T IIRgyroz_states[10];        /* '<S77>/IIRgyroz' */
  real32_T UD_DSTATE[2];               /* '<S84>/UD' */
  real32_T Delay_DSTATE_g[2];          /* '<S74>/Delay' */
  real32_T Delay_DSTATE_p[2];          /* '<S1>/Delay' */
  int32_T FIR_IMUaccel_circBuf;        /* '<S5>/FIR_IMUaccel' */
  real32_T Memory_PreviousInput[3];    /* '<S2>/Memory' */
  real32_T IIR_IMUgyro_r_tmp;          /* '<S5>/IIR_IMUgyro_r' */
  real32_T pressureFilter_IIR_tmp;     /* '<S15>/pressureFilter_IIR' */
  real32_T IIRgyroz_tmp[2];            /* '<S77>/IIRgyroz' */
  int8_T Integrator_PrevResetState;    /* '<S75>/Integrator' */
  boolean_T icLoad;                    /* '<S149>/MemoryX' */
  boolean_T icLoad_p;                  /* '<S14>/MemoryX' */
  boolean_T icLoad_i;                  /* '<S78>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S42>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S36>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S178>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S171>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S122>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S115>/MeasurementUpdate' */
} DW_stateEstimator_f_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S115>/MeasurementUpdate' */
struct P_MeasurementUpdate_stateEstimator_T_ {
  real32_T Lykyhatkk1_Y0;              /* Computed Parameter: Lykyhatkk1_Y0
                                        * Referenced by: '<S146>/L*(y[k]-yhat[k|k-1])'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S122>/Enabled Subsystem' */
struct P_EnabledSubsystem_stateEstimator_T_ {
  real32_T deltax_Y0;                  /* Computed Parameter: deltax_Y0
                                        * Referenced by: '<S148>/deltax'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_stateEstimator_T_ {
  real_T outlierBelowFloor_const;     /* Mask Parameter: outlierBelowFloor_const
                                       * Referenced by: '<S17>/Constant'
                                       */
  real_T outlierJump_const;            /* Mask Parameter: outlierJump_const
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T currentStateVeryOffsonarflt_const;
                            /* Mask Parameter: currentStateVeryOffsonarflt_const
                             * Referenced by: '<S71>/Constant'
                             */
  real_T currentEstimateVeryOffFromPressure_const;
                     /* Mask Parameter: currentEstimateVeryOffFromPressure_const
                      * Referenced by: '<S70>/Constant'
                      */
  real32_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S84>/UD'
                          */
  real32_T Checkifvalidvisualpositionestimateavailable_const;
            /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
             * Referenced by: '<S210>/Constant'
             */
  real32_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S6>/Constant'
                                       */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S7>/Constant'
                                      */
  real32_T maxp3_const;                /* Mask Parameter: maxp3_const
                                        * Referenced by: '<S206>/Constant'
                                        */
  real32_T maxq3_const;                /* Mask Parameter: maxq3_const
                                        * Referenced by: '<S207>/Constant'
                                        */
  real32_T checkifPosavailable_const;
                                    /* Mask Parameter: checkifPosavailable_const
                                     * Referenced by: '<S205>/Constant'
                                     */
  real32_T planarjumpsVISPOS_const;   /* Mask Parameter: planarjumpsVISPOS_const
                                       * Referenced by: '<S208>/Constant'
                                       */
  real32_T maxp_const;                 /* Mask Parameter: maxp_const
                                        * Referenced by: '<S87>/Constant'
                                        */
  real32_T maxq_const;                 /* Mask Parameter: maxq_const
                                        * Referenced by: '<S89>/Constant'
                                        */
  real32_T maxw1_const;                /* Mask Parameter: maxw1_const
                                        * Referenced by: '<S91>/Constant'
                                        */
  real32_T maxw2_const;                /* Mask Parameter: maxw2_const
                                        * Referenced by: '<S92>/Constant'
                                        */
  real32_T maxdw1_const;               /* Mask Parameter: maxdw1_const
                                        * Referenced by: '<S85>/Constant'
                                        */
  real32_T maxdw2_const;               /* Mask Parameter: maxdw2_const
                                        * Referenced by: '<S86>/Constant'
                                        */
  real32_T maxp2_const;                /* Mask Parameter: maxp2_const
                                        * Referenced by: '<S88>/Constant'
                                        */
  real32_T maxq2_const;                /* Mask Parameter: maxq2_const
                                        * Referenced by: '<S90>/Constant'
                                        */
  real32_T maxw3_const;                /* Mask Parameter: maxw3_const
                                        * Referenced by: '<S93>/Constant'
                                        */
  real32_T maxw4_const;                /* Mask Parameter: maxw4_const
                                        * Referenced by: '<S94>/Constant'
                                        */
  real32_T minHeightforOF_const;       /* Mask Parameter: minHeightforOF_const
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T DeactivateAccelerationIfOFisnotusedduetolowaltitude_const;
    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S79>/Constant'
     */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S81>/Constant'
   */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S82>/Constant'
   */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S66>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S68>/deltax'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<S1>/Data Store Memory'
                                        */
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S152>/KalmanGainM'
                                        */
  real_T KalmanGainM_Value_p[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S18>/KalmanGainM'
                                        */
  real_T C_Value[2];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S14>/C'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S3>/Delay2'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S14>/X0'
                                        */
  real_T SaturationSonar_LowerSat;     /* Expression: -inf
                                        * Referenced by: '<S15>/SaturationSonar'
                                        */
  real_T soonarFilter_IIR_NumCoef[4];/* Expression: Estimator.alt.filterSonarNum
                                      * Referenced by: '<S15>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_DenCoef[4];/* Expression: Estimator.alt.filterSonarDen
                                      * Referenced by: '<S15>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_InitialStates;/* Expression: 0
                                         * Referenced by: '<S15>/soonarFilter_IIR'
                                         */
  real_T KalmanGainM_Value_d[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S96>/KalmanGainM'
                                        */
  real_T Constant_Value[3];            /* Expression: [0 0 g]
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S14>/A'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S14>/B'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S18>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value[2];         /* Expression: pInitialization.L
                                        * Referenced by: '<S18>/KalmanGainL'
                                        */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S14>/D'
                                        */
  real_T P0_Value[4];                  /* Expression: pInitialization.P0
                                        * Referenced by: '<S14>/P0'
                                        */
  real_T G_Value[2];                   /* Expression: pInitialization.G
                                        * Referenced by: '<S14>/G'
                                        */
  real_T H_Value;                      /* Expression: pInitialization.H
                                        * Referenced by: '<S14>/H'
                                        */
  real_T N_Value;                      /* Expression: pInitialization.N
                                        * Referenced by: '<S14>/N'
                                        */
  real_T Q_Value;                      /* Expression: pInitialization.Q
                                        * Referenced by: '<S14>/Q'
                                        */
  real_T R_Value;                      /* Expression: pInitialization.R
                                        * Referenced by: '<S14>/R'
                                        */
  real_T gravity_Value[3];             /* Expression: [0 0 -g]
                                        * Referenced by: '<S76>/gravity'
                                        */
  real_T gainaccinput_Gain;   /* Expression: Estimator.pos.accelerationInputGain
                               * Referenced by: '<S76>/gainaccinput'
                               */
  real_T CovarianceZ_Value_b[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S96>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value_f[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S96>/KalmanGainL'
                                        */
  real_T CovarianceZ_Value_l[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S152>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value_h[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S152>/KalmanGainL'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S8>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S8>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S8>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S8>/Gain4'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S9>/Gain'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real32_T C_Value_p[4];               /* Computed Parameter: C_Value_p
                                        * Referenced by: '<S149>/C'
                                        */
  real32_T X0_Value_j[2];              /* Computed Parameter: X0_Value_j
                                        * Referenced by: '<S149>/X0'
                                        */
  real32_T Memory_InitialCondition[3];
                        /* Expression: single(Estimator.complementaryFilterInit)
                         * Referenced by: '<S2>/Memory'
                         */
  real32_T Constant_Value_i;           /* Expression: single(0)
                                        * Referenced by: '<S12>/Constant'
                                        */
  real32_T Gain_Gain_c;                /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S12>/Gain'
                                        */
  real32_T Bias_Bias[6];               /* Computed Parameter: Bias_Bias
                                        * Referenced by: '<S5>/Bias'
                                        */
  real32_T inverseIMU_gain_Gain[6];  /* Computed Parameter: inverseIMU_gain_Gain
                                      * Referenced by: '<S5>/inverseIMU_gain'
                                      */
  real32_T IIR_IMUgyro_r_NumCoef[6];/* Computed Parameter: IIR_IMUgyro_r_NumCoef
                                     * Referenced by: '<S5>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_DenCoef[6];/* Computed Parameter: IIR_IMUgyro_r_DenCoef
                                     * Referenced by: '<S5>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_InitialStates;
                              /* Computed Parameter: IIR_IMUgyro_r_InitialStates
                               * Referenced by: '<S5>/IIR_IMUgyro_r'
                               */
  real32_T gyro_sensitivity_Gain;   /* Computed Parameter: gyro_sensitivity_Gain
                                     * Referenced by: '<S2>/gyro_sensitivity'
                                     */
  real32_T FIR_IMUaccel_InitialStates;
                               /* Computed Parameter: FIR_IMUaccel_InitialStates
                                * Referenced by: '<S5>/FIR_IMUaccel'
                                */
  real32_T FIR_IMUaccel_Coefficients[6];
                                /* Computed Parameter: FIR_IMUaccel_Coefficients
                                 * Referenced by: '<S5>/FIR_IMUaccel'
                                 */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S2>/Constant'
                                        */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S2>/Merge'
                                       */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S75>/Delay'
                                    */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S150>/Constant'
                                        */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S75>/Integrator'
                                        */
  real32_T Integrator_IC;              /* Computed Parameter: Integrator_IC
                                        * Referenced by: '<S75>/Integrator'
                                        */
  real32_T UseIPPosSwitch_Threshold;
                                 /* Computed Parameter: UseIPPosSwitch_Threshold
                                  * Referenced by: '<S75>/UseIPPosSwitch'
                                  */
  real32_T invertzaxisGain_Gain;     /* Computed Parameter: invertzaxisGain_Gain
                                      * Referenced by: '<S3>/invertzaxisGain'
                                      */
  real32_T prsToAltGain_Gain;          /* Computed Parameter: prsToAltGain_Gain
                                        * Referenced by: '<S3>/prsToAltGain'
                                        */
  real32_T pressureFilter_IIR_NumCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_NumCoef
                                * Referenced by: '<S15>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_DenCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_DenCoef
                                * Referenced by: '<S15>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_InitialStates;
                         /* Computed Parameter: pressureFilter_IIR_InitialStates
                          * Referenced by: '<S15>/pressureFilter_IIR'
                          */
  real32_T C_Value_f[4];               /* Computed Parameter: C_Value_f
                                        * Referenced by: '<S78>/C'
                                        */
  real32_T opticalFlowToVelocity_gain_Gain;
                          /* Computed Parameter: opticalFlowToVelocity_gain_Gain
                           * Referenced by: '<S74>/opticalFlowToVelocity_gain'
                           */
  real32_T X0_Value_e[2];              /* Computed Parameter: X0_Value_e
                                        * Referenced by: '<S78>/X0'
                                        */
  real32_T IIRgyroz_NumCoef[6];        /* Computed Parameter: IIRgyroz_NumCoef
                                        * Referenced by: '<S77>/IIRgyroz'
                                        */
  real32_T IIRgyroz_DenCoef[6];        /* Computed Parameter: IIRgyroz_DenCoef
                                        * Referenced by: '<S77>/IIRgyroz'
                                        */
  real32_T IIRgyroz_InitialStates; /* Computed Parameter: IIRgyroz_InitialStates
                                    * Referenced by: '<S77>/IIRgyroz'
                                    */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S84>/TSamp'
                                        */
  real32_T Delay_InitialCondition_b;
                                 /* Computed Parameter: Delay_InitialCondition_b
                                  * Referenced by: '<S74>/Delay'
                                  */
  real32_T Delay_InitialCondition_bg;
                                /* Computed Parameter: Delay_InitialCondition_bg
                                 * Referenced by: '<S1>/Delay'
                                 */
  real32_T A_Value_c[4];               /* Computed Parameter: A_Value_c
                                        * Referenced by: '<S78>/A'
                                        */
  real32_T B_Value_p[4];               /* Computed Parameter: B_Value_p
                                        * Referenced by: '<S78>/B'
                                        */
  real32_T D_Value_f[4];               /* Computed Parameter: D_Value_f
                                        * Referenced by: '<S78>/D'
                                        */
  real32_T P0_Value_m[4];              /* Computed Parameter: P0_Value_m
                                        * Referenced by: '<S78>/P0'
                                        */
  real32_T G_Value_h[4];               /* Computed Parameter: G_Value_h
                                        * Referenced by: '<S78>/G'
                                        */
  real32_T H_Value_c[4];               /* Computed Parameter: H_Value_c
                                        * Referenced by: '<S78>/H'
                                        */
  real32_T N_Value_g[4];               /* Computed Parameter: N_Value_g
                                        * Referenced by: '<S78>/N'
                                        */
  real32_T Q_Value_f[4];               /* Computed Parameter: Q_Value_f
                                        * Referenced by: '<S78>/Q'
                                        */
  real32_T R_Value_k[4];               /* Computed Parameter: R_Value_k
                                        * Referenced by: '<S78>/R'
                                        */
  real32_T A_Value_b[4];               /* Computed Parameter: A_Value_b
                                        * Referenced by: '<S149>/A'
                                        */
  real32_T B_Value_pu[4];              /* Computed Parameter: B_Value_pu
                                        * Referenced by: '<S149>/B'
                                        */
  real32_T D_Value_b[4];               /* Computed Parameter: D_Value_b
                                        * Referenced by: '<S149>/D'
                                        */
  real32_T P0_Value_h[4];              /* Computed Parameter: P0_Value_h
                                        * Referenced by: '<S149>/P0'
                                        */
  real32_T G_Value_p[4];               /* Computed Parameter: G_Value_p
                                        * Referenced by: '<S149>/G'
                                        */
  real32_T H_Value_d[4];               /* Computed Parameter: H_Value_d
                                        * Referenced by: '<S149>/H'
                                        */
  real32_T N_Value_j[4];               /* Computed Parameter: N_Value_j
                                        * Referenced by: '<S149>/N'
                                        */
  real32_T Q_Value_n[4];               /* Computed Parameter: Q_Value_n
                                        * Referenced by: '<S149>/Q'
                                        */
  real32_T R_Value_kf[4];              /* Computed Parameter: R_Value_kf
                                        * Referenced by: '<S149>/R'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S64>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_l;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S144>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_h;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S200>/isSqrtUsed'
                                        */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S178>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S171>/MeasurementUpdate' */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S122>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S115>/MeasurementUpdate' */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_stateEstimator_T {
  const char_T **errorStatus;
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_stateEstimator_T rtm;
} MdlrefDW_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by:
                                                 *   '<S15>/SaturationSonar'
                                                 *   '<S69>/Constant'
                                                 */
extern void stateEstimator_Init(void);
extern void stateEstimator_Disable(void);
extern void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin,
  const sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin,
  const real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8]);

/* Model reference registration function */
extern void stateEstimator_o_initialize(const char_T **rt_errorStatus);

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern void stateEstimator_SqrtUsedFcn(const real32_T rtu_u[4], boolean_T
  rtu_isSqrtUsed, real32_T rty_P[4]);
extern void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const
  real32_T rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const
  real32_T rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2],
  real32_T rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP);

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
extern DW_stateEstimator_f_T stateEstimator_DW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'stateEstimator'
 * '<S1>'   : 'stateEstimator/State Estimator'
 * '<S2>'   : 'stateEstimator/State Estimator/Complementary Filter'
 * '<S3>'   : 'stateEstimator/State Estimator/EstimatorAltitude'
 * '<S4>'   : 'stateEstimator/State Estimator/EstimatorXYPosition'
 * '<S5>'   : 'stateEstimator/State Estimator/SensorPreprocessing'
 * '<S6>'   : 'stateEstimator/State Estimator/Complementary Filter/Compare To Constant'
 * '<S7>'   : 'stateEstimator/State Estimator/Complementary Filter/Compare To Constant1'
 * '<S8>'   : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem'
 * '<S9>'   : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem1'
 * '<S10>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem2'
 * '<S11>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem3'
 * '<S12>'  : 'stateEstimator/State Estimator/Complementary Filter/Wbe'
 * '<S13>'  : 'stateEstimator/State Estimator/Complementary Filter/Wbe/Create 3x3 Matrix'
 * '<S14>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude'
 * '<S15>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling'
 * '<S16>'  : 'stateEstimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix'
 * '<S17>'  : 'stateEstimator/State Estimator/EstimatorAltitude/outlierBelowFloor'
 * '<S18>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL'
 * '<S19>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculateYhat'
 * '<S20>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CovarianceOutputConfigurator'
 * '<S21>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionA'
 * '<S22>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionB'
 * '<S23>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionC'
 * '<S24>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionD'
 * '<S25>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionG'
 * '<S26>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionH'
 * '<S27>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionN'
 * '<S28>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP'
 * '<S29>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP0'
 * '<S30>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionQ'
 * '<S31>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionR'
 * '<S32>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX'
 * '<S33>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX0'
 * '<S34>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionu'
 * '<S35>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/MemoryP'
 * '<S36>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer'
 * '<S37>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ReducedQRN'
 * '<S38>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Reshapeyhat'
 * '<S39>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionP0'
 * '<S40>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionQ'
 * '<S41>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionR'
 * '<S42>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator'
 * '<S43>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkA'
 * '<S44>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkB'
 * '<S45>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkC'
 * '<S46>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkD'
 * '<S47>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkEnable'
 * '<S48>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkG'
 * '<S49>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkH'
 * '<S50>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkN'
 * '<S51>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkP0'
 * '<S52>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkQ'
 * '<S53>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkR'
 * '<S54>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkReset'
 * '<S55>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkX0'
 * '<S56>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checku'
 * '<S57>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checky'
 * '<S58>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionL'
 * '<S59>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionM'
 * '<S60>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionP'
 * '<S61>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionZ'
 * '<S62>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/Ground'
 * '<S63>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculateYhat/Ground'
 * '<S64>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CovarianceOutputConfigurator/decideOutput'
 * '<S65>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S66>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer/MeasurementUpdate'
 * '<S67>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ReducedQRN/Ground'
 * '<S68>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator/Enabled Subsystem'
 * '<S69>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/checkForMinAltitude'
 * '<S70>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/currentEstimateVeryOffFromPressure'
 * '<S71>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/currentStateVeryOffsonarflt'
 * '<S72>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/outlierJump'
 * '<S73>'  : 'stateEstimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S74>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity'
 * '<S75>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition'
 * '<S76>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling'
 * '<S77>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling'
 * '<S78>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy'
 * '<S79>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Deactivate Acceleration If OF is not used due to low altitude'
 * '<S80>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix'
 * '<S81>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)'
 * '<S82>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)1'
 * '<S83>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S84>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/DiscreteDerivative'
 * '<S85>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw1'
 * '<S86>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw2'
 * '<S87>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp'
 * '<S88>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp2'
 * '<S89>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq'
 * '<S90>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq2'
 * '<S91>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw1'
 * '<S92>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw2'
 * '<S93>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw3'
 * '<S94>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw4'
 * '<S95>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/minHeightforOF'
 * '<S96>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL'
 * '<S97>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculateYhat'
 * '<S98>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CovarianceOutputConfigurator'
 * '<S99>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionA'
 * '<S100>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionB'
 * '<S101>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionC'
 * '<S102>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionD'
 * '<S103>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionG'
 * '<S104>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionH'
 * '<S105>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionN'
 * '<S106>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP'
 * '<S107>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP0'
 * '<S108>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionQ'
 * '<S109>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionR'
 * '<S110>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionReset'
 * '<S111>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX'
 * '<S112>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX0'
 * '<S113>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionu'
 * '<S114>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/MemoryP'
 * '<S115>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer'
 * '<S116>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ReducedQRN'
 * '<S117>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Reset'
 * '<S118>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Reshapeyhat'
 * '<S119>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionP0'
 * '<S120>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionQ'
 * '<S121>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionR'
 * '<S122>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator'
 * '<S123>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkA'
 * '<S124>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkB'
 * '<S125>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkC'
 * '<S126>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkD'
 * '<S127>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkEnable'
 * '<S128>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkG'
 * '<S129>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkH'
 * '<S130>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkN'
 * '<S131>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkP0'
 * '<S132>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkQ'
 * '<S133>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkR'
 * '<S134>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkReset'
 * '<S135>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkX0'
 * '<S136>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checku'
 * '<S137>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checky'
 * '<S138>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionL'
 * '<S139>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionM'
 * '<S140>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionP'
 * '<S141>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionZ'
 * '<S142>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/Ground'
 * '<S143>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculateYhat/Ground'
 * '<S144>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CovarianceOutputConfigurator/decideOutput'
 * '<S145>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S146>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer/MeasurementUpdate'
 * '<S147>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ReducedQRN/Ground'
 * '<S148>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator/Enabled Subsystem'
 * '<S149>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy'
 * '<S150>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling'
 * '<S151>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix'
 * '<S152>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL'
 * '<S153>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculateYhat'
 * '<S154>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CovarianceOutputConfigurator'
 * '<S155>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionA'
 * '<S156>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionB'
 * '<S157>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionC'
 * '<S158>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionD'
 * '<S159>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionG'
 * '<S160>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionH'
 * '<S161>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionN'
 * '<S162>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP'
 * '<S163>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP0'
 * '<S164>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionQ'
 * '<S165>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionR'
 * '<S166>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionReset'
 * '<S167>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX'
 * '<S168>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX0'
 * '<S169>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionu'
 * '<S170>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/MemoryP'
 * '<S171>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer'
 * '<S172>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ReducedQRN'
 * '<S173>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Reset'
 * '<S174>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Reshapeyhat'
 * '<S175>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionP0'
 * '<S176>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionQ'
 * '<S177>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionR'
 * '<S178>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator'
 * '<S179>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkA'
 * '<S180>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkB'
 * '<S181>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkC'
 * '<S182>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkD'
 * '<S183>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkEnable'
 * '<S184>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkG'
 * '<S185>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkH'
 * '<S186>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkN'
 * '<S187>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkP0'
 * '<S188>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkQ'
 * '<S189>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkR'
 * '<S190>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkReset'
 * '<S191>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkX0'
 * '<S192>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checku'
 * '<S193>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checky'
 * '<S194>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionL'
 * '<S195>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionM'
 * '<S196>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionP'
 * '<S197>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionZ'
 * '<S198>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/Ground'
 * '<S199>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculateYhat/Ground'
 * '<S200>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CovarianceOutputConfigurator/decideOutput'
 * '<S201>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S202>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer/MeasurementUpdate'
 * '<S203>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ReducedQRN/Ground'
 * '<S204>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator/Enabled Subsystem'
 * '<S205>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/checkifPosavailable'
 * '<S206>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxp3'
 * '<S207>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxq3'
 * '<S208>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/planarjumpsVISPOS'
 * '<S209>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S210>' : 'stateEstimator/State Estimator/SensorPreprocessing/Check if valid visual position estimate available'
 */
#endif                                 /* RTW_HEADER_stateEstimator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
