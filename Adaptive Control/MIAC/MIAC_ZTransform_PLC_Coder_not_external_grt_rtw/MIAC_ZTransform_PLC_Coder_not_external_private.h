/*
 * MIAC_ZTransform_PLC_Coder_not_external_private.h
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

#ifndef RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_private_h_
#define RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "MIAC_ZTransform_PLC_Coder_not_external.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void MIAC_ZT_Get_Current_Offset_Init(B_Get_Current_Offset_MIAC_ZTr_T
  *localB, P_Get_Current_Offset_MIAC_ZTr_T *localP);
extern void MIAC_ZTransf_Get_Current_Offset(boolean_T rtu_Enable, real_T rtu_In1,
  B_Get_Current_Offset_MIAC_ZTr_T *localB);

#endif                                 /* RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_private_h_ */
