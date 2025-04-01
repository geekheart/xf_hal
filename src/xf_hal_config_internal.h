/**
 * @file xf_hal_config_internal.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief  
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_CONFIG_INTERNAL_H__
#define __XF_HAL_CONFIG_INTERNAL_H__

/* ==================== [Includes] ========================================== */

#include "xf_utils.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

// API 等级，越高等级的 API 需要对接的接口越多
// 至少需要对接一级 API
#ifndef XF_HAL_API_LEVEL
    #define XF_HAL_API_LEVEL    (1)
#endif

#if XF_HAL_API_LEVEL < 1 || XF_HAL_API_LEVEL > 3
    #error "XF_HAL_API_LEVEL must be 1, 2 or 3"
#endif

// 是否使用 GPIO 的 API
#if (!defined(XF_GPIO_ENABLE))||(XF_GPIO_ENABLE)
#   define XF_GPIO_IS_ENABLE  (1)
#else
#   define XF_GPIO_IS_ENABLE  (0)
#endif

// 是否使用 PWM 的 API
#if (!defined(XF_PWM_ENABLE))||(XF_PWM_ENABLE)
#   define XF_PWM_IS_ENABLE  (1)
#else
#   define XF_PWM_IS_ENABLE  (0)
#endif

// 是否使用 TIMER 的 API
#if (!defined(XF_TIMER_ENABLE))||(XF_TIMER_ENABLE)
#   define XF_TIMER_IS_ENABLE  (1)
#else
#   define XF_TIMER_IS_ENABLE  (0)
#endif

// 是否使用 UART 的 API
#if (!defined(XF_UART_ENABLE))||(XF_UART_ENABLE)
#   define XF_UART_IS_ENABLE  (1)
#else
#   define XF_UART_IS_ENABLE  (0)
#endif

// 是否使用 I2C 的 API
#if (!defined(XF_I2C_ENABLE))||(XF_I2C_ENABLE)
#   define XF_I2C_IS_ENABLE  (1)
#else
#   define XF_I2C_IS_ENABLE  (0)
#endif

// 是否使用 SPI 的 API
#if (!defined(XF_SPI_ENABLE))||(XF_SPI_ENABLE)
#   define XF_SPI_IS_ENABLE  (1)
#else
#   define XF_SPI_IS_ENABLE  (0)
#endif

// 是否使用 ADC 的 API
#if (!defined(XF_ADC_ENABLE))||(XF_ADC_ENABLE)
#   define XF_ADC_IS_ENABLE  (1)
#else
#   define XF_ADC_IS_ENABLE  (0)
#endif

// 是否使用 DAC 的 API
#if (!defined(XF_DAC_ENABLE))||(XF_DAC_ENABLE)
#   define XF_DAC_IS_ENABLE  (1)
#else
#   define XF_DAC_IS_ENABLE  (0)
#endif

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __XF_HAL_CONFIG_INTERNAL_H__
