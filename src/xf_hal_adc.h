/**
 * @file xf_hal_adc.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_ADC_H__
#define __XF_HAL_ADC_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_ADC_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_adc_num_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_adc_init(xf_adc_num_t adc_num);
xf_err_t xf_adc_deinit(xf_adc_num_t adc_num);

xf_err_t xf_adc_enable(xf_adc_num_t adc_num);
xf_err_t xf_adc_disable(xf_adc_num_t adc_num);

uint32_t xf_adc_read(xf_adc_num_t adc_num);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_ADC_IS_ENABLE

#endif // __XF_HAL_ADC_H__
