/*
 * MIAC_ZTransform_PLC_Coder_not_external_types.h
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

#ifndef RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_types_h_
#define RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_IwFIGSP1LYoyqEMbuzJqVE_
#define DEFINED_TYPEDEF_FOR_struct_IwFIGSP1LYoyqEMbuzJqVE_

typedef struct {
  uint8_T estimationMethod;
  uint16_T na;
  uint16_T nb;
  uint16_T nc;
  uint16_T nd;
  uint16_T nf;
  uint16_T nk;
  uint16_T nParameters;
  uint16_T necessaryDataForPhi[3];
  uint16_T b0PosInPhi;
  boolean_T isUsingFrames;
  int32_T windowLength;
} struct_IwFIGSP1LYoyqEMbuzJqVE;

#endif

/* Custom Type definition for MATLAB Function: '<S127>/rarx' */
#ifndef typedef_c_recursiveEstimation_interna_T
#define typedef_c_recursiveEstimation_interna_T

typedef struct {
  int32_T IteratorPosition;
} c_recursiveEstimation_interna_T;

#endif                                 /*typedef_c_recursiveEstimation_interna_T*/

#ifndef typedef_d_recursiveEstimation_interna_T
#define typedef_d_recursiveEstimation_interna_T

typedef struct {
  c_recursiveEstimation_interna_T OutputDataIterator;
  c_recursiveEstimation_interna_T InputDataIterator;
} d_recursiveEstimation_interna_T;

#endif                                 /*typedef_d_recursiveEstimation_interna_T*/

#ifndef struct_tag_srKX3rp5RtvSuIIfisdnwSD
#define struct_tag_srKX3rp5RtvSuIIfisdnwSD

struct tag_srKX3rp5RtvSuIIfisdnwSD
{
  uint8_T estimationMethod;
  uint16_T na;
  uint16_T nb;
  uint16_T nc;
  uint16_T nd;
  uint16_T nf;
  uint16_T nk;
  uint16_T nParameters;
  uint16_T necessaryDataForPhi[3];
  uint16_T b0PosInPhi;
  boolean_T isUsingFrames;
  int32_T windowLength;
};

#endif                                 /*struct_tag_srKX3rp5RtvSuIIfisdnwSD*/

#ifndef typedef_srKX3rp5RtvSuIIfisdnwSD_MIAC__T
#define typedef_srKX3rp5RtvSuIIfisdnwSD_MIAC__T

typedef struct tag_srKX3rp5RtvSuIIfisdnwSD srKX3rp5RtvSuIIfisdnwSD_MIAC__T;

#endif                                 /*typedef_srKX3rp5RtvSuIIfisdnwSD_MIAC__T*/

/* Parameters for system: '<S3>/Get_Current_Offset' */
typedef struct P_Get_Current_Offset_MIAC_ZTr_T_ P_Get_Current_Offset_MIAC_ZTr_T;

/* Parameters (default storage) */
typedef struct P_MIAC_ZTransform_PLC_Coder_n_T_ P_MIAC_ZTransform_PLC_Coder_n_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_MIAC_ZTransform_PLC_C_T RT_MODEL_MIAC_ZTransform_PLC__T;

#endif                                 /* RTW_HEADER_MIAC_ZTransform_PLC_Coder_not_external_types_h_ */
