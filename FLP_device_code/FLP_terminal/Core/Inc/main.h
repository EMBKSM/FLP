/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define GPS_Rx_Pin GPIO_PIN_2
#define GPS_Rx_GPIO_Port GPIOA
#define GPS_Tx_Pin GPIO_PIN_3
#define GPS_Tx_GPIO_Port GPIOA
#define SX1278_NSS_Pin GPIO_PIN_4
#define SX1278_NSS_GPIO_Port GPIOA
#define SX1278_SCK_Pin GPIO_PIN_5
#define SX1278_SCK_GPIO_Port GPIOA
#define SX1278_MISO_Pin GPIO_PIN_6
#define SX1278_MISO_GPIO_Port GPIOA
#define SX1278_MOSI_Pin GPIO_PIN_7
#define SX1278_MOSI_GPIO_Port GPIOA
#define DIO0_Pin GPIO_PIN_1
#define DIO0_GPIO_Port GPIOB
#define buzzer_Pin GPIO_PIN_11
#define buzzer_GPIO_Port GPIOA
#define find_host_Pin GPIO_PIN_3
#define find_host_GPIO_Port GPIOB
#define ID_Pin GPIO_PIN_4
#define ID_GPIO_Port GPIOB
#define SX1278_RESET_Pin GPIO_PIN_8
#define SX1278_RESET_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
