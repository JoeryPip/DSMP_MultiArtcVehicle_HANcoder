/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_DYS_MP_private.h
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

#ifndef RTW_HEADER_HANcoder_E407_DYS_MP_private_h_
#define RTW_HEADER_HANcoder_E407_DYS_MP_private_h_
#include "rtwtypes.h"
#include "HANcoder_E407_DYS_MP.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern uint32_T MWDSP_EPH_R_S8(int8_T evt, uint32_T *sta);
extern uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta);
extern real_T rt_roundd(real_T u);
void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void Receivecanmessage_Start(uint32_T rtu_Can_ID);
extern void Receivecanmessage_Disable(rtDW_Receivecanmessage *localDW);
extern void Receivecanmessage(boolean_T rtu_Enable, uint32_T rtu_Can_ID,
  rtB_Receivecanmessage *localB, rtDW_Receivecanmessage *localDW);
extern void Receivecanmessage_c_Start(uint32_T rtu_Can_ID);
extern void Receivecanmessage_g_Disable(rtDW_Receivecanmessage_n *localDW);
extern void Receivecanmessage_j(boolean_T rtu_Enable, uint32_T rtu_Can_ID,
  rtB_Receivecanmessage_m *localB, rtDW_Receivecanmessage_n *localDW);
extern void IfActionSubsystem3_Start(void);
extern void IfActionSubsystem3_Disable(rtDW_IfActionSubsystem3 *localDW);
extern void IfActionSubsystem3(boolean_T rtu_Enable, rtDW_IfActionSubsystem3
  *localDW, real_T *rtd_BoardIdError, real_T *rtd_Board_ID);
extern void ReceiveTruck1Board1CalcSt_Start(uint32_T rtu_Input);
extern void ReceiveTruck1Board1Calc_Disable(rtDW_ReceiveTruck1Board1CalcSte
  *localDW);
extern void ReceiveTruck1Board1CalcSteering(boolean_T rtu_Enable, uint32_T
  rtu_Input, rtB_ReceiveTruck1Board1CalcStee *localB,
  rtDW_ReceiveTruck1Board1CalcSte *localDW);
extern void Sendcanmessage_Disable(rtDW_Sendcanmessage *localDW);
extern void Sendcanmessage_Update(uint32_T rtu_Can_ID, uint8_T rtu_Can_Data,
  rtDW_Sendcanmessage *localDW);
extern void Sendcanmessage(boolean_T rtu_Enable, rtDW_Sendcanmessage *localDW);
extern void ReceiveTrailer1board4inpu_Start(uint32_T rtu_Input);
extern void ReceiveTrailer1board4in_Disable(rtDW_ReceiveTrailer1board4input
  *localDW);
extern void ReceiveTrailer1board4inputangel(boolean_T rtu_Enable, uint32_T
  rtu_Input, rtB_ReceiveTrailer1board4inputa *localB,
  rtDW_ReceiveTrailer1board4input *localDW);
extern void Sendcanmessage2_Disable(rtDW_Sendcanmessage2 *localDW);
extern void Sendcanmessage2_Update(uint32_T rtu_Can_ID, uint8_T rtu_Can_Data,
  rtDW_Sendcanmessage2 *localDW);
extern void Sendcanmessage2(boolean_T rtu_Enable, rtDW_Sendcanmessage2 *localDW,
  real_T *rtd_AngleVoteError);
extern void u3TTASystem_Init(rtB_u3TTASystem *localB, rtDW_u3TTASystem *localDW);
extern void u3TTASystem_Start(rtDW_u3TTASystem *localDW);
extern void u3TTASystem_Disable(rtB_u3TTASystem *localB, rtDW_u3TTASystem
  *localDW);
extern void u3TTASystem_Const(void);
extern void u3TTASystem(rtB_u3TTASystem *localB, const rtC_u3TTASystem *localC,
  rtDW_u3TTASystem *localDW, real_T *rtd_AngleVoteError, real_T
  *rtd_BoardIdError, real_T *rtd_Board_ID, real_T *rtd_EncoderValue, real_T
  *rtd_EncoderValueTestError, uint16_T *rtd_Local_Ticks, real_T *rtd_Master,
  real_T *rtd_Master_ID, real_T *rtd_NoOtherTruckBoardsError, real_T
  *rtd_NoTrailerAttachError, real_T *rtd_PWMValue, real_T *rtd_PotAngle);

#endif                                 /* RTW_HEADER_HANcoder_E407_DYS_MP_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
