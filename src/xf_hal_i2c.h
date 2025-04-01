/**
 * @file xf_hal_i2c.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_I2C_H__
#define __XF_HAL_I2C_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_I2C_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_i2c_num_t;

typedef enum _xf_i2c_hosts_t {
    _XF_I2C_HOSTS_BASE = 0,

    XF_I2C_HOSTS_MASTER = _XF_I2C_HOSTS_BASE, /*!< i2c主机模式 */
    XF_I2C_HOSTS_SLAVE, /*!< i2c从机模式 */

    _XF_I2C_HOSTS_MAX
} xf_i2c_hosts_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_i2c_init(xf_i2c_num_t i2c_num, xf_i2c_hosts_t hosts, uint32_t speed);
xf_err_t xf_i2c_deinit(xf_i2c_num_t i2c_num);

xf_err_t xf_i2c_set_addr(xf_i2c_num_t i2c_num, uint8_t addr);

xf_err_t xf_i2c_enable(xf_i2c_num_t i2c_num);
xf_err_t xf_i2c_disable(xf_i2c_num_t i2c_num);

int xf_i2c_write(xf_i2c_num_t i2c_num, const uint8_t *buffer, uint32_t size);
int xf_i2c_read(xf_i2c_num_t i2c_num, uint8_t *buffer, uint32_t size);
int xf_i2c_write_mem(xf_i2c_num_t i2c_num, uint8_t mem, uint8_t *buffer, uint32_t size);
int xf_i2c_read_mem(xf_i2c_num_t i2c_num, uint8_t mem, uint8_t *buffer, uint32_t size);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_I2C_IS_ENABLE

#endif // __XF_HAL_I2C_H__
