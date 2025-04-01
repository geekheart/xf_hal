/**
 * @file xf_hal_dac.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_DAC_H__
#define __XF_HAL_DAC_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_DAC_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_dac_num_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_dac_init(xf_dac_num_t dac_num);
xf_err_t xf_dac_deinit(xf_dac_num_t dac_num);

xf_err_t xf_dac_enable(xf_dac_num_t dac_num);
xf_err_t xf_dac_disable(xf_dac_num_t dac_num);

xf_err_t xf_dac_write(xf_dac_num_t dac_num, uint32_t value);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_DAC_IS_ENABLE 

#endif // __XF_HAL_DAC_H__
