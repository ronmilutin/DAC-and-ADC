#ifndef BSP_H
#define BSP_H

#include  <msp430g2553.h>

#define   RAM              0x0200
#define   debounceVal      270
#define   delay5ms         1750
#define   delay15ms        5250
#define   delay200us       700
#define   delay62_5ms      0xFFFF
#define   value            R12
#define   count            R13
#define   sup              R15
#define   inf              R14
#define   SCOPE            0x10
#define   supval           0
#define   infval           1024
#define   deltaV           0x0118
#define   sample_num       8000



// LCD abstraction
#define LCDdata           &P2OUT
#define LCDdataDir        &P2DIR
#define LCDdataSel        &P2SEL
#define LCDconDir         &P1DIR
#define LCDconSel         &P1SEL
#define LCDcon            &P1OUT
#define LCDRS             0x40
#define LCDRW             0x80
#define LCDE              0x20

// PB abstraction
#define PB_SEL    &P1SEL
#define PB_DIR    &P1DIR
#define PB_IES    &P1IES
#define PB_IE     &P1IE
#define PB_IFG    &P1IFG
#define PB_PORT   &P1IN
#define OUTPUT    &P1OUT
#define PB0       0x01
#define PB1       0x02
#define PB2       0x04
#define PB3       0x08


// TIMER abstraction
#define Timercon         &TA1CTL
#define Timer1con        &TA1CTL
#define Timer1conCC2     &TA1CCTL2
#define TimerAconC0      &TACCTL0
#define clockIFG         &TA1IV
#define OverA            0x000A
#define TimerCCR2        &TA1CCR2
#define TimerIFG         TAIFG
#define Timer0           TIMER0_A0_VECTOR
#define Timer1           TIMER1_A1_VECTOR
#define TimerSEL         TASSEL_2
#define TimerIE          TAIE


#define ADCCTL1           &ADC10CTL1
#define ADCCTL0           &ADC10CTL0
#define ADCstart          ADC10SC
#define ADCon             ADC10ON
#define ADCVECTOR         ADC10_VECTOR
#define ADC_MEM           ADC10MEM
#define ADCSHT            ADC10SHT_1
#define ADCIE             ADC10IE
#define ADCIFG            ADC10IFG
#define ADCSSEL           ADC10SSEL_3


#endif
