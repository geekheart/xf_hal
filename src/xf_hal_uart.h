/**
 * @file xf_hal_uart.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_UART_H__
#define __XF_HAL_UART_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_UART_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_uart_num_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_uart_init(xf_uart_num_t uart_num, uint32_t baudrate);
xf_err_t xf_uart_deinit(xf_uart_num_t uart_num);

xf_err_t xf_uart_set_baudrate(xf_uart_num_t uart_num, uint32_t baudrate);

xf_err_t xf_uart_enable(xf_uart_num_t uart_num);
xf_err_t xf_uart_disable(xf_uart_num_t uart_num);

xf_err_t xf_uart_write(xf_uart_num_t uart_num, uint8_t *data, uint32_t len);
xf_err_t xf_uart_read(xf_uart_num_t uart_num, uint8_t *data, uint32_t len);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_UART_IS_ENABLE

#endif // __XF_HAL_UART_H__
