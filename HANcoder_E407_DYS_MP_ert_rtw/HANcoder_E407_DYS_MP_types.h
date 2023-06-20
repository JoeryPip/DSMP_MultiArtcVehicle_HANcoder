/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_DYS_MP_types.h
 *
 * Code generated for Simulink model 'HANcoder_E407_DYS_MP'.
 *
 * Model version                  : 1.136
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jun 20 01:51:50 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_DYS_MP_types_h_
#define RTW_HEADER_HANcoder_E407_DYS_MP_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_vote_array_
#define DEFINED_TYPEDEF_FOR_vote_array_

typedef struct {
  real_T First_Board;
  real_T Second_Board;
  real_T Third_Board;
} vote_array;

#endif

#ifndef typedef_dsp_private_MedianFilterCG
#define typedef_dsp_private_MedianFilterCG

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pWinLen;
  real_T pBuf[20];
  real_T pHeap[20];
  real_T pMidHeap;
  real_T pIdx;
  real_T pPos[20];
  real_T pMinHeapLength;
  real_T pMaxHeapLength;
} dsp_private_MedianFilterCG;

#endif                                 /*typedef_dsp_private_MedianFilterCG*/

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 /*typedef_cell_wrap*/

#ifndef typedef_dsp_MedianFilter
#define typedef_dsp_MedianFilter

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize;
  int32_T NumChannels;
  dsp_private_MedianFilterCG pMID;
} dsp_MedianFilter;

#endif                                 /*typedef_dsp_MedianFilter*/
#endif                                 /* RTW_HEADER_HANcoder_E407_DYS_MP_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
