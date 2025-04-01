/**
 * @file xf_hal_pwm.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_PWM_H__
#define __XF_HAL_PWM_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_PWM_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_pwm_num_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_pwm_init(xf_pwm_num_t pwm_num, uint32_t freq, uint32_t duty);
xf_err_t xf_pwm_deinit(xf_pwm_num_t pwm_num);

xf_err_t xf_pwm_set_freq(xf_pwm_num_t pwm_num, uint32_t freq);
xf_err_t xf_pwm_set_duty(xf_pwm_num_t pwm_num, uint32_t duty);

xf_err_t xf_pwm_enable(xf_pwm_num_t pwm_num);
xf_err_t xf_pwm_disable(xf_pwm_num_t pwm_num);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_PWM_IS_ENABLE

#endif // __XF_HAL_PWM_H__
