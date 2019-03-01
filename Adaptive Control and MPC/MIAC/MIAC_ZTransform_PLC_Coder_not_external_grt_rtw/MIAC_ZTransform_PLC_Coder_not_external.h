/*
 * MIAC_ZTransform_PLC_Coder_not_external.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MIAC_ZTransform_PLC_Coder_not_external".
 *
 * Model version              : 1.85
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Mar  1 15:44:22 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_h_
#define RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef MIAC_ZTransform_PLC_Coder_not_external_COMMON_INCLUDES_
# define MIAC_ZTransform_PLC_Coder_not_external_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* MIAC_ZTransform_PLC_Coder_not_external_COMMON_INCLUDES_ */

#include "MIAC_ZTransform_PLC_Coder_not_external_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#define MIAC_ZTransform_PLC_Coder_not_external_M (MIAC_ZTransform_PLC_Coder_no_M)

/* Block signals for system '<S3>/Get_Current_Offset' */
typedef struct {
  real_T In1;                          /* '<S5>/In1' */
} B_Get_Current_Offset_MIAC_ZTr_T;

/* Block signals (default storage) */
typedef struct {
  real_T MIAC_SmithPredictor;          /* '<S1>/Delay' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T RandomNumber;                 /* '<Root>/Random Number' */
  real_T MIAC_SmithPredictor_p;        /* '<Root>/Add3' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T Add6;                         /* '<Root>/Add6' */
  real_T Numerator_ZTransformation_PT1;/* '<S3>/Divide' */
  real_T Denumerator_ZTransformation_PT1[2];
  B_Get_Current_Offset_MIAC_ZTr_T Get_Current_delayed_Input_Offse;/* '<S4>/Get_Current_delayed_Input_Offset' */
  B_Get_Current_Offset_MIAC_ZTr_T Get_Current_Output_Offset;/* '<S4>/Get_Current_Output_Offset' */
  B_Get_Current_Offset_MIAC_ZTr_T Get_Current_Offset1;/* '<S3>/Get_Current_Offset1' */
  B_Get_Current_Offset_MIAC_ZTr_T Get_Current_Offset;/* '<S3>/Get_Current_Offset' */
} B_MIAC_ZTransform_PLC_Coder_n_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[600];            /* '<S1>/Delay' */
  real_T DiscreteTransferFcn_states;   /* '<S1>/Discrete Transfer Fcn' */
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  real_T inputSignalLowPassFilter_states;/* '<S4>/input Signal Low Pass Filter' */
  real_T outputSignalLowPassFilter1_stat;/* '<S4>/output Signal Low Pass Filter1' */
  real_T delayTheta_DSTATE[3];         /* '<S107>/delayTheta' */
  real_T delayL_DSTATE[9];             /* '<S107>/delayL' */
  real_T delayPhi_DSTATE[4];           /* '<S107>/delayPhi' */
  real_T EstimatedGainTiefpassfilter_sta;/* '<S4>/Estimated Gain Tiefpassfilter' */
  real_T System_Delay_Simulation_DSTATE[800];/* '<S4>/System_Delay_Simulation' */
  real_T System_Simulaton_states;      /* '<S3>/System_Simulaton' */
  real_T System_Delay_Simulation_DSTAT_c[800];/* '<S3>/System_Delay_Simulation' */
  real_T Integrator_DSTATE;            /* '<S62>/Integrator' */
  real_T NextOutput;                   /* '<Root>/Random Number' */
  d_recursiveEstimation_interna_T arxEstimator;/* '<S127>/rarx' */
  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  uint32_T RandSeed;                   /* '<Root>/Random Number' */
  int8_T Integrator_PrevResetState;    /* '<S62>/Integrator' */
  uint8_T icLoad;                      /* '<S107>/delayTheta' */
  uint8_T icLoad_o;                    /* '<S107>/delayL' */
  uint8_T icLoad_g;                    /* '<S107>/delayPhi' */
  uint8_T icLoad_m;                    /* '<S107>/delayBufferU' */
  uint8_T icLoad_k;                    /* '<S107>/delayBufferY' */
  uint8_T icLoad_f;                    /* '<S127>/delayBufferRegressors' */
  uint8_T Integrator_IC_LOADING;       /* '<S62>/Integrator' */
  boolean_T arxEstimator_not_empty;    /* '<S127>/rarx' */
} DW_MIAC_ZTransform_PLC_Coder__T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState inputSignalLowPassFilter_Reset_;/* '<S4>/input Signal Low Pass Filter' */
  ZCSigState outputSignalLowPassFilter1_Rese;/* '<S4>/output Signal Low Pass Filter1' */
  ZCSigState delayTheta_Reset_ZCE;     /* '<S107>/delayTheta' */
  ZCSigState delayL_Reset_ZCE;         /* '<S107>/delayL' */
  ZCSigState delayPhi_Reset_ZCE;       /* '<S107>/delayPhi' */
  ZCSigState delayBufferU_Reset_ZCE;   /* '<S107>/delayBufferU' */
  ZCSigState delayBufferY_Reset_ZCE;   /* '<S107>/delayBufferY' */
  ZCSigState delayBufferRegressors_Reset_ZCE;/* '<S127>/delayBufferRegressors' */
  ZCSigState Delay_Reset_ZCE;          /* '<S129>/Delay' */
  ZCSigState EstimatedGainTiefpassfilter_Res;/* '<S4>/Estimated Gain Tiefpassfilter' */
  ZCSigState System_Delay_Simulation_Reset_Z;/* '<S4>/System_Delay_Simulation' */
  ZCSigState System_Simulaton_Reset_ZCE;/* '<S3>/System_Simulaton' */
  ZCSigState System_Delay_Simulation_Reset_l;/* '<S3>/System_Delay_Simulation' */
} PrevZCX_MIAC_ZTransform_PLC_C_T;

/* Parameters for system: '<S3>/Get_Current_Offset' */
struct P_Get_Current_Offset_MIAC_ZTr_T_ {
  real_T Holdwhendisabled_Y0;          /* Computed Parameter: Holdwhendisabled_Y0
                                        * Referenced by: '<S5>/Hold when disabled'
                                        */
};

/* Parameters (default storage) */
struct P_MIAC_ZTransform_PLC_Coder_n_T_ {
  real_T PIDControllerPplusTi_LowerSatur;/* Mask Parameter: PIDControllerPplusTi_LowerSatur
                                          * Referenced by: '<S83>/Saturation'
                                          */
  real_T PIDControllerPplusTi_UpperSatur;/* Mask Parameter: PIDControllerPplusTi_UpperSatur
                                          * Referenced by: '<S83>/Saturation'
                                          */
  real_T Constant14_Value;             /* Expression: 0.5
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T References4_Time;             /* Expression: 0
                                        * Referenced by: '<Root>/References4'
                                        */
  real_T References4_Y0;               /* Expression: 0
                                        * Referenced by: '<Root>/References4'
                                        */
  real_T References4_YFinal;           /* Expression: 165
                                        * Referenced by: '<Root>/References4'
                                        */
  real_T References5_Time;             /* Expression: 40000
                                        * Referenced by: '<Root>/References5'
                                        */
  real_T References5_Y0;               /* Expression: 0
                                        * Referenced by: '<Root>/References5'
                                        */
  real_T References5_YFinal;           /* Expression: -7
                                        * Referenced by: '<Root>/References5'
                                        */
  real_T References3_Time;             /* Expression: 35000
                                        * Referenced by: '<Root>/References3'
                                        */
  real_T References3_Y0;               /* Expression: 0
                                        * Referenced by: '<Root>/References3'
                                        */
  real_T References3_YFinal;           /* Expression: 3
                                        * Referenced by: '<Root>/References3'
                                        */
  real_T References2_Time;             /* Expression: 18000
                                        * Referenced by: '<Root>/References2'
                                        */
  real_T References2_Y0;               /* Expression: 0
                                        * Referenced by: '<Root>/References2'
                                        */
  real_T References2_YFinal;           /* Expression: 3
                                        * Referenced by: '<Root>/References2'
                                        */
  real_T References1_Time;             /* Expression: 12000
                                        * Referenced by: '<Root>/References1'
                                        */
  real_T References1_Y0;               /* Expression: 0
                                        * Referenced by: '<Root>/References1'
                                        */
  real_T References1_YFinal;           /* Expression: 2
                                        * Referenced by: '<Root>/References1'
                                        */
  real_T References_Time;              /* Expression: 1
                                        * Referenced by: '<Root>/References'
                                        */
  real_T References_Y0;                /* Expression: 0
                                        * Referenced by: '<Root>/References'
                                        */
  real_T References_YFinal;            /* Expression: 3
                                        * Referenced by: '<Root>/References'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Hand_Mode2_Threshold;         /* Expression: 0
                                        * Referenced by: '<S3>/Hand_Mode2'
                                        */
  real_T Hand_Mode4_Threshold;         /* Expression: 0
                                        * Referenced by: '<S3>/Hand_Mode4'
                                        */
  real_T System_Simulaton_InitialStates;/* Expression: 0
                                         * Referenced by: '<S3>/System_Simulaton'
                                         */
  real_T System_Delay_Simulation_Initial;/* Expression: 0.0
                                          * Referenced by: '<S3>/System_Delay_Simulation'
                                          */
  real_T Hand_Mode3_Threshold;         /* Expression: 0
                                        * Referenced by: '<S3>/Hand_Mode3'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S62>/Integrator'
                                        */
  real_T Hand_Mode_Threshold;          /* Expression: 0
                                        * Referenced by: '<S3>/Hand_Mode'
                                        */
  real_T Hand_Mode1_Threshold;         /* Expression: 0
                                        * Referenced by: '<S3>/Hand_Mode1'
                                        */
  real_T Switch_from_initial_Gain_to_Est;/* Expression: 0
                                          * Referenced by: '<S3>/Switch_from_initial_Gain_to_Estimated'
                                          */
  real_T Gain_Saturation_UpperSat;     /* Expression: 1.5
                                        * Referenced by: '<S104>/Gain_Saturation'
                                        */
  real_T Gain_Saturation_LowerSat;     /* Expression: 0.01
                                        * Referenced by: '<S104>/Gain_Saturation'
                                        */
  real_T inputSignalLowPassFilter_NumCoe;/* Expression: [0.01]
                                          * Referenced by: '<S4>/input Signal Low Pass Filter'
                                          */
  real_T inputSignalLowPassFilter_DenCoe[2];/* Expression: [1 -0.99]
                                             * Referenced by: '<S4>/input Signal Low Pass Filter'
                                             */
  real_T inputSignalLowPassFilter_Initia;/* Expression: 0
                                          * Referenced by: '<S4>/input Signal Low Pass Filter'
                                          */
  real_T outputSignalLowPassFilter1_NumC;/* Expression: [0.01]
                                          * Referenced by: '<S4>/output Signal Low Pass Filter1'
                                          */
  real_T outputSignalLowPassFilter1_DenC[2];/* Expression: [1 -0.99]
                                             * Referenced by: '<S4>/output Signal Low Pass Filter1'
                                             */
  real_T outputSignalLowPassFilter1_Init;/* Expression: 0
                                          * Referenced by: '<S4>/output Signal Low Pass Filter1'
                                          */
  real_T ForgettingFactor_Value;       /* Expression: initializationParams.adg1
                                        * Referenced by: '<S107>/Forgetting Factor'
                                        */
  real_T NormalizationBias_Value;      /* Expression: initializationParams.adg2
                                        * Referenced by: '<S107>/Normalization Bias'
                                        */
  real_T InitialParameters_Value[3];   /* Expression: initializationParams.theta0
                                        * Referenced by: '<S107>/InitialParameters'
                                        */
  real_T InitialCovariance_Value[9];   /* Expression: initializationParams.L0
                                        * Referenced by: '<S107>/InitialCovariance'
                                        */
  real_T InitialPhiMemory_Value[4];    /* Expression: initializationParams.phiMemory0
                                        * Referenced by: '<S107>/InitialPhiMemory'
                                        */
  real_T InitialInputs_Value;          /* Expression: initializationParams.initialInputs
                                        * Referenced by: '<S107>/InitialInputs'
                                        */
  real_T InitialOutputs_Value;         /* Expression: initializationParams.initialOutputs
                                        * Referenced by: '<S107>/InitialOutputs'
                                        */
  real_T InitialRegressorsDialog_Value;/* Expression: initializationParams.initialRegressors
                                        * Referenced by: '<S135>/InitialRegressors - Dialog'
                                        */
  real_T Constant3_Value_b;            /* Expression: 1/1200
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T Constant4_Value_l[2];         /* Expression: [1 -exp(-1/1200)]
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T EstimatedGainTiefpassfilter_Ini;/* Expression: 0
                                          * Referenced by: '<S4>/Estimated Gain Tiefpassfilter'
                                          */
  real_T Vorsichtwennresettetwirdmussers;/* Expression: 0
                                          * Referenced by: '<S4>/Vorsicht wenn resettet wird muss erst dieser Totzeitspeicher  voll gelaufen sein bevor die Adaption starten darf  Sonst kommt heir immer 0 raus und die Identifikation kann nicht rechnen'
                                          */
  real_T System_Delay_Simulation_Initi_c;/* Expression: 0.0
                                          * Referenced by: '<S4>/System_Delay_Simulation'
                                          */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  real_T Constant1_Value_o;            /* Expression: 600
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1.5
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Step7_Time;                   /* Expression: 3*10^4
                                        * Referenced by: '<Root>/Step7'
                                        */
  real_T Step7_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step7'
                                        */
  real_T Step7_YFinal;                 /* Expression: 1
                                        * Referenced by: '<Root>/Step7'
                                        */
  real_T Step8_Time;                   /* Expression: 3.8*10^4
                                        * Referenced by: '<Root>/Step8'
                                        */
  real_T Step8_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step8'
                                        */
  real_T Step8_YFinal;                 /* Expression: 0
                                        * Referenced by: '<Root>/Step8'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Constant11_Value;             /* Expression: 165
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T RandomNumber_Mean;            /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T RandomNumber_StdDev;          /* Computed Parameter: RandomNumber_StdDev
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T RandomNumber_Seed;            /* Expression: 0
                                        * Referenced by: '<Root>/Random Number'
                                        */
  real_T Step3_Time;                   /* Expression: 5000
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step3_Y0;                     /* Expression: 1
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step3_YFinal;                 /* Expression: 0
                                        * Referenced by: '<Root>/Step3'
                                        */
  real_T Step14_Time;                  /* Expression: 3*10^4
                                        * Referenced by: '<Root>/Step14'
                                        */
  real_T Step14_Y0;                    /* Expression: 0
                                        * Referenced by: '<Root>/Step14'
                                        */
  real_T Step14_YFinal;                /* Expression: -1
                                        * Referenced by: '<Root>/Step14'
                                        */
  real_T Step_Time;                    /* Expression: 300
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 5
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step6_Time;                   /* Expression: 19000
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T Step6_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T Step6_YFinal;                 /* Expression: 5
                                        * Referenced by: '<Root>/Step6'
                                        */
  real_T InitialHandValue1_Value;      /* Expression: 75
                                        * Referenced by: '<Root>/Initial Hand Value1'
                                        */
  real_T Constant_Value_g;             /* Expression: 3.047
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant12_Value;             /* Expression: 0.00445
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant15_Value;             /* Expression: 700
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant16'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T InitialHandValue_Value;       /* Expression: 75
                                        * Referenced by: '<Root>/Initial Hand Value'
                                        */
  real_T Constant3_Value_p;            /* Expression: 0.5/700
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant4_Value_n[2];         /* Expression: [1 -exp(-1/700)]
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S1>/Discrete Transfer Fcn'
                                          */
  uint32_T delayTheta_DelayLength;     /* Computed Parameter: delayTheta_DelayLength
                                        * Referenced by: '<S107>/delayTheta'
                                        */
  uint32_T delayL_DelayLength;         /* Computed Parameter: delayL_DelayLength
                                        * Referenced by: '<S107>/delayL'
                                        */
  uint32_T delayPhi_DelayLength;       /* Computed Parameter: delayPhi_DelayLength
                                        * Referenced by: '<S107>/delayPhi'
                                        */
  uint32_T delayBufferU_DelayLength;   /* Computed Parameter: delayBufferU_DelayLength
                                        * Referenced by: '<S107>/delayBufferU'
                                        */
  uint32_T delayBufferY_DelayLength;   /* Computed Parameter: delayBufferY_DelayLength
                                        * Referenced by: '<S107>/delayBufferY'
                                        */
  uint32_T delayBufferRegressors_DelayLeng;/* Computed Parameter: delayBufferRegressors_DelayLeng
                                            * Referenced by: '<S127>/delayBufferRegressors'
                                            */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S129>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S1>/Delay'
                                        */
  boolean_T Delay_InitialCondition_e;  /* Expression: true()
                                        * Referenced by: '<S129>/Delay'
                                        */
  boolean_T Constant_Value_e;          /* Expression: false()
                                        * Referenced by: '<S129>/Constant'
                                        */
  P_Get_Current_Offset_MIAC_ZTr_T Get_Current_delayed_Input_Offse;/* '<S4>/Get_Current_delayed_Input_Offset' */
  P_Get_Current_Offset_MIAC_ZTr_T Get_Current_Output_Offset;/* '<S4>/Get_Current_Output_Offset' */
  P_Get_Current_Offset_MIAC_ZTr_T Get_Current_Offset1;/* '<S3>/Get_Current_Offset1' */
  P_Get_Current_Offset_MIAC_ZTr_T Get_Current_Offset;/* '<S3>/Get_Current_Offset' */
};

/* Real-time Model Data Structure */
struct tag_RTM_MIAC_ZTransform_PLC_C_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_MIAC_ZTransform_PLC_Coder_n_T MIAC_ZTransform_PLC_Coder_not_P;

/* Block signals (default storage) */
extern B_MIAC_ZTransform_PLC_Coder_n_T MIAC_ZTransform_PLC_Coder_not_B;

/* Block states (default storage) */
extern DW_MIAC_ZTransform_PLC_Coder__T MIAC_ZTransform_PLC_Coder_no_DW;

/* Model entry point functions */
extern void MIAC_ZTransform_PLC_Coder_not_external_initialize(void);
extern void MIAC_ZTransform_PLC_Coder_not_external_step(void);
extern void MIAC_ZTransform_PLC_Coder_not_external_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MIAC_ZTransform_PLC__T *const MIAC_ZTransform_PLC_Coder_no_M;

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
 * '<Root>' : 'MIAC_ZTransform_PLC_Coder_not_external'
 * '<S1>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Drehofen'
 * '<S2>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC'
 * '<S3>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1'
 * '<S4>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification'
 * '<S5>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/Get_Current_Offset'
 * '<S6>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/Get_Current_Offset1'
 * '<S7>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti '
 * '<S8>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup'
 * '<S9>'   : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /D Gain'
 * '<S10>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter'
 * '<S11>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter ICs'
 * '<S12>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /I Gain'
 * '<S13>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain'
 * '<S14>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain Fdbk'
 * '<S15>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator'
 * '<S16>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator ICs'
 * '<S17>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Copy'
 * '<S18>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Gain'
 * '<S19>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /P Copy'
 * '<S20>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Parallel P Gain'
 * '<S21>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Reset Signal'
 * '<S22>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation'
 * '<S23>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation Fdbk'
 * '<S24>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum'
 * '<S25>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum Fdbk'
 * '<S26>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode'
 * '<S27>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode Sum'
 * '<S28>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /postSat Signal'
 * '<S29>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /preSat Signal'
 * '<S30>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Back Calculation'
 * '<S31>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Cont. Clamping Ideal'
 * '<S32>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Cont. Clamping Parallel'
 * '<S33>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Disabled'
 * '<S34>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Disc. Clamping Ideal'
 * '<S35>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Disc. Clamping Parallel'
 * '<S36>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Anti-windup/Passthrough'
 * '<S37>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /D Gain/Disabled'
 * '<S38>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /D Gain/External Parameters'
 * '<S39>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /D Gain/Internal Parameters'
 * '<S40>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Cont. Filter'
 * '<S41>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Differentiator'
 * '<S42>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Disabled'
 * '<S43>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Disc. Backward Euler Filter'
 * '<S44>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Disc. Forward Euler Filter'
 * '<S45>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter/Disc. Trapezoidal Filter'
 * '<S46>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter ICs/Disabled'
 * '<S47>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter ICs/External IC'
 * '<S48>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter ICs/Internal IC - Differentiator'
 * '<S49>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Filter ICs/Internal IC - Filter'
 * '<S50>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /I Gain/Disabled'
 * '<S51>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /I Gain/External Parameters'
 * '<S52>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /I Gain/Internal Parameters'
 * '<S53>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain/External Parameters'
 * '<S54>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain/Internal Parameters'
 * '<S55>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain/Passthrough'
 * '<S56>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain Fdbk/Disabled'
 * '<S57>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain Fdbk/External Parameters'
 * '<S58>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain Fdbk/Internal Parameters'
 * '<S59>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Ideal P Gain Fdbk/Passthrough'
 * '<S60>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator/Continuous'
 * '<S61>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator/Disabled'
 * '<S62>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator/Discrete'
 * '<S63>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator ICs/Disabled'
 * '<S64>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator ICs/External IC'
 * '<S65>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Integrator ICs/Internal IC'
 * '<S66>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Copy/Disabled'
 * '<S67>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Copy/Disabled wSignal Specification'
 * '<S68>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Copy/External Parameters'
 * '<S69>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Copy/Internal Parameters'
 * '<S70>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Gain/Disabled'
 * '<S71>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Gain/External Parameters'
 * '<S72>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Gain/Internal Parameters'
 * '<S73>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /N Gain/Passthrough'
 * '<S74>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /P Copy/Disabled'
 * '<S75>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /P Copy/External Parameters Ideal'
 * '<S76>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /P Copy/Internal Parameters Ideal'
 * '<S77>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Parallel P Gain/Disabled'
 * '<S78>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Parallel P Gain/External Parameters'
 * '<S79>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Parallel P Gain/Internal Parameters'
 * '<S80>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Parallel P Gain/Passthrough'
 * '<S81>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Reset Signal/Disabled'
 * '<S82>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Reset Signal/External Reset'
 * '<S83>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation/Enabled'
 * '<S84>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation/Passthrough'
 * '<S85>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation Fdbk/Disabled'
 * '<S86>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation Fdbk/Enabled'
 * '<S87>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Saturation Fdbk/Passthrough'
 * '<S88>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum/Passthrough_I'
 * '<S89>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum/Passthrough_P'
 * '<S90>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum/Sum_PD'
 * '<S91>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum/Sum_PI'
 * '<S92>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum/Sum_PID'
 * '<S93>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum Fdbk/Disabled'
 * '<S94>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum Fdbk/Enabled'
 * '<S95>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Sum Fdbk/Passthrough'
 * '<S96>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode/Disabled'
 * '<S97>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode/Enabled'
 * '<S98>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode Sum/Passthrough'
 * '<S99>'  : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /Tracking Mode Sum/Tracking Mode'
 * '<S100>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /postSat Signal/Feedback_Path'
 * '<S101>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /postSat Signal/Forward_Path'
 * '<S102>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /preSat Signal/Feedback_Path'
 * '<S103>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/Adaptive SmithPredictor1/PID Controller P plus Ti /preSat Signal/Forward_Path'
 * '<S104>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Calculate DC Gain1'
 * '<S105>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Get_Current_Output_Offset'
 * '<S106>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Get_Current_delayed_Input_Offset'
 * '<S107>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1'
 * '<S108>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Enable Signal'
 * '<S109>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Initial Covariance'
 * '<S110>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Initial Inputs'
 * '<S111>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Initial Outputs'
 * '<S112>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Initial Parameters'
 * '<S113>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Check Signals'
 * '<S114>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - AdaptationParameter1'
 * '<S115>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - AdaptationParameter2'
 * '<S116>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - InitialCovariance'
 * '<S117>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - InitialInputs'
 * '<S118>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - InitialOutputs'
 * '<S119>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - InitialParameters'
 * '<S120>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - InitialPhi'
 * '<S121>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - L'
 * '<S122>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - Phi'
 * '<S123>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - Theta'
 * '<S124>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - uMemory'
 * '<S125>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion - yMemory'
 * '<S126>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Data Type Conversion Inherited0'
 * '<S127>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Estimator'
 * '<S128>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/MultiplyWithTranspose'
 * '<S129>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Process Reset'
 * '<S130>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/ProcessInitialCovariance'
 * '<S131>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/ProcessInitialInputs'
 * '<S132>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/ProcessInitialOutputs'
 * '<S133>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/ProcessInitialParameters'
 * '<S134>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Estimator/Data Type Conversion - regressorsMemory'
 * '<S135>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Estimator/InitializeRegressors'
 * '<S136>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Estimator/rarx'
 * '<S137>' : 'MIAC_ZTransform_PLC_Coder_not_external/Smith_Predictor_and_MIAC/System Identification/Recursive Polynomial Model Estimator1/Process Reset/Check Reset'
 */
#endif                                 /* RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_h_ */
