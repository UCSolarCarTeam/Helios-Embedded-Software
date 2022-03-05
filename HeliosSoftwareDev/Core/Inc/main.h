/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define SPI1_CLK_Pin GPIO_PIN_5
#define SPI1_CLK_GPIO_Port GPIOA
#define SPI1_MISO_Pin GPIO_PIN_6
#define SPI1_MISO_GPIO_Port GPIOA
#define SPI1_MOSI_Pin GPIO_PIN_7
#define SPI1_MOSI_GPIO_Port GPIOA
#define CAN_INT_Pin GPIO_PIN_4
#define CAN_INT_GPIO_Port GPIOC
#define CAN_RX0BF_Pin GPIO_PIN_5
#define CAN_RX0BF_GPIO_Port GPIOC
#define CAN_RX1BF_Pin GPIO_PIN_0
#define CAN_RX1BF_GPIO_Port GPIOB
#define CAN_TX0RTS_Pin GPIO_PIN_1
#define CAN_TX0RTS_GPIO_Port GPIOB
#define CAN_TX1RTS_Pin GPIO_PIN_2
#define CAN_TX1RTS_GPIO_Port GPIOB
#define CAN_TX2RTS_Pin GPIO_PIN_10
#define CAN_TX2RTS_GPIO_Port GPIOB
#define GPIO0_Pin GPIO_PIN_12
#define GPIO0_GPIO_Port GPIOB
#define GPIO1_Pin GPIO_PIN_13
#define GPIO1_GPIO_Port GPIOB
#define GPIO2_Pin GPIO_PIN_14
#define GPIO2_GPIO_Port GPIOB
#define GPIO3_Pin GPIO_PIN_15
#define GPIO3_GPIO_Port GPIOB
#define GPIO4_Pin GPIO_PIN_6
#define GPIO4_GPIO_Port GPIOC
#define GPIO5_Pin GPIO_PIN_7
#define GPIO5_GPIO_Port GPIOC
#define GPIO6_Pin GPIO_PIN_8
#define GPIO6_GPIO_Port GPIOC
#define GPIO7_Pin GPIO_PIN_9
#define GPIO7_GPIO_Port GPIOC
#define VBUS_DETECT_Pin GPIO_PIN_9
#define VBUS_DETECT_GPIO_Port GPIOA
#define USB_N_Pin GPIO_PIN_11
#define USB_N_GPIO_Port GPIOA
#define USB_P_Pin GPIO_PIN_12
#define USB_P_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define JTDI_Pin GPIO_PIN_15
#define JTDI_GPIO_Port GPIOA
#define LED_BLUE_Pin GPIO_PIN_10
#define LED_BLUE_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_11
#define LED_GREEN_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_12
#define LED_RED_GPIO_Port GPIOC
#define JTDO_Pin GPIO_PIN_3
#define JTDO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
