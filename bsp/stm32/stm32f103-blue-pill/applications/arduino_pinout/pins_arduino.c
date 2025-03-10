/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-08-05     liYony       first version
 */
#include <Arduino.h>
#include <board.h>
#include "pins_arduino.h"

/*
    {Arduino Pin, RT-Thread Pin [, Device Name, Channel]}
    [] means optional
    Digital pins must NOT give the device name and channel.
    Analog pins MUST give the device name and channel(ADC, PWM or DAC).
    Arduino Pin must keep in sequence.
*/
const pin_map_t pin_map_table[]=
{
    {D0, GET_PIN(B,7)},
    {D1, GET_PIN(B,6)},
    {D2, GET_PIN(B,5), "pwm3", 2},  /* PWM */
    {D3, GET_PIN(B,4), "pwm3", 1},  /* PWM */
    {D4, GET_PIN(B,3), "pwm2", 2},  /* PWM */
    {D5, GET_PIN(A,15), "pwm2", 1}, /* PWM */
    {D6, GET_PIN(A,8)},
    {D7, GET_PIN(B,12)},
    {D8, GET_PIN(C,13)},            /* LED_BUILTIN */
    {D9, GET_PIN(C,14)},
    {D10, GET_PIN(C,15)},
    {D11, GET_PIN(A,0)},
    {D12, GET_PIN(B,0), "pwm3", 3}, /* PWM */
    {D13, GET_PIN(B,1), "pwm3", 4}, /* PWM */
    {D14, GET_PIN(B,9), "i2c1"},    /* I2C (Wire) */
    {D15, GET_PIN(B,8), "i2c1"},    /* I2C (Wire) */
    {D16, GET_PIN(A,12), "usb"},    /* SerialUSB */
    {D17, GET_PIN(A,11), "usb"},    /* SerialUSB */
    {D18, GET_PIN(A,10), "uart1"},  /* Serial */
    {D19, GET_PIN(A,9), "uart1"},   /* Serial */
    {D20, GET_PIN(A,2), "uart2"},   /* Serial2 */
    {D21, GET_PIN(A,3), "uart2"},   /* Serial2 */
    {D22, GET_PIN(B,10), "uart3"},  /* Serial3 */
    {D23, GET_PIN(B,11), "uart3"},  /* Serial3 */
    {D24, GET_PIN(B,15), "spi2"},   /* SPI */
    {D25, GET_PIN(B,14), "spi2"},   /* SPI */
    {D26, GET_PIN(B,13), "spi2"},   /* SPI */
    {A0, GET_PIN(A,1), "adc1", 1},  /* ADC */
    {A1, GET_PIN(A,4), "adc1", 4},  /* ADC */
    {A2, GET_PIN(A,5), "adc1", 5},  /* ADC */
    {A3, GET_PIN(A,6), "adc1", 6},  /* ADC */
    {A4, GET_PIN(A,7), "adc1", 7},  /* ADC */
    {A5, RT_NULL, "adc1", 17},      /* ADC, On-Chip: internal reference voltage, ADC_CHANNEL_VREFINT */
    {A6, RT_NULL, "adc1", 16}       /* ADC, On-Chip: internal temperature sensor, ADC_CHANNEL_TEMPSENSOR */
};
