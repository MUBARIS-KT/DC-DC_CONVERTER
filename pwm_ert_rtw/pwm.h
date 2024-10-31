/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pwm.h
 *
 * Code generated for Simulink model 'pwm'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Aug  6 17:49:08 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef pwm_h_
#define pwm_h_
#ifndef pwm_COMMON_INCLUDES_
#define pwm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "IQmathLib.h"
#endif                                 /* pwm_COMMON_INCLUDES_ */

#include "pwm_types.h"
#include <string.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);
extern void configureIXbar(void);

/* Block signals (default storage) */
typedef struct {
  real_T ADC1;                         /* '<Root>/ADC1' */
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
} B_pwm_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
} DW_pwm_T;

/* Parameters (default storage) */
struct P_pwm_T_ {
  real_T Gain1_Gain;                   /* Expression: 50/4096
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<Root>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<Root>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pwm_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_pwm_T pwm_P;

/* Block signals (default storage) */
extern B_pwm_T pwm_B;

/* Block states (default storage) */
extern DW_pwm_T pwm_DW;

/* External function called from main */
extern void pwm_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void pwm_initialize(void);
extern void pwm_step0(void);
extern void pwm_step1(void);
extern void pwm_terminate(void);

/* Real-time Model object */
extern RT_MODEL_pwm_T *const pwm_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'pwm'
 */
#endif                                 /* pwm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
