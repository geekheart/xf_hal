/**
 * @file xf_hal_spi.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-01
 * 
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_HAL_SPI_H__
#define __XF_HAL_SPI_H__

/* ==================== [Includes] ========================================== */

#include "xf_hal_config_internal.h"

#if XF_SPI_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef uint32_t xf_spi_num_t;

typedef enum _xf_hal_spi_hosts_t {
    _XF_SPI_HOSTS_BASE = 0,

    XF_SPI_HOSTS_MASTER = _XF_SPI_HOSTS_BASE, /*!< 主机模式 */
    XF_SPI_HOSTS_SLAVE, /*!< 从机模式 */

    _XF_SPI_HOSTS_MAX
} xf_spi_hosts_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_spi_init(xf_spi_num_t spi_num, xf_spi_hosts_t hosts, uint32_t speed);
xf_err_t xf_spi_deinit(xf_spi_num_t spi_num);

xf_err_t xf_spi_enable(xf_spi_num_t spi_num);
xf_err_t xf_spi_disable(xf_spi_num_t spi_num);

int xf_hal_spi_write(xf_spi_num_t spi_num, const uint8_t *buffer, uint32_t size);
int xf_hal_spi_read(xf_spi_num_t spi_num, uint8_t *buffer, uint32_t size);


/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // XF_SPI_IS_ENABLE

#endif // __XF_HAL_SPI_H__
