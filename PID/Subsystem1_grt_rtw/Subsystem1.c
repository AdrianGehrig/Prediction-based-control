/*
 * Subsystem1.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem1".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Feb  4 14:10:35 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem1.h"
#include "Subsystem1_private.h"

/* Block states (default storage) */
DW_Subsystem1_T Subsystem1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Subsystem1_T Subsystem1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Subsystem1_T Subsystem1_Y;

/* Real-time model */
RT_MODEL_Subsystem1_T Subsystem1_M_;
RT_MODEL_Subsystem1_T *const Subsystem1_M = &Subsystem1_M_;

/* Model step function */
void Subsystem1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn1'
   */
  Subsystem1_Y.Out1 = Subsystem1_P.DiscreteTransferFcn1_NumCoef *
    Subsystem1_DW.DiscreteTransferFcn1_states;

  /* Update for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn1' incorporates:
   *  Inport: '<Root>/In1'
   */
  Subsystem1_DW.DiscreteTransferFcn1_states = (Subsystem1_U.In1 -
    Subsystem1_P.DiscreteTransferFcn1_DenCoef[1] *
    Subsystem1_DW.DiscreteTransferFcn1_states) /
    Subsystem1_P.DiscreteTransferFcn1_DenCoef[0];

  /* Matfile logging */
  rt_UpdateTXYLogVars(Subsystem1_M->rtwLogInfo, (&Subsystem1_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(Subsystem1_M)!=-1) &&
        !((rtmGetTFinal(Subsystem1_M)-Subsystem1_M->Timing.taskTime0) >
          Subsystem1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Subsystem1_M, "Simulation finished");
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
  if (!(++Subsystem1_M->Timing.clockTick0)) {
    ++Subsystem1_M->Timing.clockTickH0;
  }

  Subsystem1_M->Timing.taskTime0 = Subsystem1_M->Timing.clockTick0 *
    Subsystem1_M->Timing.stepSize0 + Subsystem1_M->Timing.clockTickH0 *
    Subsystem1_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Subsystem1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Subsystem1_M, 0,
                sizeof(RT_MODEL_Subsystem1_T));
  rtmSetTFinal(Subsystem1_M, 10.0);
  Subsystem1_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Subsystem1_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Subsystem1_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Subsystem1_M->rtwLogInfo, (NULL));
    rtliSetLogT(Subsystem1_M->rtwLogInfo, "tout");
    rtliSetLogX(Subsystem1_M->rtwLogInfo, "");
    rtliSetLogXFinal(Subsystem1_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Subsystem1_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Subsystem1_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Subsystem1_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Subsystem1_M->rtwLogInfo, 1);
    rtliSetLogY(Subsystem1_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Subsystem1_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Subsystem1_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&Subsystem1_DW, 0,
                sizeof(DW_Subsystem1_T));

  /* external inputs */
  Subsystem1_U.In1 = 0.0;

  /* external outputs */
  Subsystem1_Y.Out1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Subsystem1_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Subsystem1_M), Subsystem1_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Subsystem1_M)));

  /* InitializeConditions for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn1' */
  Subsystem1_DW.DiscreteTransferFcn1_states =
    Subsystem1_P.DiscreteTransferFcn1_InitialSta;
}

/* Model terminate function */
void Subsystem1_terminate(void)
{
  /* (no terminate code required) */
}
