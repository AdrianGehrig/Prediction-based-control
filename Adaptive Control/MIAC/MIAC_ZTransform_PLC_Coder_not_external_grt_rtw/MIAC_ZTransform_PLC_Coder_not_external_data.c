/*
 * MIAC_ZTransform_PLC_Coder_not_external_data.c
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

#include "MIAC_ZTransform_PLC_Coder_not_external.h"
#include "MIAC_ZTransform_PLC_Coder_not_external_private.h"

/* Block parameters (default storage) */
P_MIAC_ZTransform_PLC_Coder_n_T MIAC_ZTransform_PLC_Coder_not_P = {
  /* Mask Parameter: PIDControllerPplusTi_LowerSatur
   * Referenced by: '<S83>/Saturation'
   */
  0.0,

  /* Mask Parameter: PIDControllerPplusTi_UpperSatur
   * Referenced by: '<S83>/Saturation'
   */
  100.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Constant14'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S3>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/References4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/References4'
   */
  0.0,

  /* Expression: 165
   * Referenced by: '<Root>/References4'
   */
  165.0,

  /* Expression: 40000
   * Referenced by: '<Root>/References5'
   */
  40000.0,

  /* Expression: 0
   * Referenced by: '<Root>/References5'
   */
  0.0,

  /* Expression: -7
   * Referenced by: '<Root>/References5'
   */
  -7.0,

  /* Expression: 35000
   * Referenced by: '<Root>/References3'
   */
  35000.0,

  /* Expression: 0
   * Referenced by: '<Root>/References3'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/References3'
   */
  3.0,

  /* Expression: 18000
   * Referenced by: '<Root>/References2'
   */
  18000.0,

  /* Expression: 0
   * Referenced by: '<Root>/References2'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/References2'
   */
  3.0,

  /* Expression: 12000
   * Referenced by: '<Root>/References1'
   */
  12000.0,

  /* Expression: 0
   * Referenced by: '<Root>/References1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/References1'
   */
  2.0,

  /* Expression: 1
   * Referenced by: '<Root>/References'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/References'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<Root>/References'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S3>/Constant4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Gain1'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Hand_Mode2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Hand_Mode4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/System_Simulaton'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S3>/System_Delay_Simulation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Hand_Mode3'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S62>/Integrator'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Hand_Mode'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Hand_Mode1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Switch_from_initial_Gain_to_Estimated'
   */
  0.0,

  /* Expression: 1.5
   * Referenced by: '<S104>/Gain_Saturation'
   */
  1.5,

  /* Expression: 0.01
   * Referenced by: '<S104>/Gain_Saturation'
   */
  0.01,

  /* Expression: [0.01]
   * Referenced by: '<S4>/input Signal Low Pass Filter'
   */
  0.01,

  /* Expression: [1 -0.99]
   * Referenced by: '<S4>/input Signal Low Pass Filter'
   */
  { 1.0, -0.99 },

  /* Expression: 0
   * Referenced by: '<S4>/input Signal Low Pass Filter'
   */
  0.0,

  /* Expression: [0.01]
   * Referenced by: '<S4>/output Signal Low Pass Filter1'
   */
  0.01,

  /* Expression: [1 -0.99]
   * Referenced by: '<S4>/output Signal Low Pass Filter1'
   */
  { 1.0, -0.99 },

  /* Expression: 0
   * Referenced by: '<S4>/output Signal Low Pass Filter1'
   */
  0.0,

  /* Expression: initializationParams.adg1
   * Referenced by: '<S107>/Forgetting Factor'
   */
  1.0,

  /* Expression: initializationParams.adg2
   * Referenced by: '<S107>/Normalization Bias'
   */
  0.0,

  /* Expression: initializationParams.theta0
   * Referenced by: '<S107>/InitialParameters'
   */
  { 2.2204460492503131E-16, 2.2204460492503131E-16, 2.2204460492503131E-16 },

  /* Expression: initializationParams.L0
   * Referenced by: '<S107>/InitialCovariance'
   */
  { 3.1622776601683795, 0.0, 0.0, 0.0, 3.1622776601683795, 0.0, 0.0, 0.0,
    3.1622776601683795 },

  /* Expression: initializationParams.phiMemory0
   * Referenced by: '<S107>/InitialPhiMemory'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: initializationParams.initialInputs
   * Referenced by: '<S107>/InitialInputs'
   */
  0.0,

  /* Expression: initializationParams.initialOutputs
   * Referenced by: '<S107>/InitialOutputs'
   */
  0.0,

  /* Expression: initializationParams.initialRegressors
   * Referenced by: '<S135>/InitialRegressors - Dialog'
   */
  0.0,

  /* Expression: 1/1200
   * Referenced by: '<S4>/Constant3'
   */
  0.00083333333333333339,

  /* Expression: [1 -exp(-1/1200)]
   * Referenced by: '<S4>/Constant4'
   */
  { 1.0, -0.99916701379245831 },

  /* Expression: 0
   * Referenced by: '<S4>/Estimated Gain Tiefpassfilter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Vorsicht wenn resettet wird muss erst dieser Totzeitspeicher  voll gelaufen sein bevor die Adaption starten darf  Sonst kommt heir immer 0 raus und die Identifikation kann nicht rechnen'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S4>/System_Delay_Simulation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay'
   */
  0.0,

  /* Expression: 600
   * Referenced by: '<Root>/Constant1'
   */
  600.0,

  /* Expression: 0.0
   * Referenced by: '<S1>/Delay'
   */
  0.0,

  /* Expression: 1.5
   * Referenced by: '<Root>/Gain'
   */
  1.5,

  /* Expression: 3*10^4
   * Referenced by: '<Root>/Step7'
   */
  30000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step7'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Step7'
   */
  1.0,

  /* Expression: 3.8*10^4
   * Referenced by: '<Root>/Step8'
   */
  38000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch'
   */
  0.0,

  /* Expression: 165
   * Referenced by: '<Root>/Constant11'
   */
  165.0,

  /* Expression: 0
   * Referenced by: '<Root>/Random Number'
   */
  0.0,

  /* Computed Parameter: RandomNumber_StdDev
   * Referenced by: '<Root>/Random Number'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<Root>/Random Number'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<Root>/Step3'
   */
  5000.0,

  /* Expression: 1
   * Referenced by: '<Root>/Step3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step3'
   */
  0.0,

  /* Expression: 3*10^4
   * Referenced by: '<Root>/Step14'
   */
  30000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step14'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<Root>/Step14'
   */
  -1.0,

  /* Expression: 300
   * Referenced by: '<Root>/Step'
   */
  300.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<Root>/Step'
   */
  5.0,

  /* Expression: 19000
   * Referenced by: '<Root>/Step6'
   */
  19000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step6'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<Root>/Step6'
   */
  5.0,

  /* Expression: 75
   * Referenced by: '<Root>/Initial Hand Value1'
   */
  75.0,

  /* Expression: 3.047
   * Referenced by: '<Root>/Constant'
   */
  3.047,

  /* Expression: 0.00445
   * Referenced by: '<Root>/Constant12'
   */
  0.00445,

  /* Expression: 700
   * Referenced by: '<Root>/Constant15'
   */
  700.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant16'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant13'
   */
  0.0,

  /* Expression: 75
   * Referenced by: '<Root>/Initial Hand Value'
   */
  75.0,

  /* Expression: 0.5/700
   * Referenced by: '<S1>/Constant3'
   */
  0.00071428571428571429,

  /* Expression: [1 -exp(-1/700)]
   * Referenced by: '<S1>/Constant4'
   */
  { 1.0, -0.99857244849385662 },

  /* Expression: 0
   * Referenced by: '<S1>/Discrete Transfer Fcn'
   */
  0.0,

  /* Computed Parameter: delayTheta_DelayLength
   * Referenced by: '<S107>/delayTheta'
   */
  1U,

  /* Computed Parameter: delayL_DelayLength
   * Referenced by: '<S107>/delayL'
   */
  1U,

  /* Computed Parameter: delayPhi_DelayLength
   * Referenced by: '<S107>/delayPhi'
   */
  1U,

  /* Computed Parameter: delayBufferU_DelayLength
   * Referenced by: '<S107>/delayBufferU'
   */
  1U,

  /* Computed Parameter: delayBufferY_DelayLength
   * Referenced by: '<S107>/delayBufferY'
   */
  1U,

  /* Computed Parameter: delayBufferRegressors_DelayLeng
   * Referenced by: '<S127>/delayBufferRegressors'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S129>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S1>/Delay'
   */
  600U,

  /* Expression: true()
   * Referenced by: '<S129>/Delay'
   */
  1,

  /* Expression: false()
   * Referenced by: '<S129>/Constant'
   */
  0,

  /* Start of '<S4>/Get_Current_delayed_Input_Offset' */
  {
    /* Computed Parameter: Holdwhendisabled_Y0
     * Referenced by: '<S106>/Hold when disabled'
     */
    0.0
  }
  ,

  /* End of '<S4>/Get_Current_delayed_Input_Offset' */

  /* Start of '<S4>/Get_Current_Output_Offset' */
  {
    /* Computed Parameter: Holdwhendisabled_Y0
     * Referenced by: '<S105>/Hold when disabled'
     */
    0.0
  }
  ,

  /* End of '<S4>/Get_Current_Output_Offset' */

  /* Start of '<S3>/Get_Current_Offset1' */
  {
    /* Computed Parameter: Holdwhendisabled_Y0
     * Referenced by: '<S6>/Hold when disabled'
     */
    0.0
  }
  ,

  /* End of '<S3>/Get_Current_Offset1' */

  /* Start of '<S3>/Get_Current_Offset' */
  {
    /* Computed Parameter: Holdwhendisabled_Y0
     * Referenced by: '<S5>/Hold when disabled'
     */
    0.0
  }
  /* End of '<S3>/Get_Current_Offset' */
};
