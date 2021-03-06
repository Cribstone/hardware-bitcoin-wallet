/** \file adc.h
  *
  * \brief Describes functions, variables and constants exported by adc.c.
  *
  * This file is licensed as described by the file LICENCE.
  */

#ifndef PIC32_ADC_H_INCLUDED
#define PIC32_ADC_H_INCLUDED

#include <stdint.h>
#include "../fft.h" // for FFT_SIZE

/** Size of #sample_buffer, in number of samples.
  * \warning This must be a multiple of 16, or else hardwareRandom32Bytes()
  *          will attempt to read past the end of the sample buffer.
  */
#define ADC_SAMPLE_BUFFER_SIZE	(FFT_SIZE * 4)

extern volatile uint16_t adc_sample_buffer[ADC_SAMPLE_BUFFER_SIZE];

extern void initADC(void);
extern void beginFillingADCBuffer(void);
extern bool isADCBufferFull(void);

#endif // #ifndef PIC32_ADC_H_INCLUDED
