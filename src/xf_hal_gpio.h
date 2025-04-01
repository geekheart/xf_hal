/**
 * @file xf_hal_gpio.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief
 * @version 0.1
 * @date 2025-04-01
 *
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 *
 */

#ifndef __XF_HAL_GPIO_H__
#define __XF_HAL_GPIO_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_GPIO_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_gpio_num_t;

typedef void (*xf_gpio_cb_t)(xf_gpio_num_t gpio_num);

typedef enum _xf_gpio_dir_t {
    _XF_GPIO_DIR_BASE = 0,

    XF_GPIO_DIR_IN_FLOATING = _XF_GPIO_DIR_BASE,
    XF_GPIO_DIR_IN_PULL_UP,
    XF_GPIO_DIR_IN_PULL_DOWN,
    XF_GPIO_DIR_OUT,
    XF_GPIO_DIR_OUT_OD,

    _XF_GPIO_DIR_MAX
} xf_gpio_dir_t;

typedef enum _xf_gpio_intr_type_t {
    _XF_GPIO_INTR_BASE = 0,     /*!< 基础类型 */

    XF_GPIO_INTR_TYPE_DISABLE = _XF_GPIO_INTR_BASE, /*!< 禁用中断 */
    XF_GPIO_INTR_TYPE_RISING,   /*!< 上升沿中断 */
    XF_GPIO_INTR_TYPE_FALLING,  /*!< 下降沿中断 */
    XF_GPIO_INTR_TYPE_ANY,      /*!< 双边沿中断 */

    _XF_GPIO_INTR_TYPE_MAX,     /*!< 中断类型最大值 */
} xf_gpio_intr_type_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_gpio_init(xf_gpio_num_t gpio_num, xf_gpio_dir_t direction);
xf_err_t xf_gpio_deinit(xf_gpio_num_t gpio_num);

xf_err_t xf_gpio_set_intr_type(xf_gpio_num_t gpio_num, xf_gpio_intr_type_t intr_type);
xf_err_t xf_gpio_set_intr_cb(xf_gpio_cb_t callback);

xf_err_t xf_gpio_intr_enable(xf_gpio_num_t gpio_num);
xf_err_t xf_gpio_intr_disable(xf_gpio_num_t gpio_num);

xf_err_t xf_gpio_set_level(xf_gpio_num_t gpio_num, bool level);
bool xf_gpio_get_level(xf_gpio_num_t gpio_num);


/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_GPIO_IS_ENABLE

#endif // __XF_HAL_GPIO_H__
