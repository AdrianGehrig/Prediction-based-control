/*
 * MIAC_ZTransform_PLC_Coder_not_external.c
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

/* Block signals (default storage) */
B_MIAC_ZTransform_PLC_Coder_n_T MIAC_ZTransform_PLC_Coder_not_B;

/* Block states (default storage) */
DW_MIAC_ZTransform_PLC_Coder__T MIAC_ZTransform_PLC_Coder_no_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_MIAC_ZTransform_PLC_C_T MIAC_ZTransform_PLC_Cod_PrevZCX;

/* Real-time model */
RT_MODEL_MIAC_ZTransform_PLC__T MIAC_ZTransform_PLC_Coder_no_M_;
RT_MODEL_MIAC_ZTransform_PLC__T *const MIAC_ZTransform_PLC_Coder_no_M =
  &MIAC_ZTransform_PLC_Coder_no_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2])++;
  if ((MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [10.0s, 0.0s] */
    MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * System initialize for enable system:
 *    '<S3>/Get_Current_Offset'
 *    '<S3>/Get_Current_Offset1'
 *    '<S4>/Get_Current_Output_Offset'
 *    '<S4>/Get_Current_delayed_Input_Offset'
 */
void MIAC_ZT_Get_Current_Offset_Init(B_Get_Current_Offset_MIAC_ZTr_T *localB,
  P_Get_Current_Offset_MIAC_ZTr_T *localP)
{
  /* SystemInitialize for Outport: '<S5>/Hold when disabled' */
  localB->In1 = localP->Holdwhendisabled_Y0;
}

/*
 * Output and update for enable system:
 *    '<S3>/Get_Current_Offset'
 *    '<S3>/Get_Current_Offset1'
 *    '<S4>/Get_Current_Output_Offset'
 *    '<S4>/Get_Current_delayed_Input_Offset'
 */
void MIAC_ZTransf_Get_Current_Offset(boolean_T rtu_Enable, real_T rtu_In1,
  B_Get_Current_Offset_MIAC_ZTr_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S3>/Get_Current_Offset' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S5>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S3>/Get_Current_Offset' */
}

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T lo;
  uint32_T hi;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T y;
  real_T sr;
  real_T si;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

/* Model step function */
void MIAC_ZTransform_PLC_Coder_not_external_step(void)
{
  /* local block i/o variables */
  real_T rtb_DiscreteTransferFcn;
  real_T rtb_UnitDelay;
  real_T rtb_inputdelayed;
  real_T rtb_System_Simulaton;
  real_T rtb_SmithPredictor;
  real_T rtb_Minus;
  boolean_T rtb_NOT;
  boolean_T rtb_NOT1;
  boolean_T rtb_NOT1_l;
  boolean_T rtb_NOT_b;

  {
    real_T phi[3];
    real_T fTr[3];
    real_T a1;
    real_T sqrtA0overA1;
    real_T sqrtA0timesA1;
    real_T rtb_phiMemory[4];
    real_T rtb_L[9];
    real_T rtb_StartAdaption;
    real_T rtb_theta[3];
    real_T rtb_BzSumofElements;
    int32_T tmp;
    real_T outputminusmean;
    int32_T i;
    real_T outputSignalLowPassFilter1;
    real_T input;
    uint32_T tmp_0;
    boolean_T tmp_1;
    real_T rtb_theta_tmp;
    real_T rtb_theta_tmp_0;

    /* Delay: '<S1>/Delay' */
    MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor =
      MIAC_ZTransform_PLC_Coder_no_DW.Delay_DSTATE[0];

    /* Gain: '<Root>/Gain' */
    MIAC_ZTransform_PLC_Coder_not_B.Gain =
      MIAC_ZTransform_PLC_Coder_not_P.Gain_Gain_j *
      MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor;
    if (MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2] == 0) {
      /* RandomNumber: '<Root>/Random Number' */
      MIAC_ZTransform_PLC_Coder_not_B.RandomNumber =
        MIAC_ZTransform_PLC_Coder_no_DW.NextOutput;
    }

    /* Step: '<Root>/Step7' incorporates:
     *  Step: '<Root>/Step'
     *  Step: '<Root>/Step6'
     *  Step: '<Root>/Step8'
     */
    a1 = MIAC_ZTransform_PLC_Coder_no_M->Timing.t[0];
    if (a1 < MIAC_ZTransform_PLC_Coder_not_P.Step7_Time) {
      rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_P.Step7_Y0;
    } else {
      rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_P.Step7_YFinal;
    }

    /* End of Step: '<Root>/Step7' */

    /* Step: '<Root>/Step8' */
    if (a1 < MIAC_ZTransform_PLC_Coder_not_P.Step8_Time) {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step8_Y0;
    } else {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step8_YFinal;
    }

    /* Switch: '<Root>/Switch' incorporates:
     *  Sum: '<Root>/Add4'
     */
    if (rtb_BzSumofElements + input >
        MIAC_ZTransform_PLC_Coder_not_P.Switch_Threshold) {
      rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_B.Gain;
    } else {
      rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor;
    }

    /* End of Switch: '<Root>/Switch' */

    /* Sum: '<Root>/Add3' incorporates:
     *  Constant: '<Root>/Constant11'
     *  Sum: '<Root>/Add'
     */
    MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor_p = (rtb_BzSumofElements
      + MIAC_ZTransform_PLC_Coder_not_P.Constant11_Value) +
      MIAC_ZTransform_PLC_Coder_not_B.RandomNumber;

    /* Outputs for Atomic SubSystem: '<Root>/Smith_Predictor_and_MIAC' */
    /* Outputs for Atomic SubSystem: '<S2>/Adaptive SmithPredictor1' */
    /* Step: '<Root>/Step14' incorporates:
     *  Step: '<Root>/References'
     *  Step: '<Root>/References1'
     *  Step: '<Root>/References2'
     *  Step: '<Root>/References3'
     *  Step: '<Root>/References4'
     *  Step: '<Root>/References5'
     *  Step: '<Root>/Step3'
     *  Switch: '<S3>/Hand_Mode2'
     */
    rtb_BzSumofElements = (((MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTick1+
      MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTickH1* 4294967296.0)) * 1.0);

    /* End of Outputs for SubSystem: '<S2>/Adaptive SmithPredictor1' */
    /* End of Outputs for SubSystem: '<Root>/Smith_Predictor_and_MIAC' */
    if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.Step14_Time) {
      rtb_Minus = MIAC_ZTransform_PLC_Coder_not_P.Step14_Y0;
    } else {
      rtb_Minus = MIAC_ZTransform_PLC_Coder_not_P.Step14_YFinal;
    }

    /* End of Step: '<Root>/Step14' */

    /* Step: '<Root>/Step3' */
    if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.Step3_Time) {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step3_Y0;
    } else {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step3_YFinal;
    }

    /* Sum: '<Root>/Add7' */
    rtb_StartAdaption = input + rtb_Minus;

    /* Step: '<Root>/Step' */
    if (a1 < MIAC_ZTransform_PLC_Coder_not_P.Step_Time) {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step_Y0;
    } else {
      input = MIAC_ZTransform_PLC_Coder_not_P.Step_YFinal;
    }

    /* Step: '<Root>/Step6' */
    if (a1 < MIAC_ZTransform_PLC_Coder_not_P.Step6_Time) {
      a1 = MIAC_ZTransform_PLC_Coder_not_P.Step6_Y0;
    } else {
      a1 = MIAC_ZTransform_PLC_Coder_not_P.Step6_YFinal;
    }

    /* Sum: '<Root>/Add1' incorporates:
     *  Constant: '<Root>/Initial Hand Value1'
     */
    MIAC_ZTransform_PLC_Coder_not_B.Add1 = (input + a1) +
      MIAC_ZTransform_PLC_Coder_not_P.InitialHandValue1_Value;

    /* Outputs for Atomic SubSystem: '<Root>/Smith_Predictor_and_MIAC' */
    /* UnitDelay: '<S2>/Unit Delay' */
    rtb_UnitDelay = MIAC_ZTransform_PLC_Coder_no_DW.UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S2>/System Identification' */
    /* DiscreteTransferFcn: '<S4>/input Signal Low Pass Filter' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.inputSignalLowPassFilter_Reset_,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.inputSignalLowPassFilter_states =
        MIAC_ZTransform_PLC_Coder_not_P.inputSignalLowPassFilter_Initia;
    }

    input = MIAC_ZTransform_PLC_Coder_not_P.inputSignalLowPassFilter_NumCoe *
      MIAC_ZTransform_PLC_Coder_no_DW.inputSignalLowPassFilter_states;

    /* End of DiscreteTransferFcn: '<S4>/input Signal Low Pass Filter' */

    /* DiscreteTransferFcn: '<S4>/output Signal Low Pass Filter1' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.outputSignalLowPassFilter1_Rese,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.outputSignalLowPassFilter1_stat =
        MIAC_ZTransform_PLC_Coder_not_P.outputSignalLowPassFilter1_Init;
    }

    outputminusmean =
      MIAC_ZTransform_PLC_Coder_not_P.outputSignalLowPassFilter1_NumC *
      MIAC_ZTransform_PLC_Coder_no_DW.outputSignalLowPassFilter1_stat;
    outputSignalLowPassFilter1 = outputminusmean;

    /* Delay: '<S107>/delayTheta' incorporates:
     *  Constant: '<Root>/Constant13'
     *  Constant: '<S107>/InitialParameters'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayTheta_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad = 1U;
    }

    if (MIAC_ZTransform_PLC_Coder_no_DW.icLoad != 0) {
      MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[0] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialParameters_Value[0];
      MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[1] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialParameters_Value[1];
      MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[2] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialParameters_Value[2];
    }

    /* Delay: '<S107>/delayL' incorporates:
     *  Constant: '<Root>/Constant13'
     *  Constant: '<S107>/InitialCovariance'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayL_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad_o = 1U;
    }

    if (MIAC_ZTransform_PLC_Coder_no_DW.icLoad_o != 0) {
      memcpy(&MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[0],
             &MIAC_ZTransform_PLC_Coder_not_P.InitialCovariance_Value[0], 9U *
             sizeof(real_T));
    }

    /* Delay: '<S107>/delayPhi' incorporates:
     *  Constant: '<Root>/Constant13'
     *  Constant: '<S107>/InitialPhiMemory'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayPhi_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad_g = 1U;
    }

    if (MIAC_ZTransform_PLC_Coder_no_DW.icLoad_g != 0) {
      MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[0] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialPhiMemory_Value[0];
      MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[1] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialPhiMemory_Value[1];
      MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[2] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialPhiMemory_Value[2];
      MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[3] =
        MIAC_ZTransform_PLC_Coder_not_P.InitialPhiMemory_Value[3];
    }

    /* Delay: '<S107>/delayBufferU' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferU_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad_m = 1U;
    }

    /* End of Delay: '<S107>/delayBufferU' */

    /* Delay: '<S107>/delayBufferY' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferY_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad_k = 1U;
    }

    /* End of Delay: '<S107>/delayBufferY' */

    /* Delay: '<S127>/delayBufferRegressors' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferRegressors_Reset_ZCE,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.icLoad_f = 1U;
    }

    /* End of Delay: '<S127>/delayBufferRegressors' */

    /* Delay: '<S129>/Delay' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    rt_ZCFcn(RISING_ZERO_CROSSING,
             &MIAC_ZTransform_PLC_Cod_PrevZCX.Delay_Reset_ZCE,
             (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value));

    /* MATLAB Function: '<S127>/rarx' incorporates:
     *  Constant: '<Root>/Constant13'
     *  Constant: '<S107>/Forgetting Factor'
     *  DataTypeConversion: '<S107>/DataTypeConversionEnable'
     *  Delay: '<S107>/delayL'
     *  Delay: '<S107>/delayPhi'
     *  Delay: '<S107>/delayTheta'
     *  DiscreteTransferFcn: '<S4>/output Signal Low Pass Filter1'
     */
    rtb_theta[0] = MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[0];
    rtb_theta[1] = MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[1];
    rtb_theta[2] = MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[2];
    memcpy(&rtb_L[0], &MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[0], 9U *
           sizeof(real_T));
    if (!MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator_not_empty) {
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator_not_empty = true;
    }

    MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.OutputDataIterator.IteratorPosition
      = 1;
    MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.InputDataIterator.IteratorPosition
      = 1;
    i =
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.OutputDataIterator.IteratorPosition
      + 1;
    if (i < 2) {
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.OutputDataIterator.IteratorPosition
        = i;
    } else {
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.OutputDataIterator.IteratorPosition
        = 2;
    }

    i =
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.InputDataIterator.IteratorPosition
      + 1;
    if (i < 2) {
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.InputDataIterator.IteratorPosition
        = i;
    } else {
      MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator.InputDataIterator.IteratorPosition
        = 2;
    }

    outputminusmean -= (MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[0] *
                        MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[0] +
                        MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[1] *
                        MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[1]) +
      MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[3] *
      MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[2];
    if (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value != 0.0) {
      for (i = 0; i < 3; i++) {
        fTr[i] = MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[3 * i + 2] *
          MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[3] +
          (MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[3 * i + 1] *
           MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[1] +
           MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[3 * i] *
           MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[0]);
      }

      phi[0] = 0.0;
      rtb_theta[0] = 0.0;
      phi[1] = 0.0;
      rtb_theta[1] = 0.0;
      a1 = fTr[2] * fTr[2] +
        MIAC_ZTransform_PLC_Coder_not_P.ForgettingFactor_Value;
      sqrtA0overA1 = sqrt(MIAC_ZTransform_PLC_Coder_not_P.ForgettingFactor_Value
                          / a1);
      rtb_theta[2] = rtb_L[8] * fTr[2];
      rtb_L[8] = rtb_L[8] * sqrtA0overA1 - 0.0 * fTr[2] / (sqrtA0overA1 * a1);
      phi[2] = rtb_theta[2];
      sqrtA0overA1 = a1;
      a1 += fTr[1] * fTr[1];
      sqrtA0overA1 = sqrt(sqrtA0overA1 / a1);
      sqrtA0timesA1 = sqrtA0overA1 * a1;
      for (i = 0; i < 2; i++) {
        rtb_theta_tmp = rtb_L[5 - i];
        rtb_theta_tmp_0 = phi[2 - i];
        rtb_theta[2 - i] = rtb_theta_tmp * fTr[1] + rtb_theta_tmp_0;
        rtb_L[5 - i] = rtb_theta_tmp * sqrtA0overA1 - rtb_theta_tmp_0 * fTr[1] /
          sqrtA0timesA1;
        phi[2 - i] = rtb_theta[2 - i];
      }

      sqrtA0overA1 = a1;
      a1 += fTr[0] * fTr[0];
      sqrtA0overA1 = sqrt(sqrtA0overA1 / a1);
      sqrtA0timesA1 = sqrtA0overA1 * a1;
      for (i = 0; i < 3; i++) {
        rtb_theta_tmp = rtb_L[2 - i];
        rtb_theta_tmp_0 = phi[2 - i];
        rtb_theta[2 - i] = rtb_theta_tmp * fTr[0] + rtb_theta_tmp_0;
        rtb_L[2 - i] = rtb_theta_tmp * sqrtA0overA1 - rtb_theta_tmp_0 * fTr[0] /
          sqrtA0timesA1;
        phi[2 - i] = rtb_theta[2 - i];
      }

      rtb_theta[0] /= a1;
      rtb_theta[1] /= a1;
      sqrtA0overA1 = rtb_theta[2] / a1;
      a1 = sqrt(MIAC_ZTransform_PLC_Coder_not_P.ForgettingFactor_Value);
      rtb_L[8] /= a1;
      rtb_theta[0] = rtb_theta[0] * outputminusmean +
        MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[0];
      for (tmp = 0; tmp < 2; tmp++) {
        i = tmp + 1;
        rtb_L[i + 3] /= a1;
      }

      rtb_theta[1] = rtb_theta[1] * outputminusmean +
        MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[1];
      for (tmp = 0; tmp < 3; tmp++) {
        rtb_L[tmp] /= a1;
      }

      rtb_theta[2] = sqrtA0overA1 * outputminusmean +
        MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[2];
    }

    rtb_phiMemory[2] = MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[1];
    rtb_phiMemory[1] = MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[0];

    /* Outputs for Atomic SubSystem: '<S4>/Calculate DC Gain1' */
    /* Product: '<S104>/Divide' incorporates:
     *  MATLAB Function: '<S127>/rarx'
     *  Sum: '<S104>/A(z) Sum of Elements'
     */
    rtb_Minus = rtb_theta[2] / ((1.0 + rtb_theta[0]) + rtb_theta[1]);

    /* End of Outputs for SubSystem: '<S4>/Calculate DC Gain1' */

    /* DiscreteTransferFcn: '<S4>/Estimated Gain Tiefpassfilter' incorporates:
     *  Constant: '<Root>/Constant13'
     *  Constant: '<S4>/Constant3'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.EstimatedGainTiefpassfilter_Res,
                 (MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value)) !=
        NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.EstimatedGainTiefpassfilter_sta =
        MIAC_ZTransform_PLC_Coder_not_P.EstimatedGainTiefpassfilter_Ini;
    }

    outputminusmean = MIAC_ZTransform_PLC_Coder_not_P.Constant3_Value_b *
      MIAC_ZTransform_PLC_Coder_no_DW.EstimatedGainTiefpassfilter_sta;

    /* End of DiscreteTransferFcn: '<S4>/Estimated Gain Tiefpassfilter' */

    /* Logic: '<S4>/NOT' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    rtb_NOT = !(MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value != 0.0);

    /* Outputs for Enabled SubSystem: '<S4>/Get_Current_Output_Offset' */
    MIAC_ZTransf_Get_Current_Offset(rtb_NOT,
      MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor_p,
      &MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Output_Offset);

    /* End of Outputs for SubSystem: '<S4>/Get_Current_Output_Offset' */

    /* Delay: '<S4>/System_Delay_Simulation' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Constant: '<S4>/Vorsicht wenn resettet wird muss erst dieser Totzeitspeicher  voll gelaufen sein bevor die Adaption starten darf  Sonst kommt heir immer 0 raus und die Identifikation kann nicht rechnen'
     *  Delay: '<S3>/System_Delay_Simulation'
     */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.System_Delay_Simulation_Reset_Z,
                 (MIAC_ZTransform_PLC_Coder_not_P.Vorsichtwennresettetwirdmussers))
        != NO_ZCEVENT) {
      for (i = 0; i < 800; i++) {
        MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[i] =
          MIAC_ZTransform_PLC_Coder_not_P.System_Delay_Simulation_Initi_c;
      }
    }

    /* Outputs for Atomic SubSystem: '<S2>/Adaptive SmithPredictor1' */
    tmp_1 = rtIsNaN(MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o);

    /* End of Outputs for SubSystem: '<S2>/Adaptive SmithPredictor1' */
    if ((MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o < 1.0) || tmp_1) {
      rtb_inputdelayed = rtb_UnitDelay;
    } else {
      if (MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o > 800.0) {
        tmp_0 = 800U;
      } else {
        a1 = trunc(MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o);
        if (rtIsNaN(a1) || rtIsInf(a1)) {
          a1 = 0.0;
        } else {
          a1 = fmod(a1, 4.294967296E+9);
        }

        tmp_0 = a1 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-a1 : (uint32_T)a1;
      }

      rtb_inputdelayed =
        MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[800U -
        tmp_0];
    }

    /* End of Delay: '<S4>/System_Delay_Simulation' */

    /* Logic: '<S4>/NOT1' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    rtb_NOT1 = !(MIAC_ZTransform_PLC_Coder_not_P.Constant13_Value != 0.0);

    /* Outputs for Enabled SubSystem: '<S4>/Get_Current_delayed_Input_Offset' */
    MIAC_ZTransf_Get_Current_Offset(rtb_NOT1, rtb_inputdelayed,
      &MIAC_ZTransform_PLC_Coder_not_B.Get_Current_delayed_Input_Offse);

    /* End of Outputs for SubSystem: '<S4>/Get_Current_delayed_Input_Offset' */

    /* Update for DiscreteTransferFcn: '<S4>/input Signal Low Pass Filter' incorporates:
     *  Sum: '<S4>/Substract Current Offset  so that the linearised model works1'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.inputSignalLowPassFilter_states =
      (rtb_inputdelayed -
       MIAC_ZTransform_PLC_Coder_not_B.Get_Current_delayed_Input_Offse.In1) -
      MIAC_ZTransform_PLC_Coder_not_P.inputSignalLowPassFilter_DenCoe[1] *
      MIAC_ZTransform_PLC_Coder_no_DW.inputSignalLowPassFilter_states;

    /* Update for DiscreteTransferFcn: '<S4>/output Signal Low Pass Filter1' incorporates:
     *  Sum: '<S4>/Substract Current Offset  so that the linearised model works'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.outputSignalLowPassFilter1_stat =
      (MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor_p -
       MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Output_Offset.In1) -
      MIAC_ZTransform_PLC_Coder_not_P.outputSignalLowPassFilter1_DenC[1] *
      MIAC_ZTransform_PLC_Coder_no_DW.outputSignalLowPassFilter1_stat;

    /* Update for Delay: '<S107>/delayTheta' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad = 0U;
    MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[0] = rtb_theta[0];
    MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[1] = rtb_theta[1];
    MIAC_ZTransform_PLC_Coder_no_DW.delayTheta_DSTATE[2] = rtb_theta[2];

    /* Update for Delay: '<S107>/delayL' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_o = 0U;
    memcpy(&MIAC_ZTransform_PLC_Coder_no_DW.delayL_DSTATE[0], &rtb_L[0], 9U *
           sizeof(real_T));

    /* Update for Delay: '<S107>/delayPhi' incorporates:
     *  MATLAB Function: '<S127>/rarx'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_g = 0U;
    MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[0] =
      -outputSignalLowPassFilter1;
    MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[1] = rtb_phiMemory[1];
    MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[2] = rtb_phiMemory[2];
    MIAC_ZTransform_PLC_Coder_no_DW.delayPhi_DSTATE[3] = input;

    /* Update for Delay: '<S107>/delayBufferU' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_m = 0U;

    /* Update for Delay: '<S107>/delayBufferY' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_k = 0U;

    /* Update for Delay: '<S127>/delayBufferRegressors' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_f = 0U;

    /* Outputs for Atomic SubSystem: '<S4>/Calculate DC Gain1' */
    /* Saturate: '<S104>/Gain_Saturation' */
    if (rtb_Minus > MIAC_ZTransform_PLC_Coder_not_P.Gain_Saturation_UpperSat) {
      a1 = MIAC_ZTransform_PLC_Coder_not_P.Gain_Saturation_UpperSat;
    } else if (rtb_Minus <
               MIAC_ZTransform_PLC_Coder_not_P.Gain_Saturation_LowerSat) {
      a1 = MIAC_ZTransform_PLC_Coder_not_P.Gain_Saturation_LowerSat;
    } else {
      a1 = rtb_Minus;
    }

    /* End of Saturate: '<S104>/Gain_Saturation' */
    /* End of Outputs for SubSystem: '<S4>/Calculate DC Gain1' */

    /* Update for DiscreteTransferFcn: '<S4>/Estimated Gain Tiefpassfilter' incorporates:
     *  Constant: '<S4>/Constant4'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.EstimatedGainTiefpassfilter_sta = a1 -
      MIAC_ZTransform_PLC_Coder_not_P.Constant4_Value_l[1] *
      MIAC_ZTransform_PLC_Coder_no_DW.EstimatedGainTiefpassfilter_sta;

    /* Update for Delay: '<S4>/System_Delay_Simulation' */
    for (i = 0; i < 799; i++) {
      MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[i] =
        MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[i + 1];
    }

    MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[799] =
      rtb_UnitDelay;

    /* End of Update for Delay: '<S4>/System_Delay_Simulation' */
    /* End of Outputs for SubSystem: '<S2>/System Identification' */

    /* Outputs for Atomic SubSystem: '<S2>/Adaptive SmithPredictor1' */
    /* Product: '<S3>/Divide' incorporates:
     *  Constant: '<Root>/Constant15'
     *  Constant: '<S3>/Constant1'
     */
    MIAC_ZTransform_PLC_Coder_not_B.Numerator_ZTransformation_PT1 =
      MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value /
      MIAC_ZTransform_PLC_Coder_not_P.Constant15_Value;

    /* Switch: '<S3>/Hand_Mode2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  Sum: '<Root>/Add10'
     */
    if (0.0 > MIAC_ZTransform_PLC_Coder_not_P.Hand_Mode2_Threshold) {
      /* Step: '<Root>/References' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References_Time)
      {
        a1 = MIAC_ZTransform_PLC_Coder_not_P.References_Y0;
      } else {
        a1 = MIAC_ZTransform_PLC_Coder_not_P.References_YFinal;
      }

      /* Step: '<Root>/References1' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References1_Time)
      {
        input = MIAC_ZTransform_PLC_Coder_not_P.References1_Y0;
      } else {
        input = MIAC_ZTransform_PLC_Coder_not_P.References1_YFinal;
      }

      /* Step: '<Root>/References2' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References2_Time)
      {
        outputSignalLowPassFilter1 =
          MIAC_ZTransform_PLC_Coder_not_P.References2_Y0;
      } else {
        outputSignalLowPassFilter1 =
          MIAC_ZTransform_PLC_Coder_not_P.References2_YFinal;
      }

      /* Step: '<Root>/References3' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References3_Time)
      {
        sqrtA0overA1 = MIAC_ZTransform_PLC_Coder_not_P.References3_Y0;
      } else {
        sqrtA0overA1 = MIAC_ZTransform_PLC_Coder_not_P.References3_YFinal;
      }

      /* Step: '<Root>/References5' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References5_Time)
      {
        sqrtA0timesA1 = MIAC_ZTransform_PLC_Coder_not_P.References5_Y0;
      } else {
        sqrtA0timesA1 = MIAC_ZTransform_PLC_Coder_not_P.References5_YFinal;
      }

      /* Step: '<Root>/References4' */
      if (rtb_BzSumofElements < MIAC_ZTransform_PLC_Coder_not_P.References4_Time)
      {
        rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_P.References4_Y0;
      } else {
        rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_P.References4_YFinal;
      }

      rtb_Minus = ((((a1 + input) + outputSignalLowPassFilter1) + sqrtA0overA1)
                   + sqrtA0timesA1) + rtb_BzSumofElements;
    } else {
      rtb_Minus = MIAC_ZTransform_PLC_Coder_not_P.Constant2_Value;
    }

    /* Logic: '<S3>/NOT1' */
    rtb_NOT1_l = true;

    /* Outputs for Enabled SubSystem: '<S3>/Get_Current_Offset1' */
    MIAC_ZTransf_Get_Current_Offset(rtb_NOT1_l,
      MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor_p,
      &MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset1);

    /* End of Outputs for SubSystem: '<S3>/Get_Current_Offset1' */

    /* Switch: '<S3>/Hand_Mode4' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    if (0.0 > MIAC_ZTransform_PLC_Coder_not_P.Hand_Mode4_Threshold) {
      rtb_BzSumofElements =
        MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset1.In1;
    } else {
      rtb_BzSumofElements = MIAC_ZTransform_PLC_Coder_not_P.Constant5_Value;
    }

    /* End of Switch: '<S3>/Hand_Mode4' */

    /* Sum: '<S3>/Substract Current Setpoint Offset' */
    input = rtb_Minus - rtb_BzSumofElements;

    /* SignalConversion: '<S3>/TmpSignal ConversionAtSystem_SimulatonInport3' incorporates:
     *  Constant: '<Root>/Constant15'
     *  Constant: '<Root>/Constant16'
     *  Constant: '<S3>/Constant'
     *  Gain: '<S3>/Gain'
     *  Gain: '<S3>/Gain1'
     *  Math: '<S3>/Exp'
     *  Product: '<S3>/Divide1'
     *
     * About '<S3>/Exp':
     *  Operator: exp
     */
    MIAC_ZTransform_PLC_Coder_not_B.Denumerator_ZTransformation_PT1[0] =
      MIAC_ZTransform_PLC_Coder_not_P.Constant_Value;
    MIAC_ZTransform_PLC_Coder_not_B.Denumerator_ZTransformation_PT1[1] = exp
      (MIAC_ZTransform_PLC_Coder_not_P.Gain1_Gain *
       MIAC_ZTransform_PLC_Coder_not_P.Constant16_Value /
       MIAC_ZTransform_PLC_Coder_not_P.Constant15_Value) *
      MIAC_ZTransform_PLC_Coder_not_P.Gain_Gain;

    /* DiscreteTransferFcn: '<S3>/System_Simulaton' */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.System_Simulaton_Reset_ZCE,
                 (0.0)) != NO_ZCEVENT) {
      MIAC_ZTransform_PLC_Coder_no_DW.System_Simulaton_states =
        MIAC_ZTransform_PLC_Coder_not_P.System_Simulaton_InitialStates;
    }

    rtb_System_Simulaton =
      MIAC_ZTransform_PLC_Coder_not_B.Numerator_ZTransformation_PT1 *
      MIAC_ZTransform_PLC_Coder_no_DW.System_Simulaton_states;

    /* End of DiscreteTransferFcn: '<S3>/System_Simulaton' */

    /* Delay: '<S3>/System_Delay_Simulation' */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,
                 &MIAC_ZTransform_PLC_Cod_PrevZCX.System_Delay_Simulation_Reset_l,
                 (0.0)) != NO_ZCEVENT) {
      for (i = 0; i < 800; i++) {
        MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[i] =
          MIAC_ZTransform_PLC_Coder_not_P.System_Delay_Simulation_Initial;
      }
    }

    /* Switch: '<S3>/Hand_Mode3' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    if (0.0 > MIAC_ZTransform_PLC_Coder_not_P.Hand_Mode3_Threshold) {
      rtb_Minus = MIAC_ZTransform_PLC_Coder_not_B.MIAC_SmithPredictor_p;
    } else {
      rtb_Minus = MIAC_ZTransform_PLC_Coder_not_P.Constant3_Value;
    }

    /* End of Switch: '<S3>/Hand_Mode3' */

    /* Delay: '<S3>/System_Delay_Simulation' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    if (MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o > 800.0) {
      tmp_0 = 800U;
    } else {
      a1 = trunc(MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o);
      if (rtIsNaN(a1) || rtIsInf(a1)) {
        a1 = 0.0;
      } else {
        a1 = fmod(a1, 4.294967296E+9);
      }

      tmp_0 = a1 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-a1 : (uint32_T)a1;
    }

    if ((MIAC_ZTransform_PLC_Coder_not_P.Constant1_Value_o < 1.0) || tmp_1) {
      a1 = rtb_System_Simulaton;
    } else {
      a1 = MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[800U
        - tmp_0];
    }

    /* Sum: '<S3>/Sum' incorporates:
     *  Sum: '<S3>/Substract Current Offset  so that the linearised model works1'
     *  Sum: '<S3>/Sum17'
     *  Sum: '<S3>/Sum18'
     */
    rtb_Minus = input - (((rtb_Minus - rtb_BzSumofElements) - a1) +
                         rtb_System_Simulaton);

    /* DiscreteIntegrator: '<S62>/Integrator' */
    if (MIAC_ZTransform_PLC_Coder_no_DW.Integrator_IC_LOADING != 0) {
      MIAC_ZTransform_PLC_Coder_no_DW.Integrator_DSTATE =
        MIAC_ZTransform_PLC_Coder_not_B.Add1;
    }

    /* Switch: '<S3>/Hand_Mode' */
    if (0.0 > MIAC_ZTransform_PLC_Coder_not_P.Hand_Mode_Threshold) {
      /* Sum: '<S91>/Sum' incorporates:
       *  Constant: '<Root>/Constant'
       *  DiscreteIntegrator: '<S62>/Integrator'
       *  Product: '<S78>/PProd Out'
       */
      rtb_BzSumofElements = rtb_Minus *
        MIAC_ZTransform_PLC_Coder_not_P.Constant_Value_g +
        MIAC_ZTransform_PLC_Coder_no_DW.Integrator_DSTATE;

      /* Saturate: '<S83>/Saturation' */
      if (rtb_BzSumofElements >
          MIAC_ZTransform_PLC_Coder_not_P.PIDControllerPplusTi_UpperSatur) {
        rtb_SmithPredictor =
          MIAC_ZTransform_PLC_Coder_not_P.PIDControllerPplusTi_UpperSatur;
      } else if (rtb_BzSumofElements <
                 MIAC_ZTransform_PLC_Coder_not_P.PIDControllerPplusTi_LowerSatur)
      {
        rtb_SmithPredictor =
          MIAC_ZTransform_PLC_Coder_not_P.PIDControllerPplusTi_LowerSatur;
      } else {
        rtb_SmithPredictor = rtb_BzSumofElements;
      }

      /* End of Saturate: '<S83>/Saturation' */
    } else {
      rtb_SmithPredictor = MIAC_ZTransform_PLC_Coder_not_B.Add1;
    }

    /* End of Switch: '<S3>/Hand_Mode' */

    /* Logic: '<S3>/NOT' */
    rtb_NOT_b = true;

    /* Outputs for Enabled SubSystem: '<S3>/Get_Current_Offset' */
    MIAC_ZTransf_Get_Current_Offset(rtb_NOT_b, rtb_SmithPredictor,
      &MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset);

    /* End of Outputs for SubSystem: '<S3>/Get_Current_Offset' */

    /* Switch: '<S3>/Hand_Mode1' incorporates:
     *  Constant: '<S3>/Constant4'
     *  Sum: '<S3>/Substract Current Offset  so that the linearised model works'
     */
    if (0.0 > MIAC_ZTransform_PLC_Coder_not_P.Hand_Mode1_Threshold) {
      a1 = rtb_SmithPredictor -
        MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset.In1;
    } else {
      a1 = MIAC_ZTransform_PLC_Coder_not_P.Constant4_Value;
    }

    /* End of Switch: '<S3>/Hand_Mode1' */

    /* Switch: '<S3>/Switch_from_initial_Gain_to_Estimated' incorporates:
     *  Constant: '<Root>/Constant14'
     */
    if (!(rtb_StartAdaption >
          MIAC_ZTransform_PLC_Coder_not_P.Switch_from_initial_Gain_to_Est)) {
      outputminusmean = MIAC_ZTransform_PLC_Coder_not_P.Constant14_Value;
    }

    /* End of Switch: '<S3>/Switch_from_initial_Gain_to_Estimated' */

    /* Update for DiscreteTransferFcn: '<S3>/System_Simulaton' incorporates:
     *  Product: '<S3>/Mul_Gain_or_Estimate'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.System_Simulaton_states = a1 *
      outputminusmean -
      MIAC_ZTransform_PLC_Coder_not_B.Denumerator_ZTransformation_PT1[1] *
      MIAC_ZTransform_PLC_Coder_no_DW.System_Simulaton_states;

    /* Update for Delay: '<S3>/System_Delay_Simulation' */
    for (i = 0; i < 799; i++) {
      MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[i] =
        MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[i + 1];
    }

    MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[799] =
      rtb_System_Simulaton;

    /* End of Update for Delay: '<S3>/System_Delay_Simulation' */

    /* Update for DiscreteIntegrator: '<S62>/Integrator' incorporates:
     *  Constant: '<Root>/Constant12'
     *  Product: '<S51>/IProd Out'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.Integrator_IC_LOADING = 0U;
    MIAC_ZTransform_PLC_Coder_no_DW.Integrator_DSTATE += rtb_Minus *
      MIAC_ZTransform_PLC_Coder_not_P.Constant12_Value *
      MIAC_ZTransform_PLC_Coder_not_P.Integrator_gainval;
    MIAC_ZTransform_PLC_Coder_no_DW.Integrator_PrevResetState = 0;

    /* End of Outputs for SubSystem: '<S2>/Adaptive SmithPredictor1' */

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    MIAC_ZTransform_PLC_Coder_no_DW.UnitDelay_DSTATE = rtb_SmithPredictor;

    /* End of Outputs for SubSystem: '<Root>/Smith_Predictor_and_MIAC' */

    /* Sum: '<Root>/Minus' incorporates:
     *  Constant: '<Root>/Initial Hand Value'
     */
    rtb_Minus = rtb_SmithPredictor -
      MIAC_ZTransform_PLC_Coder_not_P.InitialHandValue_Value;
    if (MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2] == 0) {
    }

    /* Sum: '<Root>/Add6' */
    MIAC_ZTransform_PLC_Coder_not_B.Add6 = rtb_Minus;

    /* DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S1>/Constant3'
     */
    rtb_DiscreteTransferFcn = MIAC_ZTransform_PLC_Coder_not_P.Constant3_Value_p *
      MIAC_ZTransform_PLC_Coder_no_DW.DiscreteTransferFcn_states;
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo,
                      (MIAC_ZTransform_PLC_Coder_no_M->Timing.t));

  {
    int_T idxDelay;

    /* Update for Delay: '<S1>/Delay' */
    for (idxDelay = 0; idxDelay < 599; idxDelay++) {
      MIAC_ZTransform_PLC_Coder_no_DW.Delay_DSTATE[idxDelay] =
        MIAC_ZTransform_PLC_Coder_no_DW.Delay_DSTATE[idxDelay + 1];
    }

    MIAC_ZTransform_PLC_Coder_no_DW.Delay_DSTATE[599] = rtb_DiscreteTransferFcn;

    /* End of Update for Delay: '<S1>/Delay' */
    if (MIAC_ZTransform_PLC_Coder_no_M->Timing.TaskCounters.TID[2] == 0) {
      /* Update for RandomNumber: '<Root>/Random Number' */
      MIAC_ZTransform_PLC_Coder_no_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
        (&MIAC_ZTransform_PLC_Coder_no_DW.RandSeed) *
        MIAC_ZTransform_PLC_Coder_not_P.RandomNumber_StdDev +
        MIAC_ZTransform_PLC_Coder_not_P.RandomNumber_Mean;
    }

    /* Update for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S1>/Constant4'
     */
    MIAC_ZTransform_PLC_Coder_no_DW.DiscreteTransferFcn_states =
      MIAC_ZTransform_PLC_Coder_not_B.Add6 -
      MIAC_ZTransform_PLC_Coder_not_P.Constant4_Value_n[1] *
      MIAC_ZTransform_PLC_Coder_no_DW.DiscreteTransferFcn_states;
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(MIAC_ZTransform_PLC_Coder_no_M)!=-1) &&
        !((rtmGetTFinal(MIAC_ZTransform_PLC_Coder_no_M)-
           MIAC_ZTransform_PLC_Coder_no_M->Timing.t[0]) >
          MIAC_ZTransform_PLC_Coder_no_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(MIAC_ZTransform_PLC_Coder_no_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTick0)) {
    ++MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTickH0;
  }

  MIAC_ZTransform_PLC_Coder_no_M->Timing.t[0] =
    MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTick0 *
    MIAC_ZTransform_PLC_Coder_no_M->Timing.stepSize0 +
    MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTickH0 *
    MIAC_ZTransform_PLC_Coder_no_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [1.0s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 1.0, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTick1++;
    if (!MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTick1) {
      MIAC_ZTransform_PLC_Coder_no_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void MIAC_ZTransform_PLC_Coder_not_external_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)MIAC_ZTransform_PLC_Coder_no_M, 0,
                sizeof(RT_MODEL_MIAC_ZTransform_PLC__T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                          &MIAC_ZTransform_PLC_Coder_no_M->Timing.simTimeStep);
    rtsiSetTPtr(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo, &rtmGetTPtr
                (MIAC_ZTransform_PLC_Coder_no_M));
    rtsiSetStepSizePtr(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                       &MIAC_ZTransform_PLC_Coder_no_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                          (&rtmGetErrorStatus(MIAC_ZTransform_PLC_Coder_no_M)));
    rtsiSetRTModelPtr(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                      MIAC_ZTransform_PLC_Coder_no_M);
  }

  rtsiSetSimTimeStep(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&MIAC_ZTransform_PLC_Coder_no_M->solverInfo,
                    "FixedStepDiscrete");
  rtmSetTPtr(MIAC_ZTransform_PLC_Coder_no_M,
             &MIAC_ZTransform_PLC_Coder_no_M->Timing.tArray[0]);
  rtmSetTFinal(MIAC_ZTransform_PLC_Coder_no_M, 55000.0);
  MIAC_ZTransform_PLC_Coder_no_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, (NULL));
    rtliSetLogT(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, "tout");
    rtliSetLogX(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, "");
    rtliSetLogXFinal(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, 0);
    rtliSetLogDecimation(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, 1);
    rtliSetLogY(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &MIAC_ZTransform_PLC_Coder_not_B), 0,
                sizeof(B_MIAC_ZTransform_PLC_Coder_n_T));

  /* states (dwork) */
  (void) memset((void *)&MIAC_ZTransform_PLC_Coder_no_DW, 0,
                sizeof(DW_MIAC_ZTransform_PLC_Coder__T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(MIAC_ZTransform_PLC_Coder_no_M->rtwLogInfo,
    0.0, rtmGetTFinal(MIAC_ZTransform_PLC_Coder_no_M),
    MIAC_ZTransform_PLC_Coder_no_M->Timing.stepSize0, (&rtmGetErrorStatus
    (MIAC_ZTransform_PLC_Coder_no_M)));
  MIAC_ZTransform_PLC_Cod_PrevZCX.System_Simulaton_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.System_Delay_Simulation_Reset_l =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.inputSignalLowPassFilter_Reset_ =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.outputSignalLowPassFilter1_Rese =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayTheta_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayL_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayPhi_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferU_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferY_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.delayBufferRegressors_Reset_ZCE =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.Delay_Reset_ZCE = UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.EstimatedGainTiefpassfilter_Res =
    UNINITIALIZED_ZCSIG;
  MIAC_ZTransform_PLC_Cod_PrevZCX.System_Delay_Simulation_Reset_Z =
    UNINITIALIZED_ZCSIG;

  {
    uint32_T tseed;
    int32_T t;
    int32_T i;
    real_T tmp;

    /* InitializeConditions for Delay: '<S1>/Delay' */
    for (i = 0; i < 600; i++) {
      MIAC_ZTransform_PLC_Coder_no_DW.Delay_DSTATE[i] =
        MIAC_ZTransform_PLC_Coder_not_P.Delay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S1>/Delay' */

    /* InitializeConditions for RandomNumber: '<Root>/Random Number' */
    tmp = floor(MIAC_ZTransform_PLC_Coder_not_P.RandomNumber_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)tmp;
    i = (int32_T)(tseed >> 16U);
    t = (int32_T)(tseed & 32768U);
    tseed = ((((tseed - ((uint32_T)i << 16U)) + t) << 16U) + t) + i;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else {
      if (tseed > 2147483646U) {
        tseed = 2147483646U;
      }
    }

    MIAC_ZTransform_PLC_Coder_no_DW.RandSeed = tseed;
    MIAC_ZTransform_PLC_Coder_no_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
      (&MIAC_ZTransform_PLC_Coder_no_DW.RandSeed) *
      MIAC_ZTransform_PLC_Coder_not_P.RandomNumber_StdDev +
      MIAC_ZTransform_PLC_Coder_not_P.RandomNumber_Mean;

    /* End of InitializeConditions for RandomNumber: '<Root>/Random Number' */

    /* InitializeConditions for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' */
    MIAC_ZTransform_PLC_Coder_no_DW.DiscreteTransferFcn_states =
      MIAC_ZTransform_PLC_Coder_not_P.DiscreteTransferFcn_InitialStat;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Smith_Predictor_and_MIAC' */
    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    MIAC_ZTransform_PLC_Coder_no_DW.UnitDelay_DSTATE =
      MIAC_ZTransform_PLC_Coder_not_P.UnitDelay_InitialCondition;

    /* SystemInitialize for Atomic SubSystem: '<S2>/System Identification' */
    /* InitializeConditions for DiscreteTransferFcn: '<S4>/input Signal Low Pass Filter' */
    MIAC_ZTransform_PLC_Coder_no_DW.inputSignalLowPassFilter_states =
      MIAC_ZTransform_PLC_Coder_not_P.inputSignalLowPassFilter_Initia;

    /* InitializeConditions for DiscreteTransferFcn: '<S4>/output Signal Low Pass Filter1' */
    MIAC_ZTransform_PLC_Coder_no_DW.outputSignalLowPassFilter1_stat =
      MIAC_ZTransform_PLC_Coder_not_P.outputSignalLowPassFilter1_Init;

    /* InitializeConditions for Delay: '<S107>/delayTheta' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad = 1U;

    /* InitializeConditions for Delay: '<S107>/delayL' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_o = 1U;

    /* InitializeConditions for Delay: '<S107>/delayPhi' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_g = 1U;

    /* InitializeConditions for Delay: '<S107>/delayBufferU' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_m = 1U;

    /* InitializeConditions for Delay: '<S107>/delayBufferY' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_k = 1U;

    /* InitializeConditions for Delay: '<S127>/delayBufferRegressors' */
    MIAC_ZTransform_PLC_Coder_no_DW.icLoad_f = 1U;

    /* InitializeConditions for DiscreteTransferFcn: '<S4>/Estimated Gain Tiefpassfilter' */
    MIAC_ZTransform_PLC_Coder_no_DW.EstimatedGainTiefpassfilter_sta =
      MIAC_ZTransform_PLC_Coder_not_P.EstimatedGainTiefpassfilter_Ini;

    /* InitializeConditions for Delay: '<S4>/System_Delay_Simulation' */
    for (i = 0; i < 800; i++) {
      MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTATE[i] =
        MIAC_ZTransform_PLC_Coder_not_P.System_Delay_Simulation_Initi_c;
    }

    /* End of InitializeConditions for Delay: '<S4>/System_Delay_Simulation' */

    /* SystemInitialize for MATLAB Function: '<S127>/rarx' */
    MIAC_ZTransform_PLC_Coder_no_DW.arxEstimator_not_empty = false;

    /* SystemInitialize for Enabled SubSystem: '<S4>/Get_Current_Output_Offset' */
    MIAC_ZT_Get_Current_Offset_Init
      (&MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Output_Offset,
       &MIAC_ZTransform_PLC_Coder_not_P.Get_Current_Output_Offset);

    /* End of SystemInitialize for SubSystem: '<S4>/Get_Current_Output_Offset' */

    /* SystemInitialize for Enabled SubSystem: '<S4>/Get_Current_delayed_Input_Offset' */
    MIAC_ZT_Get_Current_Offset_Init
      (&MIAC_ZTransform_PLC_Coder_not_B.Get_Current_delayed_Input_Offse,
       &MIAC_ZTransform_PLC_Coder_not_P.Get_Current_delayed_Input_Offse);

    /* End of SystemInitialize for SubSystem: '<S4>/Get_Current_delayed_Input_Offset' */
    /* End of SystemInitialize for SubSystem: '<S2>/System Identification' */

    /* SystemInitialize for Atomic SubSystem: '<S2>/Adaptive SmithPredictor1' */
    /* InitializeConditions for DiscreteTransferFcn: '<S3>/System_Simulaton' */
    MIAC_ZTransform_PLC_Coder_no_DW.System_Simulaton_states =
      MIAC_ZTransform_PLC_Coder_not_P.System_Simulaton_InitialStates;

    /* InitializeConditions for Delay: '<S3>/System_Delay_Simulation' */
    for (i = 0; i < 800; i++) {
      MIAC_ZTransform_PLC_Coder_no_DW.System_Delay_Simulation_DSTAT_c[i] =
        MIAC_ZTransform_PLC_Coder_not_P.System_Delay_Simulation_Initial;
    }

    /* End of InitializeConditions for Delay: '<S3>/System_Delay_Simulation' */

    /* InitializeConditions for DiscreteIntegrator: '<S62>/Integrator' */
    MIAC_ZTransform_PLC_Coder_no_DW.Integrator_IC_LOADING = 1U;
    MIAC_ZTransform_PLC_Coder_no_DW.Integrator_PrevResetState = 2;

    /* SystemInitialize for Enabled SubSystem: '<S3>/Get_Current_Offset1' */
    MIAC_ZT_Get_Current_Offset_Init
      (&MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset1,
       &MIAC_ZTransform_PLC_Coder_not_P.Get_Current_Offset1);

    /* End of SystemInitialize for SubSystem: '<S3>/Get_Current_Offset1' */

    /* SystemInitialize for Enabled SubSystem: '<S3>/Get_Current_Offset' */
    MIAC_ZT_Get_Current_Offset_Init
      (&MIAC_ZTransform_PLC_Coder_not_B.Get_Current_Offset,
       &MIAC_ZTransform_PLC_Coder_not_P.Get_Current_Offset);

    /* End of SystemInitialize for SubSystem: '<S3>/Get_Current_Offset' */
    /* End of SystemInitialize for SubSystem: '<S2>/Adaptive SmithPredictor1' */
    /* End of SystemInitialize for SubSystem: '<Root>/Smith_Predictor_and_MIAC' */
  }
}

/* Model terminate function */
void MIAC_ZTransform_PLC_Coder_not_external_terminate(void)
{
  /* (no terminate code required) */
}
