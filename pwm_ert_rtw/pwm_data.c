/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pwm_data.c
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

#include "pwm.h"

/* Block parameters (default storage) */
P_pwm_T pwm_P = {
  /* Expression: 50/4096
   * Referenced by: '<Root>/Gain1'
   */
  0.01220703125,

  /* Expression: 100
   * Referenced by: '<Root>/Constant5'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<Root>/Pulse Generator'
   */
  10.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<Root>/Pulse Generator'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
