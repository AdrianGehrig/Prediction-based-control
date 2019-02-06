/*
 * Subsystem1.h
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

#ifndef RTW_HEADER_Subsystem1_h_
#define RTW_HEADER_Subsystem1_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Subsystem1_COMMON_INCLUDES_
# define Subsystem1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Subsystem1_COMMON_INCLUDES_ */

#include "Subsystem1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

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
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTransferFcn1_states;  /* '<S1>/Discrete Transfer Fcn1' */
} DW_Subsystem1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Subsystem1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Subsystem1_T;

/* Parameters (default storage) */
struct P_Subsystem1_T_ {
  real_T DiscreteTransferFcn1_NumCoef; /* Expression: [0.1]
                                        * Referenced by: '<S1>/Discrete Transfer Fcn1'
                                        */
  real_T DiscreteTransferFcn1_DenCoef[2];/* Expression: [1 -0.9]
                                          * Referenced by: '<S1>/Discrete Transfer Fcn1'
                                          */
  real_T DiscreteTransferFcn1_InitialSta;/* Expression: 0
                                          * Referenced by: '<S1>/Discrete Transfer Fcn1'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem1_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Subsystem1_T Subsystem1_P;

/* Block states (default storage) */
extern DW_Subsystem1_T Subsystem1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Subsystem1_T Subsystem1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Subsystem1_T Subsystem1_Y;

/* Model entry point functions */
extern void Subsystem1_initialize(void);
extern void Subsystem1_step(void);
extern void Subsystem1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem1_T *const Subsystem1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('TestPLCCoder/Subsystem1')    - opens subsystem TestPLCCoder/Subsystem1
 * hilite_system('TestPLCCoder/Subsystem1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TestPLCCoder'
 * '<S1>'   : 'TestPLCCoder/Subsystem1'
 */
#endif                                 /* RTW_HEADER_Subsystem1_h_ */
