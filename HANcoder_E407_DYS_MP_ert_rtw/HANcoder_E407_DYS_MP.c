/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_DYS_MP.c
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

#include "HANcoder_E407_DYS_MP.h"
#include "HANcoder_E407_DYS_MP_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);
void PwmoutIRQ_PWMOUT_MODULE_TIM2(void);

/* Exported block signals */
real_T PosRound;                       /* '<S3>/Round' */
real_T Position;                       /* '<S3>/Data Store Read' */
real_T ErrorPID;                       /* '<S3>/Sum' */
real_T EncoderValueTestErrorView;      /* '<S8>/Data Store Read' */
real_T NoOtherTruckBoardsErrorView;    /* '<S8>/Data Store Read1' */
real_T AngleVoteErrorView;             /* '<S8>/Data Store Read18' */
real_T NoTrailerAttachErrorView;       /* '<S8>/Data Store Read2' */
real_T BoardIdErrorView;               /* '<S8>/Data Store Read3' */
real_T Board_ID_s;                     /* '<S119>/Add' */
uint32_T SI_FreeHeap;                  /* '<S362>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S363>/Level-2 M-file S-Function' */
uint32_T MotorGivenSpeed;              /* '<S91>/Saturation' */
int32_T EncPosition;                   /* '<S13>/Level-2 M-file S-Function' */
uint16_T MotorControl;                 /* '<S3>/Cast' */
uint16_T LocalTicksBefore;             /* '<S116>/Data Store Read1' */
uint16_T local_ticks_interrupt;        /* '<S116>/Switch' */
uint8_T SI_CPUload;                    /* '<S361>/Level-2 M-file S-Function' */
real_T TrailerOneAttach;               /* '<S140>/Data Store Read1' */
real_T VoteAngle1;                     /* '<S140>/Data Store Read17' */
real_T VoteAngle2;                     /* '<S140>/Data Store Read17' */
real_T VoteAngle3;                     /* '<S140>/Data Store Read17' */
real_T InputAngleBoard4;               /* '<S140>/Data Store Read18' */
real_T TrailerTwoAttach;               /* '<S140>/Data Store Read2' */
real_T InputAngleBoard5;               /* '<S140>/Data Store Read3' */
real_T VoteEncoder1;                   /* '<S140>/Data Store Read4' */
real_T VoteEncoder2;                   /* '<S140>/Data Store Read4' */
real_T VoteEncoder3;                   /* '<S140>/Data Store Read4' */
real_T DesynckTicks45;                 /* '<S285>/Switch1' */
real_T CanReceiveCycle;                /* '<S141>/Counter3' */
real_T CanReceived;                    /* '<S141>/Counter1' */
real_T CanSendCycle;                   /* '<S141>/Counter2' */
real_T test1;                          /* '<S142>/Data Store Read4' */
real_T testtest;                       /* '<S142>/Add2' */
real_T Master_ID_s;                    /* '<S143>/Data Store Read' */
real_T Role_ID_s;                      /* '<S143>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S143>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S143>/Data Store Read12' */
real_T set_miss_counter_s;             /* '<S143>/Data Store Read13' */
real_T sensor_miss_counter_s;          /* '<S143>/Data Store Read14' */
real_T out1_miss_counter_s;            /* '<S143>/Data Store Read15' */
real_T out2_miss_counter_s;            /* '<S143>/Data Store Read16' */
real_T NoMes1CntCheck;                 /* '<S143>/Data Store Read17' */
real_T NoMes2CntCheck;                 /* '<S143>/Data Store Read18' */
real_T NoMes3CntCheck;                 /* '<S143>/Data Store Read19' */
real_T votes_Board_1_DEBUG;            /* '<S143>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S143>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S143>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S143>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S143>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S143>/Data Store Read6' */
real_T ValidatedAngle;                 /* '<S215>/Data Store Read' */
real_T MessagesOnCan1;                 /* '<S151>/Counter1' */
real_T CanCallsCheck;                  /* '<S151>/Counter2' */
real_T ReceiverTimerBlokCalls;         /* '<S151>/Counter' */
real_T ChancgeLocalTicks;              /* '<S148>/Counter1' */
real_T EstimatedTimeCan1;              /* '<S145>/Sum' */
real_T EstimatedTimeCan2;              /* '<S145>/Sum1' */
real_T DesyncTicks;                    /* '<S145>/Switch1' */
real32_T msg_count_DEBUG_s;            /* '<S144>/Data Store Read24' */
uint16_T TestTicka;                    /* '<S141>/Data Store Read8' */
uint16_T LocalIncTicksMes;             /* '<S145>/Data Store Read2' */
uint16_T LocalIncTicksMes2;            /* '<S145>/Data Store Read1' */
uint16_T EstimatedTimeCan1_Init;       /* '<S136>/Sum' */
uint16_T EstimatedTimeCan2_Init;       /* '<S136>/Sum1' */
uint16_T Rx_init_LT_Init;              /* '<S136>/Switch1' */
uint8_T CanSendTime;                   /* '<S141>/Data Type Conversion2' */
uint8_T bacic_cycle_s;                 /* '<S126>/Switch' */
uint8_T Test_CanMes2;                  /* '<S134>/In1' */
uint8_T Test_CanMes0;                  /* '<S133>/In1' */
uint8_T A0OUT;                         /* '<S139>/Gain3' */
uint8_T A1OUT;                         /* '<S139>/Gain4' */
uint8_T A2OUT;                         /* '<S139>/Gain5' */
int8_T Test_CanRec529;                 /* '<S131>/S-Function' */
int8_T Test_Can2Rec529;                /* '<S132>/S-Function' */
boolean_T InitFlag;                    /* '<S117>/Data Store Read' */
boolean_T D4;                          /* '<S351>/Level-2 M-file S-Function' */
boolean_T D5;                          /* '<S352>/Level-2 M-file S-Function' */
boolean_T D6;                          /* '<S353>/Level-2 M-file S-Function' */
boolean_T result_no_id;                /* '<S139>/AND1' */
boolean_T result_recieved_2nd;         /* '<S139>/AND2' */
boolean_T result_recieved_3d;          /* '<S139>/AND5' */
boolean_T result_recieved_4th;         /* '<S139>/AND6' */
boolean_T result_recieved_5th;         /* '<S139>/AND7' */
boolean_T CanRec_Time;                 /* '<S141>/OR' */
boolean_T BC1_sync_processed_s;        /* '<S143>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S143>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S143>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S143>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S143>/Data Store Read9' */
boolean_T Check;                       /* '<S125>/OR1' */
boolean_T CanRec1And2;                 /* '<S125>/OR' */
boolean_T InitTime;                    /* '<S128>/GreaterThan' */

/* Exported block parameters */
real_T HantuneAngleSp = 90.0;          /* Variable: HantuneAngleSp
                                        * Referenced by: '<S191>/Constant35'
                                        */
real_T positionD = 0.158;              /* Variable: positionD
                                        * Referenced by: '<S3>/Constant10'
                                        */
real_T positionI = 25.0;               /* Variable: positionI
                                        * Referenced by: '<S3>/Constant9'
                                        */
real_T positionP = 9.0;                /* Variable: positionP
                                        * Referenced by: '<S3>/Constant8'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Forward declaration for local functions */
static void MedianFilterCG_resetImpl(dsp_private_MedianFilterCG *obj);
static void MedianFilterCG_trickleDownMax(dsp_private_MedianFilterCG *obj,
  real_T i);
static void MedianFilterCG_trickleDownMin(dsp_private_MedianFilterCG *obj,
  real_T i);
static void SystemCore_release(dsp_MedianFilter *obj);
static void SystemCore_delete(dsp_MedianFilter *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_MedianFilter *obj);
static tCanDataTypes canRxData_0_100U;
static tCanDataTypes canRxData_1_100U;
static tCanDataTypes canRxData_0_rtu_Can_ID;
static tCanDataTypes canRxData_1_rtu_Can_ID;
static tCanDataTypes canRxData_0_rtu_Can_ID;
static tCanDataTypes canRxData_1_rtu_Can_ID;
static tCanDataTypes canTxData;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S5>/4.1 Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* DataStoreRead: '<S116>/Data Store Read1' */
    LocalTicksBefore = rtDWork.Local_Ticks;

    /* Switch: '<S116>/Switch' incorporates:
     *  Constant: '<S116>/Constant2'
     *  Constant: '<S5>/Constant'
     *  DataStoreRead: '<S116>/Data Store Read'
     *  Sum: '<S116>/Sum1'
     */
    if (1.0 > 0.0) {
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      local_ticks_interrupt = LocalTicksBefore;
    }

    /* End of Switch: '<S116>/Switch' */

    /* DataStoreWrite: '<S116>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S116>/Chart' incorporates:
     *  Constant: '<S5>/Constant'
     */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/4.TTA Can System/4.1 Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/4.TTA Can System/4.1 Local Time generation/Chart */
    if (rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_DYS_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/4.TTA Can System/4.1 Local Time generation/Chart */
      rtDWork.bitsForTID0.is_active_c9_HANcoder_E407_DYS_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/4.TTA Can System/4.1 Local Time generation/Chart */
      /* Transition: '<S122>:10' */
      /* Entry 'Send_Trigger': '<S122>:9' */
      if (1.0 != 0.0) {
        /* Outputs for Function Call SubSystem: '<S5>/4.3 TTA System' */
        /* Event: '<S122>:3' */
        u3TTASystem(&rtB.u3TTASystem_c, &rtConstB.u3TTASystem_c,
                    &rtDWork.u3TTASystem_c, &rtDWork.AngleVoteError,
                    &rtDWork.BoardIdError, &rtDWork.Board_ID,
                    &rtDWork.EncoderValue, &rtDWork.EncoderValueTestError,
                    &rtDWork.Local_Ticks, &rtDWork.Master, &rtDWork.Master_ID,
                    &rtDWork.NoOtherTruckBoardsError,
                    &rtDWork.NoTrailerAttachError, &rtDWork.PWMValue,
                    &rtDWork.PotAngle);

        /* End of Outputs for SubSystem: '<S5>/4.3 TTA System' */
      }
    } else {
      /* During 'Send_Trigger': '<S122>:9' */
      if (1.0 != 0.0) {
        /* Outputs for Function Call SubSystem: '<S5>/4.3 TTA System' */
        /* Event: '<S122>:3' */
        u3TTASystem(&rtB.u3TTASystem_c, &rtConstB.u3TTASystem_c,
                    &rtDWork.u3TTASystem_c, &rtDWork.AngleVoteError,
                    &rtDWork.BoardIdError, &rtDWork.Board_ID,
                    &rtDWork.EncoderValue, &rtDWork.EncoderValueTestError,
                    &rtDWork.Local_Ticks, &rtDWork.Master, &rtDWork.Master_ID,
                    &rtDWork.NoOtherTruckBoardsError,
                    &rtDWork.NoTrailerAttachError, &rtDWork.PWMValue,
                    &rtDWork.PotAngle);

        /* End of Outputs for SubSystem: '<S5>/4.3 TTA System' */
      }
    }

    /* End of Chart: '<S116>/Chart' */
    /* M-S-Function: '<S123>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S116>/Sum' incorporates:
     *  Constant: '<S116>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)500U));

    /* Update for M-S-Function: '<S124>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S116>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

void PwmoutIRQ_PWMOUT_MODULE_TIM2(void)
{
}

/*
 * Disable for enable system:
 *    '<S151>/Receive can message'
 *    '<S287>/Receive can message'
 */
void Receivecanmessage_Disable(rtDW_Receivecanmessage *localDW)
{
  localDW->Receivecanmessage_MODE = false;
}

/*
 * Start for enable system:
 *    '<S151>/Receive can message'
 *    '<S287>/Receive can message'
 */
void Receivecanmessage_Start(uint32_T rtu_Can_ID)
{
  /* Start for M-S-Function: '<S160>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_Can_ID);

  /* Start for M-S-Function: '<S161>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, rtu_Can_ID);
}

/*
 * Output and update for enable system:
 *    '<S151>/Receive can message'
 *    '<S287>/Receive can message'
 */
void Receivecanmessage(boolean_T rtu_Enable, uint32_T rtu_Can_ID,
  rtB_Receivecanmessage *localB, rtDW_Receivecanmessage *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_g;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_p;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_b;
  uint8_T rtb_SFunction_o7_f;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_k;
  uint8_T rtb_SFunction_o2_l;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_jb;
  uint8_T rtb_SFunction_o6_n;
  uint8_T rtb_SFunction_o7_e;
  uint8_T rtb_SFunction_o8_b;
  uint8_T rtb_SFunction_o9_ku;
  uint8_T rtb_In1_j;
  uint8_T rtb_In2_j;
  uint8_T rtb_In3_o;
  uint8_T rtb_In4_d;
  uint8_T rtb_In5_a;
  uint8_T rtb_In6_k;
  uint8_T rtb_In7_m;
  uint8_T rtb_In8_ot;
  uint8_T rtb_In1;
  uint8_T rtb_In2_p;
  uint8_T rtb_In3_n;
  uint8_T rtb_In4_ht;
  uint8_T rtb_In5_e;
  uint8_T rtb_In6_p;
  uint8_T rtb_In7_e;
  uint8_T rtb_In8_k;

  /* Outputs for Enabled SubSystem: '<S151>/Receive can message' incorporates:
   *  EnablePort: '<S159>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receivecanmessage_MODE) {
      localDW->Receivecanmessage_MODE = true;
    }

    /* M-S-Function: '<S160>/S-Function' */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, rtu_Can_ID, NULL,
      &canRxData_0_rtu_Can_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_g = canRxData_0_rtu_Can_ID.uint8_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S160>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S162>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S162>/In1' */
      rtb_In1_j = rtb_SFunction_o2_g;

      /* Inport: '<S162>/In2' */
      rtb_In2_j = rtb_SFunction_o3_b;

      /* Inport: '<S162>/In3' */
      rtb_In3_o = rtb_SFunction_o4_p;

      /* Inport: '<S162>/In4' */
      rtb_In4_d = rtb_SFunction_o5_j;

      /* Inport: '<S162>/In5' */
      rtb_In5_a = rtb_SFunction_o6_b;

      /* Inport: '<S162>/In6' */
      rtb_In6_k = rtb_SFunction_o7_f;

      /* Inport: '<S162>/In7' */
      rtb_In7_m = rtb_SFunction_o8_l;

      /* Inport: '<S162>/In8' */
      rtb_In8_ot = rtb_SFunction_o9_k;
    }

    /* End of Outputs for SubSystem: '<S160>/Enabled Subsystem' */

    /* M-S-Function: '<S161>/S-Function' */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(1, rtu_Can_ID, NULL,
      &canRxData_1_rtu_Can_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_l = canRxData_1_rtu_Can_ID.uint8_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S161>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S163>/Enable'
     */
    if (localB->SFunction_o1_b > 0) {
      /* Inport: '<S163>/In1' */
      rtb_In1 = rtb_SFunction_o2_l;

      /* Inport: '<S163>/In2' */
      rtb_In2_p = rtb_SFunction_o3_a;

      /* Inport: '<S163>/In3' */
      rtb_In3_n = rtb_SFunction_o4_j;

      /* Inport: '<S163>/In4' */
      rtb_In4_ht = rtb_SFunction_o5_jb;

      /* Inport: '<S163>/In5' */
      rtb_In5_e = rtb_SFunction_o6_n;

      /* Inport: '<S163>/In6' */
      rtb_In6_p = rtb_SFunction_o7_e;

      /* Inport: '<S163>/In7' */
      rtb_In7_e = rtb_SFunction_o8_b;

      /* Inport: '<S163>/In8' */
      rtb_In8_k = rtb_SFunction_o9_ku;
    }

    /* End of Outputs for SubSystem: '<S161>/Enabled Subsystem' */
  } else {
    if (localDW->Receivecanmessage_MODE) {
      Receivecanmessage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S151>/Receive can message' */
}

/*
 * Disable for enable system:
 *    '<S152>/Receive can message'
 *    '<S153>/Receive can message'
 *    '<S154>/Receive can message'
 *    '<S196>/Receive can message'
 *    '<S197>/Receive can message'
 *    '<S198>/Receive can message'
 *    '<S199>/Receive can message'
 *    '<S200>/Receive can message'
 *    '<S201>/Receive can message'
 *    '<S202>/Receive can message'
 *    ...
 */
void Receivecanmessage_g_Disable(rtDW_Receivecanmessage_n *localDW)
{
  localDW->Receivecanmessage_MODE = false;
}

/*
 * Start for enable system:
 *    '<S152>/Receive can message'
 *    '<S153>/Receive can message'
 *    '<S154>/Receive can message'
 *    '<S196>/Receive can message'
 *    '<S197>/Receive can message'
 *    '<S198>/Receive can message'
 *    '<S199>/Receive can message'
 *    '<S200>/Receive can message'
 *    '<S201>/Receive can message'
 *    '<S202>/Receive can message'
 *    ...
 */
void Receivecanmessage_c_Start(uint32_T rtu_Can_ID)
{
  /* Start for M-S-Function: '<S166>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_Can_ID);

  /* Start for M-S-Function: '<S167>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, rtu_Can_ID);
}

/*
 * Outputs for enable system:
 *    '<S152>/Receive can message'
 *    '<S153>/Receive can message'
 *    '<S154>/Receive can message'
 *    '<S196>/Receive can message'
 *    '<S197>/Receive can message'
 *    '<S198>/Receive can message'
 *    '<S199>/Receive can message'
 *    '<S200>/Receive can message'
 *    '<S201>/Receive can message'
 *    '<S202>/Receive can message'
 *    ...
 */
void Receivecanmessage_j(boolean_T rtu_Enable, uint32_T rtu_Can_ID,
  rtB_Receivecanmessage_m *localB, rtDW_Receivecanmessage_n *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_f;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_br;
  uint8_T rtb_SFunction_o7_p;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_o;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_c;
  uint8_T rtb_SFunction_o4_k;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_d;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_In2_k;
  uint8_T rtb_In3_l;
  uint8_T rtb_In4_i;
  uint8_T rtb_In5_d;
  uint8_T rtb_In6_m;
  uint8_T rtb_In7_mv;
  uint8_T rtb_In8_l;
  uint8_T rtb_In2_l;
  uint8_T rtb_In3_m;
  uint8_T rtb_In4_k;
  uint8_T rtb_In5_gw;
  uint8_T rtb_In6_k;
  uint8_T rtb_In7_l;
  uint8_T rtb_In8_e;

  /* Outputs for Enabled SubSystem: '<S152>/Receive can message' incorporates:
   *  EnablePort: '<S165>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receivecanmessage_MODE) {
      localDW->Receivecanmessage_MODE = true;
    }

    /* M-S-Function: '<S166>/S-Function' */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, rtu_Can_ID, NULL,
      &canRxData_0_rtu_Can_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_0_rtu_Can_ID.uint8_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S166>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S168>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S168>/In1' */
      localB->In1_m = rtb_SFunction_o2_f;

      /* Inport: '<S168>/In2' */
      rtb_In2_k = rtb_SFunction_o3_e;

      /* Inport: '<S168>/In3' */
      rtb_In3_l = rtb_SFunction_o4_f;

      /* Inport: '<S168>/In4' */
      rtb_In4_i = rtb_SFunction_o5_m;

      /* Inport: '<S168>/In5' */
      rtb_In5_d = rtb_SFunction_o6_br;

      /* Inport: '<S168>/In6' */
      rtb_In6_m = rtb_SFunction_o7_p;

      /* Inport: '<S168>/In7' */
      rtb_In7_mv = rtb_SFunction_o8_f;

      /* Inport: '<S168>/In8' */
      rtb_In8_l = rtb_SFunction_o9_o;
    }

    /* End of Outputs for SubSystem: '<S166>/Enabled Subsystem' */

    /* M-S-Function: '<S167>/S-Function' */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(1, rtu_Can_ID, NULL,
      &canRxData_1_rtu_Can_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_e = canRxData_1_rtu_Can_ID.uint8_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S167>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S169>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S169>/In1' */
      localB->In1 = rtb_SFunction_o2_e;

      /* Inport: '<S169>/In2' */
      rtb_In2_l = rtb_SFunction_o3_c;

      /* Inport: '<S169>/In3' */
      rtb_In3_m = rtb_SFunction_o4_k;

      /* Inport: '<S169>/In4' */
      rtb_In4_k = rtb_SFunction_o5_f;

      /* Inport: '<S169>/In5' */
      rtb_In5_gw = rtb_SFunction_o6_k;

      /* Inport: '<S169>/In6' */
      rtb_In6_k = rtb_SFunction_o7_l;

      /* Inport: '<S169>/In7' */
      rtb_In7_l = rtb_SFunction_o8_d;

      /* Inport: '<S169>/In8' */
      rtb_In8_e = rtb_SFunction_o9_f;
    }

    /* End of Outputs for SubSystem: '<S167>/Enabled Subsystem' */
  } else {
    if (localDW->Receivecanmessage_MODE) {
      Receivecanmessage_g_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S152>/Receive can message' */
}

/*
 * Disable for enable system:
 *    '<S142>/If Action Subsystem3'
 *    '<S284>/If Action Subsystem3'
 */
void IfActionSubsystem3_Disable(rtDW_IfActionSubsystem3 *localDW)
{
  localDW->IfActionSubsystem3_MODE = false;
}

/*
 * Start for enable system:
 *    '<S142>/If Action Subsystem3'
 *    '<S284>/If Action Subsystem3'
 */
void IfActionSubsystem3_Start(void)
{
  /* Start for M-S-Function: '<S216>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S217>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S218>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);
}

/*
 * Output and update for enable system:
 *    '<S142>/If Action Subsystem3'
 *    '<S284>/If Action Subsystem3'
 */
void IfActionSubsystem3(boolean_T rtu_Enable, rtDW_IfActionSubsystem3 *localDW,
  real_T *rtd_BoardIdError, real_T *rtd_Board_ID)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction_p;
  real_T rtb_Multiply_o;
  real_T rtb_Multiply1_l;

  /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem3' incorporates:
   *  EnablePort: '<S194>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->IfActionSubsystem3_MODE) {
      localDW->IfActionSubsystem3_MODE = true;
    }

    /* M-S-Function: '<S216>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_p = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S194>/Multiply' incorporates:
     *  Constant: '<S194>/Constant'
     */
    rtb_Multiply_o = rtb_Level2MfileSFunction_p ? 1.0 : 0.0;

    /* M-S-Function: '<S217>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_p = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S194>/Multiply1' incorporates:
     *  Constant: '<S194>/Constant1'
     */
    rtb_Multiply1_l = rtb_Level2MfileSFunction_p ? 2.0 : 0.0;

    /* M-S-Function: '<S218>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_p = DiginGet(DIGIN_PORTE_PIN5);

    /* Switch: '<S194>/Switch' incorporates:
     *  Constant: '<S194>/Constant2'
     *  Constant: '<S194>/Constant3'
     *  Constant: '<S194>/Constant4'
     *  Product: '<S194>/Multiply2'
     *  RelationalOperator: '<S194>/Equal'
     *  Sum: '<S194>/Add'
     */
    if ((rtb_Multiply_o + rtb_Multiply1_l) + (rtb_Level2MfileSFunction_p ? 4.0 :
         0.0) == *rtd_Board_ID) {
      *rtd_BoardIdError = 0.0;
    } else {
      *rtd_BoardIdError = 1.0;
    }

    /* End of Switch: '<S194>/Switch' */
  } else {
    if (localDW->IfActionSubsystem3_MODE) {
      IfActionSubsystem3_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S142>/If Action Subsystem3' */
}

/*
 * Disable for enable system:
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3'
 *    '<S142>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S142>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTruck1Board1Calc_Disable(rtDW_ReceiveTruck1Board1CalcSte *localDW)
{
  /* Disable for Enabled SubSystem: '<S198>/Receive can message' */
  if (localDW->Receivecanmessage_i.Receivecanmessage_MODE) {
    /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' incorporates:
     *  EnablePort: '<S198>/Enable'
     */
    Receivecanmessage_g_Disable(&localDW->Receivecanmessage_i);

    /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
  }

  /* End of Disable for SubSystem: '<S198>/Receive can message' */
  localDW->ReceiveTruck1Board1CalcSteeri_h = false;
}

/*
 * Start for enable system:
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3'
 *    '<S142>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S142>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTruck1Board1CalcSt_Start(uint32_T rtu_Input)
{
  /* Start for Enabled SubSystem: '<S198>/Receive can message' */
  Receivecanmessage_c_Start(rtu_Input);

  /* End of Start for SubSystem: '<S198>/Receive can message' */
}

/*
 * Outputs for enable system:
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2'
 *    '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3'
 *    '<S142>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S142>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTruck1Board1CalcSteering(boolean_T rtu_Enable, uint32_T rtu_Input,
  rtB_ReceiveTruck1Board1CalcStee *localB, rtDW_ReceiveTruck1Board1CalcSte
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' incorporates:
   *  EnablePort: '<S198>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->ReceiveTruck1Board1CalcSteeri_h) {
      localDW->ReceiveTruck1Board1CalcSteeri_h = true;
    }

    /* Outputs for Enabled SubSystem: '<S198>/Receive can message' */
    Receivecanmessage_j(true, rtu_Input, &localB->Receivecanmessage_i,
                        &localDW->Receivecanmessage_i);

    /* End of Outputs for SubSystem: '<S198>/Receive can message' */

    /* Outputs for Enabled SubSystem: '<S198>/Desync calculation' incorporates:
     *  EnablePort: '<S231>/Enable'
     */
    /* Logic: '<S198>/OR1' */
    if ((localB->Receivecanmessage_i.SFunction_o1 != 0) ||
        (localB->Receivecanmessage_i.SFunction_o1_m != 0)) {
      /* Switch: '<S231>/Switch1' */
      if (localB->Receivecanmessage_i.SFunction_o1 > 0) {
        localB->Switch1 = localB->Receivecanmessage_i.In1_m;
      } else {
        localB->Switch1 = localB->Receivecanmessage_i.In1;
      }

      /* End of Switch: '<S231>/Switch1' */
    }

    /* End of Logic: '<S198>/OR1' */
    /* End of Outputs for SubSystem: '<S198>/Desync calculation' */
  } else {
    if (localDW->ReceiveTruck1Board1CalcSteeri_h) {
      ReceiveTruck1Board1Calc_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
}

/*
 * Disable for enable system:
 *    '<S142>/Send can message'
 *    '<S142>/Send can message1'
 *    '<S284>/Send can message'
 *    '<S284>/Send can message1'
 */
void Sendcanmessage_Disable(rtDW_Sendcanmessage *localDW)
{
  localDW->Sendcanmessage_MODE = false;
}

/*
 * Outputs for enable system:
 *    '<S142>/Send can message'
 *    '<S142>/Send can message1'
 *    '<S284>/Send can message'
 *    '<S284>/Send can message1'
 */
void Sendcanmessage(boolean_T rtu_Enable, rtDW_Sendcanmessage *localDW)
{
  /* Outputs for Enabled SubSystem: '<S142>/Send can message' incorporates:
   *  EnablePort: '<S204>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Sendcanmessage_MODE) {
      localDW->Sendcanmessage_MODE = true;
    }
  } else {
    if (localDW->Sendcanmessage_MODE) {
      Sendcanmessage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S142>/Send can message' */
}

/*
 * Update for enable system:
 *    '<S142>/Send can message'
 *    '<S142>/Send can message1'
 *    '<S284>/Send can message'
 *    '<S284>/Send can message1'
 */
void Sendcanmessage_Update(uint32_T rtu_Can_ID, uint8_T rtu_Can_Data,
  rtDW_Sendcanmessage *localDW)
{
  /* Update for Enabled SubSystem: '<S142>/Send can message' incorporates:
   *  EnablePort: '<S204>/Enable'
   */
  if (localDW->Sendcanmessage_MODE) {
    /* Update for M-S-Function: '<S267>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = rtu_Can_Data;

      /* send the data */
      CanTransmit(0, rtu_Can_ID, 1, &canTxData.uint8_T_info[0]);
    }

    /* Update for M-S-Function: '<S268>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = rtu_Can_Data;

      /* send the data */
      CanTransmit(1, rtu_Can_ID, 1, &canTxData.uint8_T_info[0]);
    }
  }

  /* End of Update for SubSystem: '<S142>/Send can message' */
}

/*
 * Disable for enable system:
 *    '<S284>/Receive Trailer 1 board 4 input angel'
 *    '<S284>/Receive Trailer 2 board 5 input angel'
 *    '<S284>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S284>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S284>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTrailer1board4in_Disable(rtDW_ReceiveTrailer1board4input *localDW)
{
  /* Disable for Enabled SubSystem: '<S297>/Receive can message' */
  if (localDW->Receivecanmessage_a.Receivecanmessage_MODE) {
    /* Outputs for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' incorporates:
     *  EnablePort: '<S297>/Enable'
     */
    Receivecanmessage_g_Disable(&localDW->Receivecanmessage_a);

    /* End of Outputs for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
  }

  /* End of Disable for SubSystem: '<S297>/Receive can message' */
  localDW->ReceiveTrailer1board4inputang_b = false;
}

/*
 * Start for enable system:
 *    '<S284>/Receive Trailer 1 board 4 input angel'
 *    '<S284>/Receive Trailer 2 board 5 input angel'
 *    '<S284>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S284>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S284>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTrailer1board4inpu_Start(uint32_T rtu_Input)
{
  /* Start for Enabled SubSystem: '<S297>/Receive can message' */
  Receivecanmessage_c_Start(rtu_Input);

  /* End of Start for SubSystem: '<S297>/Receive can message' */
}

/*
 * Outputs for enable system:
 *    '<S284>/Receive Trailer 1 board 4 input angel'
 *    '<S284>/Receive Trailer 2 board 5 input angel'
 *    '<S284>/Receive Truck 1 Board 1 Calc Steering Angle'
 *    '<S284>/Receive Truck 2 Board 2 Calc Steering Angle'
 *    '<S284>/Receive Truck 3 Board 3 Calc Steering Angle'
 */
void ReceiveTrailer1board4inputangel(boolean_T rtu_Enable, uint32_T rtu_Input,
  rtB_ReceiveTrailer1board4inputa *localB, rtDW_ReceiveTrailer1board4input
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' incorporates:
   *  EnablePort: '<S297>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->ReceiveTrailer1board4inputang_b) {
      localDW->ReceiveTrailer1board4inputang_b = true;
    }

    /* Outputs for Enabled SubSystem: '<S297>/Receive can message' */
    Receivecanmessage_j(true, rtu_Input, &localB->Receivecanmessage_a,
                        &localDW->Receivecanmessage_a);

    /* End of Outputs for SubSystem: '<S297>/Receive can message' */

    /* Outputs for Enabled SubSystem: '<S297>/Desync calculation' incorporates:
     *  EnablePort: '<S311>/Enable'
     */
    /* Logic: '<S297>/OR1' */
    if ((localB->Receivecanmessage_a.SFunction_o1 != 0) ||
        (localB->Receivecanmessage_a.SFunction_o1_m != 0)) {
      /* Switch: '<S311>/Switch1' */
      if (localB->Receivecanmessage_a.SFunction_o1 > 0) {
        localB->Switch1 = localB->Receivecanmessage_a.In1_m;
      } else {
        localB->Switch1 = localB->Receivecanmessage_a.In1;
      }

      /* End of Switch: '<S311>/Switch1' */
    }

    /* End of Logic: '<S297>/OR1' */
    /* End of Outputs for SubSystem: '<S297>/Desync calculation' */
  } else {
    if (localDW->ReceiveTrailer1board4inputang_b) {
      ReceiveTrailer1board4in_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
}

/*
 * Disable for enable system:
 *    '<S284>/Send can message2'
 *    '<S284>/Send can message3'
 *    '<S284>/Send can message4'
 */
void Sendcanmessage2_Disable(rtDW_Sendcanmessage2 *localDW)
{
  localDW->Sendcanmessage2_MODE = false;
}

/*
 * Outputs for enable system:
 *    '<S284>/Send can message2'
 *    '<S284>/Send can message3'
 *    '<S284>/Send can message4'
 */
void Sendcanmessage2(boolean_T rtu_Enable, rtDW_Sendcanmessage2 *localDW, real_T
                     *rtd_AngleVoteError)
{
  /* Outputs for Enabled SubSystem: '<S284>/Send can message2' incorporates:
   *  EnablePort: '<S304>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Sendcanmessage2_MODE) {
      localDW->Sendcanmessage2_MODE = true;
    }

    /* DataStoreWrite: '<S304>/Data Store Write2' incorporates:
     *  Constant: '<S304>/Constant'
     */
    *rtd_AngleVoteError = 0.0;
  } else {
    if (localDW->Sendcanmessage2_MODE) {
      Sendcanmessage2_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S284>/Send can message2' */
}

/*
 * Update for enable system:
 *    '<S284>/Send can message2'
 *    '<S284>/Send can message3'
 *    '<S284>/Send can message4'
 */
void Sendcanmessage2_Update(uint32_T rtu_Can_ID, uint8_T rtu_Can_Data,
  rtDW_Sendcanmessage2 *localDW)
{
  /* Update for Enabled SubSystem: '<S284>/Send can message2' incorporates:
   *  EnablePort: '<S304>/Enable'
   */
  if (localDW->Sendcanmessage2_MODE) {
    /* Update for M-S-Function: '<S345>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = rtu_Can_Data;

      /* send the data */
      CanTransmit(0, rtu_Can_ID, 1, &canTxData.uint8_T_info[0]);
    }

    /* Update for M-S-Function: '<S346>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = rtu_Can_Data;

      /* send the data */
      CanTransmit(1, rtu_Can_ID, 1, &canTxData.uint8_T_info[0]);
    }
  }

  /* End of Update for SubSystem: '<S284>/Send can message2' */
}

uint32_T MWDSP_EPH_R_S8(int8_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int32_T curState;
  int32_T newState;
  int32_T newStateR;
  int32_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<S151>/Counter1' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt > 0) {
    curState = 2;
  } else {
    curState = (evt >= 0);
  }

  if (*sta == 5U) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != *sta) {
      if (*sta == 3U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1U;
        }
      }

      if (previousState == 4U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1U;
        }
      }

      if ((previousState == 1U) && ((uint32_T)curState == 2U)) {
        retVal = 2U;
      }

      if (previousState == 0U) {
        retVal = 2U;
      }

      if (retVal == (uint32_T)lastzcevent) {
        retVal = 0U;
      }

      if (((uint32_T)curState == 1U) && (retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint32_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0U;
  }

  if ((uint32_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<S151>/Counter1' */
  return retVal;
}

uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int32_T curState;
  int32_T newState;
  int32_T newStateR;
  int32_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<S148>/Counter1' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt) {
    curState = 2;
  } else {
    curState = 1;
  }

  if (*sta == 5U) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != *sta) {
      if (*sta == 3U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1U;
        }
      }

      if (previousState == 4U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1U;
        }
      }

      if ((previousState == 1U) && ((uint32_T)curState == 2U)) {
        retVal = 2U;
      }

      if (previousState == 0U) {
        retVal = 2U;
      }

      if (retVal == (uint32_T)lastzcevent) {
        retVal = 0U;
      }

      if (((uint32_T)curState == 1U) && (retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint32_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0U;
  }

  if ((uint32_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<S148>/Counter1' */
  return retVal;
}

/* System initialize for function-call system: '<S5>/4.3 TTA System' */
void u3TTASystem_Init(rtB_u3TTASystem *localB, rtDW_u3TTASystem *localDW)
{
  /* SystemInitialize for Enabled SubSystem: '<S117>/4.3.1 Initialization' */
  /* SystemInitialize for Enabled SubSystem: '<S125>/RoleID and Global Time init' */
  /* SystemInitialize for Outport: '<S130>/Finish Initialization' */
  localB->SET = 0.0;

  /* End of SystemInitialize for SubSystem: '<S125>/RoleID and Global Time init' */
  /* End of SystemInitialize for SubSystem: '<S117>/4.3.1 Initialization' */

  /* SystemInitialize for Enabled SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
  /* SystemInitialize for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
  /* InitializeConditions for S-Function (sdspcount2): '<S141>/Counter3' */
  localDW->Counter3_ClkEphState_n = 5U;
  localDW->Counter3_Count_f = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S141>/Counter1' */
  localDW->Counter1_ClkEphState_m = 5U;
  localDW->Counter1_Count_c = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S141>/Counter2' */
  localDW->Counter2_ClkEphState_l = 5U;
  localDW->Counter2_Count_i = ((uint8_T)0U);

  /* SystemInitialize for Enabled SubSystem: '<S141>/Receive Timer can master message ' */
  /* InitializeConditions for S-Function (sdspcount2): '<S151>/Counter1' */
  localDW->Counter1_ClkEphState_f = 5U;
  localDW->Counter1_Count_i = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S151>/Counter2' */
  localDW->Counter2_ClkEphState_g = 5U;
  localDW->Counter2_Count_c = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S151>/Counter' */
  localDW->Counter_ClkEphState_a = 5U;
  localDW->Counter_Count_j = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S141>/Receive Timer can master message ' */

  /* SystemInitialize for Enabled SubSystem: '<S141>/If Action Subsystem' */
  /* InitializeConditions for S-Function (sdspcount2): '<S148>/Counter1' */
  localDW->Counter1_ClkEphState_a = 5U;
  localDW->Counter1_Count_f = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S141>/If Action Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S141>/If Action Subsystem2' */
  /* InitializeConditions for S-Function (sdspcount2): '<S150>/Counter1' */
  localDW->Counter1_ClkEphState_fc = 5U;
  localDW->Counter1_RstEphState = 5U;
  localDW->Counter1_Count_g = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S150>/Counter2' */
  localDW->Counter2_ClkEphState_k = 5U;
  localDW->Counter2_RstEphState = 5U;
  localDW->Counter2_Count_a = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S150>/Counter' */
  localDW->Counter_ClkEphState_n = 5U;
  localDW->Counter_RstEphState = 5U;
  localDW->Counter_Count_m = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S141>/If Action Subsystem2' */
  /* End of SystemInitialize for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */

  /* SystemInitialize for Enabled SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
  /* InitializeConditions for S-Function (sdspcount2): '<S283>/Counter1' */
  localDW->Counter1_ClkEphState = 5U;
  localDW->Counter1_Count = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S283>/Counter3' */
  localDW->Counter3_ClkEphState = 5U;
  localDW->Counter3_Count = ((uint8_T)0U);

  /* SystemInitialize for Enabled SubSystem: '<S283>/Receive Timer can master message ' */
  /* InitializeConditions for S-Function (sdspcount2): '<S287>/Counter1' */
  localDW->Counter1_ClkEphState_d = 5U;
  localDW->Counter1_Count_a = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S287>/Counter2' */
  localDW->Counter2_ClkEphState = 5U;
  localDW->Counter2_Count = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sdspcount2): '<S287>/Counter' */
  localDW->Counter_ClkEphState = 5U;
  localDW->Counter_Count = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S283>/Receive Timer can master message ' */

  /* SystemInitialize for Enabled SubSystem: '<S283>/If Action Subsystem' */
  /* InitializeConditions for S-Function (sdspcount2): '<S286>/Counter1' */
  localDW->Counter1_ClkEphState_g = 5U;
  localDW->Counter1_Count_m = ((uint8_T)0U);

  /* End of SystemInitialize for SubSystem: '<S283>/If Action Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
  /* End of SystemInitialize for SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
}

/* Disable for function-call system: '<S5>/4.3 TTA System' */
void u3TTASystem_Disable(rtB_u3TTASystem *localB, rtDW_u3TTASystem *localDW)
{
  /* Disable for Enabled SubSystem: '<S117>/4.3.1 Initialization' */
  if (localDW->u31Initialization_MODE) {
    /* Disable for If: '<S125>/If' */
    if (localDW->If_ActiveSubsystem_k == 0) {
    }

    localDW->If_ActiveSubsystem_k = -1;

    /* End of Disable for If: '<S125>/If' */

    /* Disable for Enabled SubSystem: '<S125>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S130>/Finish Initialization' */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S125>/RoleID and Global Time init' */
    localDW->u31Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S117>/4.3.1 Initialization' */

  /* Disable for Enabled SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
  if (localDW->u33MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
    if (localDW->u331ControllerMatrixCycleTruckB) {
      /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message ' */
      if (localDW->ReceiveTimercanmastermessage__j) {
        /* Disable for Enabled SubSystem: '<S151>/Receive can message' */
        if (localDW->Receivecanmessage_f.Receivecanmessage_MODE) {
          /* Constant: '<S151>/Constant' */
          Receivecanmessage_Disable(&localDW->Receivecanmessage_f);
        }

        /* End of Disable for SubSystem: '<S151>/Receive can message' */
        localDW->ReceiveTimercanmastermessage__j = false;
      }

      /* End of Disable for SubSystem: '<S141>/Receive Timer can master message ' */

      /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 1' */
      if (localDW->ReceiveTimercanmastermessage1_M) {
        /* Disable for Enabled SubSystem: '<S152>/Receive can message' */
        if (localDW->Receivecanmessage_jy.Receivecanmessage_MODE) {
          /* Constant: '<S141>/Constant3' */
          Receivecanmessage_g_Disable(&localDW->Receivecanmessage_jy);
        }

        /* End of Disable for SubSystem: '<S152>/Receive can message' */
        localDW->ReceiveTimercanmastermessage1_M = false;
      }

      /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 1' */

      /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 2' */
      if (localDW->ReceiveTimercanmastermessage2_M) {
        /* Disable for Enabled SubSystem: '<S153>/Receive can message' */
        if (localDW->Receivecanmessage_k.Receivecanmessage_MODE) {
          /* Constant: '<S141>/Constant11' */
          Receivecanmessage_g_Disable(&localDW->Receivecanmessage_k);
        }

        /* End of Disable for SubSystem: '<S153>/Receive can message' */
        localDW->ReceiveTimercanmastermessage2_M = false;
      }

      /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 2' */

      /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 3' */
      if (localDW->ReceiveTimercanmastermessage3_M) {
        /* Disable for Enabled SubSystem: '<S154>/Receive can message' */
        if (localDW->Receivecanmessage_n.Receivecanmessage_MODE) {
          /* Constant: '<S141>/Constant16' */
          Receivecanmessage_g_Disable(&localDW->Receivecanmessage_n);
        }

        /* End of Disable for SubSystem: '<S154>/Receive can message' */
        localDW->ReceiveTimercanmastermessage3_M = false;
      }

      /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 3' */
      /* Disable for Enabled SubSystem: '<S141>/Send can message' */
      if (localDW->Sendcanmessage_MODE) {
        localDW->Sendcanmessage_MODE = false;
      }

      /* End of Disable for SubSystem: '<S141>/Send can message' */

      /* Disable for Enabled SubSystem: '<S141>/Send can message1' */
      if (localDW->Sendcanmessage1_MODE) {
        localDW->Sendcanmessage1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S141>/Send can message1' */

      /* Disable for Enabled SubSystem: '<S141>/Send can message2' */
      if (localDW->Sendcanmessage2_MODE_n) {
        localDW->Sendcanmessage2_MODE_n = false;
      }

      /* End of Disable for SubSystem: '<S141>/Send can message2' */

      /* Disable for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' */
      if (localDW->SendReceiveTimercanmastermessag) {
        /* Disable for If: '<S158>/If' */
        if (localDW->If_ActiveSubsystem == 0) {
        }

        localDW->If_ActiveSubsystem = -1;

        /* End of Disable for If: '<S158>/If' */
        localDW->SendReceiveTimercanmastermessag = false;
      }

      /* End of Disable for SubSystem: '<S141>/Send//Receive Timer can master message ' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */
      if (localDW->ReceiveTrailer1board4inputang_a) {
        /* Disable for Enabled SubSystem: '<S196>/Receive can message' */
        if (localDW->Receivecanmessage_m.Receivecanmessage_MODE) {
          /* Constant: '<S142>/Constant3' */
          Receivecanmessage_g_Disable(&localDW->Receivecanmessage_m);
        }

        /* End of Disable for SubSystem: '<S196>/Receive can message' */
        localDW->ReceiveTrailer1board4inputang_a = false;
      }

      /* End of Disable for SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */
      if (localDW->ReceiveTrailer2board5inputangel) {
        /* Disable for Enabled SubSystem: '<S197>/Receive can message' */
        if (localDW->Receivecanmessage_d.Receivecanmessage_MODE) {
          /* Constant: '<S142>/Constant11' */
          Receivecanmessage_g_Disable(&localDW->Receivecanmessage_d);
        }

        /* End of Disable for SubSystem: '<S197>/Receive can message' */
        localDW->ReceiveTrailer2board5inputangel = false;
      }

      /* End of Disable for SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
      if (localDW->ReceiveTruck1Board1CalcSteeri_d.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant16' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck1Board1CalcSteeri_d);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */
      if (localDW->ReceiveTruck2Board2CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant4' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck2Board2CalcSteering);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */
      if (localDW->ReceiveTruck3Board3CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant26' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck3Board3CalcSteering);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */
      if (localDW->ReceiveTruck1Board1CalcSteeri_a.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant35' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck1Board1CalcSteeri_a);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */
      if (localDW->ReceiveTruck1Board1CalcSteeri_i.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant45' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck1Board1CalcSteeri_i);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */

      /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */
      if (localDW->ReceiveTruck1Board1CalcSteeri_k.ReceiveTruck1Board1CalcSteeri_h)
      {
        /* Constant: '<S142>/Constant42' */
        ReceiveTruck1Board1Calc_Disable
          (&localDW->ReceiveTruck1Board1CalcSteeri_k);
      }

      /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */

      /* Disable for Enabled SubSystem: '<S142>/If Action Subsystem3' */
      if (localDW->IfActionSubsystem3_n.IfActionSubsystem3_MODE) {
        IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_n);
      }

      /* End of Disable for SubSystem: '<S142>/If Action Subsystem3' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message' */
      if (localDW->Sendcanmessage_i.Sendcanmessage_MODE) {
        /* Constant: '<S142>/Constant3' */
        Sendcanmessage_Disable(&localDW->Sendcanmessage_i);
      }

      /* End of Disable for SubSystem: '<S142>/Send can message' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message1' */
      if (localDW->Sendcanmessage1_e.Sendcanmessage_MODE) {
        /* Constant: '<S142>/Constant11' */
        Sendcanmessage_Disable(&localDW->Sendcanmessage1_e);
      }

      /* End of Disable for SubSystem: '<S142>/Send can message1' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message2' */
      if (localDW->Sendcanmessage2_MODE) {
        localDW->Sendcanmessage2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message2' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message3' */
      if (localDW->Sendcanmessage3_MODE) {
        localDW->Sendcanmessage3_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message3' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message4' */
      if (localDW->Sendcanmessage4_MODE) {
        localDW->Sendcanmessage4_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message4' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message5' */
      if (localDW->Sendcanmessage5_MODE) {
        localDW->Sendcanmessage5_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message5' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message6' */
      if (localDW->Sendcanmessage6_MODE) {
        localDW->Sendcanmessage6_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message6' */

      /* Disable for Enabled SubSystem: '<S142>/Send can message7' */
      if (localDW->Sendcanmessage7_MODE) {
        localDW->Sendcanmessage7_MODE = false;
      }

      /* End of Disable for SubSystem: '<S142>/Send can message7' */
      localDW->u331ControllerMatrixCycleTruckB = false;
    }

    /* End of Disable for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */

    /* Disable for Enabled SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
    if (localDW->u332ControllerMatrixCycle_Board) {
      /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
      if (localDW->ReceiveTrailer1board4inputang_i.ReceiveTrailer1board4inputang_b)
      {
        /* Constant: '<S284>/Constant3' */
        ReceiveTrailer1board4in_Disable
          (&localDW->ReceiveTrailer1board4inputang_i);
      }

      /* End of Disable for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */

      /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */
      if (localDW->ReceiveTrailer2board5inputang_m.ReceiveTrailer1board4inputang_b)
      {
        /* Constant: '<S284>/Constant11' */
        ReceiveTrailer1board4in_Disable
          (&localDW->ReceiveTrailer2board5inputang_m);
      }

      /* End of Disable for SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */

      /* Disable for Enabled SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */
      if (localDW->ReceiveTruck1Board1CalcSteeri_c.ReceiveTrailer1board4inputang_b)
      {
        /* Constant: '<S284>/Constant16' */
        ReceiveTrailer1board4in_Disable
          (&localDW->ReceiveTruck1Board1CalcSteeri_c);
      }

      /* End of Disable for SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */
      if (localDW->ReceiveTruck2Board2CalcSteeri_h.ReceiveTrailer1board4inputang_b)
      {
        /* Constant: '<S284>/Constant4' */
        ReceiveTrailer1board4in_Disable
          (&localDW->ReceiveTruck2Board2CalcSteeri_h);
      }

      /* End of Disable for SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */
      if (localDW->ReceiveTruck3Board3CalcSteeri_c.ReceiveTrailer1board4inputang_b)
      {
        /* Constant: '<S284>/Constant26' */
        ReceiveTrailer1board4in_Disable
          (&localDW->ReceiveTruck3Board3CalcSteeri_c);
      }

      /* End of Disable for SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */

      /* Disable for Enabled SubSystem: '<S284>/If Action Subsystem3' */
      if (localDW->IfActionSubsystem3_m.IfActionSubsystem3_MODE) {
        IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_m);
      }

      /* End of Disable for SubSystem: '<S284>/If Action Subsystem3' */

      /* Disable for Enabled SubSystem: '<S284>/Send can message' */
      if (localDW->Sendcanmessage_nf.Sendcanmessage_MODE) {
        /* Constant: '<S284>/Constant3' */
        Sendcanmessage_Disable(&localDW->Sendcanmessage_nf);
      }

      /* End of Disable for SubSystem: '<S284>/Send can message' */

      /* Disable for Enabled SubSystem: '<S284>/Send can message1' */
      if (localDW->Sendcanmessage1_p.Sendcanmessage_MODE) {
        /* Constant: '<S284>/Constant11' */
        Sendcanmessage_Disable(&localDW->Sendcanmessage1_p);
      }

      /* End of Disable for SubSystem: '<S284>/Send can message1' */

      /* Disable for Enabled SubSystem: '<S284>/Send can message2' */
      if (localDW->Sendcanmessage2_d.Sendcanmessage2_MODE) {
        /* Constant: '<S284>/Constant16' */
        Sendcanmessage2_Disable(&localDW->Sendcanmessage2_d);
      }

      /* End of Disable for SubSystem: '<S284>/Send can message2' */

      /* Disable for Enabled SubSystem: '<S284>/Send can message3' */
      if (localDW->Sendcanmessage3_a.Sendcanmessage2_MODE) {
        /* Constant: '<S284>/Constant4' */
        Sendcanmessage2_Disable(&localDW->Sendcanmessage3_a);
      }

      /* End of Disable for SubSystem: '<S284>/Send can message3' */

      /* Disable for Enabled SubSystem: '<S284>/Send can message4' */
      if (localDW->Sendcanmessage4_j.Sendcanmessage2_MODE) {
        /* Constant: '<S284>/Constant26' */
        Sendcanmessage2_Disable(&localDW->Sendcanmessage4_j);
      }

      /* End of Disable for SubSystem: '<S284>/Send can message4' */

      /* Disable for Enabled SubSystem: '<S283>/Receive Timer can master message ' */
      if (localDW->ReceiveTimercanmastermessage_MO) {
        /* Disable for Enabled SubSystem: '<S287>/Receive can message' */
        if (localDW->Receivecanmessage_c.Receivecanmessage_MODE) {
          /* Constant: '<S287>/Constant' */
          Receivecanmessage_Disable(&localDW->Receivecanmessage_c);
        }

        /* End of Disable for SubSystem: '<S287>/Receive can message' */
        localDW->ReceiveTimercanmastermessage_MO = false;
      }

      /* End of Disable for SubSystem: '<S283>/Receive Timer can master message ' */
      localDW->u332ControllerMatrixCycle_Board = false;
    }

    /* End of Disable for SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
    localDW->u33MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
}

/* Start for function-call system: '<S5>/4.3 TTA System' */
void u3TTASystem_Start(rtDW_u3TTASystem *localDW)
{
  /* Start for DataStoreMemory: '<S117>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* Start for Enabled SubSystem: '<S117>/4.3.1 Initialization' */
  /* Start for If: '<S125>/If' */
  localDW->If_ActiveSubsystem_k = -1;

  /* Start for IfAction SubSystem: '<S125>/Receive can message' */
  /* Start for M-S-Function: '<S131>/S-Function' incorporates:
   *  Constant: '<S125>/Board nr4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 100U);

  /* Start for M-S-Function: '<S132>/S-Function' incorporates:
   *  Constant: '<S125>/Board nr4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 100U);

  /* End of Start for SubSystem: '<S125>/Receive can message' */
  /* End of Start for SubSystem: '<S117>/4.3.1 Initialization' */

  /* Start for Enabled SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
  /* Start for Atomic SubSystem: '<S127>/4.3.3.3 Send the next Board ID' */
  /* Start for M-S-Function: '<S354>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTD_PIN5, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S355>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTD_PIN6, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S356>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTD_PIN7, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S351>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S352>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S353>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

  /* End of Start for SubSystem: '<S127>/4.3.3.3 Send the next Board ID' */

  /* Start for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
  /* Start for Enabled SubSystem: '<S141>/Receive Timer can master message ' */
  /* Start for Enabled SubSystem: '<S151>/Receive can message' */
  /* Constant: '<S151>/Constant' */
  Receivecanmessage_Start(100U);

  /* End of Start for SubSystem: '<S151>/Receive can message' */
  /* End of Start for SubSystem: '<S141>/Receive Timer can master message ' */

  /* Start for Enabled SubSystem: '<S141>/Receive Timer can master message 1' */
  /* Start for Enabled SubSystem: '<S152>/Receive can message' */
  /* Constant: '<S141>/Constant3' */
  Receivecanmessage_c_Start(99U);

  /* End of Start for SubSystem: '<S152>/Receive can message' */
  /* End of Start for SubSystem: '<S141>/Receive Timer can master message 1' */

  /* Start for Enabled SubSystem: '<S141>/Receive Timer can master message 2' */
  /* Start for Enabled SubSystem: '<S153>/Receive can message' */
  /* Constant: '<S141>/Constant11' */
  Receivecanmessage_c_Start(98U);

  /* End of Start for SubSystem: '<S153>/Receive can message' */
  /* End of Start for SubSystem: '<S141>/Receive Timer can master message 2' */

  /* Start for Enabled SubSystem: '<S141>/Receive Timer can master message 3' */
  /* Start for Enabled SubSystem: '<S154>/Receive can message' */
  /* Constant: '<S141>/Constant16' */
  Receivecanmessage_c_Start(97U);

  /* End of Start for SubSystem: '<S154>/Receive can message' */
  /* End of Start for SubSystem: '<S141>/Receive Timer can master message 3' */

  /* Start for M-S-Function: '<S146>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S147>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

  /* Start for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' */
  /* Start for If: '<S158>/If' */
  localDW->If_ActiveSubsystem = -1;

  /* End of Start for SubSystem: '<S141>/Send//Receive Timer can master message ' */

  /* Start for Enabled SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */
  /* Start for Enabled SubSystem: '<S196>/Receive can message' */
  /* Constant: '<S142>/Constant3' */
  Receivecanmessage_c_Start(10U);

  /* End of Start for SubSystem: '<S196>/Receive can message' */
  /* End of Start for SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */

  /* Start for Enabled SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */
  /* Start for Enabled SubSystem: '<S197>/Receive can message' */
  /* Constant: '<S142>/Constant11' */
  Receivecanmessage_c_Start(9U);

  /* End of Start for SubSystem: '<S197>/Receive can message' */
  /* End of Start for SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
  /* Constant: '<S142>/Constant16' */
  ReceiveTruck1Board1CalcSt_Start(8U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */
  /* Constant: '<S142>/Constant4' */
  ReceiveTruck1Board1CalcSt_Start(7U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */
  /* Constant: '<S142>/Constant26' */
  ReceiveTruck1Board1CalcSt_Start(6U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */
  /* Constant: '<S142>/Constant35' */
  ReceiveTruck1Board1CalcSt_Start(5U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */
  /* Constant: '<S142>/Constant45' */
  ReceiveTruck1Board1CalcSt_Start(4U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */

  /* Start for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */
  /* Constant: '<S142>/Constant42' */
  ReceiveTruck1Board1CalcSt_Start(3U);

  /* End of Start for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */

  /* Start for Enabled SubSystem: '<S142>/If Action Subsystem3' */
  IfActionSubsystem3_Start();

  /* End of Start for SubSystem: '<S142>/If Action Subsystem3' */
  /* End of Start for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */

  /* Start for Enabled SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
  /* Start for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
  /* Constant: '<S284>/Constant3' */
  ReceiveTrailer1board4inpu_Start(10U);

  /* End of Start for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */

  /* Start for Enabled SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */
  /* Constant: '<S284>/Constant11' */
  ReceiveTrailer1board4inpu_Start(9U);

  /* End of Start for SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */

  /* Start for Enabled SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */
  /* Constant: '<S284>/Constant16' */
  ReceiveTrailer1board4inpu_Start(8U);

  /* End of Start for SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */
  /* Constant: '<S284>/Constant4' */
  ReceiveTrailer1board4inpu_Start(7U);

  /* End of Start for SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */
  /* Constant: '<S284>/Constant26' */
  ReceiveTrailer1board4inpu_Start(6U);

  /* End of Start for SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */

  /* Start for Enabled SubSystem: '<S284>/If Action Subsystem3' */
  IfActionSubsystem3_Start();

  /* End of Start for SubSystem: '<S284>/If Action Subsystem3' */

  /* Start for Enabled SubSystem: '<S283>/Receive Timer can master message ' */
  /* Start for Enabled SubSystem: '<S287>/Receive can message' */
  /* Constant: '<S287>/Constant' */
  Receivecanmessage_Start(100U);

  /* End of Start for SubSystem: '<S287>/Receive can message' */
  /* End of Start for SubSystem: '<S283>/Receive Timer can master message ' */
  /* End of Start for SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
  /* End of Start for SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
}

/* Output and update for function-call system: '<S5>/4.3 TTA System' */
void u3TTASystem(rtB_u3TTASystem *localB, const rtC_u3TTASystem *localC,
                 rtDW_u3TTASystem *localDW, real_T *rtd_AngleVoteError, real_T
                 *rtd_BoardIdError, real_T *rtd_Board_ID, real_T
                 *rtd_EncoderValue, real_T *rtd_EncoderValueTestError, uint16_T *
                 rtd_Local_Ticks, real_T *rtd_Master, real_T *rtd_Master_ID,
                 real_T *rtd_NoOtherTruckBoardsError, real_T
                 *rtd_NoTrailerAttachError, real_T *rtd_PWMValue, real_T
                 *rtd_PotAngle)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_b;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_a;
  uint8_T rtb_SFunction_o7_a;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_h;
  int8_T rtPrevAction;
  int8_T rtAction;
  boolean_T rtb_AND_l;
  real_T rtb_DataStoreRead1_bf;
  boolean_T rtb_Equal1_h2;
  real_T rtb_Switch6_o;
  real_T rtb_Add3;
  real_T rtb_Add4_g;
  boolean_T rtb_Equal6_g;
  boolean_T OR1;
  boolean_T OR2;
  boolean_T OR3;
  boolean_T rtb_OR6;
  boolean_T rtb_OR5;
  boolean_T rtb_OR4;
  boolean_T rtb_Equal1_k;
  boolean_T AND9_d;
  boolean_T AND6_a;
  boolean_T AND2_j;
  boolean_T AND12_f;
  boolean_T AND15_e;
  boolean_T AND20;
  boolean_T AND23;
  boolean_T AND26;
  boolean_T rtb_GreaterThanOrEqual19_p;
  boolean_T AND10_j;
  boolean_T AND8_a;
  boolean_T rtb_AND1_d;
  boolean_T rtb_AND11;
  boolean_T rtb_AND14;
  boolean_T rtb_AND19;
  boolean_T rtb_AND22;
  boolean_T rtb_AND25;
  boolean_T AND9;
  boolean_T AND6;
  boolean_T AND2;
  boolean_T AND12;
  boolean_T AND15;
  boolean_T rtb_GreaterThanOrEqual19;
  boolean_T AND10;
  boolean_T AND8;
  boolean_T AND1;
  boolean_T AND11;
  boolean_T AND14;
  uint8_T rtb_In2_o;
  uint8_T rtb_In3_f;
  uint8_T rtb_In4_d;
  uint8_T rtb_In5_b;
  uint8_T rtb_In6_g;
  uint8_T rtb_In7_o;
  uint8_T rtb_In8_m;
  uint8_T rtb_In2;
  uint8_T rtb_In3;
  uint8_T rtb_In4;
  uint8_T rtb_In5;
  uint8_T rtb_In6;
  uint8_T rtb_In7;
  uint8_T rtb_In8;
  boolean_T rtb_Equal2_p;
  boolean_T rtb_Counter3_o2_k;
  boolean_T rtb_Counter1_o2_e;
  boolean_T rtb_Counter2_o2_b;
  real_T rtb_DataStoreRead2_j;
  boolean_T rtb_Equal2_f;
  boolean_T rtb_Counter1_o2;
  int32_T rtb_Counter1_o1;
  boolean_T rtb_Counter3_o2;
  int32_T rtb_Counter3_o1;
  boolean_T rtb_Counter1_o2_o;
  boolean_T rtb_Counter2_o2_i;
  boolean_T rtb_Counter_o2_o;
  boolean_T rtb_Counter1_o2_p;
  boolean_T rtb_Counter1_o2_jh;
  int32_T rtb_Counter1_o1_k;
  boolean_T rtb_Counter2_o2;
  int32_T rtb_Counter2_o1;
  boolean_T rtb_Counter_o2;
  int32_T rtb_Counter_o1;
  boolean_T rtb_Counter1_o2_l;
  int32_T rtb_Counter1_o1_a;
  real_T rtb_Add3_tmp;
  uint8_T DataTypeConversion7_tmp;

  /* DataStoreRead: '<S117>/Data Store Read' */
  InitFlag = localDW->Initialization_flag;

  /* Outputs for Enabled SubSystem: '<S117>/4.3.1 Initialization' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  if (InitFlag) {
    if (!localDW->u31Initialization_MODE) {
      localDW->u31Initialization_MODE = true;
    }

    /* If: '<S125>/If' incorporates:
     *  Constant: '<S125>/Constant1'
     *  Inport: '<S133>/In1'
     *  Inport: '<S133>/In2'
     *  Inport: '<S133>/In3'
     *  Inport: '<S133>/In4'
     *  Inport: '<S133>/In5'
     *  Inport: '<S133>/In6'
     *  Inport: '<S133>/In7'
     *  Inport: '<S133>/In8'
     *  Inport: '<S134>/In1'
     *  Inport: '<S134>/In2'
     *  Inport: '<S134>/In3'
     *  Inport: '<S134>/In4'
     *  Inport: '<S134>/In5'
     *  Inport: '<S134>/In6'
     *  Inport: '<S134>/In7'
     *  Inport: '<S134>/In8'
     */
    rtPrevAction = localDW->If_ActiveSubsystem_k;
    rtAction = -1;
    if (1.0 == 1.0) {
      rtAction = 0;
    }

    localDW->If_ActiveSubsystem_k = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    }

    if (rtAction == 0) {
      if (0 != rtPrevAction) {
      }

      /* Outputs for IfAction SubSystem: '<S125>/Receive can message' incorporates:
       *  ActionPort: '<S129>/Action Port'
       */
      /* M-S-Function: '<S131>/S-Function' incorporates:
       *  Constant: '<S125>/Board nr4'
       */

      /* read the message data and store the new parameter */
      Test_CanRec529 = CanIoGetMessage(0, 100U, NULL,
        &canRxData_0_100U.uint8_T_info[0], NULL);

      /* process the message data */
      if (Test_CanRec529 > 0) {
        /* read the data */
        rtb_SFunction_o2 = canRxData_0_100U.uint8_T_info[0];
      }

      /* Outputs for Enabled SubSystem: '<S131>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S133>/Enable'
       */
      if (Test_CanRec529 > 0) {
        Test_CanMes0 = rtb_SFunction_o2;
        rtb_In2_o = rtb_SFunction_o3;
        rtb_In3_f = rtb_SFunction_o4;
        rtb_In4_d = rtb_SFunction_o5;
        rtb_In5_b = rtb_SFunction_o6;
        rtb_In6_g = rtb_SFunction_o7;
        rtb_In7_o = rtb_SFunction_o8;
        rtb_In8_m = rtb_SFunction_o9;
      }

      /* End of Outputs for SubSystem: '<S131>/Enabled Subsystem' */

      /* M-S-Function: '<S132>/S-Function' incorporates:
       *  Constant: '<S125>/Board nr4'
       *  Inport: '<S133>/In1'
       *  Inport: '<S133>/In2'
       *  Inport: '<S133>/In3'
       *  Inport: '<S133>/In4'
       *  Inport: '<S133>/In5'
       *  Inport: '<S133>/In6'
       *  Inport: '<S133>/In7'
       *  Inport: '<S133>/In8'
       */

      /* read the message data and store the new parameter */
      Test_Can2Rec529 = CanIoGetMessage(1, 100U, NULL,
        &canRxData_1_100U.uint8_T_info[0], NULL);

      /* process the message data */
      if (Test_Can2Rec529 > 0) {
        /* read the data */
        rtb_SFunction_o2_b = canRxData_1_100U.uint8_T_info[0];
      }

      /* Outputs for Enabled SubSystem: '<S132>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S134>/Enable'
       */
      if (Test_Can2Rec529 > 0) {
        Test_CanMes2 = rtb_SFunction_o2_b;
        rtb_In2 = rtb_SFunction_o3_p;
        rtb_In3 = rtb_SFunction_o4_n;
        rtb_In4 = rtb_SFunction_o5_c;
        rtb_In5 = rtb_SFunction_o6_a;
        rtb_In6 = rtb_SFunction_o7_a;
        rtb_In7 = rtb_SFunction_o8_a;
        rtb_In8 = rtb_SFunction_o9_h;
      }

      /* End of Outputs for SubSystem: '<S132>/Enabled Subsystem' */
      /* End of Outputs for SubSystem: '<S125>/Receive can message' */
    }

    /* End of If: '<S125>/If' */

    /* Logic: '<S125>/OR1' */
    Check = ((Test_CanRec529 != 0) || (Test_Can2Rec529 != 0));

    /* Logic: '<S125>/OR' incorporates:
     *  Constant: '<S125>/Board nr1'
     *  Constant: '<S125>/Board nr2'
     *  Constant: '<S125>/Board nr3'
     *  DataStoreRead: '<S125>/Data Store Read1'
     *  Logic: '<S125>/AND'
     *  Logic: '<S125>/OR2'
     *  RelationalOperator: '<S125>/Equal'
     *  RelationalOperator: '<S125>/Equal1'
     *  RelationalOperator: '<S125>/Equal2'
     */
    CanRec1And2 = ((((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) ||
                     (*rtd_Board_ID == 3.0)) && localDW->Initialization_Timeout)
                   || Check);

    /* Outputs for Enabled SubSystem: '<S125>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S130>/Enable'
     */
    if (CanRec1And2) {
      if (!localDW->RoleIDandGlobalTimeinit_MODE) {
        localDW->RoleIDandGlobalTimeinit_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S130>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S136>/Enable'
       */
      if (Check) {
        /* DataStoreWrite: '<S136>/Data Store Write3' */
        *rtd_Master_ID = *rtd_Board_ID;

        /* DataStoreWrite: '<S136>/Data Store Write4' incorporates:
         *  Constant: '<S136>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* Switch: '<S136>/Switch1' */
        if (Test_CanRec529 > 0) {
          Rx_init_LT_Init = EstimatedTimeCan1_Init;
        } else {
          Rx_init_LT_Init = EstimatedTimeCan2_Init;
        }

        /* End of Switch: '<S136>/Switch1' */

        /* DataStoreWrite: '<S136>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT_Init;

        /* DataStoreWrite: '<S136>/Data Store Write2' incorporates:
         *  Constant: '<S136>/Constant4'
         */
        localDW->basic_cycle_count = ((uint8_T)0U);
      }

      /* End of Outputs for SubSystem: '<S130>/Global Time Initialization Slave' */

      /* Outputs for Enabled SubSystem: '<S130>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S135>/Enable'
       */
      /* DataStoreRead: '<S125>/Data Store Read1' */
      if (localDW->Initialization_Timeout) {
        /* DataStoreWrite: '<S135>/Data Store Write3' incorporates:
         *  Constant: '<S135>/Board nr1'
         */
        *rtd_Master_ID = 1.0;

        /* DataStoreWrite: '<S135>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast;

        /* DataStoreWrite: '<S135>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;
      }

      /* End of Outputs for SubSystem: '<S130>/Global Time Initialization Master' */

      /* Switch: '<S130>/Switch2' incorporates:
       *  Constant: '<S130>/Constant1'
       *  DataStoreRead: '<S125>/Data Store Read1'
       *  DataStoreWrite: '<S130>/Data Store Write'
       *  Switch: '<S130>/Switch1'
       */
      if (Check) {
        localDW->Role_ID = 2.0;
      } else {
        if (localDW->Initialization_Timeout) {
          /* Switch: '<S130>/Switch1' incorporates:
           *  Constant: '<S130>/Constant'
           *  DataStoreWrite: '<S130>/Data Store Write'
           */
          localDW->Role_ID = 1.0;
        }
      }

      /* End of Switch: '<S130>/Switch2' */

      /* DataStoreWrite: '<S130>/Data Store Write4' incorporates:
       *  Constant: '<S130>/RESET'
       */
      localDW->Initialization_Timeout = false;

      /* DataStoreWrite: '<S130>/Data Store Write2' incorporates:
       *  Constant: '<S130>/RESET1'
       */
      localDW->Delay_Counter = 0.0;

      /* Constant: '<S130>/SET' */
      localB->SET = 1.0;
    } else {
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S130>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S125>/RoleID and Global Time init' */

    /* Logic: '<S125>/NOT' incorporates:
     *  DataStoreWrite: '<S125>/Data Store Write1'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S128>/GreaterThan' incorporates:
     *  Constant: '<S125>/Constant'
     *  DataStoreRead: '<S128>/Data Store Read1'
     */
    InitTime = (localDW->Delay_Counter >= 424.0);

    /* DataStoreWrite: '<S125>/Data Store Write' */
    localDW->Initialization_Timeout = InitTime;

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S128>/Increment1'
     *  Constant: '<S128>/Reset'
     *  DataStoreRead: '<S128>/Data Store Read'
     *  DataStoreWrite: '<S128>/Data Store Write2'
     *  Sum: '<S128>/Add2'
     */
    if (InitTime) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S128>/Switch' */
  } else {
    if (localDW->u31Initialization_MODE) {
      /* Disable for If: '<S125>/If' */
      if (localDW->If_ActiveSubsystem_k == 0) {
      }

      localDW->If_ActiveSubsystem_k = -1;

      /* End of Disable for If: '<S125>/If' */

      /* Disable for Enabled SubSystem: '<S125>/RoleID and Global Time init' */
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S130>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }

      /* End of Disable for SubSystem: '<S125>/RoleID and Global Time init' */
      localDW->u31Initialization_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S117>/4.3.1 Initialization' */

  /* Outputs for Enabled SubSystem: '<S117>/4.3.2 Basic Cycle Increment' incorporates:
   *  EnablePort: '<S126>/Enable'
   */
  /* RelationalOperator: '<S117>/Equal' incorporates:
   *  Constant: '<S117>/Constant'
   *  Switch: '<S117>/Switch'
   */
  if (*rtd_Local_Ticks == 212.0) {
    /* DataStoreWrite: '<S126>/Data Store Write' incorporates:
     *  Constant: '<S126>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S126>/Increment'
     *  DataStoreRead: '<S126>/Data Store Read4'
     *  DataStoreRead: '<S126>/Data Store Read5'
     *  RelationalOperator: '<S126>/LessThanOrEqual'
     *  Sum: '<S126>/Add'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      bacic_cycle_s = localC->Cast_i;
    }

    /* End of Switch: '<S126>/Switch' */

    /* DataStoreWrite: '<S126>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S117>/Equal' */
  /* End of Outputs for SubSystem: '<S117>/4.3.2 Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  /* Logic: '<S117>/NOT1' incorporates:
   *  Constant: '<S127>/Constant'
   *  Constant: '<S127>/Constant1'
   *  Constant: '<S127>/Constant2'
   *  Constant: '<S127>/Constant3'
   *  Constant: '<S141>/Constant19'
   *  Constant: '<S141>/Constant24'
   *  Constant: '<S141>/Constant4'
   *  Constant: '<S141>/Constant6'
   *  Constant: '<S141>/Constant7'
   *  Constant: '<S142>/Constant1'
   *  Constant: '<S142>/Constant11'
   *  Constant: '<S142>/Constant16'
   *  Constant: '<S142>/Constant2'
   *  Constant: '<S142>/Constant26'
   *  Constant: '<S142>/Constant29'
   *  Constant: '<S142>/Constant3'
   *  Constant: '<S142>/Constant30'
   *  Constant: '<S142>/Constant31'
   *  Constant: '<S142>/Constant32'
   *  Constant: '<S142>/Constant33'
   *  Constant: '<S142>/Constant34'
   *  Constant: '<S142>/Constant35'
   *  Constant: '<S142>/Constant4'
   *  Constant: '<S142>/Constant42'
   *  Constant: '<S142>/Constant45'
   *  Constant: '<S142>/Constant5'
   *  Constant: '<S142>/Constant54'
   *  Constant: '<S142>/Constant55'
   *  Constant: '<S142>/Constant56'
   *  Constant: '<S193>/Constant'
   *  Constant: '<S283>/Constant6'
   *  Constant: '<S283>/Constant7'
   *  Constant: '<S284>/Constant1'
   *  Constant: '<S284>/Constant11'
   *  Constant: '<S284>/Constant16'
   *  Constant: '<S284>/Constant2'
   *  Constant: '<S284>/Constant26'
   *  Constant: '<S284>/Constant29'
   *  Constant: '<S284>/Constant3'
   *  Constant: '<S284>/Constant30'
   *  Constant: '<S284>/Constant31'
   *  Constant: '<S284>/Constant32'
   *  Constant: '<S284>/Constant33'
   *  Constant: '<S284>/Constant34'
   *  Constant: '<S284>/Constant4'
   *  Constant: '<S284>/Constant5'
   *  Constant: '<S287>/Constant'
   *  Constant: '<S295>/Constant'
   *  DataStoreRead: '<S117>/Data Store Read8'
   *  DataStoreRead: '<S141>/Data Store Read4'
   *  DataStoreRead: '<S193>/Data Store Read1'
   *  DataStoreRead: '<S283>/Data Store Read4'
   *  DataStoreRead: '<S295>/Data Store Read1'
   *  DataTypeConversion: '<S141>/Data Type Conversion3'
   *  DataTypeConversion: '<S142>/Data Type Conversion3'
   *  DataTypeConversion: '<S283>/Data Type Conversion3'
   *  DataTypeConversion: '<S284>/Data Type Conversion3'
   *  Logic: '<S127>/OR'
   *  Logic: '<S141>/AND1'
   *  Logic: '<S141>/AND2'
   *  Logic: '<S141>/AND6'
   *  Logic: '<S142>/AND17'
   *  Logic: '<S142>/AND18'
   *  Logic: '<S142>/AND28'
   *  Logic: '<S142>/AND7'
   *  Logic: '<S193>/AND'
   *  Logic: '<S193>/NOT'
   *  Logic: '<S283>/AND1'
   *  Logic: '<S283>/AND2'
   *  Logic: '<S284>/AND17'
   *  Logic: '<S284>/AND18'
   *  Logic: '<S284>/AND7'
   *  Logic: '<S295>/AND'
   *  Logic: '<S295>/NOT'
   *  RelationalOperator: '<S127>/Equal'
   *  RelationalOperator: '<S127>/Equal1'
   *  RelationalOperator: '<S127>/Equal2'
   *  RelationalOperator: '<S127>/Equal3'
   *  RelationalOperator: '<S141>/GreaterThanOrEqual13'
   *  RelationalOperator: '<S141>/GreaterThanOrEqual14'
   *  RelationalOperator: '<S141>/GreaterThanOrEqual15'
   *  RelationalOperator: '<S141>/GreaterThanOrEqual2'
   *  RelationalOperator: '<S141>/GreaterThanOrEqual3'
   *  RelationalOperator: '<S142>/Equal1'
   *  RelationalOperator: '<S142>/Equal13'
   *  RelationalOperator: '<S142>/Equal14'
   *  RelationalOperator: '<S142>/Equal15'
   *  RelationalOperator: '<S142>/Equal16'
   *  RelationalOperator: '<S142>/Equal23'
   *  RelationalOperator: '<S142>/Equal24'
   *  RelationalOperator: '<S142>/Equal8'
   *  RelationalOperator: '<S142>/GreaterThanOrEqual1'
   *  RelationalOperator: '<S142>/GreaterThanOrEqual17'
   *  RelationalOperator: '<S142>/GreaterThanOrEqual18'
   *  RelationalOperator: '<S142>/GreaterThanOrEqual29'
   *  RelationalOperator: '<S193>/Equal'
   *  RelationalOperator: '<S283>/GreaterThanOrEqual2'
   *  RelationalOperator: '<S283>/GreaterThanOrEqual3'
   *  RelationalOperator: '<S284>/Equal1'
   *  RelationalOperator: '<S284>/Equal13'
   *  RelationalOperator: '<S284>/Equal14'
   *  RelationalOperator: '<S284>/Equal15'
   *  RelationalOperator: '<S284>/Equal16'
   *  RelationalOperator: '<S284>/Equal8'
   *  RelationalOperator: '<S284>/GreaterThanOrEqual1'
   *  RelationalOperator: '<S284>/GreaterThanOrEqual17'
   *  RelationalOperator: '<S284>/GreaterThanOrEqual18'
   *  RelationalOperator: '<S295>/Equal'
   */
  if (!localDW->Initialization_flag) {
    if (!localDW->u33MatrixCycleManager_MODE) {
      localDW->u33MatrixCycleManager_MODE = true;
    }

    /* M-S-Function: '<S351>/Level-2 M-file S-Function' */
    /* read from digital input */
    D4 = DiginGet(DIGIN_PORTE_PIN2);

    /* M-S-Function: '<S352>/Level-2 M-file S-Function' */
    /* read from digital input */
    D5 = DiginGet(DIGIN_PORTE_PIN4);

    /* M-S-Function: '<S353>/Level-2 M-file S-Function' */
    /* read from digital input */
    D6 = DiginGet(DIGIN_PORTE_PIN5);

    /* Logic: '<S139>/AND1' incorporates:
     *  Constant: '<S139>/Constant6'
     *  Constant: '<S139>/Constant7'
     *  Constant: '<S139>/Constant8'
     *  RelationalOperator: '<S139>/Equal3'
     *  RelationalOperator: '<S139>/Equal4'
     *  RelationalOperator: '<S139>/Equal6'
     */
    result_no_id = ((false == D4) && (false == D5) && (false == D6));

    /* Logic: '<S139>/AND2' incorporates:
     *  Constant: '<S139>/Constant11'
     *  Constant: '<S139>/Constant13'
     *  Constant: '<S139>/Constant15'
     *  RelationalOperator: '<S139>/Equal7'
     *  RelationalOperator: '<S139>/Equal8'
     *  RelationalOperator: '<S139>/Equal9'
     */
    result_recieved_2nd = ((false == D4) && (true == D5) && (false == D6));

    /* Logic: '<S139>/AND5' incorporates:
     *  Constant: '<S139>/Constant37'
     *  Constant: '<S139>/Constant38'
     *  Constant: '<S139>/Constant43'
     *  RelationalOperator: '<S139>/Equal16'
     *  RelationalOperator: '<S139>/Equal17'
     *  RelationalOperator: '<S139>/Equal18'
     */
    result_recieved_3d = ((true == D4) && (true == D5) && (false == D6));

    /* Logic: '<S139>/AND6' incorporates:
     *  Constant: '<S139>/Constant44'
     *  Constant: '<S139>/Constant45'
     *  Constant: '<S139>/Constant50'
     *  RelationalOperator: '<S139>/Equal19'
     *  RelationalOperator: '<S139>/Equal20'
     *  RelationalOperator: '<S139>/Equal21'
     */
    result_recieved_4th = ((false == D4) && (false == D5) && (true == D6));

    /* Logic: '<S139>/AND7' incorporates:
     *  Constant: '<S139>/Constant51'
     *  Constant: '<S139>/Constant52'
     *  Constant: '<S139>/Constant56'
     *  RelationalOperator: '<S139>/Equal22'
     *  RelationalOperator: '<S139>/Equal23'
     *  RelationalOperator: '<S139>/Equal24'
     */
    result_recieved_5th = ((true == D4) && (false == D5) && (true == D6));

    /* Switch: '<S139>/Switch22' incorporates:
     *  Constant: '<S139>/Constant3'
     *  Constant: '<S139>/Constant4'
     *  Constant: '<S139>/Constant5'
     *  Constant: '<S139>/Constant53'
     *  Constant: '<S139>/Constant54'
     *  Constant: '<S139>/Constant55'
     *  Logic: '<S139>/AND3'
     *  RelationalOperator: '<S139>/Equal1'
     *  RelationalOperator: '<S139>/Equal2'
     *  RelationalOperator: '<S139>/Equal5'
     *  Switch: '<S139>/Switch14'
     *  Switch: '<S139>/Switch16'
     *  Switch: '<S139>/Switch18'
     *  Switch: '<S139>/Switch20'
     */
    if (result_recieved_5th) {
      localB->Switch22[0] = false;
      localB->Switch22[1] = true;
      localB->Switch22[2] = true;
    } else if (result_recieved_4th) {
      /* Switch: '<S139>/Switch20' incorporates:
       *  Constant: '<S139>/Constant47'
       *  Constant: '<S139>/Constant48'
       *  Constant: '<S139>/Constant49'
       */
      localB->Switch22[0] = true;
      localB->Switch22[1] = false;
      localB->Switch22[2] = true;
    } else if (result_recieved_3d) {
      /* Switch: '<S139>/Switch18' incorporates:
       *  Constant: '<S139>/Constant40'
       *  Constant: '<S139>/Constant41'
       *  Constant: '<S139>/Constant42'
       *  Switch: '<S139>/Switch20'
       */
      localB->Switch22[0] = false;
      localB->Switch22[1] = false;
      localB->Switch22[2] = true;
    } else if (result_recieved_2nd) {
      /* Switch: '<S139>/Switch18' incorporates:
       *  Constant: '<S139>/Constant29'
       *  Constant: '<S139>/Constant30'
       *  Constant: '<S139>/Constant36'
       *  Switch: '<S139>/Switch16'
       *  Switch: '<S139>/Switch20'
       */
      localB->Switch22[0] = false;
      localB->Switch22[1] = false;
      localB->Switch22[2] = true;
    } else if ((true == D4) && (false == D5) && (false == D6)) {
      /* Switch: '<S139>/Switch14' incorporates:
       *  Constant: '<S139>/Constant17'
       *  Constant: '<S139>/Constant18'
       *  Constant: '<S139>/Constant22'
       *  Switch: '<S139>/Switch16'
       *  Switch: '<S139>/Switch18'
       *  Switch: '<S139>/Switch20'
       */
      localB->Switch22[0] = false;
      localB->Switch22[1] = false;
      localB->Switch22[2] = true;
    } else {
      /* Switch: '<S139>/Switch14' incorporates:
       *  Constant: '<S139>/Constant6'
       *  Constant: '<S139>/Constant7'
       *  Constant: '<S139>/Constant8'
       *  Switch: '<S139>/Switch10'
       *  Switch: '<S139>/Switch16'
       *  Switch: '<S139>/Switch18'
       *  Switch: '<S139>/Switch20'
       */
      localB->Switch22[0] = false;
      localB->Switch22[1] = false;
      localB->Switch22[2] = false;
    }

    /* End of Switch: '<S139>/Switch22' */

    /* Gain: '<S139>/Gain3' */
    A0OUT = (uint8_T)(localB->Switch22[0] ? (int32_T)((uint8_T)128U) : 0);

    /* Gain: '<S139>/Gain4' */
    A1OUT = (uint8_T)(localB->Switch22[1] ? (int32_T)((uint8_T)128U) : 0);

    /* Gain: '<S139>/Gain5' */
    A2OUT = (uint8_T)(localB->Switch22[2] ? (int32_T)((uint8_T)128U) : 0);

    /* Update for M-S-Function: '<S354>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->Switch22[0] == 0) {
      DigoutSet(DIGOUT_PORTD_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTD_PIN5, DIGOUT_HIGH);
    }

    /* Update for M-S-Function: '<S355>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->Switch22[1] == 0) {
      DigoutSet(DIGOUT_PORTD_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTD_PIN6, DIGOUT_HIGH);
    }

    /* Update for M-S-Function: '<S356>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->Switch22[2] == 0) {
      DigoutSet(DIGOUT_PORTD_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTD_PIN7, DIGOUT_HIGH);
    }

    /* End of Outputs for SubSystem: '<S127>/4.3.3.3 Send the next Board ID' */

    /* Outputs for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' incorporates:
     *  EnablePort: '<S137>/Enable'
     */
    if ((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) || (*rtd_Board_ID ==
         3.0)) {
      if (!localDW->u331ControllerMatrixCycleTruckB) {
        localDW->u331ControllerMatrixCycleTruckB = true;
      }

      /* DataStoreRead: '<S141>/Data Store Read8' */
      TestTicka = *rtd_Local_Ticks;

      /* Logic: '<S141>/AND' incorporates:
       *  Constant: '<S141>/Constant5'
       *  Constant: '<S141>/Constant6'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual1'
       */
      rtb_AND_l = ((TestTicka <= 60.0) && (TestTicka > 5.0));

      /* Outputs for Enabled SubSystem: '<S141>/Receive Timer can master message ' incorporates:
       *  EnablePort: '<S151>/Enable'
       */
      if (rtb_AND_l) {
        if (!localDW->ReceiveTimercanmastermessage__j) {
          localDW->ReceiveTimercanmastermessage__j = true;
        }

        /* RelationalOperator: '<S151>/Equal2' incorporates:
         *  Constant: '<S151>/Constant2'
         *  DataStoreRead: '<S141>/Data Store Read3'
         */
        rtb_Equal2_p = (localDW->Role_ID == 2.0);

        /* Outputs for Enabled SubSystem: '<S151>/Receive can message' */
        Receivecanmessage(rtb_Equal2_p, 100U, &localB->Receivecanmessage_f,
                          &localDW->Receivecanmessage_f);

        /* End of Outputs for SubSystem: '<S151>/Receive can message' */

        /* S-Function (sdspcount2): '<S151>/Counter1' incorporates:
         *  Constant: '<S151>/Constant'
         */
        rtb_Counter1_o2_o = false;
        if (MWDSP_EPH_R_S8(localB->Receivecanmessage_f.SFunction_o1,
                           &localDW->Counter1_ClkEphState_f) != 0U) {
          if (localDW->Counter1_Count_i < ((uint8_T)255U)) {
            localDW->Counter1_Count_i++;
          } else {
            localDW->Counter1_Count_i = 0U;
          }
        }

        MessagesOnCan1 = localDW->Counter1_Count_i;
        if (localDW->Counter1_Count_i == ((uint8_T)32U)) {
          rtb_Counter1_o2_o = true;
        }

        /* End of S-Function (sdspcount2): '<S151>/Counter1' */

        /* S-Function (sdspcount2): '<S151>/Counter2' */
        rtb_Counter2_o2_i = false;
        if (MWDSP_EPH_R_B(rtb_Equal2_p, &localDW->Counter2_ClkEphState_g) != 0U)
        {
          if (localDW->Counter2_Count_c < ((uint8_T)255U)) {
            localDW->Counter2_Count_c++;
          } else {
            localDW->Counter2_Count_c = 0U;
          }
        }

        CanCallsCheck = localDW->Counter2_Count_c;
        if (localDW->Counter2_Count_c == ((uint8_T)32U)) {
          rtb_Counter2_o2_i = true;
        }

        /* End of S-Function (sdspcount2): '<S151>/Counter2' */

        /* S-Function (sdspcount2): '<S151>/Counter' incorporates:
         *  Constant: '<S151>/Constant1'
         *  RelationalOperator: '<S151>/Equal1'
         */
        rtb_Counter_o2_o = false;
        if (MWDSP_EPH_R_B(*rtd_Local_Ticks == 10.0,
                          &localDW->Counter_ClkEphState_a) != 0U) {
          if (localDW->Counter_Count_j < ((uint8_T)255U)) {
            localDW->Counter_Count_j++;
          } else {
            localDW->Counter_Count_j = 0U;
          }
        }

        ReceiverTimerBlokCalls = localDW->Counter_Count_j;
        if (localDW->Counter_Count_j == ((uint8_T)32U)) {
          rtb_Counter_o2_o = true;
        }

        /* End of S-Function (sdspcount2): '<S151>/Counter' */
      } else {
        if (localDW->ReceiveTimercanmastermessage__j) {
          /* Disable for Enabled SubSystem: '<S151>/Receive can message' */
          if (localDW->Receivecanmessage_f.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_f);
          }

          /* End of Disable for SubSystem: '<S151>/Receive can message' */
          localDW->ReceiveTimercanmastermessage__j = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Receive Timer can master message ' */

      /* Logic: '<S141>/OR' incorporates:
       *  Constant: '<S151>/Constant'
       */
      CanRec_Time = ((localB->Receivecanmessage_f.SFunction_o1 != 0) ||
                     (localB->Receivecanmessage_f.SFunction_o1_b != 0));

      /* Outputs for Enabled SubSystem: '<S141>/Desync calculation' incorporates:
       *  EnablePort: '<S145>/Enable'
       */
      if (CanRec_Time) {
        /* DataStoreRead: '<S145>/Data Store Read2' */
        LocalIncTicksMes = *rtd_Local_Ticks;

        /* DataStoreRead: '<S145>/Data Store Read1' */
        LocalIncTicksMes2 = *rtd_Local_Ticks;

        /* Switch: '<S145>/Switch1' incorporates:
         *  Sum: '<S145>/Minus'
         *  Sum: '<S145>/Minus1'
         */
        if (localB->Receivecanmessage_f.SFunction_o1 > 0) {
          DesyncTicks = EstimatedTimeCan1 - (real_T)LocalIncTicksMes;
        } else {
          DesyncTicks = EstimatedTimeCan2 - (real_T)LocalIncTicksMes2;
        }

        /* End of Switch: '<S145>/Switch1' */

        /* DataStoreWrite: '<S145>/Data Store Write1' */
        localDW->Desync_Ticks = DesyncTicks;

        /* DataStoreWrite: '<S145>/Data Store Write2' incorporates:
         *  Constant: '<S145>/Constant2'
         */
        localDW->SyncMesRec_l = ((uint8_T)1U);
      }

      /* End of Outputs for SubSystem: '<S141>/Desync calculation' */

      /* DataStoreRead: '<S141>/Data Store Read1' */
      rtb_DataStoreRead1_bf = localDW->Role_ID;

      /* Logic: '<S141>/OR1' incorporates:
       *  Constant: '<S141>/Constant10'
       *  Constant: '<S141>/Constant14'
       *  Constant: '<S141>/Constant8'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  Logic: '<S141>/AND3'
       *  RelationalOperator: '<S141>/Equal2'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual5'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual8'
       */
      OR1 = ((TestTicka <= 74.0) && (TestTicka >= 70.0) && (*rtd_Board_ID != 1.0));

      /* Outputs for Enabled SubSystem: '<S141>/Receive Timer can master message 1' incorporates:
       *  EnablePort: '<S152>/Enable'
       */
      if (OR1) {
        if (!localDW->ReceiveTimercanmastermessage1_M) {
          localDW->ReceiveTimercanmastermessage1_M = true;
        }

        /* Outputs for Enabled SubSystem: '<S152>/Receive can message' */
        Receivecanmessage_j(true, 99U, &localB->Receivecanmessage_jy,
                            &localDW->Receivecanmessage_jy);

        /* End of Outputs for SubSystem: '<S152>/Receive can message' */

        /* Outputs for Enabled SubSystem: '<S152>/Desync calculation' incorporates:
         *  EnablePort: '<S164>/Enable'
         */
        if ((localB->Receivecanmessage_jy.SFunction_o1 != 0) ||
            (localB->Receivecanmessage_jy.SFunction_o1_m != 0)) {
          /* Switch: '<S164>/Switch1' */
          if (localB->Receivecanmessage_jy.SFunction_o1 > 0) {
            localB->Switch1_b = localB->Receivecanmessage_jy.In1_m;
          } else {
            localB->Switch1_b = localB->Receivecanmessage_jy.In1;
          }

          /* End of Switch: '<S164>/Switch1' */

          /* DataStoreWrite: '<S164>/Data Store Write1' incorporates:
           *  Constant: '<S164>/Constant11'
           */
          localDW->NoMes1 = 0.0;
        }

        /* End of Outputs for SubSystem: '<S152>/Desync calculation' */

        /* Switch: '<S141>/Switch1' incorporates:
         *  Constant: '<S141>/Constant3'
         *  DataStoreWrite: '<S141>/Data Store Write'
         *  Logic: '<S152>/OR1'
         */
        localDW->Votes_count.First_Board = localB->Switch1_b;
      } else {
        if (localDW->ReceiveTimercanmastermessage1_M) {
          /* Disable for Enabled SubSystem: '<S152>/Receive can message' */
          if (localDW->Receivecanmessage_jy.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_jy);
          }

          /* End of Disable for SubSystem: '<S152>/Receive can message' */
          localDW->ReceiveTimercanmastermessage1_M = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Receive Timer can master message 1' */

      /* Logic: '<S141>/OR2' incorporates:
       *  Constant: '<S141>/Constant13'
       *  Constant: '<S141>/Constant15'
       *  Constant: '<S141>/Constant3'
       *  Constant: '<S141>/Constant9'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  Logic: '<S141>/AND4'
       *  Logic: '<S152>/OR1'
       *  RelationalOperator: '<S141>/Equal3'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual7'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual9'
       */
      OR2 = ((TestTicka <= 79.0) && (TestTicka >= 75.0) && (*rtd_Board_ID != 2.0));

      /* Outputs for Enabled SubSystem: '<S141>/Receive Timer can master message 2' incorporates:
       *  EnablePort: '<S153>/Enable'
       */
      if (OR2) {
        if (!localDW->ReceiveTimercanmastermessage2_M) {
          localDW->ReceiveTimercanmastermessage2_M = true;
        }

        /* Outputs for Enabled SubSystem: '<S153>/Receive can message' */
        Receivecanmessage_j(true, 98U, &localB->Receivecanmessage_k,
                            &localDW->Receivecanmessage_k);

        /* End of Outputs for SubSystem: '<S153>/Receive can message' */

        /* Outputs for Enabled SubSystem: '<S153>/Desync calculation' incorporates:
         *  EnablePort: '<S170>/Enable'
         */
        if ((localB->Receivecanmessage_k.SFunction_o1 != 0) ||
            (localB->Receivecanmessage_k.SFunction_o1_m != 0)) {
          /* Switch: '<S170>/Switch1' */
          if (localB->Receivecanmessage_k.SFunction_o1 > 0) {
            localB->Switch1_h = localB->Receivecanmessage_k.In1_m;
          } else {
            localB->Switch1_h = localB->Receivecanmessage_k.In1;
          }

          /* End of Switch: '<S170>/Switch1' */

          /* DataStoreWrite: '<S170>/Data Store Write2' incorporates:
           *  Constant: '<S170>/Constant1'
           */
          localDW->NoMes2 = 0.0;
        }

        /* End of Outputs for SubSystem: '<S153>/Desync calculation' */

        /* Switch: '<S141>/Switch2' incorporates:
         *  Constant: '<S141>/Constant11'
         *  DataStoreWrite: '<S141>/Data Store Write1'
         *  Logic: '<S153>/OR1'
         */
        localDW->Votes_count.Second_Board = localB->Switch1_h;
      } else {
        if (localDW->ReceiveTimercanmastermessage2_M) {
          /* Disable for Enabled SubSystem: '<S153>/Receive can message' */
          if (localDW->Receivecanmessage_k.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_k);
          }

          /* End of Disable for SubSystem: '<S153>/Receive can message' */
          localDW->ReceiveTimercanmastermessage2_M = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Receive Timer can master message 2' */

      /* Logic: '<S141>/OR3' incorporates:
       *  Constant: '<S141>/Constant11'
       *  Constant: '<S141>/Constant18'
       *  Constant: '<S141>/Constant19'
       *  Constant: '<S141>/Constant20'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  Logic: '<S141>/AND5'
       *  Logic: '<S153>/OR1'
       *  RelationalOperator: '<S141>/Equal4'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual11'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual12'
       */
      OR3 = ((TestTicka <= 84.0) && (TestTicka >= 80.0) && (*rtd_Board_ID != 3.0));

      /* Outputs for Enabled SubSystem: '<S141>/Receive Timer can master message 3' incorporates:
       *  EnablePort: '<S154>/Enable'
       */
      if (OR3) {
        if (!localDW->ReceiveTimercanmastermessage3_M) {
          localDW->ReceiveTimercanmastermessage3_M = true;
        }

        /* Outputs for Enabled SubSystem: '<S154>/Receive can message' */
        Receivecanmessage_j(true, 97U, &localB->Receivecanmessage_n,
                            &localDW->Receivecanmessage_n);

        /* End of Outputs for SubSystem: '<S154>/Receive can message' */

        /* Outputs for Enabled SubSystem: '<S154>/Desync calculation' incorporates:
         *  EnablePort: '<S176>/Enable'
         */
        if ((localB->Receivecanmessage_n.SFunction_o1 != 0) ||
            (localB->Receivecanmessage_n.SFunction_o1_m != 0)) {
          /* Switch: '<S176>/Switch1' */
          if (localB->Receivecanmessage_n.SFunction_o1 > 0) {
            localB->Switch1_f = localB->Receivecanmessage_n.In1_m;
          } else {
            localB->Switch1_f = localB->Receivecanmessage_n.In1;
          }

          /* End of Switch: '<S176>/Switch1' */

          /* DataStoreWrite: '<S176>/Data Store Write2' incorporates:
           *  Constant: '<S176>/Constant1'
           */
          localDW->NoMes3 = 0.0;
        }

        /* End of Outputs for SubSystem: '<S154>/Desync calculation' */

        /* Switch: '<S141>/Switch3' incorporates:
         *  Constant: '<S141>/Constant16'
         *  DataStoreWrite: '<S141>/Data Store Write2'
         *  Logic: '<S154>/OR1'
         */
        localDW->Votes_count.Third_Board = localB->Switch1_f;
      } else {
        if (localDW->ReceiveTimercanmastermessage3_M) {
          /* Disable for Enabled SubSystem: '<S154>/Receive can message' */
          if (localDW->Receivecanmessage_n.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_n);
          }

          /* End of Disable for SubSystem: '<S154>/Receive can message' */
          localDW->ReceiveTimercanmastermessage3_M = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Receive Timer can master message 3' */

      /* S-Function (sdspcount2): '<S141>/Counter3' incorporates:
       *  Constant: '<S141>/Constant16'
       *  Logic: '<S154>/OR1'
       */
      rtb_Counter3_o2_k = false;
      if (MWDSP_EPH_R_B(rtb_AND_l, &localDW->Counter3_ClkEphState_n) != 0U) {
        if (localDW->Counter3_Count_f < ((uint8_T)255U)) {
          localDW->Counter3_Count_f++;
        } else {
          localDW->Counter3_Count_f = 0U;
        }
      }

      CanReceiveCycle = localDW->Counter3_Count_f;
      if (localDW->Counter3_Count_f == ((uint8_T)32U)) {
        rtb_Counter3_o2_k = true;
      }

      /* End of S-Function (sdspcount2): '<S141>/Counter3' */
      /* Outputs for Enabled SubSystem: '<S141>/If Action Subsystem' incorporates:
       *  EnablePort: '<S148>/Enable'
       */
      if ((TestTicka <= 61.0) && (TestTicka > 60.0) && (localDW->SyncMesRec_l !=
           0)) {
        /* RelationalOperator: '<S148>/Equal' incorporates:
         *  Constant: '<S148>/Constant1'
         *  DataStoreRead: '<S148>/Data Store Read'
         */
        rtb_AND_l = (localDW->Role_ID == 2.0);

        /* Switch: '<S148>/Switch1' */
        if (rtb_AND_l) {
          /* DataStoreWrite: '<S148>/Data Store Write1' incorporates:
           *  DataStoreRead: '<S148>/Data Store Read1'
           *  DataTypeConversion: '<S148>/Data Type Conversion'
           *  Sum: '<S148>/Minus1'
           */
          *rtd_Local_Ticks = (uint16_T)((uint32_T)(uint16_T)
            localDW->Desync_Ticks + *rtd_Local_Ticks);
        }

        /* End of Switch: '<S148>/Switch1' */

        /* DataStoreWrite: '<S148>/Data Store Write2' incorporates:
         *  Constant: '<S148>/Constant2'
         */
        localDW->SyncMesRec_l = ((uint8_T)0U);

        /* S-Function (sdspcount2): '<S148>/Counter1' */
        rtb_Counter1_o2_p = false;
        if (MWDSP_EPH_R_B(rtb_AND_l, &localDW->Counter1_ClkEphState_a) != 0U) {
          if (localDW->Counter1_Count_f < ((uint8_T)255U)) {
            localDW->Counter1_Count_f++;
          } else {
            localDW->Counter1_Count_f = 0U;
          }
        }

        ChancgeLocalTicks = localDW->Counter1_Count_f;
        if (localDW->Counter1_Count_f == ((uint8_T)32U)) {
          rtb_Counter1_o2_p = true;
        }

        /* End of S-Function (sdspcount2): '<S148>/Counter1' */
      }

      /* End of Outputs for SubSystem: '<S141>/If Action Subsystem' */

      /* Outputs for Enabled SubSystem: '<S141>/If Action Subsystem1' incorporates:
       *  EnablePort: '<S149>/Enable'
       */
      if (TestTicka == 65.0) {
        /* Switch: '<S149>/Switch4' incorporates:
         *  Constant: '<S149>/Constant1'
         *  Constant: '<S149>/Constant3'
         *  DataStoreRead: '<S149>/Data Store Read2'
         *  RelationalOperator: '<S149>/Equal4'
         */
        if (*rtd_Board_ID == 2.0) {
          rtb_Add4_g = 255.0;
        } else {
          rtb_Add4_g = localDW->NoMes2Cnt;
        }

        /* End of Switch: '<S149>/Switch4' */

        /* Sum: '<S149>/Add3' incorporates:
         *  Constant: '<S149>/Constant7'
         */
        rtb_Add3 = rtb_Add4_g + 10.0;

        /* Switch: '<S149>/Switch5' incorporates:
         *  Constant: '<S149>/Constant1'
         *  Constant: '<S149>/Constant5'
         *  DataStoreRead: '<S149>/Data Store Read3'
         *  RelationalOperator: '<S149>/Equal5'
         */
        if (*rtd_Board_ID == 3.0) {
          rtb_Add4_g = 255.0;
        } else {
          rtb_Add4_g = localDW->NoMes3Cnt;
        }

        /* End of Switch: '<S149>/Switch5' */

        /* Sum: '<S149>/Add4' incorporates:
         *  Constant: '<S149>/Constant7'
         */
        rtb_Add4_g += 10.0;

        /* Switch: '<S149>/Switch3' incorporates:
         *  Constant: '<S149>/Constant1'
         *  Constant: '<S149>/Constant6'
         *  DataStoreRead: '<S149>/Data Store Read'
         *  RelationalOperator: '<S149>/Equal3'
         */
        if (*rtd_Board_ID == 1.0) {
          rtb_Switch6_o = 255.0;
        } else {
          rtb_Switch6_o = localDW->NoMes1Cnt;
        }

        /* End of Switch: '<S149>/Switch3' */

        /* Switch: '<S149>/Switch6' incorporates:
         *  Constant: '<S149>/Constant8'
         *  Logic: '<S149>/OR'
         *  RelationalOperator: '<S149>/GreaterThan'
         *  RelationalOperator: '<S149>/GreaterThan2'
         */
        if ((rtb_Switch6_o > rtb_Add3) || (rtb_Switch6_o > rtb_Add4_g)) {
          /* Switch: '<S149>/Switch7' incorporates:
           *  Constant: '<S149>/Constant10'
           *  Constant: '<S149>/Constant7'
           *  Constant: '<S149>/Constant9'
           *  RelationalOperator: '<S149>/GreaterThan1'
           *  Sum: '<S149>/Add5'
           */
          if (rtb_Add3 > 10.0 + rtb_Add4_g) {
            rtb_Switch6_o = 3.0;
          } else {
            rtb_Switch6_o = 2.0;
          }

          /* End of Switch: '<S149>/Switch7' */
        } else {
          rtb_Switch6_o = 1.0;
        }

        /* End of Switch: '<S149>/Switch6' */

        /* DataTypeConversion: '<S149>/Data Type Conversion2' incorporates:
         *  DataStoreWrite: '<S149>/Data Store Write'
         */
        localDW->VoteTime = (uint8_T)rtb_Switch6_o;

        /* DataStoreWrite: '<S149>/Data Store Write1' incorporates:
         *  Constant: '<S149>/Constant11'
         */
        localDW->NoMes1 = 1.0;

        /* DataStoreWrite: '<S149>/Data Store Write2' incorporates:
         *  Constant: '<S149>/Constant11'
         */
        localDW->NoMes2 = 1.0;

        /* DataStoreWrite: '<S149>/Data Store Write3' incorporates:
         *  Constant: '<S149>/Constant11'
         */
        localDW->NoMes3 = 1.0;
      }

      /* End of Outputs for SubSystem: '<S141>/If Action Subsystem1' */

      /* Outputs for Enabled SubSystem: '<S141>/If Action Subsystem2' incorporates:
       *  EnablePort: '<S150>/Enable'
       */
      if ((TestTicka <= 86.0) && (TestTicka > 84.0)) {
        /* RelationalOperator: '<S150>/Equal1' incorporates:
         *  Constant: '<S150>/Constant4'
         */
        rtb_Equal1_h2 = (*rtd_Local_Ticks == 86.0);

        /* RelationalOperator: '<S150>/Equal11' incorporates:
         *  Constant: '<S150>/Constant2'
         *  DataStoreRead: '<S150>/Data Store Read2'
         */
        localB->Equal11 = (localDW->NoMes1 == 0.0);

        /* S-Function (sdspcount2): '<S150>/Counter1' incorporates:
         *  Constant: '<S150>/Constant1'
         *  Constant: '<S150>/Constant9'
         *  DataStoreRead: '<S150>/Data Store Read2'
         *  DataStoreRead: '<S150>/Data Store Read7'
         *  DataStoreWrite: '<S150>/Data Store Write1'
         *  Logic: '<S150>/AND1'
         *  RelationalOperator: '<S150>/Equal14'
         *  RelationalOperator: '<S150>/Equal2'
         */
        if (MWDSP_EPH_R_B(localB->Equal11, &localDW->Counter1_RstEphState) != 0U)
        {
          localDW->Counter1_Count_g = ((uint8_T)0U);
        }

        if (MWDSP_EPH_R_B(rtb_Equal1_h2 && (localDW->NoMes1 == 1.0) &&
                          (localDW->NoMes1Cnt < 250.0),
                          &localDW->Counter1_ClkEphState_fc) != 0U) {
          if (localDW->Counter1_Count_g < ((uint8_T)255U)) {
            localDW->Counter1_Count_g++;
          } else {
            localDW->Counter1_Count_g = 0U;
          }
        }

        localDW->NoMes1Cnt = localDW->Counter1_Count_g;

        /* End of S-Function (sdspcount2): '<S150>/Counter1' */

        /* RelationalOperator: '<S150>/Equal13' incorporates:
         *  Constant: '<S150>/Constant2'
         *  DataStoreRead: '<S150>/Data Store Read3'
         */
        localB->Equal13 = (0.0 == localDW->NoMes3);

        /* S-Function (sdspcount2): '<S150>/Counter2' incorporates:
         *  Constant: '<S150>/Constant1'
         *  Constant: '<S150>/Constant9'
         *  DataStoreRead: '<S150>/Data Store Read3'
         *  DataStoreRead: '<S150>/Data Store Read9'
         *  DataStoreWrite: '<S150>/Data Store Write2'
         *  Logic: '<S150>/AND2'
         *  RelationalOperator: '<S150>/Equal16'
         *  RelationalOperator: '<S150>/Equal3'
         */
        if (MWDSP_EPH_R_B(localB->Equal13, &localDW->Counter2_RstEphState) != 0U)
        {
          localDW->Counter2_Count_a = ((uint8_T)0U);
        }

        if (MWDSP_EPH_R_B(rtb_Equal1_h2 && (localDW->NoMes3 == 1.0) &&
                          (localDW->NoMes3Cnt < 250.0),
                          &localDW->Counter2_ClkEphState_k) != 0U) {
          if (localDW->Counter2_Count_a < ((uint8_T)255U)) {
            localDW->Counter2_Count_a++;
          } else {
            localDW->Counter2_Count_a = 0U;
          }
        }

        localDW->NoMes3Cnt = localDW->Counter2_Count_a;

        /* End of S-Function (sdspcount2): '<S150>/Counter2' */

        /* Logic: '<S150>/AND' incorporates:
         *  Constant: '<S150>/Constant1'
         *  Constant: '<S150>/Constant9'
         *  DataStoreRead: '<S150>/Data Store Read'
         *  DataStoreRead: '<S150>/Data Store Read8'
         *  RelationalOperator: '<S150>/Equal'
         *  RelationalOperator: '<S150>/Equal15'
         */
        rtb_Equal1_h2 = (rtb_Equal1_h2 && (localDW->NoMes2 == 1.0) &&
                         (localDW->NoMes2Cnt < 250.0));

        /* RelationalOperator: '<S150>/Equal12' incorporates:
         *  Constant: '<S150>/Constant2'
         *  DataStoreRead: '<S150>/Data Store Read'
         */
        localB->Equal12 = (0.0 == localDW->NoMes2);

        /* S-Function (sdspcount2): '<S150>/Counter' incorporates:
         *  DataStoreWrite: '<S150>/Data Store Write3'
         */
        if (MWDSP_EPH_R_B(localB->Equal12, &localDW->Counter_RstEphState) != 0U)
        {
          localDW->Counter_Count_m = ((uint8_T)0U);
        }

        if (MWDSP_EPH_R_B(rtb_Equal1_h2, &localDW->Counter_ClkEphState_n) != 0U)
        {
          if (localDW->Counter_Count_m < ((uint8_T)255U)) {
            localDW->Counter_Count_m++;
          } else {
            localDW->Counter_Count_m = 0U;
          }
        }

        localDW->NoMes2Cnt = localDW->Counter_Count_m;

        /* End of S-Function (sdspcount2): '<S150>/Counter' */

        /* RelationalOperator: '<S150>/Equal5' incorporates:
         *  Constant: '<S150>/Constant3'
         *  DataStoreRead: '<S150>/Data Store Read4'
         */
        rtb_Equal1_h2 = (localDW->Votes_count.First_Board != 0.0);

        /* RelationalOperator: '<S150>/Equal6' incorporates:
         *  Constant: '<S150>/Constant3'
         *  DataStoreRead: '<S150>/Data Store Read4'
         */
        rtb_Equal6_g = (0.0 != localDW->Votes_count.Second_Board);

        /* RelationalOperator: '<S150>/Equal4' incorporates:
         *  Constant: '<S150>/Constant3'
         *  DataStoreRead: '<S150>/Data Store Read4'
         */
        rtb_AND_l = (localDW->Votes_count.Third_Board != 0.0);

        /* Switch: '<S150>/Switch7' incorporates:
         *  Logic: '<S150>/AND3'
         *  Logic: '<S150>/AND4'
         *  Logic: '<S150>/AND5'
         *  Logic: '<S150>/OR'
         *  Switch: '<S150>/Switch2'
         *  Switch: '<S150>/Switch8'
         */
        if (((!rtb_Equal1_h2) && (!rtb_Equal6_g)) || ((!rtb_Equal1_h2) &&
             (!rtb_AND_l)) || ((!rtb_Equal6_g) && (!rtb_AND_l))) {
          /* DataStoreWrite: '<S150>/Data Store Write4' incorporates:
           *  Constant: '<S150>/Constant11'
           */
          *rtd_NoOtherTruckBoardsError = 1.0;
        } else {
          if (rtb_Equal6_g) {
            /* Switch: '<S150>/Switch2' incorporates:
             *  DataStoreRead: '<S150>/Data Store Read4'
             */
            rtb_Switch6_o = localDW->Votes_count.Second_Board;
          } else {
            /* Switch: '<S150>/Switch2' incorporates:
             *  Constant: '<S150>/Constant6'
             */
            rtb_Switch6_o = 1.0;
          }

          /* Switch: '<S150>/Switch1' incorporates:
           *  Constant: '<S150>/Constant6'
           *  DataStoreRead: '<S150>/Data Store Read4'
           */
          if (rtb_AND_l) {
            rtb_Add3 = localDW->Votes_count.Third_Board;
          } else {
            rtb_Add3 = 1.0;
          }

          /* End of Switch: '<S150>/Switch1' */

          /* Switch: '<S150>/Switch3' incorporates:
           *  RelationalOperator: '<S150>/Equal7'
           *  Switch: '<S150>/Switch'
           */
          if (rtb_Switch6_o == rtb_Add3) {
            rtb_Add4_g = rtb_Switch6_o;
          } else {
            if (rtb_Equal1_h2) {
              /* Switch: '<S150>/Switch' incorporates:
               *  DataStoreRead: '<S150>/Data Store Read4'
               */
              rtb_Add4_g = localDW->Votes_count.First_Board;
            } else {
              /* Switch: '<S150>/Switch' incorporates:
               *  Constant: '<S150>/Constant5'
               */
              rtb_Add4_g = 2.0;
            }

            /* Switch: '<S150>/Switch5' incorporates:
             *  Constant: '<S150>/Constant6'
             *  RelationalOperator: '<S150>/Equal8'
             *  RelationalOperator: '<S150>/Equal9'
             *  Switch: '<S150>/Switch4'
             */
            if ((rtb_Add4_g != rtb_Add3) && (rtb_Add4_g != rtb_Switch6_o)) {
              rtb_Add4_g = 1.0;
            }

            /* End of Switch: '<S150>/Switch5' */
          }

          /* End of Switch: '<S150>/Switch3' */

          /* Switch: '<S150>/Switch6' incorporates:
           *  Constant: '<S150>/Constant7'
           *  Constant: '<S150>/Constant8'
           *  DataStoreWrite: '<S150>/Data Store Write'
           *  RelationalOperator: '<S150>/Equal10'
           */
          if (*rtd_Board_ID == rtb_Add4_g) {
            localDW->Role_ID = 1.0;
          } else {
            localDW->Role_ID = 2.0;
          }

          /* End of Switch: '<S150>/Switch6' */

          /* DataStoreWrite: '<S150>/Data Store Write4' incorporates:
           *  Constant: '<S150>/Constant10'
           */
          *rtd_NoOtherTruckBoardsError = 0.0;
        }

        /* End of Switch: '<S150>/Switch7' */
      }

      /* End of Outputs for SubSystem: '<S141>/If Action Subsystem2' */

      /* Logic: '<S141>/OR6' incorporates:
       *  Constant: '<S141>/Constant19'
       *  Constant: '<S141>/Constant23'
       *  Constant: '<S141>/Constant24'
       *  Constant: '<S141>/Constant4'
       *  Constant: '<S141>/Constant6'
       *  Constant: '<S141>/Constant7'
       *  Constant: '<S141>/Constant8'
       *  DataStoreRead: '<S141>/Data Store Read4'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  Logic: '<S141>/AND1'
       *  Logic: '<S141>/AND2'
       *  Logic: '<S141>/AND6'
       *  RelationalOperator: '<S141>/Equal7'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual13'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual14'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual15'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual2'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual3'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual4'
       */
      rtb_OR6 = ((TestTicka == 70.0) && (*rtd_Board_ID == 1.0));

      /* Outputs for Enabled SubSystem: '<S141>/Send can message' incorporates:
       *  EnablePort: '<S155>/Enable'
       */
      if (rtb_OR6) {
        if (!localDW->Sendcanmessage_MODE) {
          localDW->Sendcanmessage_MODE = true;
        }

        /* DataStoreWrite: '<S155>/Data Store Write2' incorporates:
         *  Constant: '<S155>/Constant'
         */
        localDW->TwoTrailersAttachedFlag = 0.0;

        /* DataStoreWrite: '<S155>/Data Store Write3' incorporates:
         *  Constant: '<S155>/Constant'
         */
        localDW->TrailerOneAttachedFlag = 0.0;

        /* DataTypeConversion: '<S155>/Cast To Double' incorporates:
         *  DataStoreRead: '<S155>/Data Store Read10'
         *  DataStoreWrite: '<S155>/Data Store Write'
         */
        localDW->Votes_count.First_Board = localDW->VoteTime;

        /* DataStoreWrite: '<S155>/Data Store Write1' incorporates:
         *  Constant: '<S155>/Constant11'
         */
        localDW->NoMes1 = 0.0;
      } else {
        if (localDW->Sendcanmessage_MODE) {
          localDW->Sendcanmessage_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Send can message' */

      /* Logic: '<S141>/OR5' incorporates:
       *  Constant: '<S141>/Constant13'
       *  Constant: '<S141>/Constant22'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  RelationalOperator: '<S141>/Equal6'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual6'
       */
      rtb_OR5 = ((TestTicka == 75.0) && (*rtd_Board_ID == 2.0));

      /* Outputs for Enabled SubSystem: '<S141>/Send can message1' incorporates:
       *  EnablePort: '<S156>/Enable'
       */
      if (rtb_OR5) {
        if (!localDW->Sendcanmessage1_MODE) {
          localDW->Sendcanmessage1_MODE = true;
        }

        /* DataStoreWrite: '<S156>/Data Store Write2' incorporates:
         *  Constant: '<S156>/Constant'
         */
        localDW->TwoTrailersAttachedFlag = 0.0;

        /* DataStoreWrite: '<S156>/Data Store Write3' incorporates:
         *  Constant: '<S156>/Constant'
         */
        localDW->TrailerOneAttachedFlag = 0.0;

        /* DataTypeConversion: '<S156>/Cast To Double' incorporates:
         *  DataStoreRead: '<S156>/Data Store Read10'
         *  DataStoreWrite: '<S156>/Data Store Write'
         */
        localDW->Votes_count.Second_Board = localDW->VoteTime;

        /* DataStoreWrite: '<S156>/Data Store Write1' incorporates:
         *  Constant: '<S156>/Constant11'
         */
        localDW->NoMes2 = 0.0;
      } else {
        if (localDW->Sendcanmessage1_MODE) {
          localDW->Sendcanmessage1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Send can message1' */

      /* Logic: '<S141>/OR4' incorporates:
       *  Constant: '<S141>/Constant18'
       *  Constant: '<S141>/Constant21'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       *  RelationalOperator: '<S141>/Equal5'
       *  RelationalOperator: '<S141>/GreaterThanOrEqual10'
       */
      rtb_OR4 = ((TestTicka == 80.0) && (*rtd_Board_ID == 3.0));

      /* Outputs for Enabled SubSystem: '<S141>/Send can message2' incorporates:
       *  EnablePort: '<S157>/Enable'
       */
      if (rtb_OR4) {
        if (!localDW->Sendcanmessage2_MODE_n) {
          localDW->Sendcanmessage2_MODE_n = true;
        }

        /* DataStoreWrite: '<S157>/Data Store Write2' incorporates:
         *  Constant: '<S157>/Constant'
         */
        localDW->TwoTrailersAttachedFlag = 0.0;

        /* DataStoreWrite: '<S157>/Data Store Write3' incorporates:
         *  Constant: '<S157>/Constant'
         */
        localDW->TrailerOneAttachedFlag = 0.0;

        /* DataTypeConversion: '<S157>/Cast To Double' incorporates:
         *  DataStoreRead: '<S157>/Data Store Read10'
         *  DataStoreWrite: '<S157>/Data Store Write'
         */
        localDW->Votes_count.Third_Board = localDW->VoteTime;

        /* DataStoreWrite: '<S157>/Data Store Write1' incorporates:
         *  Constant: '<S157>/Constant11'
         */
        localDW->NoMes3 = 0.0;
      } else {
        if (localDW->Sendcanmessage2_MODE_n) {
          localDW->Sendcanmessage2_MODE_n = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Send can message2' */

      /* RelationalOperator: '<S141>/Equal1' incorporates:
       *  Constant: '<S141>/Constant2'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       */
      rtb_Equal1_k = (TestTicka == 25.0);

      /* Outputs for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' incorporates:
       *  EnablePort: '<S158>/Enable'
       */
      if (rtb_Equal1_k) {
        if (!localDW->SendReceiveTimercanmastermessag) {
          localDW->SendReceiveTimercanmastermessag = true;
        }

        /* If: '<S158>/If' */
        rtPrevAction = localDW->If_ActiveSubsystem;
        if (rtb_DataStoreRead1_bf == 1.0) {
          rtAction = 0;
        } else if ((rtb_DataStoreRead1_bf > 1.0) && (rtb_DataStoreRead1_bf <=
                    3.0)) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }

        localDW->If_ActiveSubsystem = rtAction;
        if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        }

        if (rtAction == 0) {
          if (0 != rtPrevAction) {
          }
        }

        /* End of If: '<S158>/If' */
      } else {
        if (localDW->SendReceiveTimercanmastermessag) {
          /* Disable for If: '<S158>/If' */
          if (localDW->If_ActiveSubsystem == 0) {
          }

          localDW->If_ActiveSubsystem = -1;
          localDW->SendReceiveTimercanmastermessag = false;
        }
      }

      /* End of Outputs for SubSystem: '<S141>/Send//Receive Timer can master message ' */

      /* S-Function (sdspcount2): '<S141>/Counter1' */
      rtb_Counter1_o2_e = false;
      if (MWDSP_EPH_R_B(CanRec_Time, &localDW->Counter1_ClkEphState_m) != 0U) {
        if (localDW->Counter1_Count_c < ((uint8_T)255U)) {
          localDW->Counter1_Count_c++;
        } else {
          localDW->Counter1_Count_c = 0U;
        }
      }

      CanReceived = localDW->Counter1_Count_c;
      if (localDW->Counter1_Count_c == ((uint8_T)32U)) {
        rtb_Counter1_o2_e = true;
      }

      /* End of S-Function (sdspcount2): '<S141>/Counter1' */

      /* S-Function (sdspcount2): '<S141>/Counter2' */
      rtb_Counter2_o2_b = false;
      if (MWDSP_EPH_R_B(rtb_Equal1_k, &localDW->Counter2_ClkEphState_l) != 0U) {
        if (localDW->Counter2_Count_i < ((uint8_T)255U)) {
          localDW->Counter2_Count_i++;
        } else {
          localDW->Counter2_Count_i = 0U;
        }
      }

      CanSendCycle = localDW->Counter2_Count_i;
      if (localDW->Counter2_Count_i == ((uint8_T)32U)) {
        rtb_Counter2_o2_b = true;
      }

      /* End of S-Function (sdspcount2): '<S141>/Counter2' */

      /* DataStoreRead: '<S141>/Data Store Read10' */
      localB->DataStoreRead10 = localDW->VoteTime;

      /* DataStoreRead: '<S141>/Data Store Read11' */
      localB->DataStoreRead11 = localDW->VoteTime;

      /* DataStoreRead: '<S141>/Data Store Read12' */
      localB->DataStoreRead12 = localDW->VoteTime;

      /* DataTypeConversion: '<S141>/Data Type Conversion2' */
      CanSendTime = (uint8_T)TestTicka;

      /* RelationalOperator: '<S141>/Equal' incorporates:
       *  Constant: '<S141>/Constant1'
       *  DataTypeConversion: '<S141>/Data Type Conversion3'
       */
      localB->Equal = (TestTicka >= 105.0);

      /* Logic: '<S142>/AND9' incorporates:
       *  Constant: '<S142>/Constant10'
       *  Constant: '<S142>/Constant14'
       *  Constant: '<S142>/Constant8'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND3'
       *  RelationalOperator: '<S142>/Equal2'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual5'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual8'
       */
      AND9_d = ((*rtd_Local_Ticks <= 94.0) && (*rtd_Local_Ticks >= 90.0) &&
                (*rtd_Board_ID != 4.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' incorporates:
       *  EnablePort: '<S196>/Enable'
       */
      if (AND9_d) {
        if (!localDW->ReceiveTrailer1board4inputang_a) {
          localDW->ReceiveTrailer1board4inputang_a = true;
        }

        /* Outputs for Enabled SubSystem: '<S196>/Receive can message' */
        Receivecanmessage_j(true, 10U, &localB->Receivecanmessage_m,
                            &localDW->Receivecanmessage_m);

        /* End of Outputs for SubSystem: '<S196>/Receive can message' */

        /* Outputs for Enabled SubSystem: '<S196>/Desync calculation' incorporates:
         *  EnablePort: '<S219>/Enable'
         */
        if ((localB->Receivecanmessage_m.SFunction_o1 != 0) ||
            (localB->Receivecanmessage_m.SFunction_o1_m != 0)) {
          /* Switch: '<S219>/Switch1' */
          if (localB->Receivecanmessage_m.SFunction_o1 > 0) {
            localB->Switch1_k = localB->Receivecanmessage_m.In1_m;
          } else {
            localB->Switch1_k = localB->Receivecanmessage_m.In1;
          }

          /* End of Switch: '<S219>/Switch1' */

          /* DataStoreWrite: '<S219>/Data Store Write2' incorporates:
           *  Constant: '<S219>/Constant'
           */
          localDW->TrailerOneAttachedFlag = 1.0;
        }

        /* End of Outputs for SubSystem: '<S196>/Desync calculation' */
      } else {
        if (localDW->ReceiveTrailer1board4inputang_a) {
          /* Disable for Enabled SubSystem: '<S196>/Receive can message' */
          if (localDW->Receivecanmessage_m.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_m);
          }

          /* End of Disable for SubSystem: '<S196>/Receive can message' */
          localDW->ReceiveTrailer1board4inputang_a = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */

      /* DataStoreWrite: '<S142>/Data Store Write' incorporates:
       *  Constant: '<S142>/Constant3'
       *  Logic: '<S196>/OR1'
       */
      localDW->InputAngle1 = localB->Switch1_k;

      /* Logic: '<S142>/AND6' incorporates:
       *  Constant: '<S142>/Constant13'
       *  Constant: '<S142>/Constant15'
       *  Constant: '<S142>/Constant9'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND4'
       *  RelationalOperator: '<S142>/Equal3'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual7'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual9'
       */
      AND6_a = ((*rtd_Local_Ticks <= 99.0) && (*rtd_Local_Ticks >= 95.0) &&
                (*rtd_Board_ID != 5.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' incorporates:
       *  EnablePort: '<S197>/Enable'
       */
      if (AND6_a) {
        if (!localDW->ReceiveTrailer2board5inputangel) {
          localDW->ReceiveTrailer2board5inputangel = true;
        }

        /* Outputs for Enabled SubSystem: '<S197>/Receive can message' */
        Receivecanmessage_j(true, 9U, &localB->Receivecanmessage_d,
                            &localDW->Receivecanmessage_d);

        /* End of Outputs for SubSystem: '<S197>/Receive can message' */

        /* Outputs for Enabled SubSystem: '<S197>/Receive Mes' incorporates:
         *  EnablePort: '<S225>/Enable'
         */
        if ((localB->Receivecanmessage_d.SFunction_o1 != 0) ||
            (localB->Receivecanmessage_d.SFunction_o1_m != 0)) {
          /* Switch: '<S225>/Switch1' */
          if (localB->Receivecanmessage_d.SFunction_o1 > 0) {
            localB->Switch1 = localB->Receivecanmessage_d.In1_m;
          } else {
            localB->Switch1 = localB->Receivecanmessage_d.In1;
          }

          /* End of Switch: '<S225>/Switch1' */

          /* DataStoreWrite: '<S225>/Data Store Write2' incorporates:
           *  Constant: '<S225>/Constant'
           */
          localDW->TwoTrailersAttachedFlag = 1.0;
        }

        /* End of Outputs for SubSystem: '<S197>/Receive Mes' */
      } else {
        if (localDW->ReceiveTrailer2board5inputangel) {
          /* Disable for Enabled SubSystem: '<S197>/Receive can message' */
          if (localDW->Receivecanmessage_d.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_d);
          }

          /* End of Disable for SubSystem: '<S197>/Receive can message' */
          localDW->ReceiveTrailer2board5inputangel = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */

      /* DataStoreWrite: '<S142>/Data Store Write1' incorporates:
       *  Constant: '<S142>/Constant11'
       *  Logic: '<S197>/OR1'
       */
      localDW->InputAngle2 = localB->Switch1;

      /* Logic: '<S142>/AND2' incorporates:
       *  Constant: '<S142>/Constant18'
       *  Constant: '<S142>/Constant19'
       *  Constant: '<S142>/Constant20'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND5'
       *  RelationalOperator: '<S142>/Equal4'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual11'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual12'
       */
      AND2_j = ((*rtd_Local_Ticks <= 109.0) && (*rtd_Local_Ticks >= 105.0) &&
                (*rtd_Board_ID != 1.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
      ReceiveTruck1Board1CalcSteering(AND2_j, 8U,
        &localB->ReceiveTruck1Board1CalcSteeri_d,
        &localDW->ReceiveTruck1Board1CalcSteeri_d);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */

      /* Switch: '<S142>/Switch' incorporates:
       *  Constant: '<S142>/Constant16'
       *  DataStoreWrite: '<S142>/Data Store Write2'
       */
      if (AND2_j) {
        localDW->Votes_Angle.First_Board =
          localB->ReceiveTruck1Board1CalcSteeri_d.Switch1;
      }

      /* End of Switch: '<S142>/Switch' */

      /* Logic: '<S142>/AND12' incorporates:
       *  Constant: '<S142>/Constant12'
       *  Constant: '<S142>/Constant6'
       *  Constant: '<S142>/Constant7'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND13'
       *  RelationalOperator: '<S142>/Equal9'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual13'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual3'
       */
      AND12_f = ((*rtd_Local_Ticks <= 114.0) && (*rtd_Local_Ticks >= 110.0) && (*
                  rtd_Board_ID != 2.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */
      ReceiveTruck1Board1CalcSteering(AND12_f, 7U,
        &localB->ReceiveTruck2Board2CalcSteering,
        &localDW->ReceiveTruck2Board2CalcSteering);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */

      /* Switch: '<S142>/Switch1' incorporates:
       *  Constant: '<S142>/Constant4'
       *  DataStoreWrite: '<S142>/Data Store Write3'
       */
      if (AND12_f) {
        localDW->Votes_Angle.Second_Board =
          localB->ReceiveTruck2Board2CalcSteering.Switch1;
      }

      /* End of Switch: '<S142>/Switch1' */

      /* Logic: '<S142>/AND15' incorporates:
       *  Constant: '<S142>/Constant24'
       *  Constant: '<S142>/Constant27'
       *  Constant: '<S142>/Constant28'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND16'
       *  RelationalOperator: '<S142>/Equal12'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual14'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual16'
       */
      AND15_e = ((*rtd_Local_Ticks <= 119.0) && (*rtd_Local_Ticks >= 115.0) && (*
                  rtd_Board_ID != 3.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */
      ReceiveTruck1Board1CalcSteering(AND15_e, 6U,
        &localB->ReceiveTruck3Board3CalcSteering,
        &localDW->ReceiveTruck3Board3CalcSteering);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */

      /* Switch: '<S142>/Switch2' incorporates:
       *  Constant: '<S142>/Constant26'
       *  DataStoreWrite: '<S142>/Data Store Write4'
       */
      if (AND15_e) {
        localDW->Votes_Angle.Third_Board =
          localB->ReceiveTruck3Board3CalcSteering.Switch1;
      }

      /* End of Switch: '<S142>/Switch2' */

      /* Logic: '<S142>/AND20' incorporates:
       *  Constant: '<S142>/Constant40'
       *  Constant: '<S142>/Constant43'
       *  Constant: '<S142>/Constant44'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND21'
       *  RelationalOperator: '<S142>/Equal18'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual21'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual22'
       */
      AND20 = ((*rtd_Local_Ticks <= 126.0) && (*rtd_Local_Ticks >= 122.0) &&
               (*rtd_Board_ID != 1.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */
      ReceiveTruck1Board1CalcSteering(AND20, 5U,
        &localB->ReceiveTruck1Board1CalcSteeri_a,
        &localDW->ReceiveTruck1Board1CalcSteeri_a);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */

      /* Switch: '<S142>/Switch3' incorporates:
       *  Constant: '<S142>/Constant35'
       *  DataStoreWrite: '<S142>/Data Store Write6'
       */
      if (AND20) {
        localDW->Votes_Encoder.First_Board =
          localB->ReceiveTruck1Board1CalcSteeri_a.Switch1;
      }

      /* End of Switch: '<S142>/Switch3' */

      /* Logic: '<S142>/AND23' incorporates:
       *  Constant: '<S142>/Constant49'
       *  Constant: '<S142>/Constant50'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND24'
       *  RelationalOperator: '<S142>/Equal20'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual25'
       */
      AND23 = ((*rtd_Local_Ticks <= 131.0) && localC->GreaterThanOrEqual24 &&
               (*rtd_Board_ID != 2.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */
      ReceiveTruck1Board1CalcSteering(AND23, 4U,
        &localB->ReceiveTruck1Board1CalcSteeri_i,
        &localDW->ReceiveTruck1Board1CalcSteeri_i);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */

      /* Switch: '<S142>/Switch4' incorporates:
       *  Constant: '<S142>/Constant45'
       *  DataStoreWrite: '<S142>/Data Store Write7'
       */
      if (AND23) {
        localDW->Votes_Encoder.Second_Board =
          localB->ReceiveTruck1Board1CalcSteeri_i.Switch1;
      }

      /* End of Switch: '<S142>/Switch4' */

      /* Logic: '<S142>/AND26' incorporates:
       *  Constant: '<S142>/Constant48'
       *  Constant: '<S142>/Constant52'
       *  Constant: '<S142>/Constant53'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND27'
       *  RelationalOperator: '<S142>/Equal22'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual27'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual28'
       */
      AND26 = ((*rtd_Local_Ticks <= 136.0) && (*rtd_Local_Ticks >= 132.0) &&
               (*rtd_Board_ID != 3.0));

      /* Outputs for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */
      ReceiveTruck1Board1CalcSteering(AND26, 3U,
        &localB->ReceiveTruck1Board1CalcSteeri_k,
        &localDW->ReceiveTruck1Board1CalcSteeri_k);

      /* End of Outputs for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */

      /* Switch: '<S142>/Switch5' incorporates:
       *  Constant: '<S142>/Constant42'
       *  DataStoreWrite: '<S142>/Data Store Write8'
       */
      if (AND26) {
        localDW->Votes_Encoder.Third_Board =
          localB->ReceiveTruck1Board1CalcSteeri_k.Switch1;
      }

      /* End of Switch: '<S142>/Switch5' */

      /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem' incorporates:
       *  EnablePort: '<S191>/Enable'
       */
      if ((*rtd_Local_Ticks == 100.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0)) {
        /* Sum: '<S191>/Subtract1' incorporates:
         *  Constant: '<S191>/Constant2'
         *  DataStoreRead: '<S191>/Data Store Read1'
         */
        rtb_DataStoreRead1_bf = localDW->InputAngle1 - 90.0;

        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S191>/Constant'
         *  Constant: '<S191>/Constant1'
         *  Constant: '<S191>/Constant2'
         *  DataStoreRead: '<S191>/Data Store Read15'
         *  DataStoreRead: '<S191>/Data Store Read2'
         *  RelationalOperator: '<S191>/Equal'
         *  Sum: '<S191>/Subtract'
         *  Switch: '<S191>/Switch1'
         */
        if (localDW->TwoTrailersAttachedFlag == 1.0) {
          rtb_Switch6_o = rtb_DataStoreRead1_bf;
          rtb_DataStoreRead1_bf = localDW->InputAngle2 - 90.0;
        } else {
          rtb_Switch6_o = 0.0;
        }

        /* End of Switch: '<S191>/Switch' */

        /* Product: '<S214>/Divide' incorporates:
         *  Constant: '<S214>/L1f'
         *  Constant: '<S214>/v2'
         *  Gain: '<S212>/Gain1'
         *  Trigonometry: '<S214>/Tan'
         */
        rtb_DataStoreRead1_bf = tan(0.017453292519943295 * rtb_DataStoreRead1_bf)
          * (-1.0) / 3.0;

        /* Trigonometry: '<S214>/Sin2' incorporates:
         *  Trigonometry: '<S214>/Sin'
         */
        rtb_Add3_tmp = sin(rtb_Switch6_o);

        /* Trigonometry: '<S214>/Cos2' incorporates:
         *  Trigonometry: '<S214>/Cos'
         */
        rtb_Switch6_o = cos(rtb_Switch6_o);

        /* Sum: '<S214>/Add2' incorporates:
         *  Constant: '<S214>/L1f'
         *  Constant: '<S214>/v2'
         *  Product: '<S214>/Divide7'
         *  Product: '<S214>/Divide8'
         *  Trigonometry: '<S214>/Cos2'
         *  Trigonometry: '<S214>/Sin2'
         */
        rtb_Add3 = 3.0 * rtb_DataStoreRead1_bf * rtb_Add3_tmp + (-1.0) *
          rtb_Switch6_o;

        /* Sum: '<S191>/Subtract2' incorporates:
         *  Constant: '<S191>/Constant2'
         *  Constant: '<S191>/Constant35'
         */
        rtb_Add4_g = HantuneAngleSp - 90.0;

        /* Sum: '<S214>/Add1' incorporates:
         *  Constant: '<S214>/L0b'
         *  Constant: '<S214>/v2'
         *  Product: '<S214>/Divide6'
         *  Product: '<S214>/Product1'
         */
        rtb_Switch6_o = (-1.0) * 0.3 * localC->Gain * rtb_Add3_tmp +
          rtb_Switch6_o * localC->Divide2 * rtb_DataStoreRead1_bf;

        /* Trigonometry: '<S214>/Sin1' incorporates:
         *  Trigonometry: '<S214>/Sin3'
         */
        rtb_DataStoreRead1_bf = sin(rtb_Add4_g);

        /* Trigonometry: '<S214>/Cos1' incorporates:
         *  Trigonometry: '<S214>/Cos3'
         */
        rtb_Add4_g = cos(rtb_Add4_g);

        /* Gain: '<S213>/Gain' incorporates:
         *  Constant: '<S214>/L0b'
         *  Constant: '<S214>/L0f'
         *  Constant: '<S214>/L1f'
         *  DataStoreWrite: '<S191>/Data Store Write1'
         *  Gain: '<S214>/Gain2'
         *  Product: '<S214>/Divide11'
         *  Product: '<S214>/Divide3'
         *  Product: '<S214>/Divide4'
         *  Product: '<S214>/Divide5'
         *  Product: '<S214>/Divide9'
         *  Product: '<S214>/Product2'
         *  Sum: '<S214>/Add4'
         *  Sum: '<S214>/Add5'
         *  Trigonometry: '<S214>/Atan'
         *  Trigonometry: '<S214>/Cos1'
         *  Trigonometry: '<S214>/Sin1'
         */
        localDW->CalcSteeringAngle = atan((rtb_Add3 / 0.3 * (-1.0) * (rtb_Add3 *
          0.3) * rtb_DataStoreRead1_bf + rtb_Add4_g * localC->Divide10 *
          rtb_Switch6_o) * 2.0 / (3.0 * rtb_Switch6_o * rtb_DataStoreRead1_bf +
          rtb_Add3 * rtb_Add4_g)) * 57.295779513082323;

        /* Switch: '<S191>/Switch2' incorporates:
         *  Constant: '<S191>/Constant3'
         *  DataStoreRead: '<S191>/Data Store Read3'
         *  RelationalOperator: '<S191>/Equal1'
         */
        if (localDW->TrailerOneAttachedFlag == 0.0) {
          /* DataStoreWrite: '<S191>/Data Store Write2' incorporates:
           *  Constant: '<S191>/Constant4'
           */
          *rtd_NoTrailerAttachError = 1.0;
        } else {
          /* DataStoreWrite: '<S191>/Data Store Write2' */
          *rtd_NoTrailerAttachError = 0.0;
        }

        /* End of Switch: '<S191>/Switch2' */
      }

      /* End of Outputs for SubSystem: '<S142>/If Action Subsystem' */

      /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem1' incorporates:
       *  EnablePort: '<S192>/Enable'
       */
      if ((*rtd_Local_Ticks == 120.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0)) {
        /* Sum: '<S192>/Add4' incorporates:
         *  Constant: '<S192>/Constant'
         *  DataStoreRead: '<S192>/Data Store Read17'
         */
        rtb_DataStoreRead1_bf = localDW->Votes_Angle.Third_Board + 0.005;

        /* Sum: '<S192>/Add5' incorporates:
         *  Constant: '<S192>/Constant'
         *  DataStoreRead: '<S192>/Data Store Read17'
         */
        rtb_Switch6_o = localDW->Votes_Angle.Third_Board - 0.005;

        /* Switch: '<S192>/Switch' incorporates:
         *  Constant: '<S192>/Constant'
         *  DataStoreRead: '<S192>/Data Store Read17'
         *  DataStoreWrite: '<S192>/Data Store Write1'
         *  Logic: '<S192>/AND1'
         *  RelationalOperator: '<S192>/GreaterThanOrEqual'
         *  RelationalOperator: '<S192>/GreaterThanOrEqual1'
         *  Sum: '<S192>/Add'
         *  Sum: '<S192>/Add1'
         */
        if ((localDW->Votes_Angle.First_Board + 0.005 >
             localDW->Votes_Angle.Second_Board) &&
            (localDW->Votes_Angle.First_Board - 0.005 <
             localDW->Votes_Angle.Second_Board)) {
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.First_Board;

          /* DataStoreWrite: '<S192>/Data Store Write2' incorporates:
           *  Constant: '<S192>/Constant2'
           *  Switch: '<S192>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else if ((localDW->Votes_Angle.First_Board <= rtb_DataStoreRead1_bf) &&
                   (localDW->Votes_Angle.First_Board >= rtb_Switch6_o)) {
          /* DataStoreWrite: '<S192>/Data Store Write1' incorporates:
           *  Switch: '<S192>/Switch1'
           */
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.First_Board;

          /* DataStoreWrite: '<S192>/Data Store Write2' incorporates:
           *  Constant: '<S192>/Constant2'
           *  Switch: '<S192>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else if ((localDW->Votes_Angle.Second_Board <= rtb_DataStoreRead1_bf) &&
                   (localDW->Votes_Angle.Second_Board >= rtb_Switch6_o)) {
          /* Switch: '<S192>/Switch2' incorporates:
           *  DataStoreWrite: '<S192>/Data Store Write1'
           *  Switch: '<S192>/Switch1'
           */
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.Second_Board;

          /* DataStoreWrite: '<S192>/Data Store Write2' incorporates:
           *  Constant: '<S192>/Constant2'
           *  Switch: '<S192>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else {
          /* DataStoreWrite: '<S192>/Data Store Write1' incorporates:
           *  Constant: '<S192>/Constant3'
           *  Switch: '<S192>/Switch1'
           *  Switch: '<S192>/Switch2'
           */
          localDW->ValitdatedSteeringAngle = 0.0;

          /* Switch: '<S192>/Switch3' incorporates:
           *  Constant: '<S192>/Constant1'
           *  DataStoreWrite: '<S192>/Data Store Write2'
           */
          *rtd_AngleVoteError = 1.0;
        }

        /* End of Switch: '<S192>/Switch' */
      }

      /* End of Outputs for SubSystem: '<S142>/If Action Subsystem1' */

      /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem2' incorporates:
       *  EnablePort: '<S193>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S193>/If Action Subsystem2' incorporates:
       *  EnablePort: '<S215>/Enable'
       */
      if ((*rtd_Local_Ticks == 121.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0) && ((localDW->Role_ID == 1.0) &&
           (*rtd_AngleVoteError == 0.0))) {
        /* DataStoreRead: '<S215>/Data Store Read' */
        ValidatedAngle = localDW->ValitdatedSteeringAngle;

        /* DataStoreWrite: '<S215>/Data Store Write' */
        *rtd_PWMValue = ValidatedAngle;
      }

      /* End of Outputs for SubSystem: '<S193>/If Action Subsystem2' */
      /* End of Outputs for SubSystem: '<S142>/If Action Subsystem2' */

      /* RelationalOperator: '<S142>/GreaterThanOrEqual19' incorporates:
       *  Constant: '<S142>/Constant1'
       *  Constant: '<S142>/Constant2'
       *  Constant: '<S142>/Constant29'
       *  Constant: '<S142>/Constant30'
       *  Constant: '<S142>/Constant31'
       *  Constant: '<S142>/Constant32'
       *  Constant: '<S142>/Constant33'
       *  Constant: '<S142>/Constant34'
       *  Constant: '<S142>/Constant37'
       *  Constant: '<S142>/Constant5'
       *  Constant: '<S193>/Constant'
       *  DataStoreRead: '<S193>/Data Store Read1'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND17'
       *  Logic: '<S142>/AND18'
       *  Logic: '<S142>/AND7'
       *  Logic: '<S193>/AND'
       *  Logic: '<S193>/NOT'
       *  RelationalOperator: '<S142>/Equal1'
       *  RelationalOperator: '<S142>/Equal13'
       *  RelationalOperator: '<S142>/Equal14'
       *  RelationalOperator: '<S142>/Equal15'
       *  RelationalOperator: '<S142>/Equal16'
       *  RelationalOperator: '<S142>/Equal8'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual1'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual17'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual18'
       *  RelationalOperator: '<S193>/Equal'
       */
      rtb_GreaterThanOrEqual19_p = (*rtd_Local_Ticks == 138.0);

      /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem3' */
      IfActionSubsystem3(rtb_GreaterThanOrEqual19_p,
                         &localDW->IfActionSubsystem3_n, rtd_BoardIdError,
                         rtd_Board_ID);

      /* End of Outputs for SubSystem: '<S142>/If Action Subsystem3' */

      /* Outputs for Enabled SubSystem: '<S142>/If Action Subsystem4' incorporates:
       *  EnablePort: '<S195>/Enable'
       */
      if ((*rtd_Local_Ticks == 137.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0)) {
        /* Logic: '<S195>/AND1' incorporates:
         *  Constant: '<S195>/Constant'
         *  DataStoreRead: '<S195>/Data Store Read17'
         *  RelationalOperator: '<S195>/GreaterThanOrEqual'
         *  RelationalOperator: '<S195>/GreaterThanOrEqual1'
         *  Sum: '<S195>/Add'
         *  Sum: '<S195>/Add1'
         */
        rtb_AND_l = ((localDW->Votes_Encoder.First_Board + 0.005 >
                      localDW->Votes_Encoder.Second_Board) &&
                     (localDW->Votes_Encoder.First_Board - 0.005 <
                      localDW->Votes_Encoder.Second_Board));

        /* Sum: '<S195>/Add4' incorporates:
         *  Constant: '<S195>/Constant'
         *  DataStoreRead: '<S195>/Data Store Read17'
         */
        rtb_DataStoreRead1_bf = localDW->Votes_Encoder.Third_Board + 0.005;

        /* Sum: '<S195>/Add5' incorporates:
         *  Constant: '<S195>/Constant'
         *  DataStoreRead: '<S195>/Data Store Read17'
         */
        rtb_Switch6_o = localDW->Votes_Encoder.Third_Board - 0.005;

        /* Logic: '<S195>/AND2' incorporates:
         *  DataStoreRead: '<S195>/Data Store Read17'
         *  RelationalOperator: '<S195>/GreaterThanOrEqual4'
         *  RelationalOperator: '<S195>/GreaterThanOrEqual5'
         */
        rtb_Equal1_h2 = ((localDW->Votes_Encoder.First_Board <=
                          rtb_DataStoreRead1_bf) &&
                         (localDW->Votes_Encoder.First_Board >= rtb_Switch6_o));

        /* Switch: '<S195>/Switch3' incorporates:
         *  Constant: '<S195>/Constant41'
         *  Logic: '<S195>/AND3'
         *  Logic: '<S195>/AND4'
         *  RelationalOperator: '<S195>/Equal17'
         */
        if ((*rtd_Board_ID == 1.0) && ((!rtb_AND_l) && (!rtb_Equal1_h2))) {
          /* DataStoreWrite: '<S195>/Data Store Write2' incorporates:
           *  Constant: '<S195>/Constant1'
           */
          *rtd_EncoderValueTestError = 1.0;
        } else {
          /* Logic: '<S195>/AND' incorporates:
           *  DataStoreRead: '<S195>/Data Store Read17'
           *  RelationalOperator: '<S195>/GreaterThanOrEqual2'
           *  RelationalOperator: '<S195>/GreaterThanOrEqual3'
           */
          rtb_Equal6_g = ((localDW->Votes_Encoder.Second_Board <=
                           rtb_DataStoreRead1_bf) &&
                          (localDW->Votes_Encoder.Second_Board >= rtb_Switch6_o));

          /* Switch: '<S195>/Switch4' incorporates:
           *  Constant: '<S195>/Constant2'
           *  Constant: '<S195>/Constant4'
           *  Logic: '<S195>/AND5'
           *  Logic: '<S195>/AND6'
           *  Logic: '<S195>/AND7'
           *  Logic: '<S195>/AND8'
           *  RelationalOperator: '<S195>/Equal1'
           *  RelationalOperator: '<S195>/Equal2'
           *  Switch: '<S195>/Switch5'
           */
          if ((*rtd_Board_ID == 2.0) && ((!rtb_AND_l) && (!rtb_Equal6_g))) {
            /* DataStoreWrite: '<S195>/Data Store Write2' incorporates:
             *  Constant: '<S195>/Constant1'
             */
            *rtd_EncoderValueTestError = 1.0;
          } else if ((*rtd_Board_ID == 3.0) && ((!rtb_Equal1_h2) &&
                      (!rtb_Equal6_g))) {
            /* Switch: '<S195>/Switch5' incorporates:
             *  Constant: '<S195>/Constant1'
             *  DataStoreWrite: '<S195>/Data Store Write2'
             */
            *rtd_EncoderValueTestError = 1.0;
          } else {
            /* DataStoreWrite: '<S195>/Data Store Write2' incorporates:
             *  Constant: '<S195>/Constant5'
             *  Switch: '<S195>/Switch5'
             */
            *rtd_EncoderValueTestError = 0.0;
          }

          /* End of Switch: '<S195>/Switch4' */
        }

        /* End of Switch: '<S195>/Switch3' */
      }

      /* End of Outputs for SubSystem: '<S142>/If Action Subsystem4' */

      /* Logic: '<S142>/AND10' incorporates:
       *  Constant: '<S142>/Constant23'
       *  Constant: '<S142>/Constant54'
       *  Constant: '<S142>/Constant55'
       *  Constant: '<S142>/Constant56'
       *  Constant: '<S142>/Constant8'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  Logic: '<S142>/AND28'
       *  RelationalOperator: '<S142>/Equal23'
       *  RelationalOperator: '<S142>/Equal24'
       *  RelationalOperator: '<S142>/Equal7'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual29'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual4'
       */
      AND10_j = ((*rtd_Local_Ticks == 90.0) && (*rtd_Board_ID == 4.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message' */
      Sendcanmessage(AND10_j, &localDW->Sendcanmessage_i);

      /* End of Outputs for SubSystem: '<S142>/Send can message' */

      /* Logic: '<S142>/AND8' incorporates:
       *  Constant: '<S142>/Constant13'
       *  Constant: '<S142>/Constant22'
       *  Constant: '<S142>/Constant3'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal6'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual6'
       */
      AND8_a = ((*rtd_Local_Ticks == 95.0) && (*rtd_Board_ID == 5.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message1' */
      Sendcanmessage(AND8_a, &localDW->Sendcanmessage1_e);

      /* End of Outputs for SubSystem: '<S142>/Send can message1' */

      /* DataStoreRead: '<S142>/Data Store Read4' incorporates:
       *  Constant: '<S142>/Constant11'
       */
      test1 = localDW->CalcSteeringAngle;

      /* Sum: '<S142>/Add2' incorporates:
       *  Constant: '<S142>/Constant39'
       */
      testtest = test1 + 90.0;

      /* DataTypeConversion: '<S142>/Data Type Conversion4' */
      localB->DataTypeConversion4_l = (uint8_T)testtest;

      /* Logic: '<S142>/AND1' incorporates:
       *  Constant: '<S142>/Constant18'
       *  Constant: '<S142>/Constant21'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal5'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual10'
       */
      rtb_AND1_d = ((*rtd_Local_Ticks == 105.0) && (*rtd_Board_ID == 1.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message2' incorporates:
       *  EnablePort: '<S206>/Enable'
       */
      if (rtb_AND1_d) {
        if (!localDW->Sendcanmessage2_MODE) {
          localDW->Sendcanmessage2_MODE = true;
        }

        /* DataStoreWrite: '<S206>/Data Store Write2' incorporates:
         *  Constant: '<S206>/Constant'
         */
        *rtd_AngleVoteError = 0.0;

        /* DataTypeConversion: '<S206>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S206>/Data Store Write1'
         */
        localDW->Votes_Angle.First_Board = localB->DataTypeConversion4_l;
      } else {
        if (localDW->Sendcanmessage2_MODE) {
          localDW->Sendcanmessage2_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message2' */

      /* DataTypeConversion: '<S142>/Data Type Conversion5' incorporates:
       *  Constant: '<S142>/Constant36'
       *  DataStoreRead: '<S142>/Data Store Read12'
       *  Sum: '<S142>/Add'
       */
      localB->DataTypeConversion5_b = (uint8_T)(localDW->CalcSteeringAngle +
        90.0);

      /* Logic: '<S142>/AND11' incorporates:
       *  Constant: '<S142>/Constant17'
       *  Constant: '<S142>/Constant6'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal10'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual2'
       */
      rtb_AND11 = ((*rtd_Local_Ticks == 110.0) && (*rtd_Board_ID == 2.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message3' incorporates:
       *  EnablePort: '<S207>/Enable'
       */
      if (rtb_AND11) {
        if (!localDW->Sendcanmessage3_MODE) {
          localDW->Sendcanmessage3_MODE = true;
        }

        /* DataStoreWrite: '<S207>/Data Store Write2' incorporates:
         *  Constant: '<S207>/Constant'
         */
        *rtd_AngleVoteError = 0.0;

        /* DataTypeConversion: '<S207>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S207>/Data Store Write3'
         */
        localDW->Votes_Angle.Second_Board = localB->DataTypeConversion5_b;
      } else {
        if (localDW->Sendcanmessage3_MODE) {
          localDW->Sendcanmessage3_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message3' */

      /* DataTypeConversion: '<S142>/Data Type Conversion6' incorporates:
       *  Constant: '<S142>/Constant38'
       *  DataStoreRead: '<S142>/Data Store Read15'
       *  Sum: '<S142>/Add1'
       */
      localB->DataTypeConversion6_g = (uint8_T)(localDW->CalcSteeringAngle +
        90.0);

      /* Logic: '<S142>/AND14' incorporates:
       *  Constant: '<S142>/Constant25'
       *  Constant: '<S142>/Constant27'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal11'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual15'
       */
      rtb_AND14 = ((*rtd_Local_Ticks == 115.0) && (*rtd_Board_ID == 3.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message4' incorporates:
       *  EnablePort: '<S208>/Enable'
       */
      if (rtb_AND14) {
        if (!localDW->Sendcanmessage4_MODE) {
          localDW->Sendcanmessage4_MODE = true;
        }

        /* DataStoreWrite: '<S208>/Data Store Write2' incorporates:
         *  Constant: '<S208>/Constant'
         */
        *rtd_AngleVoteError = 0.0;

        /* DataTypeConversion: '<S208>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S208>/Data Store Write4'
         */
        localDW->Votes_Angle.Third_Board = localB->DataTypeConversion6_g;
      } else {
        if (localDW->Sendcanmessage4_MODE) {
          localDW->Sendcanmessage4_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message4' */

      /* DataTypeConversion: '<S142>/Data Type Conversion7' incorporates:
       *  DataTypeConversion: '<S142>/Data Type Conversion8'
       *  DataTypeConversion: '<S142>/Data Type Conversion9'
       */
      DataTypeConversion7_tmp = (uint8_T)*rtd_EncoderValue;
      localB->DataTypeConversion7 = DataTypeConversion7_tmp;

      /* Logic: '<S142>/AND19' incorporates:
       *  Constant: '<S142>/Constant40'
       *  Constant: '<S142>/Constant41'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal17'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual20'
       */
      rtb_AND19 = ((*rtd_Local_Ticks == 122.0) && (*rtd_Board_ID == 1.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message5' incorporates:
       *  EnablePort: '<S209>/Enable'
       */
      if (rtb_AND19) {
        if (!localDW->Sendcanmessage5_MODE) {
          localDW->Sendcanmessage5_MODE = true;
        }

        /* DataTypeConversion: '<S209>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S209>/Data Store Write1'
         */
        localDW->Votes_Encoder.First_Board = localB->DataTypeConversion7;
      } else {
        if (localDW->Sendcanmessage5_MODE) {
          localDW->Sendcanmessage5_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message5' */

      /* DataTypeConversion: '<S142>/Data Type Conversion8' */
      localB->DataTypeConversion8 = DataTypeConversion7_tmp;

      /* Logic: '<S142>/AND22' incorporates:
       *  Constant: '<S142>/Constant46'
       *  Constant: '<S142>/Constant47'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal19'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual23'
       */
      rtb_AND22 = ((*rtd_Local_Ticks == 127.0) && (*rtd_Board_ID == 2.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message6' incorporates:
       *  EnablePort: '<S210>/Enable'
       */
      if (rtb_AND22) {
        if (!localDW->Sendcanmessage6_MODE) {
          localDW->Sendcanmessage6_MODE = true;
        }

        /* DataTypeConversion: '<S210>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S210>/Data Store Write7'
         */
        localDW->Votes_Encoder.Second_Board = localB->DataTypeConversion8;
      } else {
        if (localDW->Sendcanmessage6_MODE) {
          localDW->Sendcanmessage6_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message6' */

      /* DataTypeConversion: '<S142>/Data Type Conversion9' */
      localB->DataTypeConversion9 = DataTypeConversion7_tmp;

      /* Logic: '<S142>/AND25' incorporates:
       *  Constant: '<S142>/Constant48'
       *  Constant: '<S142>/Constant51'
       *  DataTypeConversion: '<S142>/Data Type Conversion3'
       *  RelationalOperator: '<S142>/Equal21'
       *  RelationalOperator: '<S142>/GreaterThanOrEqual26'
       */
      rtb_AND25 = ((*rtd_Local_Ticks == 132.0) && (*rtd_Board_ID == 3.0));

      /* Outputs for Enabled SubSystem: '<S142>/Send can message7' incorporates:
       *  EnablePort: '<S211>/Enable'
       */
      if (rtb_AND25) {
        if (!localDW->Sendcanmessage7_MODE) {
          localDW->Sendcanmessage7_MODE = true;
        }

        /* DataTypeConversion: '<S211>/Cast To Double' incorporates:
         *  DataStoreWrite: '<S211>/Data Store Write8'
         */
        localDW->Votes_Encoder.Third_Board = localB->DataTypeConversion9;
      } else {
        if (localDW->Sendcanmessage7_MODE) {
          localDW->Sendcanmessage7_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S142>/Send can message7' */

      /* DataTypeConversion: '<S142>/Data Type Conversion1' incorporates:
       *  DataTypeConversion: '<S142>/Data Type Conversion2'
       */
      DataTypeConversion7_tmp = (uint8_T)*rtd_PotAngle;
      localB->DataTypeConversion1_i = DataTypeConversion7_tmp;

      /* DataTypeConversion: '<S142>/Data Type Conversion2' */
      localB->DataTypeConversion2_e = DataTypeConversion7_tmp;

      /* DataStoreRead: '<S143>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S143>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S143>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S143>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read13' */
      set_miss_counter_s = localDW->Set_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read14' */
      sensor_miss_counter_s = localDW->Sensor_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read15' */
      out1_miss_counter_s = localDW->Out1_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read16' */
      out2_miss_counter_s = localDW->Out2_missed_counter;

      /* DataStoreRead: '<S143>/Data Store Read17' */
      NoMes1CntCheck = localDW->NoMes1Cnt;

      /* DataStoreRead: '<S143>/Data Store Read18' */
      NoMes2CntCheck = localDW->NoMes2Cnt;

      /* DataStoreRead: '<S143>/Data Store Read19' */
      NoMes3CntCheck = localDW->NoMes3Cnt;

      /* DataStoreRead: '<S143>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S143>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S143>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S143>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S143>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S143>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S143>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S143>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S144>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG;

      /* Update for M-S-Function: '<S146>/Level-2 M-file S-Function' */
      /* update digital output */
      if (localB->Equal == 0) {
        DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
      }

      /* Update for M-S-Function: '<S147>/Level-2 M-file S-Function' */
      /* update digital output */
      if (localB->Equal == 0) {
        DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
      } else {
        DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
      }

      /* Update for Enabled SubSystem: '<S141>/Send can message' incorporates:
       *  EnablePort: '<S155>/Enable'
       */
      if (localDW->Sendcanmessage_MODE) {
        /* Update for M-S-Function: '<S182>/S-Function' incorporates:
         *  Constant: '<S141>/Constant3'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead10;

          /* send the data */
          CanTransmit(0, 99U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S183>/S-Function' incorporates:
         *  Constant: '<S141>/Constant3'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead10;

          /* send the data */
          CanTransmit(1, 99U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S141>/Send can message' */

      /* Update for Enabled SubSystem: '<S141>/Send can message1' incorporates:
       *  EnablePort: '<S156>/Enable'
       */
      if (localDW->Sendcanmessage1_MODE) {
        /* Update for M-S-Function: '<S184>/S-Function' incorporates:
         *  Constant: '<S141>/Constant11'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead12;

          /* send the data */
          CanTransmit(0, 98U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S185>/S-Function' incorporates:
         *  Constant: '<S141>/Constant11'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead12;

          /* send the data */
          CanTransmit(1, 98U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S141>/Send can message1' */

      /* Update for Enabled SubSystem: '<S141>/Send can message2' incorporates:
       *  EnablePort: '<S157>/Enable'
       */
      if (localDW->Sendcanmessage2_MODE_n) {
        /* Update for M-S-Function: '<S186>/S-Function' incorporates:
         *  Constant: '<S141>/Constant16'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead11;

          /* send the data */
          CanTransmit(0, 97U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S187>/S-Function' incorporates:
         *  Constant: '<S141>/Constant16'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataStoreRead11;

          /* send the data */
          CanTransmit(1, 97U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S141>/Send can message2' */

      /* Update for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' incorporates:
       *  EnablePort: '<S158>/Enable'
       */
      /* Update for If: '<S158>/If' */
      if (localDW->SendReceiveTimercanmastermessag &&
          (localDW->If_ActiveSubsystem == 0)) {
        /* Update for IfAction SubSystem: '<S158>/Send can message' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        /* Update for M-S-Function: '<S189>/S-Function' incorporates:
         *  Constant: '<S158>/Constant'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = CanSendTime;

          /* send the data */
          CanTransmit(0, 100U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S190>/S-Function' incorporates:
         *  Constant: '<S158>/Constant'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = CanSendTime;

          /* send the data */
          CanTransmit(1, 100U, 1, &canTxData.uint8_T_info[0]);
        }

        /* End of Update for SubSystem: '<S158>/Send can message' */
      }

      /* End of Update for If: '<S158>/If' */
      /* End of Update for SubSystem: '<S141>/Send//Receive Timer can master message ' */

      /* Update for Enabled SubSystem: '<S142>/Send can message' */
      Sendcanmessage_Update(10U, localB->DataTypeConversion1_i,
                            &localDW->Sendcanmessage_i);

      /* End of Update for SubSystem: '<S142>/Send can message' */

      /* Update for Enabled SubSystem: '<S142>/Send can message1' */
      Sendcanmessage_Update(9U, localB->DataTypeConversion2_e,
                            &localDW->Sendcanmessage1_e);

      /* End of Update for SubSystem: '<S142>/Send can message1' */

      /* Update for Enabled SubSystem: '<S142>/Send can message2' incorporates:
       *  EnablePort: '<S206>/Enable'
       */
      if (localDW->Sendcanmessage2_MODE) {
        /* Update for M-S-Function: '<S271>/S-Function' incorporates:
         *  Constant: '<S142>/Constant16'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion4_l;

          /* send the data */
          CanTransmit(0, 8U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S272>/S-Function' incorporates:
         *  Constant: '<S142>/Constant16'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion4_l;

          /* send the data */
          CanTransmit(1, 8U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message2' */

      /* Update for Enabled SubSystem: '<S142>/Send can message3' incorporates:
       *  EnablePort: '<S207>/Enable'
       */
      if (localDW->Sendcanmessage3_MODE) {
        /* Update for M-S-Function: '<S273>/S-Function' incorporates:
         *  Constant: '<S142>/Constant4'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion5_b;

          /* send the data */
          CanTransmit(0, 7U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S274>/S-Function' incorporates:
         *  Constant: '<S142>/Constant4'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion5_b;

          /* send the data */
          CanTransmit(1, 7U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message3' */

      /* Update for Enabled SubSystem: '<S142>/Send can message4' incorporates:
       *  EnablePort: '<S208>/Enable'
       */
      if (localDW->Sendcanmessage4_MODE) {
        /* Update for M-S-Function: '<S275>/S-Function' incorporates:
         *  Constant: '<S142>/Constant26'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion6_g;

          /* send the data */
          CanTransmit(0, 6U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S276>/S-Function' incorporates:
         *  Constant: '<S142>/Constant26'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion6_g;

          /* send the data */
          CanTransmit(1, 6U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message4' */

      /* Update for Enabled SubSystem: '<S142>/Send can message5' incorporates:
       *  EnablePort: '<S209>/Enable'
       */
      if (localDW->Sendcanmessage5_MODE) {
        /* Update for M-S-Function: '<S277>/S-Function' incorporates:
         *  Constant: '<S142>/Constant35'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion7;

          /* send the data */
          CanTransmit(0, 5U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S278>/S-Function' incorporates:
         *  Constant: '<S142>/Constant35'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion7;

          /* send the data */
          CanTransmit(1, 5U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message5' */

      /* Update for Enabled SubSystem: '<S142>/Send can message6' incorporates:
       *  EnablePort: '<S210>/Enable'
       */
      if (localDW->Sendcanmessage6_MODE) {
        /* Update for M-S-Function: '<S279>/S-Function' incorporates:
         *  Constant: '<S142>/Constant45'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion8;

          /* send the data */
          CanTransmit(0, 4U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S280>/S-Function' incorporates:
         *  Constant: '<S142>/Constant45'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion8;

          /* send the data */
          CanTransmit(1, 4U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message6' */

      /* Update for Enabled SubSystem: '<S142>/Send can message7' incorporates:
       *  EnablePort: '<S211>/Enable'
       */
      if (localDW->Sendcanmessage7_MODE) {
        /* Update for M-S-Function: '<S281>/S-Function' incorporates:
         *  Constant: '<S142>/Constant42'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion9;

          /* send the data */
          CanTransmit(0, 3U, 1, &canTxData.uint8_T_info[0]);
        }

        /* Update for M-S-Function: '<S282>/S-Function' incorporates:
         *  Constant: '<S142>/Constant42'
         */
        {
          /* prepare the data */
          canTxData.uint8_T_info[0] = localB->DataTypeConversion9;

          /* send the data */
          CanTransmit(1, 3U, 1, &canTxData.uint8_T_info[0]);
        }
      }

      /* End of Update for SubSystem: '<S142>/Send can message7' */
    } else {
      if (localDW->u331ControllerMatrixCycleTruckB) {
        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message ' */
        if (localDW->ReceiveTimercanmastermessage__j) {
          /* Disable for Enabled SubSystem: '<S151>/Receive can message' */
          if (localDW->Receivecanmessage_f.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_f);
          }

          /* End of Disable for SubSystem: '<S151>/Receive can message' */
          localDW->ReceiveTimercanmastermessage__j = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message ' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 1' */
        if (localDW->ReceiveTimercanmastermessage1_M) {
          /* Disable for Enabled SubSystem: '<S152>/Receive can message' */
          if (localDW->Receivecanmessage_jy.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_jy);
          }

          /* End of Disable for SubSystem: '<S152>/Receive can message' */
          localDW->ReceiveTimercanmastermessage1_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 1' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 2' */
        if (localDW->ReceiveTimercanmastermessage2_M) {
          /* Disable for Enabled SubSystem: '<S153>/Receive can message' */
          if (localDW->Receivecanmessage_k.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_k);
          }

          /* End of Disable for SubSystem: '<S153>/Receive can message' */
          localDW->ReceiveTimercanmastermessage2_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 2' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 3' */
        if (localDW->ReceiveTimercanmastermessage3_M) {
          /* Disable for Enabled SubSystem: '<S154>/Receive can message' */
          if (localDW->Receivecanmessage_n.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_n);
          }

          /* End of Disable for SubSystem: '<S154>/Receive can message' */
          localDW->ReceiveTimercanmastermessage3_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 3' */
        /* Disable for Enabled SubSystem: '<S141>/Send can message' */
        if (localDW->Sendcanmessage_MODE) {
          localDW->Sendcanmessage_MODE = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message' */

        /* Disable for Enabled SubSystem: '<S141>/Send can message1' */
        if (localDW->Sendcanmessage1_MODE) {
          localDW->Sendcanmessage1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S141>/Send can message2' */
        if (localDW->Sendcanmessage2_MODE_n) {
          localDW->Sendcanmessage2_MODE_n = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' */
        if (localDW->SendReceiveTimercanmastermessag) {
          /* Disable for If: '<S158>/If' */
          if (localDW->If_ActiveSubsystem == 0) {
          }

          localDW->If_ActiveSubsystem = -1;
          localDW->SendReceiveTimercanmastermessag = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send//Receive Timer can master message ' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */
        if (localDW->ReceiveTrailer1board4inputang_a) {
          /* Disable for Enabled SubSystem: '<S196>/Receive can message' */
          if (localDW->Receivecanmessage_m.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_m);
          }

          /* End of Disable for SubSystem: '<S196>/Receive can message' */
          localDW->ReceiveTrailer1board4inputang_a = false;
        }

        /* End of Disable for SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */
        if (localDW->ReceiveTrailer2board5inputangel) {
          /* Disable for Enabled SubSystem: '<S197>/Receive can message' */
          if (localDW->Receivecanmessage_d.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_d);
          }

          /* End of Disable for SubSystem: '<S197>/Receive can message' */
          localDW->ReceiveTrailer2board5inputangel = false;
        }

        /* End of Disable for SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_d.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_d);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */
        if (localDW->ReceiveTruck2Board2CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck2Board2CalcSteering);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */
        if (localDW->ReceiveTruck3Board3CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck3Board3CalcSteering);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_a.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_a);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_i.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_i);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_k.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_k);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */

        /* Disable for Enabled SubSystem: '<S142>/If Action Subsystem3' */
        if (localDW->IfActionSubsystem3_n.IfActionSubsystem3_MODE) {
          IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_n);
        }

        /* End of Disable for SubSystem: '<S142>/If Action Subsystem3' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message' */
        if (localDW->Sendcanmessage_i.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage_i);
        }

        /* End of Disable for SubSystem: '<S142>/Send can message' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message1' */
        if (localDW->Sendcanmessage1_e.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage1_e);
        }

        /* End of Disable for SubSystem: '<S142>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message2' */
        if (localDW->Sendcanmessage2_MODE) {
          localDW->Sendcanmessage2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message3' */
        if (localDW->Sendcanmessage3_MODE) {
          localDW->Sendcanmessage3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message3' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message4' */
        if (localDW->Sendcanmessage4_MODE) {
          localDW->Sendcanmessage4_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message4' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message5' */
        if (localDW->Sendcanmessage5_MODE) {
          localDW->Sendcanmessage5_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message5' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message6' */
        if (localDW->Sendcanmessage6_MODE) {
          localDW->Sendcanmessage6_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message6' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message7' */
        if (localDW->Sendcanmessage7_MODE) {
          localDW->Sendcanmessage7_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message7' */
        localDW->u331ControllerMatrixCycleTruckB = false;
      }
    }

    /* End of Outputs for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */

    /* Outputs for Enabled SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' incorporates:
     *  EnablePort: '<S138>/Enable'
     */
    if (*rtd_Board_ID > 3.0) {
      if (!localDW->u332ControllerMatrixCycle_Board) {
        localDW->u332ControllerMatrixCycle_Board = true;
      }

      /* Logic: '<S284>/AND9' incorporates:
       *  Constant: '<S284>/Constant10'
       *  Constant: '<S284>/Constant14'
       *  Constant: '<S284>/Constant8'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND3'
       *  RelationalOperator: '<S284>/Equal2'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual5'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual8'
       */
      AND9 = ((*rtd_Local_Ticks <= 94.0) && (*rtd_Local_Ticks >= 90.0) &&
              (*rtd_Board_ID != 4.0));

      /* Outputs for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
      ReceiveTrailer1board4inputangel(AND9, 10U,
        &localB->ReceiveTrailer1board4inputang_i,
        &localDW->ReceiveTrailer1board4inputang_i);

      /* End of Outputs for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */

      /* DataStoreWrite: '<S284>/Data Store Write' incorporates:
       *  Constant: '<S284>/Constant3'
       */
      localDW->InputAngle1 = localB->ReceiveTrailer1board4inputang_i.Switch1;

      /* Logic: '<S284>/AND6' incorporates:
       *  Constant: '<S284>/Constant13'
       *  Constant: '<S284>/Constant15'
       *  Constant: '<S284>/Constant9'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND4'
       *  RelationalOperator: '<S284>/Equal3'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual7'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual9'
       */
      AND6 = ((*rtd_Local_Ticks <= 99.0) && (*rtd_Local_Ticks >= 95.0) &&
              (*rtd_Board_ID != 5.0));

      /* Outputs for Enabled SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */
      ReceiveTrailer1board4inputangel(AND6, 9U,
        &localB->ReceiveTrailer2board5inputang_m,
        &localDW->ReceiveTrailer2board5inputang_m);

      /* End of Outputs for SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */

      /* DataStoreWrite: '<S284>/Data Store Write1' incorporates:
       *  Constant: '<S284>/Constant11'
       */
      localDW->InputAngle2 = localB->ReceiveTrailer2board5inputang_m.Switch1;

      /* Logic: '<S284>/AND2' incorporates:
       *  Constant: '<S284>/Constant18'
       *  Constant: '<S284>/Constant19'
       *  Constant: '<S284>/Constant20'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND5'
       *  RelationalOperator: '<S284>/Equal4'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual11'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual12'
       */
      AND2 = ((*rtd_Local_Ticks <= 109.0) && (*rtd_Local_Ticks >= 105.0) &&
              (*rtd_Board_ID != 1.0));

      /* Outputs for Enabled SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */
      ReceiveTrailer1board4inputangel(AND2, 8U,
        &localB->ReceiveTruck1Board1CalcSteeri_c,
        &localDW->ReceiveTruck1Board1CalcSteeri_c);

      /* End of Outputs for SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */

      /* DataStoreWrite: '<S284>/Data Store Write2' incorporates:
       *  Constant: '<S284>/Constant16'
       */
      localDW->Votes_Angle.First_Board =
        localB->ReceiveTruck1Board1CalcSteeri_c.Switch1;

      /* Logic: '<S284>/AND12' incorporates:
       *  Constant: '<S284>/Constant12'
       *  Constant: '<S284>/Constant6'
       *  Constant: '<S284>/Constant7'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND13'
       *  RelationalOperator: '<S284>/Equal9'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual13'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual3'
       */
      AND12 = ((*rtd_Local_Ticks <= 114.0) && (*rtd_Local_Ticks >= 110.0) &&
               (*rtd_Board_ID != 2.0));

      /* Outputs for Enabled SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */
      ReceiveTrailer1board4inputangel(AND12, 7U,
        &localB->ReceiveTruck2Board2CalcSteeri_h,
        &localDW->ReceiveTruck2Board2CalcSteeri_h);

      /* End of Outputs for SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */

      /* DataStoreWrite: '<S284>/Data Store Write3' incorporates:
       *  Constant: '<S284>/Constant4'
       */
      localDW->Votes_Angle.Second_Board =
        localB->ReceiveTruck2Board2CalcSteeri_h.Switch1;

      /* Logic: '<S284>/AND15' incorporates:
       *  Constant: '<S284>/Constant24'
       *  Constant: '<S284>/Constant27'
       *  Constant: '<S284>/Constant28'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND16'
       *  RelationalOperator: '<S284>/Equal12'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual14'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual16'
       */
      AND15 = ((*rtd_Local_Ticks <= 119.0) && (*rtd_Local_Ticks >= 115.0) &&
               (*rtd_Board_ID != 3.0));

      /* Outputs for Enabled SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */
      ReceiveTrailer1board4inputangel(AND15, 6U,
        &localB->ReceiveTruck3Board3CalcSteeri_c,
        &localDW->ReceiveTruck3Board3CalcSteeri_c);

      /* End of Outputs for SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */

      /* DataStoreWrite: '<S284>/Data Store Write4' incorporates:
       *  Constant: '<S284>/Constant26'
       */
      localDW->Votes_Angle.Third_Board =
        localB->ReceiveTruck3Board3CalcSteeri_c.Switch1;

      /* Outputs for Enabled SubSystem: '<S284>/If Action Subsystem' incorporates:
       *  EnablePort: '<S293>/Enable'
       */
      if ((*rtd_Local_Ticks == 100.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0)) {
        /* DataStoreWrite: '<S293>/Data Store Write1' incorporates:
         *  DataStoreRead: '<S293>/Data Store Read1'
         */
        localDW->CalcSteeringAngle = localDW->InputAngle1;

        /* DataStoreRead: '<S293>/Data Store Read2' */
        rtb_DataStoreRead2_j = localDW->InputAngle2;
      }

      /* End of Outputs for SubSystem: '<S284>/If Action Subsystem' */

      /* Outputs for Enabled SubSystem: '<S284>/If Action Subsystem1' incorporates:
       *  EnablePort: '<S294>/Enable'
       */
      if ((*rtd_Local_Ticks == 120.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0)) {
        /* Sum: '<S294>/Add4' incorporates:
         *  Constant: '<S294>/Constant'
         *  DataStoreRead: '<S294>/Data Store Read17'
         */
        rtb_DataStoreRead1_bf = localDW->Votes_Angle.Third_Board + 0.005;

        /* Sum: '<S294>/Add5' incorporates:
         *  Constant: '<S294>/Constant'
         *  DataStoreRead: '<S294>/Data Store Read17'
         */
        rtb_Switch6_o = localDW->Votes_Angle.Third_Board - 0.005;

        /* Switch: '<S294>/Switch' incorporates:
         *  Constant: '<S294>/Constant'
         *  DataStoreRead: '<S294>/Data Store Read17'
         *  DataStoreWrite: '<S294>/Data Store Write1'
         *  Logic: '<S294>/AND1'
         *  RelationalOperator: '<S294>/GreaterThanOrEqual'
         *  RelationalOperator: '<S294>/GreaterThanOrEqual1'
         *  Sum: '<S294>/Add'
         *  Sum: '<S294>/Add1'
         */
        if ((localDW->Votes_Angle.First_Board + 0.005 <=
             localDW->Votes_Angle.Second_Board) &&
            (localDW->Votes_Angle.First_Board - 0.005 >=
             localDW->Votes_Angle.Second_Board)) {
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.First_Board;

          /* DataStoreWrite: '<S294>/Data Store Write2' incorporates:
           *  Constant: '<S294>/Constant2'
           *  Switch: '<S294>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else if ((localDW->Votes_Angle.First_Board <= rtb_DataStoreRead1_bf) &&
                   (localDW->Votes_Angle.First_Board >= rtb_Switch6_o)) {
          /* DataStoreWrite: '<S294>/Data Store Write1' incorporates:
           *  Switch: '<S294>/Switch1'
           */
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.Second_Board;

          /* DataStoreWrite: '<S294>/Data Store Write2' incorporates:
           *  Constant: '<S294>/Constant2'
           *  Switch: '<S294>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else if ((localDW->Votes_Angle.Second_Board <= rtb_DataStoreRead1_bf) &&
                   (localDW->Votes_Angle.Second_Board >= rtb_Switch6_o)) {
          /* Switch: '<S294>/Switch2' incorporates:
           *  DataStoreWrite: '<S294>/Data Store Write1'
           *  Switch: '<S294>/Switch1'
           */
          localDW->ValitdatedSteeringAngle = localDW->Votes_Angle.Third_Board;

          /* DataStoreWrite: '<S294>/Data Store Write2' incorporates:
           *  Constant: '<S294>/Constant2'
           *  Switch: '<S294>/Switch3'
           */
          *rtd_AngleVoteError = 0.0;
        } else {
          /* DataStoreWrite: '<S294>/Data Store Write1' incorporates:
           *  Constant: '<S294>/Constant3'
           *  Switch: '<S294>/Switch1'
           *  Switch: '<S294>/Switch2'
           */
          localDW->ValitdatedSteeringAngle = 0.0;

          /* Switch: '<S294>/Switch3' incorporates:
           *  Constant: '<S294>/Constant1'
           *  DataStoreWrite: '<S294>/Data Store Write2'
           */
          *rtd_AngleVoteError = 1.0;
        }

        /* End of Switch: '<S294>/Switch' */
      }

      /* End of Outputs for SubSystem: '<S284>/If Action Subsystem1' */

      /* Outputs for Enabled SubSystem: '<S284>/If Action Subsystem2' incorporates:
       *  EnablePort: '<S295>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S295>/If Action Subsystem2' incorporates:
       *  EnablePort: '<S307>/Enable'
       */
      if ((*rtd_Local_Ticks == 121.0) && (*rtd_Board_ID >= 1.0) &&
          (*rtd_Board_ID <= 3.0) && ((localDW->Role_ID == 1.0) &&
           (*rtd_AngleVoteError == 0.0))) {
        /* DataStoreWrite: '<S307>/Data Store Write' incorporates:
         *  DataStoreRead: '<S307>/Data Store Read'
         */
        *rtd_PWMValue = localDW->ValitdatedSteeringAngle;
      }

      /* End of Outputs for SubSystem: '<S295>/If Action Subsystem2' */
      /* End of Outputs for SubSystem: '<S284>/If Action Subsystem2' */

      /* RelationalOperator: '<S284>/GreaterThanOrEqual19' incorporates:
       *  Constant: '<S284>/Constant1'
       *  Constant: '<S284>/Constant2'
       *  Constant: '<S284>/Constant29'
       *  Constant: '<S284>/Constant30'
       *  Constant: '<S284>/Constant31'
       *  Constant: '<S284>/Constant32'
       *  Constant: '<S284>/Constant33'
       *  Constant: '<S284>/Constant34'
       *  Constant: '<S284>/Constant37'
       *  Constant: '<S284>/Constant5'
       *  Constant: '<S295>/Constant'
       *  DataStoreRead: '<S295>/Data Store Read1'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  Logic: '<S284>/AND17'
       *  Logic: '<S284>/AND18'
       *  Logic: '<S284>/AND7'
       *  Logic: '<S295>/AND'
       *  Logic: '<S295>/NOT'
       *  RelationalOperator: '<S284>/Equal1'
       *  RelationalOperator: '<S284>/Equal13'
       *  RelationalOperator: '<S284>/Equal14'
       *  RelationalOperator: '<S284>/Equal15'
       *  RelationalOperator: '<S284>/Equal16'
       *  RelationalOperator: '<S284>/Equal8'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual1'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual17'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual18'
       *  RelationalOperator: '<S295>/Equal'
       */
      rtb_GreaterThanOrEqual19 = (*rtd_Local_Ticks == 122.0);

      /* Outputs for Enabled SubSystem: '<S284>/If Action Subsystem3' */
      IfActionSubsystem3(rtb_GreaterThanOrEqual19,
                         &localDW->IfActionSubsystem3_m, rtd_BoardIdError,
                         rtd_Board_ID);

      /* End of Outputs for SubSystem: '<S284>/If Action Subsystem3' */

      /* Logic: '<S284>/AND10' incorporates:
       *  Constant: '<S284>/Constant23'
       *  Constant: '<S284>/Constant8'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  RelationalOperator: '<S284>/Equal7'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual4'
       */
      AND10 = ((*rtd_Local_Ticks == 90.0) && (*rtd_Board_ID == 4.0));

      /* Outputs for Enabled SubSystem: '<S284>/Send can message' */
      Sendcanmessage(AND10, &localDW->Sendcanmessage_nf);

      /* End of Outputs for SubSystem: '<S284>/Send can message' */

      /* Logic: '<S284>/AND8' incorporates:
       *  Constant: '<S284>/Constant13'
       *  Constant: '<S284>/Constant22'
       *  Constant: '<S284>/Constant3'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  RelationalOperator: '<S284>/Equal6'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual6'
       */
      AND8 = ((*rtd_Local_Ticks == 95.0) && (*rtd_Board_ID == 5.0));

      /* Outputs for Enabled SubSystem: '<S284>/Send can message1' */
      Sendcanmessage(AND8, &localDW->Sendcanmessage1_p);

      /* End of Outputs for SubSystem: '<S284>/Send can message1' */

      /* Logic: '<S284>/AND1' incorporates:
       *  Constant: '<S284>/Constant11'
       *  Constant: '<S284>/Constant18'
       *  Constant: '<S284>/Constant21'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  RelationalOperator: '<S284>/Equal5'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual10'
       */
      AND1 = ((*rtd_Local_Ticks == 105.0) && (*rtd_Board_ID == 1.0));

      /* Outputs for Enabled SubSystem: '<S284>/Send can message2' */
      Sendcanmessage2(AND1, &localDW->Sendcanmessage2_d, rtd_AngleVoteError);

      /* End of Outputs for SubSystem: '<S284>/Send can message2' */

      /* Logic: '<S284>/AND11' incorporates:
       *  Constant: '<S284>/Constant16'
       *  Constant: '<S284>/Constant17'
       *  Constant: '<S284>/Constant6'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  RelationalOperator: '<S284>/Equal10'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual2'
       */
      AND11 = ((*rtd_Local_Ticks == 110.0) && (*rtd_Board_ID == 2.0));

      /* Outputs for Enabled SubSystem: '<S284>/Send can message3' */
      Sendcanmessage2(AND11, &localDW->Sendcanmessage3_a, rtd_AngleVoteError);

      /* End of Outputs for SubSystem: '<S284>/Send can message3' */

      /* Logic: '<S284>/AND14' incorporates:
       *  Constant: '<S284>/Constant25'
       *  Constant: '<S284>/Constant27'
       *  Constant: '<S284>/Constant4'
       *  DataTypeConversion: '<S284>/Data Type Conversion3'
       *  RelationalOperator: '<S284>/Equal11'
       *  RelationalOperator: '<S284>/GreaterThanOrEqual15'
       */
      AND14 = ((*rtd_Local_Ticks == 115.0) && (*rtd_Board_ID == 3.0));

      /* Outputs for Enabled SubSystem: '<S284>/Send can message4' */
      Sendcanmessage2(AND14, &localDW->Sendcanmessage4_j, rtd_AngleVoteError);

      /* End of Outputs for SubSystem: '<S284>/Send can message4' */

      /* DataTypeConversion: '<S284>/Data Type Conversion1' incorporates:
       *  Constant: '<S284>/Constant26'
       */
      localB->DataTypeConversion1 = (uint8_T)*rtd_PotAngle;

      /* DataTypeConversion: '<S284>/Data Type Conversion2' */
      localB->DataTypeConversion2 = (uint8_T)*rtd_PotAngle;

      /* DataTypeConversion: '<S284>/Data Type Conversion4' incorporates:
       *  DataStoreRead: '<S284>/Data Store Read11'
       *  DataTypeConversion: '<S284>/Data Type Conversion5'
       *  DataTypeConversion: '<S284>/Data Type Conversion6'
       */
      DataTypeConversion7_tmp = (uint8_T)localDW->CalcSteeringAngle;
      localB->DataTypeConversion4 = DataTypeConversion7_tmp;

      /* DataTypeConversion: '<S284>/Data Type Conversion5' */
      localB->DataTypeConversion5 = DataTypeConversion7_tmp;

      /* DataTypeConversion: '<S284>/Data Type Conversion6' */
      localB->DataTypeConversion6 = DataTypeConversion7_tmp;

      /* Logic: '<S283>/AND' incorporates:
       *  Constant: '<S283>/Constant5'
       *  Constant: '<S283>/Constant6'
       *  DataTypeConversion: '<S283>/Data Type Conversion3'
       *  RelationalOperator: '<S283>/GreaterThanOrEqual'
       *  RelationalOperator: '<S283>/GreaterThanOrEqual1'
       */
      rtb_AND_l = ((*rtd_Local_Ticks <= 60.0) && (*rtd_Local_Ticks > 5.0));

      /* Outputs for Enabled SubSystem: '<S283>/Receive Timer can master message ' incorporates:
       *  EnablePort: '<S287>/Enable'
       */
      if (rtb_AND_l) {
        if (!localDW->ReceiveTimercanmastermessage_MO) {
          localDW->ReceiveTimercanmastermessage_MO = true;
        }

        /* RelationalOperator: '<S287>/Equal2' incorporates:
         *  Constant: '<S287>/Constant2'
         *  DataStoreRead: '<S283>/Data Store Read3'
         */
        rtb_Equal2_f = (localDW->Role_ID == 2.0);

        /* Outputs for Enabled SubSystem: '<S287>/Receive can message' */
        Receivecanmessage(rtb_Equal2_f, 100U, &localB->Receivecanmessage_c,
                          &localDW->Receivecanmessage_c);

        /* End of Outputs for SubSystem: '<S287>/Receive can message' */

        /* S-Function (sdspcount2): '<S287>/Counter1' incorporates:
         *  Constant: '<S287>/Constant'
         */
        rtb_Counter1_o2_jh = false;
        if (MWDSP_EPH_R_S8(localB->Receivecanmessage_c.SFunction_o1,
                           &localDW->Counter1_ClkEphState_d) != 0U) {
          if (localDW->Counter1_Count_a < ((uint8_T)255U)) {
            localDW->Counter1_Count_a++;
          } else {
            localDW->Counter1_Count_a = 0U;
          }
        }

        rtb_Counter1_o1_k = localDW->Counter1_Count_a;
        if (localDW->Counter1_Count_a == ((uint8_T)32U)) {
          rtb_Counter1_o2_jh = true;
        }

        /* End of S-Function (sdspcount2): '<S287>/Counter1' */

        /* S-Function (sdspcount2): '<S287>/Counter2' */
        rtb_Counter2_o2 = false;
        if (MWDSP_EPH_R_B(rtb_Equal2_f, &localDW->Counter2_ClkEphState) != 0U) {
          if (localDW->Counter2_Count < ((uint8_T)255U)) {
            localDW->Counter2_Count++;
          } else {
            localDW->Counter2_Count = 0U;
          }
        }

        rtb_Counter2_o1 = localDW->Counter2_Count;
        if (localDW->Counter2_Count == ((uint8_T)32U)) {
          rtb_Counter2_o2 = true;
        }

        /* End of S-Function (sdspcount2): '<S287>/Counter2' */

        /* S-Function (sdspcount2): '<S287>/Counter' incorporates:
         *  Constant: '<S287>/Constant1'
         *  RelationalOperator: '<S287>/Equal1'
         */
        rtb_Counter_o2 = false;
        if (MWDSP_EPH_R_B(*rtd_Local_Ticks == 10.0,
                          &localDW->Counter_ClkEphState) != 0U) {
          if (localDW->Counter_Count < ((uint8_T)255U)) {
            localDW->Counter_Count++;
          } else {
            localDW->Counter_Count = 0U;
          }
        }

        rtb_Counter_o1 = localDW->Counter_Count;
        if (localDW->Counter_Count == ((uint8_T)32U)) {
          rtb_Counter_o2 = true;
        }

        /* End of S-Function (sdspcount2): '<S287>/Counter' */
      } else {
        if (localDW->ReceiveTimercanmastermessage_MO) {
          /* Disable for Enabled SubSystem: '<S287>/Receive can message' */
          if (localDW->Receivecanmessage_c.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_c);
          }

          /* End of Disable for SubSystem: '<S287>/Receive can message' */
          localDW->ReceiveTimercanmastermessage_MO = false;
        }
      }

      /* End of Outputs for SubSystem: '<S283>/Receive Timer can master message ' */

      /* Logic: '<S283>/OR' incorporates:
       *  Constant: '<S287>/Constant'
       */
      rtb_Equal1_h2 = ((localB->Receivecanmessage_c.SFunction_o1 != 0) ||
                       (localB->Receivecanmessage_c.SFunction_o1_b != 0));

      /* Outputs for Enabled SubSystem: '<S283>/Desync calculation' incorporates:
       *  EnablePort: '<S285>/Enable'
       */
      if (rtb_Equal1_h2) {
        /* Switch: '<S285>/Switch1' incorporates:
         *  Sum: '<S285>/Minus'
         *  Sum: '<S285>/Minus1'
         */
        if (localB->Receivecanmessage_c.SFunction_o1 > 0) {
          DesynckTicks45 = localC->Sum - (real_T)*rtd_Local_Ticks;
        } else {
          DesynckTicks45 = localC->Sum1 - (real_T)*rtd_Local_Ticks;
        }

        /* End of Switch: '<S285>/Switch1' */

        /* DataStoreWrite: '<S285>/Data Store Write1' */
        localDW->Desync_Ticks = DesynckTicks45;

        /* DataStoreWrite: '<S285>/Data Store Write2' incorporates:
         *  Constant: '<S285>/Constant2'
         */
        localDW->SyncMesRec = ((uint8_T)1U);
      }

      /* End of Outputs for SubSystem: '<S283>/Desync calculation' */

      /* Outputs for Enabled SubSystem: '<S283>/If Action Subsystem' incorporates:
       *  EnablePort: '<S286>/Enable'
       */
      if ((*rtd_Local_Ticks <= 61.0) && (*rtd_Local_Ticks > 60.0) &&
          (localDW->SyncMesRec != 0)) {
        /* RelationalOperator: '<S286>/Equal' incorporates:
         *  Constant: '<S286>/Constant1'
         *  DataStoreRead: '<S286>/Data Store Read'
         */
        rtb_Equal6_g = (localDW->Role_ID == 2.0);

        /* Switch: '<S286>/Switch1' */
        if (rtb_Equal6_g) {
          /* DataStoreWrite: '<S286>/Data Store Write1' incorporates:
           *  DataStoreRead: '<S286>/Data Store Read1'
           *  DataTypeConversion: '<S286>/Data Type Conversion'
           *  Sum: '<S286>/Minus1'
           */
          *rtd_Local_Ticks = (uint16_T)((uint32_T)(uint16_T)
            localDW->Desync_Ticks + *rtd_Local_Ticks);
        }

        /* End of Switch: '<S286>/Switch1' */

        /* DataStoreWrite: '<S286>/Data Store Write2' incorporates:
         *  Constant: '<S286>/Constant2'
         */
        localDW->SyncMesRec = ((uint8_T)0U);

        /* S-Function (sdspcount2): '<S286>/Counter1' */
        rtb_Counter1_o2_l = false;
        if (MWDSP_EPH_R_B(rtb_Equal6_g, &localDW->Counter1_ClkEphState_g) != 0U)
        {
          if (localDW->Counter1_Count_m < ((uint8_T)255U)) {
            localDW->Counter1_Count_m++;
          } else {
            localDW->Counter1_Count_m = 0U;
          }
        }

        rtb_Counter1_o1_a = localDW->Counter1_Count_m;
        if (localDW->Counter1_Count_m == ((uint8_T)32U)) {
          rtb_Counter1_o2_l = true;
        }

        /* End of S-Function (sdspcount2): '<S286>/Counter1' */
      }

      /* End of Outputs for SubSystem: '<S283>/If Action Subsystem' */

      /* S-Function (sdspcount2): '<S283>/Counter1' incorporates:
       *  Constant: '<S283>/Constant6'
       *  Constant: '<S283>/Constant7'
       *  DataStoreRead: '<S283>/Data Store Read4'
       *  DataTypeConversion: '<S283>/Data Type Conversion3'
       *  Logic: '<S283>/AND1'
       *  Logic: '<S283>/AND2'
       *  RelationalOperator: '<S283>/GreaterThanOrEqual2'
       *  RelationalOperator: '<S283>/GreaterThanOrEqual3'
       */
      rtb_Counter1_o2 = false;
      if (MWDSP_EPH_R_B(rtb_Equal1_h2, &localDW->Counter1_ClkEphState) != 0U) {
        if (localDW->Counter1_Count < ((uint8_T)255U)) {
          localDW->Counter1_Count++;
        } else {
          localDW->Counter1_Count = 0U;
        }
      }

      rtb_Counter1_o1 = localDW->Counter1_Count;
      if (localDW->Counter1_Count == ((uint8_T)32U)) {
        rtb_Counter1_o2 = true;
      }

      /* End of S-Function (sdspcount2): '<S283>/Counter1' */

      /* S-Function (sdspcount2): '<S283>/Counter3' */
      rtb_Counter3_o2 = false;
      if (MWDSP_EPH_R_B(rtb_AND_l, &localDW->Counter3_ClkEphState) != 0U) {
        if (localDW->Counter3_Count < ((uint8_T)255U)) {
          localDW->Counter3_Count++;
        } else {
          localDW->Counter3_Count = 0U;
        }
      }

      rtb_Counter3_o1 = localDW->Counter3_Count;
      if (localDW->Counter3_Count == ((uint8_T)32U)) {
        rtb_Counter3_o2 = true;
      }

      /* End of S-Function (sdspcount2): '<S283>/Counter3' */

      /* Update for Enabled SubSystem: '<S284>/Send can message' */
      Sendcanmessage_Update(10U, localB->DataTypeConversion1,
                            &localDW->Sendcanmessage_nf);

      /* End of Update for SubSystem: '<S284>/Send can message' */

      /* Update for Enabled SubSystem: '<S284>/Send can message1' */
      Sendcanmessage_Update(9U, localB->DataTypeConversion2,
                            &localDW->Sendcanmessage1_p);

      /* End of Update for SubSystem: '<S284>/Send can message1' */

      /* Update for Enabled SubSystem: '<S284>/Send can message2' */
      Sendcanmessage2_Update(8U, localB->DataTypeConversion4,
        &localDW->Sendcanmessage2_d);

      /* End of Update for SubSystem: '<S284>/Send can message2' */

      /* Update for Enabled SubSystem: '<S284>/Send can message3' */
      Sendcanmessage2_Update(7U, localB->DataTypeConversion5,
        &localDW->Sendcanmessage3_a);

      /* End of Update for SubSystem: '<S284>/Send can message3' */

      /* Update for Enabled SubSystem: '<S284>/Send can message4' */
      Sendcanmessage2_Update(6U, localB->DataTypeConversion6,
        &localDW->Sendcanmessage4_j);

      /* End of Update for SubSystem: '<S284>/Send can message4' */
    } else {
      if (localDW->u332ControllerMatrixCycle_Board) {
        /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
        if (localDW->ReceiveTrailer1board4inputang_i.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTrailer1board4inputang_i);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */
        if (localDW->ReceiveTrailer2board5inputang_m.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTrailer2board5inputang_m);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_c.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_c);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */
        if (localDW->ReceiveTruck2Board2CalcSteeri_h.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck2Board2CalcSteeri_h);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */
        if (localDW->ReceiveTruck3Board3CalcSteeri_c.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck3Board3CalcSteeri_c);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/If Action Subsystem3' */
        if (localDW->IfActionSubsystem3_m.IfActionSubsystem3_MODE) {
          IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_m);
        }

        /* End of Disable for SubSystem: '<S284>/If Action Subsystem3' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message' */
        if (localDW->Sendcanmessage_nf.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage_nf);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message1' */
        if (localDW->Sendcanmessage1_p.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage1_p);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message2' */
        if (localDW->Sendcanmessage2_d.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage2_d);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message3' */
        if (localDW->Sendcanmessage3_a.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage3_a);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message3' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message4' */
        if (localDW->Sendcanmessage4_j.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage4_j);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message4' */

        /* Disable for Enabled SubSystem: '<S283>/Receive Timer can master message ' */
        if (localDW->ReceiveTimercanmastermessage_MO) {
          /* Disable for Enabled SubSystem: '<S287>/Receive can message' */
          if (localDW->Receivecanmessage_c.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_c);
          }

          /* End of Disable for SubSystem: '<S287>/Receive can message' */
          localDW->ReceiveTimercanmastermessage_MO = false;
        }

        /* End of Disable for SubSystem: '<S283>/Receive Timer can master message ' */
        localDW->u332ControllerMatrixCycle_Board = false;
      }
    }

    /* End of Outputs for SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */

    /* DataStoreRead: '<S140>/Data Store Read1' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S127>/Constant1'
     *  Constant: '<S127>/Constant2'
     *  Constant: '<S127>/Constant3'
     *  Constant: '<S141>/Constant19'
     *  Constant: '<S141>/Constant24'
     *  Constant: '<S141>/Constant4'
     *  Constant: '<S141>/Constant6'
     *  Constant: '<S141>/Constant7'
     *  Constant: '<S142>/Constant1'
     *  Constant: '<S142>/Constant11'
     *  Constant: '<S142>/Constant16'
     *  Constant: '<S142>/Constant2'
     *  Constant: '<S142>/Constant26'
     *  Constant: '<S142>/Constant29'
     *  Constant: '<S142>/Constant3'
     *  Constant: '<S142>/Constant30'
     *  Constant: '<S142>/Constant31'
     *  Constant: '<S142>/Constant32'
     *  Constant: '<S142>/Constant33'
     *  Constant: '<S142>/Constant34'
     *  Constant: '<S142>/Constant35'
     *  Constant: '<S142>/Constant4'
     *  Constant: '<S142>/Constant42'
     *  Constant: '<S142>/Constant45'
     *  Constant: '<S142>/Constant5'
     *  Constant: '<S142>/Constant54'
     *  Constant: '<S142>/Constant55'
     *  Constant: '<S142>/Constant56'
     *  Constant: '<S193>/Constant'
     *  Constant: '<S283>/Constant6'
     *  Constant: '<S283>/Constant7'
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant11'
     *  Constant: '<S284>/Constant16'
     *  Constant: '<S284>/Constant2'
     *  Constant: '<S284>/Constant26'
     *  Constant: '<S284>/Constant29'
     *  Constant: '<S284>/Constant3'
     *  Constant: '<S284>/Constant30'
     *  Constant: '<S284>/Constant31'
     *  Constant: '<S284>/Constant32'
     *  Constant: '<S284>/Constant33'
     *  Constant: '<S284>/Constant34'
     *  Constant: '<S284>/Constant4'
     *  Constant: '<S284>/Constant5'
     *  Constant: '<S287>/Constant'
     *  Constant: '<S295>/Constant'
     *  DataStoreRead: '<S141>/Data Store Read4'
     *  DataStoreRead: '<S193>/Data Store Read1'
     *  DataStoreRead: '<S283>/Data Store Read4'
     *  DataStoreRead: '<S295>/Data Store Read1'
     *  DataTypeConversion: '<S141>/Data Type Conversion3'
     *  DataTypeConversion: '<S142>/Data Type Conversion3'
     *  DataTypeConversion: '<S283>/Data Type Conversion3'
     *  DataTypeConversion: '<S284>/Data Type Conversion3'
     *  Logic: '<S127>/OR'
     *  Logic: '<S141>/AND1'
     *  Logic: '<S141>/AND2'
     *  Logic: '<S141>/AND6'
     *  Logic: '<S142>/AND17'
     *  Logic: '<S142>/AND18'
     *  Logic: '<S142>/AND28'
     *  Logic: '<S142>/AND7'
     *  Logic: '<S193>/AND'
     *  Logic: '<S193>/NOT'
     *  Logic: '<S283>/AND1'
     *  Logic: '<S283>/AND2'
     *  Logic: '<S284>/AND17'
     *  Logic: '<S284>/AND18'
     *  Logic: '<S284>/AND7'
     *  Logic: '<S295>/AND'
     *  Logic: '<S295>/NOT'
     *  RelationalOperator: '<S127>/Equal'
     *  RelationalOperator: '<S127>/Equal1'
     *  RelationalOperator: '<S127>/Equal2'
     *  RelationalOperator: '<S127>/Equal3'
     *  RelationalOperator: '<S141>/GreaterThanOrEqual13'
     *  RelationalOperator: '<S141>/GreaterThanOrEqual14'
     *  RelationalOperator: '<S141>/GreaterThanOrEqual15'
     *  RelationalOperator: '<S141>/GreaterThanOrEqual2'
     *  RelationalOperator: '<S141>/GreaterThanOrEqual3'
     *  RelationalOperator: '<S142>/Equal1'
     *  RelationalOperator: '<S142>/Equal13'
     *  RelationalOperator: '<S142>/Equal14'
     *  RelationalOperator: '<S142>/Equal15'
     *  RelationalOperator: '<S142>/Equal16'
     *  RelationalOperator: '<S142>/Equal23'
     *  RelationalOperator: '<S142>/Equal24'
     *  RelationalOperator: '<S142>/Equal8'
     *  RelationalOperator: '<S142>/GreaterThanOrEqual1'
     *  RelationalOperator: '<S142>/GreaterThanOrEqual17'
     *  RelationalOperator: '<S142>/GreaterThanOrEqual18'
     *  RelationalOperator: '<S142>/GreaterThanOrEqual29'
     *  RelationalOperator: '<S193>/Equal'
     *  RelationalOperator: '<S283>/GreaterThanOrEqual2'
     *  RelationalOperator: '<S283>/GreaterThanOrEqual3'
     *  RelationalOperator: '<S284>/Equal1'
     *  RelationalOperator: '<S284>/Equal13'
     *  RelationalOperator: '<S284>/Equal14'
     *  RelationalOperator: '<S284>/Equal15'
     *  RelationalOperator: '<S284>/Equal16'
     *  RelationalOperator: '<S284>/Equal8'
     *  RelationalOperator: '<S284>/GreaterThanOrEqual1'
     *  RelationalOperator: '<S284>/GreaterThanOrEqual17'
     *  RelationalOperator: '<S284>/GreaterThanOrEqual18'
     *  RelationalOperator: '<S295>/Equal'
     */
    TrailerOneAttach = localDW->TrailerOneAttachedFlag;

    /* DataStoreRead: '<S140>/Data Store Read17' */
    VoteAngle1 = localDW->Votes_Angle.First_Board;
    VoteAngle2 = localDW->Votes_Angle.Second_Board;
    VoteAngle3 = localDW->Votes_Angle.Third_Board;

    /* DataStoreRead: '<S140>/Data Store Read18' */
    InputAngleBoard4 = localDW->InputAngle1;

    /* DataStoreRead: '<S140>/Data Store Read2' */
    TrailerTwoAttach = localDW->TwoTrailersAttachedFlag;

    /* DataStoreRead: '<S140>/Data Store Read3' */
    InputAngleBoard5 = localDW->InputAngle2;

    /* DataStoreRead: '<S140>/Data Store Read4' */
    VoteEncoder1 = localDW->Votes_Encoder.First_Board;
    VoteEncoder2 = localDW->Votes_Encoder.Second_Board;
    VoteEncoder3 = localDW->Votes_Encoder.Third_Board;
  } else {
    if (localDW->u33MatrixCycleManager_MODE) {
      /* Disable for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
      if (localDW->u331ControllerMatrixCycleTruckB) {
        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message ' */
        if (localDW->ReceiveTimercanmastermessage__j) {
          /* Disable for Enabled SubSystem: '<S151>/Receive can message' */
          if (localDW->Receivecanmessage_f.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_f);
          }

          /* End of Disable for SubSystem: '<S151>/Receive can message' */
          localDW->ReceiveTimercanmastermessage__j = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message ' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 1' */
        if (localDW->ReceiveTimercanmastermessage1_M) {
          /* Disable for Enabled SubSystem: '<S152>/Receive can message' */
          if (localDW->Receivecanmessage_jy.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_jy);
          }

          /* End of Disable for SubSystem: '<S152>/Receive can message' */
          localDW->ReceiveTimercanmastermessage1_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 1' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 2' */
        if (localDW->ReceiveTimercanmastermessage2_M) {
          /* Disable for Enabled SubSystem: '<S153>/Receive can message' */
          if (localDW->Receivecanmessage_k.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_k);
          }

          /* End of Disable for SubSystem: '<S153>/Receive can message' */
          localDW->ReceiveTimercanmastermessage2_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 2' */

        /* Disable for Enabled SubSystem: '<S141>/Receive Timer can master message 3' */
        if (localDW->ReceiveTimercanmastermessage3_M) {
          /* Disable for Enabled SubSystem: '<S154>/Receive can message' */
          if (localDW->Receivecanmessage_n.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_n);
          }

          /* End of Disable for SubSystem: '<S154>/Receive can message' */
          localDW->ReceiveTimercanmastermessage3_M = false;
        }

        /* End of Disable for SubSystem: '<S141>/Receive Timer can master message 3' */
        /* Disable for Enabled SubSystem: '<S141>/Send can message' */
        if (localDW->Sendcanmessage_MODE) {
          localDW->Sendcanmessage_MODE = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message' */

        /* Disable for Enabled SubSystem: '<S141>/Send can message1' */
        if (localDW->Sendcanmessage1_MODE) {
          localDW->Sendcanmessage1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S141>/Send can message2' */
        if (localDW->Sendcanmessage2_MODE_n) {
          localDW->Sendcanmessage2_MODE_n = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S141>/Send//Receive Timer can master message ' */
        if (localDW->SendReceiveTimercanmastermessag) {
          /* Disable for If: '<S158>/If' */
          if (localDW->If_ActiveSubsystem == 0) {
          }

          localDW->If_ActiveSubsystem = -1;
          localDW->SendReceiveTimercanmastermessag = false;
        }

        /* End of Disable for SubSystem: '<S141>/Send//Receive Timer can master message ' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */
        if (localDW->ReceiveTrailer1board4inputang_a) {
          /* Disable for Enabled SubSystem: '<S196>/Receive can message' */
          if (localDW->Receivecanmessage_m.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_m);
          }

          /* End of Disable for SubSystem: '<S196>/Receive can message' */
          localDW->ReceiveTrailer1board4inputang_a = false;
        }

        /* End of Disable for SubSystem: '<S142>/Receive Trailer 1 board 4 input angel' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */
        if (localDW->ReceiveTrailer2board5inputangel) {
          /* Disable for Enabled SubSystem: '<S197>/Receive can message' */
          if (localDW->Receivecanmessage_d.Receivecanmessage_MODE) {
            Receivecanmessage_g_Disable(&localDW->Receivecanmessage_d);
          }

          /* End of Disable for SubSystem: '<S197>/Receive can message' */
          localDW->ReceiveTrailer2board5inputangel = false;
        }

        /* End of Disable for SubSystem: '<S142>/Receive Trailer 2 board 5 input angel' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_d.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_d);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */
        if (localDW->ReceiveTruck2Board2CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck2Board2CalcSteering);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 2 Board 2 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */
        if (localDW->ReceiveTruck3Board3CalcSteering.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck3Board3CalcSteering);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 3 Board 3 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_a.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_a);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle1' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_i.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_i);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle2' */

        /* Disable for Enabled SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_k.ReceiveTruck1Board1CalcSteeri_h)
        {
          ReceiveTruck1Board1Calc_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_k);
        }

        /* End of Disable for SubSystem: '<S142>/Receive Truck 1 Board 1 Calc Steering Angle3' */

        /* Disable for Enabled SubSystem: '<S142>/If Action Subsystem3' */
        if (localDW->IfActionSubsystem3_n.IfActionSubsystem3_MODE) {
          IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_n);
        }

        /* End of Disable for SubSystem: '<S142>/If Action Subsystem3' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message' */
        if (localDW->Sendcanmessage_i.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage_i);
        }

        /* End of Disable for SubSystem: '<S142>/Send can message' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message1' */
        if (localDW->Sendcanmessage1_e.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage1_e);
        }

        /* End of Disable for SubSystem: '<S142>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message2' */
        if (localDW->Sendcanmessage2_MODE) {
          localDW->Sendcanmessage2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message3' */
        if (localDW->Sendcanmessage3_MODE) {
          localDW->Sendcanmessage3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message3' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message4' */
        if (localDW->Sendcanmessage4_MODE) {
          localDW->Sendcanmessage4_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message4' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message5' */
        if (localDW->Sendcanmessage5_MODE) {
          localDW->Sendcanmessage5_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message5' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message6' */
        if (localDW->Sendcanmessage6_MODE) {
          localDW->Sendcanmessage6_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message6' */

        /* Disable for Enabled SubSystem: '<S142>/Send can message7' */
        if (localDW->Sendcanmessage7_MODE) {
          localDW->Sendcanmessage7_MODE = false;
        }

        /* End of Disable for SubSystem: '<S142>/Send can message7' */
        localDW->u331ControllerMatrixCycleTruckB = false;
      }

      /* End of Disable for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */

      /* Disable for Enabled SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
      if (localDW->u332ControllerMatrixCycle_Board) {
        /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */
        if (localDW->ReceiveTrailer1board4inputang_i.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTrailer1board4inputang_i);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Trailer 1 board 4 input angel' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */
        if (localDW->ReceiveTrailer2board5inputang_m.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTrailer2board5inputang_m);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Trailer 2 board 5 input angel' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */
        if (localDW->ReceiveTruck1Board1CalcSteeri_c.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck1Board1CalcSteeri_c);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 1 Board 1 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */
        if (localDW->ReceiveTruck2Board2CalcSteeri_h.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck2Board2CalcSteeri_h);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 2 Board 2 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */
        if (localDW->ReceiveTruck3Board3CalcSteeri_c.ReceiveTrailer1board4inputang_b)
        {
          ReceiveTrailer1board4in_Disable
            (&localDW->ReceiveTruck3Board3CalcSteeri_c);
        }

        /* End of Disable for SubSystem: '<S284>/Receive Truck 3 Board 3 Calc Steering Angle' */

        /* Disable for Enabled SubSystem: '<S284>/If Action Subsystem3' */
        if (localDW->IfActionSubsystem3_m.IfActionSubsystem3_MODE) {
          IfActionSubsystem3_Disable(&localDW->IfActionSubsystem3_m);
        }

        /* End of Disable for SubSystem: '<S284>/If Action Subsystem3' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message' */
        if (localDW->Sendcanmessage_nf.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage_nf);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message1' */
        if (localDW->Sendcanmessage1_p.Sendcanmessage_MODE) {
          Sendcanmessage_Disable(&localDW->Sendcanmessage1_p);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message1' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message2' */
        if (localDW->Sendcanmessage2_d.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage2_d);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message2' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message3' */
        if (localDW->Sendcanmessage3_a.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage3_a);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message3' */

        /* Disable for Enabled SubSystem: '<S284>/Send can message4' */
        if (localDW->Sendcanmessage4_j.Sendcanmessage2_MODE) {
          Sendcanmessage2_Disable(&localDW->Sendcanmessage4_j);
        }

        /* End of Disable for SubSystem: '<S284>/Send can message4' */

        /* Disable for Enabled SubSystem: '<S283>/Receive Timer can master message ' */
        if (localDW->ReceiveTimercanmastermessage_MO) {
          /* Disable for Enabled SubSystem: '<S287>/Receive can message' */
          if (localDW->Receivecanmessage_c.Receivecanmessage_MODE) {
            Receivecanmessage_Disable(&localDW->Receivecanmessage_c);
          }

          /* End of Disable for SubSystem: '<S287>/Receive can message' */
          localDW->ReceiveTimercanmastermessage_MO = false;
        }

        /* End of Disable for SubSystem: '<S283>/Receive Timer can master message ' */
        localDW->u332ControllerMatrixCycle_Board = false;
      }

      /* End of Disable for SubSystem: '<S127>/4.3.3.2 Controller Matrix Cycle_Board 4 and 5' */
      localDW->u33MatrixCycleManager_MODE = false;
    }
  }

  /* End of Logic: '<S117>/NOT1' */
  /* End of Outputs for SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */

  /* Switch: '<S117>/Switch1' incorporates:
   *  Constant: '<S117>/Constant1'
   *  Constant: '<S117>/Constant2'
   *  DataStoreRead: '<S117>/Data Store Read1'
   *  RelationalOperator: '<S117>/Equal2'
   */
  if (localDW->Role_ID == 1.0) {
    *rtd_Master = 1.0;
  } else {
    *rtd_Master = 0.0;
  }

  /* End of Switch: '<S117>/Switch1' */
}

/* ConstCode for function-call system: '<S5>/4.3 TTA System' */
void u3TTASystem_Const(void)
{
  uint16_T EstimatedTimeCan1_Init_tmp;
  real_T EstimatedTimeCan1_tmp;

  /* ConstCode for Enabled SubSystem: '<S117>/4.3.1 Initialization' */
  /* ConstCode for Enabled SubSystem: '<S125>/RoleID and Global Time init' */
  /* ConstCode for Enabled SubSystem: '<S130>/Global Time Initialization Slave' */
  /* ConstCode for Sum: '<S136>/Sum' incorporates:
   *  Constant: '<S136>/Constant'
   *  Constant: '<S136>/delay_estimation_1'
   *  Sum: '<S136>/Sum1'
   */
  EstimatedTimeCan1_Init_tmp = (uint16_T)((uint32_T)((uint16_T)25U) + ((uint16_T)
    1U));
  EstimatedTimeCan1_Init = EstimatedTimeCan1_Init_tmp;

  /* ConstCode for Sum: '<S136>/Sum1' */
  EstimatedTimeCan2_Init = EstimatedTimeCan1_Init_tmp;

  /* End of ConstCode for SubSystem: '<S130>/Global Time Initialization Slave' */
  /* End of ConstCode for SubSystem: '<S125>/RoleID and Global Time init' */
  /* End of ConstCode for SubSystem: '<S117>/4.3.1 Initialization' */

  /* ConstCode for Enabled SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
  /* ConstCode for Enabled SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
  /* ConstCode for Enabled SubSystem: '<S141>/Desync calculation' */
  /* ConstCode for Sum: '<S145>/Sum' incorporates:
   *  Constant: '<S141>/Constant'
   *  Constant: '<S145>/delay_estimation_1'
   *  Sum: '<S145>/Sum1'
   */
  EstimatedTimeCan1_tmp = 25.0 + 1.0;
  EstimatedTimeCan1 = EstimatedTimeCan1_tmp;

  /* ConstCode for Sum: '<S145>/Sum1' */
  EstimatedTimeCan2 = EstimatedTimeCan1_tmp;

  /* End of ConstCode for SubSystem: '<S141>/Desync calculation' */
  /* End of ConstCode for SubSystem: '<S127>/4.3.3.1 Controller Matrix Cycle Truck Boards 1 2 and 3' */
  /* End of ConstCode for SubSystem: '<S117>/4.3.3 Matrix Cycle Manager' */
}

static void MedianFilterCG_resetImpl(dsp_private_MedianFilterCG *obj)
{
  real_T cnt1;
  real_T cnt2;
  int32_T i;
  for (i = 0; i < 20; i++) {
    obj->pBuf[i] = 0.0;
    obj->pPos[i] = 0.0;
    obj->pHeap[i] = 0.0;
  }

  obj->pWinLen = 20.0;
  obj->pIdx = obj->pWinLen;
  obj->pMidHeap = ceil((obj->pWinLen + 1.0) / 2.0);
  cnt1 = (obj->pWinLen - 1.0) / 2.0;
  if (cnt1 < 0.0) {
    obj->pMinHeapLength = ceil(cnt1);
  } else {
    obj->pMinHeapLength = floor(cnt1);
  }

  cnt1 = obj->pWinLen / 2.0;
  if (cnt1 < 0.0) {
    obj->pMaxHeapLength = ceil(cnt1);
  } else {
    obj->pMaxHeapLength = floor(cnt1);
  }

  cnt1 = 1.0;
  cnt2 = obj->pWinLen;
  for (i = 0; i < 20; i++) {
    if ((int32_T)fmod(20.0 + -(real_T)i, 2.0) == 0) {
      obj->pPos[(20 - i) - 1] = cnt1;
      cnt1++;
    } else {
      obj->pPos[(20 - i) - 1] = cnt2;
      cnt2--;
    }

    obj->pHeap[(int32_T)obj->pPos[(20 - i) - 1] - 1] = 20.0 + -(real_T)i;
  }
}

static void MedianFilterCG_trickleDownMax(dsp_private_MedianFilterCG *obj,
  real_T i)
{
  real_T temp;
  real_T u;
  real_T ind2;
  int32_T temp_tmp;
  boolean_T exitg1;
  exitg1 = false;
  while ((!exitg1) && (i >= -obj->pMaxHeapLength)) {
    if ((i < -1.0) && (i > -obj->pMaxHeapLength) && (obj->pBuf[(int32_T)
         obj->pHeap[(int32_T)(i + obj->pMidHeap) - 1] - 1] < obj->pBuf[(int32_T)
         obj->pHeap[(int32_T)((i - 1.0) + obj->pMidHeap) - 1] - 1])) {
      i--;
    }

    u = i / 2.0;
    if (u < 0.0) {
      u = ceil(u);
    } else {
      u = floor(u);
    }

    ind2 = i + obj->pMidHeap;
    if (obj->pBuf[(int32_T)obj->pHeap[(int32_T)(u + obj->pMidHeap) - 1] - 1] >=
        obj->pBuf[(int32_T)obj->pHeap[(int32_T)ind2 - 1] - 1]) {
      exitg1 = true;
    } else {
      u = i / 2.0;
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      u += obj->pMidHeap;
      temp_tmp = (int32_T)u - 1;
      temp = obj->pHeap[temp_tmp];
      obj->pHeap[temp_tmp] = obj->pHeap[(int32_T)ind2 - 1];
      obj->pHeap[(int32_T)ind2 - 1] = temp;
      obj->pPos[(int32_T)obj->pHeap[(int32_T)u - 1] - 1] = u;
      obj->pPos[(int32_T)obj->pHeap[(int32_T)ind2 - 1] - 1] = ind2;
      i *= 2.0;
    }
  }
}

static void MedianFilterCG_trickleDownMin(dsp_private_MedianFilterCG *obj,
  real_T i)
{
  real_T temp;
  real_T u;
  real_T ind1;
  int32_T tmp;
  boolean_T exitg1;
  exitg1 = false;
  while ((!exitg1) && (i <= obj->pMinHeapLength)) {
    if ((i > 1.0) && (i < obj->pMinHeapLength) && (obj->pBuf[(int32_T)obj->
         pHeap[(int32_T)((i + 1.0) + obj->pMidHeap) - 1] - 1] < obj->pBuf
         [(int32_T)obj->pHeap[(int32_T)(i + obj->pMidHeap) - 1] - 1])) {
      i++;
    }

    u = i / 2.0;
    if (u < 0.0) {
      u = ceil(u);
    } else {
      u = floor(u);
    }

    ind1 = i + obj->pMidHeap;
    if (obj->pBuf[(int32_T)obj->pHeap[(int32_T)ind1 - 1] - 1] >= obj->pBuf
        [(int32_T)obj->pHeap[(int32_T)(u + obj->pMidHeap) - 1] - 1]) {
      exitg1 = true;
    } else {
      u = i / 2.0;
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      u += obj->pMidHeap;
      temp = obj->pHeap[(int32_T)ind1 - 1];
      tmp = (int32_T)u - 1;
      obj->pHeap[(int32_T)ind1 - 1] = obj->pHeap[tmp];
      obj->pHeap[tmp] = temp;
      obj->pPos[(int32_T)obj->pHeap[(int32_T)ind1 - 1] - 1] = ind1;
      obj->pPos[(int32_T)obj->pHeap[(int32_T)u - 1] - 1] = u;
      i *= 2.0;
    }
  }
}

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void SystemCore_release(dsp_MedianFilter *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->NumChannels = -1;
    if (obj->pMID.isInitialized == 1) {
      obj->pMID.isInitialized = 2;
    }
  }
}

static void SystemCore_delete(dsp_MedianFilter *obj)
{
  SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_MedianFilter *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete(obj);
  }
}

/* Model step function */
void HANcoder_E407_DYS_MP_step(void)
{
  /* local block i/o variables */
  uint16_T rtb_PProdOut;
  boolean_T rtb_Level2MfileSFunction_e;
  dsp_MedianFilter *obj;
  dsp_private_MedianFilterCG *obj_0;
  real_T vprev;
  real_T p;
  boolean_T flag;
  real_T temp;
  uint32_T rtb_Sum;
  real_T rtb_Divide;
  uint16_T rtb_IProdOut;
  uint16_T rtb_DProdOut;
  int8_T rtAction;
  int8_T rtPrevAction;
  int32_T temp_tmp;
  real_T flag_tmp_tmp;
  boolean_T exitg1;

  /* M-S-Function: '<S13>/Level-2 M-file S-Function' */
  /* determine if the counter needs a reset  */
  if (rtB.DataTypeConversion > 0) {
    QuadEncResetCounter(QUADENC_TIM1_PE9_PE11);
  }

  /* read counter from the quadrature encoder module */
  EncPosition = QuadEncGetCounter(QUADENC_TIM1_PE9_PE11);

  /* DataTypeConversion: '<S2>/Cast To Double' incorporates:
   *  DataStoreWrite: '<S2>/Data Store Write1'
   */
  rtDWork.EncoderValue = EncPosition;

  /* M-S-Function: '<S11>/Level-2 M-file S-Function' */
  /* read from analog input for filtered inputs*/
  rtb_PProdOut = AninGet(ANIN_PORTF_PIN6,0);

  /* Product: '<S2>/Divide' incorporates:
   *  Constant: '<S2>/Constant36'
   */
  rtb_Divide = (real_T)rtb_PProdOut / 15.170370370370371;

  /* MATLABSystem: '<S2>/Median Filter' */
  obj = &rtDWork.obj;
  obj_0 = &rtDWork.obj.pMID;
  if (obj->pMID.isInitialized != 1) {
    obj->pMID.isSetupComplete = false;
    obj->pMID.isInitialized = 1;
    obj->pMID.isSetupComplete = true;
    MedianFilterCG_resetImpl(&obj->pMID);
  }

  vprev = obj->pMID.pBuf[(int32_T)obj->pMID.pIdx - 1];
  obj->pMID.pBuf[(int32_T)obj->pMID.pIdx - 1] = rtb_Divide;
  p = obj->pMID.pPos[(int32_T)obj->pMID.pIdx - 1];
  obj->pMID.pIdx++;
  if (obj->pMID.pWinLen + 1.0 == obj->pMID.pIdx) {
    obj->pMID.pIdx = 1.0;
  }

  if (p > obj->pMID.pMidHeap) {
    if (vprev < rtb_Divide) {
      MedianFilterCG_trickleDownMin(&obj->pMID, (p - obj->pMID.pMidHeap) * 2.0);
    } else {
      rtb_Divide = p - obj->pMID.pMidHeap;
      exitg1 = false;
      while ((!exitg1) && (rtb_Divide > 0.0)) {
        flag_tmp_tmp = floor(rtb_Divide / 2.0);
        flag = (obj_0->pBuf[(int32_T)obj_0->pHeap[(int32_T)(rtb_Divide +
                 obj_0->pMidHeap) - 1] - 1] < obj_0->pBuf[(int32_T)obj_0->pHeap
                [(int32_T)(flag_tmp_tmp + obj_0->pMidHeap) - 1] - 1]);
        if (!flag) {
          exitg1 = true;
        } else {
          vprev = rtb_Divide + obj_0->pMidHeap;
          p = floor(rtb_Divide / 2.0) + obj_0->pMidHeap;
          temp = obj_0->pHeap[(int32_T)vprev - 1];
          obj_0->pHeap[(int32_T)vprev - 1] = obj_0->pHeap[(int32_T)p - 1];
          obj_0->pHeap[(int32_T)p - 1] = temp;
          obj_0->pPos[(int32_T)obj_0->pHeap[(int32_T)vprev - 1] - 1] = vprev;
          obj_0->pPos[(int32_T)obj_0->pHeap[(int32_T)p - 1] - 1] = p;
          rtb_Divide = flag_tmp_tmp;
        }
      }

      if (rtb_Divide == 0.0) {
        MedianFilterCG_trickleDownMax(&obj->pMID, -1.0);
      }
    }
  } else if (p < obj->pMID.pMidHeap) {
    if (rtb_Divide < vprev) {
      MedianFilterCG_trickleDownMax(&obj->pMID, (p - obj->pMID.pMidHeap) * 2.0);
    } else {
      rtb_Divide = p - obj->pMID.pMidHeap;
      exitg1 = false;
      while ((!exitg1) && (rtb_Divide < 0.0)) {
        vprev = rtb_Divide / 2.0;
        if (vprev < 0.0) {
          vprev = ceil(vprev);
        } else {
          vprev = -0.0;
        }

        flag = (obj_0->pBuf[(int32_T)obj_0->pHeap[(int32_T)(vprev +
                 obj_0->pMidHeap) - 1] - 1] < obj_0->pBuf[(int32_T)obj_0->pHeap
                [(int32_T)(rtb_Divide + obj_0->pMidHeap) - 1] - 1]);
        if (!flag) {
          exitg1 = true;
        } else {
          vprev = rtb_Divide / 2.0;
          if (vprev < 0.0) {
            vprev = ceil(vprev);
          } else {
            vprev = -0.0;
          }

          vprev += obj_0->pMidHeap;
          p = rtb_Divide + obj_0->pMidHeap;
          temp_tmp = (int32_T)vprev - 1;
          temp = obj_0->pHeap[temp_tmp];
          obj_0->pHeap[temp_tmp] = obj_0->pHeap[(int32_T)p - 1];
          obj_0->pHeap[(int32_T)p - 1] = temp;
          obj_0->pPos[(int32_T)obj_0->pHeap[(int32_T)vprev - 1] - 1] = vprev;
          obj_0->pPos[(int32_T)obj_0->pHeap[(int32_T)p - 1] - 1] = p;
          vprev = rtb_Divide / 2.0;
          if (vprev < 0.0) {
            rtb_Divide = ceil(vprev);
          } else {
            rtb_Divide = -0.0;
          }
        }
      }

      if (rtb_Divide == 0.0) {
        MedianFilterCG_trickleDownMin(&obj->pMID, 1.0);
      }
    }
  } else {
    if (obj->pMID.pMaxHeapLength != 0.0) {
      MedianFilterCG_trickleDownMax(&obj->pMID, -1.0);
    }

    if (obj->pMID.pMinHeapLength > 0.0) {
      MedianFilterCG_trickleDownMin(&obj->pMID, 1.0);
    }
  }

  rtb_Divide = obj->pMID.pBuf[(int32_T)obj->pMID.pHeap[(int32_T)
    obj->pMID.pMidHeap - 1] - 1];
  rtb_Divide = (obj->pMID.pBuf[(int32_T)obj->pMID.pHeap[(int32_T)
                (obj->pMID.pMidHeap - 1.0) - 1] - 1] + rtb_Divide) / 2.0;

  /* Sum: '<S2>/Subtract' incorporates:
   *  Constant: '<S2>/Constant'
   *  MATLABSystem: '<S2>/Median Filter'
   */
  rtb_Divide -= 45.0;

  /* Saturate: '<S2>/Saturation' */
  if (rtb_Divide > 180.0) {
    rtDWork.PotAngle = 180.0;
  } else if (rtb_Divide < 0.0) {
    rtDWork.PotAngle = 0.0;
  } else {
    rtDWork.PotAngle = rtb_Divide;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S14>/FixPt Relational Operator'
   *  UnitDelay: '<S14>/Delay Input1'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtB.DataTypeConversion = (0.0 > rtDWork.DelayInput1_DSTATE);

  /* Outputs for Enabled SubSystem: '<S5>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  /* Logic: '<S5>/NOT' incorporates:
   *  DataStoreRead: '<S5>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    if (!rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = true;
    }

    /* DataStoreWrite: '<S120>/Data Store Write' incorporates:
     *  Constant: '<S120>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S360>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S120>/Constant'
     *  Constant: '<S120>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else {
    if (rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = false;
    }
  }

  /* End of Logic: '<S5>/NOT' */
  /* End of Outputs for SubSystem: '<S5>/Initialize Clock Schedule' */

  /* If: '<S5>/If' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read1'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    if (0 != rtPrevAction) {
    }

    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S119>/Action Port'
     */
    /* M-S-Function: '<S357>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_e = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S119>/Multiply' incorporates:
     *  Constant: '<S119>/Constant'
     */
    rtb_Divide = rtb_Level2MfileSFunction_e ? 1.0 : 0.0;

    /* M-S-Function: '<S358>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_e = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S119>/Multiply1' incorporates:
     *  Constant: '<S119>/Constant1'
     */
    vprev = rtb_Level2MfileSFunction_e ? 2.0 : 0.0;

    /* M-S-Function: '<S359>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_e = DiginGet(DIGIN_PORTE_PIN5);

    /* Sum: '<S119>/Add' incorporates:
     *  Constant: '<S119>/Constant2'
     *  Product: '<S119>/Multiply2'
     */
    Board_ID_s = (rtb_Divide + vprev) + (rtb_Level2MfileSFunction_e ? 4.0 : 0.0);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  }

  /* End of If: '<S5>/If' */

  /* DataStoreWrite: '<S5>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' */
  /* Rounding: '<S3>/Round' incorporates:
   *  Constant: '<S3>/Constant'
   *  Product: '<S3>/Divide'
   */
  PosRound = rt_roundd((real_T)EncPosition / 8.33);

  /* DataStoreRead: '<S3>/Data Store Read' */
  Position = rtDWork.PWMValue;

  /* Sum: '<S3>/Sum' incorporates:
   *  Rounding: '<S3>/Round1'
   */
  ErrorPID = rt_roundd(Position) - PosRound;

  /* RelationalOperator: '<S3>/Equal1' incorporates:
   *  Constant: '<S3>/Constant4'
   */
  flag = (ErrorPID >= 0.0);

  /* Switch: '<S3>/Switch2' incorporates:
   *  Gain: '<S3>/Gain'
   */
  if (flag) {
    rtb_Divide = ErrorPID;
  } else {
    rtb_Divide = (-1.0) * ErrorPID;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Product: '<S86>/PProd Out' incorporates:
   *  Constant: '<S3>/Constant8'
   */
  rtb_PProdOut = (uint16_T)(rtb_Divide * positionP);

  /* Product: '<S46>/DProd Out' incorporates:
   *  Constant: '<S3>/Constant10'
   */
  rtb_DProdOut = (uint16_T)(rtb_Divide * positionD);

  /* Sum: '<S100>/Sum' incorporates:
   *  Delay: '<S49>/UD'
   *  DiscreteIntegrator: '<S70>/Integrator'
   *  SampleTimeMath: '<S49>/TSamp'
   *  Sum: '<S49>/Diff'
   *
   * About '<S49>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  rtb_Sum = (((rtb_PProdOut * 41943U) >> 6) + ((rtDWork.Integrator_DSTATE *
    53687U) >> 13)) + ((uint32_T)(uint16_T)(rtb_DProdOut - rtDWork.UD_DSTATE) <<
                       16);

  /* Saturate: '<S91>/Saturation' */
  if (rtb_Sum < 671089U) {
    MotorGivenSpeed = rtb_Sum;
  } else {
    MotorGivenSpeed = 671089U;
  }

  /* End of Saturate: '<S91>/Saturation' */

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant6'
   *  DataStoreRead: '<S3>/Data Store Read6'
   *  Switch: '<S3>/Switch5'
   *  Switch: '<S3>/Switch6'
   */
  if (rtDWork.Master > 0.0) {
    /* Switch: '<S3>/Switch' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read1'
     *  DataStoreRead: '<S3>/Data Store Read2'
     *  DataStoreRead: '<S3>/Data Store Read3'
     *  DataStoreRead: '<S3>/Data Store Read4'
     *  Logic: '<S3>/OR'
     */
    if ((rtDWork.AngleVoteError != 0.0) || (rtDWork.BoardIdError != 0.0) ||
        (rtDWork.NoOtherTruckBoardsError != 0.0) ||
        (rtDWork.NoTrailerAttachError != 0.0)) {
      /* DataTypeConversion: '<S3>/Cast' incorporates:
       *  Constant: '<S3>/Constant1'
       */
      MotorControl = (uint16_T)0.0;
    } else {
      /* DataTypeConversion: '<S3>/Cast' */
      MotorControl = (uint16_T)((real_T)MotorGivenSpeed * 0.00152587890625);
    }

    /* End of Switch: '<S3>/Switch' */

    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Constant: '<S3>/Constant7'
     *  Switch: '<S3>/Switch4'
     */
    if (flag) {
      rtB.Switch5 = false;
      rtB.Switch6 = true;
    } else {
      rtB.Switch5 = true;
      rtB.Switch6 = false;
    }

    /* End of Switch: '<S3>/Switch3' */
  } else {
    /* DataTypeConversion: '<S3>/Cast' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    MotorControl = (uint16_T)0.0;
    rtB.Switch5 = false;
    rtB.Switch6 = false;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Product: '<S59>/IProd Out' incorporates:
   *  Constant: '<S3>/Constant9'
   */
  rtb_IProdOut = (uint16_T)(rtb_Divide * positionI);

  /* DataStoreRead: '<S8>/Data Store Read' */
  EncoderValueTestErrorView = rtDWork.EncoderValueTestError;

  /* DataStoreRead: '<S8>/Data Store Read1' */
  NoOtherTruckBoardsErrorView = rtDWork.NoOtherTruckBoardsError;

  /* DataStoreRead: '<S8>/Data Store Read18' */
  AngleVoteErrorView = rtDWork.AngleVoteError;

  /* DataStoreRead: '<S8>/Data Store Read2' */
  NoTrailerAttachErrorView = rtDWork.NoTrailerAttachError;

  /* DataStoreRead: '<S8>/Data Store Read3' */
  BoardIdErrorView = rtDWork.BoardIdError;

  /* M-S-Function: '<S361>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S362>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S363>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for UnitDelay: '<S14>/Delay Input1'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtDWork.DelayInput1_DSTATE = 0.0;

  /* Update for M-S-Function: '<S114>/Level-2 M-file S-Function' */
  /* set the new duty cycle */
  PwmoutSet(PWMOUT_TIM2_PIN_PA5, MotorControl);

  /* Update for M-S-Function: '<S112>/Level-2 M-file S-Function' */
  /* update digital output */
  if (rtB.Switch5 == 0) {
    DigoutSet(DIGOUT_PORTE_PIN14, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN14, DIGOUT_HIGH);
  }

  /* Update for M-S-Function: '<S113>/Level-2 M-file S-Function' */
  /* update digital output */
  if (rtB.Switch6 == 0) {
    DigoutSet(DIGOUT_PORTE_PIN15, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN15, DIGOUT_HIGH);
  }

  /* Update for DiscreteIntegrator: '<S70>/Integrator' */
  rtDWork.Integrator_DSTATE = (uint16_T)((uint32_T)rtDWork.Integrator_DSTATE +
    rtb_IProdOut);

  /* Update for Delay: '<S49>/UD' incorporates:
   *  SampleTimeMath: '<S49>/TSamp'
   *
   * About '<S49>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  rtDWork.UD_DSTATE = rtb_DProdOut;
}

/* Model initialize function */
void HANcoder_E407_DYS_MP_initialize(void)
{
  /* Registration code */

  /* block I/O */

  /* exported global signals */
  EstimatedTimeCan1 = 26.0;
  EstimatedTimeCan2 = 26.0;
  EstimatedTimeCan1_Init = ((uint16_T)26U);
  EstimatedTimeCan2_Init = ((uint16_T)26U);

  {
    dsp_MedianFilter *obj;

    {
      /* user code (Start function Header) */
      uint8_t canResult1;
      tCanFilter canFilter1;
      uint8_t canResult2;
      tCanFilter canFilter2;

      /* user code (Start function Body) */

      /* initialize the CAN driver. */
      CanInit(64, 8);

      /* initialize the CAN I/O module for channel 1 */
      CanIoInit(0);

      /* initialize the CAN I/O module for channel 2 */
      CanIoInit(1);

      /* initialize the timer module for output compare. */
      TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

      /* Start for M-S-Function: '<S13>/Level-2 M-file S-Function' */

      /* configure the quadrature encoder module */
      QuadEncConfigure(QUADENC_TIM1_PE9_PE11, QUADENC_CFG_FLOATING);

      /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN6,0);

      /* Start for MATLABSystem: '<S2>/Median Filter' */
      rtDWork.obj.matlabCodegenIsDeleted = true;
      rtDWork.obj.isInitialized = 0;
      rtDWork.obj.NumChannels = -1;
      rtDWork.obj.matlabCodegenIsDeleted = false;
      obj = &rtDWork.obj;
      rtDWork.obj.isSetupComplete = false;
      rtDWork.obj.isInitialized = 1;
      rtDWork.obj.NumChannels = 1;
      obj->pMID.isInitialized = 0;
      rtDWork.obj.isSetupComplete = true;

      /* Start for M-S-Function: '<S12>/Level-2 M-file S-Function' */

      /* store the CAN controller's filter configuration */
      canFilter1.mask = 0x00000000;
      canFilter1.code = 0x00000000;
      canFilter1.mode = CAN_FILTER_MODE_MIXED_ID;

      /* connect and synchronize the CAN bus */
      canResult1 = CanConnect(0, 500000, &canFilter1);
      configASSERT(canResult1 == TRUE);

      /* store the CAN controller's filter configuration */
      canFilter2.mask = 0x00000000;
      canFilter2.code = 0x00000000;
      canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

      /* connect and synchronize the CAN bus */
      canResult2 = CanConnect(1, 500000, &canFilter2);
      configASSERT(canResult2 == TRUE);

      /* Start for DataStoreMemory: '<S5>/Data Store Memory5' */
      rtDWork.Master_ID = 1.0;

      /* Start for If: '<S5>/If' */
      rtDWork.If_ActiveSubsystem = -1;

      /* Start for IfAction SubSystem: '<S5>/If Action Subsystem' */
      /* Start for M-S-Function: '<S357>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S358>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S359>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

      /* End of Start for SubSystem: '<S5>/If Action Subsystem' */

      /* Start for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' incorporates:
       *  SubSystem: '<S5>/4.1 Local Time generation'
       */
      /* Start for function-call system: '<S5>/4.1 Local Time generation' */

      /* Start for Chart: '<S116>/Chart' incorporates:
       *  SubSystem: '<S5>/4.3 TTA System'
       */
      u3TTASystem_Start(&rtDWork.u3TTASystem_c);

      /* register the callback handler */
      TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
        TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

      /* End of Start for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' */

      /* Start for S-Function (sfcn_timeout_init): '<S121>/S-Function' */

      /* register the free running counter overflow callback handler */
      TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
        TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

      /* Start for M-S-Function: '<S112>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN14, DIGOUT_CFG_PUSHPULL);

      /* Start for M-S-Function: '<S113>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN15, DIGOUT_CFG_PUSHPULL);

      /* Start for S-Function (sfcn_pwmout_init): '<S115>/S-Function' */

      /* initialize the PWM module and register the callback handler */
      PwmoutInit(PWMOUT_MODULE_TIM2, 10253, PWMOUT_EDGE_ALIGNMENT);
      PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM2,
        PwmoutIRQ_PWMOUT_MODULE_TIM2);

      /* configures channel 1 */
      PwmoutConfigure(PWMOUT_TIM2_PIN_PA5, PWMOUT_ACTIVE_HIGH,
                      PWMOUT_INVERTED_OUTPUT_OFF);

      /* Start for M-S-Function: '<S6>/Level-2 M-file S-Function' */

      /* configure the stack size for the task that executes the model */
      AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
        100);

      /* configure the sample time of the model in microseconds */
      AppCtrlTaskSetPeriod(10000);

      /* Run the ADC conversions ten times faster than the Simulink model */
      ADCconversionTaskSetPeriod(10000/10);

      /* Start for M-S-Function: '<S10>/Level-2 M-file S-Function' */

      /* initialize the measurement and calibration interface */
      MacUsbComInit();
      MacInit();
    }

    /* ConstCode for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' incorporates:
     *  SubSystem: '<S5>/4.1 Local Time generation'
     */
    /* ConstCode for function-call system: '<S5>/4.1 Local Time generation' */

    /* ConstCode for Chart: '<S116>/Chart' incorporates:
     *  SubSystem: '<S5>/4.3 TTA System'
     */
    u3TTASystem_Const();

    /* End of ConstCode for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' */

    /* InitializeConditions for MATLABSystem: '<S2>/Median Filter' */
    if (rtDWork.obj.pMID.isInitialized == 1) {
      MedianFilterCG_resetImpl(&rtDWork.obj.pMID);
    }

    /* End of InitializeConditions for MATLABSystem: '<S2>/Median Filter' */

    /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' incorporates:
     *  SubSystem: '<S5>/4.1 Local Time generation'
     */
    /* System initialize for function-call system: '<S5>/4.1 Local Time generation' */

    /* SystemInitialize for Chart: '<S116>/Chart' incorporates:
     *  SubSystem: '<S5>/4.3 TTA System'
     */
    u3TTASystem_Init(&rtB.u3TTASystem_c, &rtDWork.u3TTASystem_c);

    /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S118>/S-Function' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
