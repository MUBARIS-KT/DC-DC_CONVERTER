#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "rtwtypes.h"
#include "pwm.h"
#include "pwm_private.h"

void config_ADCB_SOC0(void)
{
  EALLOW;
  AdcbRegs.ADCSOC0CTL.bit.CHSEL = 3U;  /* Set SOC0 channel select to ADCIN3*/
  AdcbRegs.ADCSOC0CTL.bit.TRIGSEL = 0U;
  AdcbRegs.ADCSOC0CTL.bit.ACQPS = (uint16_T)14.0;
                               /* Set SOC0 S/H Window to 15.0 ADC Clock Cycles*/
  AdcbRegs.ADCINTSOCSEL1.bit.SOC0 = 0U;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcbRegs.ADCOFFTRIM.bit.OFFTRIM = (uint16_T)AdcbRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1U;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcbRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0U;/* All in round robin mode SOC Priority*/
  EDIS;
}

void InitAdcB(void)
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_B = 1U;
  AdcbRegs.ADCCTL2.bit.PRESCALE = 8U;
  AdcSetMode((uint16_T)ADC_ADCB, (uint16_T)ADC_RESOLUTION_12BIT,(uint16_T)
             ADC_SIGNALMODE_SINGLE);

  //power up the ADC
  AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1U;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}
