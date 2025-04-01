/**
 * @file xf_hal_timer.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_TIMER_H__
#define __XF_HAL_TIMER_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_TIMER_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_tim_num_t;

typedef void (*xf_tim_cb_t)(xf_tim_num_t tim_num, void *user_data);

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_tim_init(xf_tim_num_t tim_num, uint32_t tick_freq_hz);
xf_err_t xf_tim_deinit(xf_tim_num_t tim_num);

xf_err_t xf_tim_set_cb(xf_tim_num_t tim_num, xf_tim_cb_t callback, void *user_data);

xf_err_t xf_tim_enable(xf_tim_num_t tim_num);
xf_err_t xf_tim_disable(xf_tim_num_t tim_num);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_TIMER_IS_ENABLE

#endif // __XF_HAL_TIMER_H__
