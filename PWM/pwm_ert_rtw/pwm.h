/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pwm.h
 *
 * Code generated for Simulink model 'pwm'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug  8 16:41:47 2024
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

#include <stddef.h>
#include "pwm_types.h"
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);

/* Block signals (default storage) */
typedef struct {
  real_T ADC;                          /* '<Root>/ADC' */
} B_pwm_T;

/* Parameters (default storage) */
struct P_pwm_T_ {
  real_T Gain_Gain;                    /* Expression: 50/4096
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 100
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pwm_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_pwm_T pwm_P;

/* Block signals (default storage) */
extern B_pwm_T pwm_B;

/* Model entry point functions */
extern void pwm_initialize(void);
extern void pwm_step(void);
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
