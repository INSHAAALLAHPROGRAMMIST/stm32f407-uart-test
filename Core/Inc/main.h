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
#include "stm32f4xx_hal.h"

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
#define M1_ENA_Pin GPIO_PIN_0
#define M1_ENA_GPIO_Port GPIOD
#define M2_ENA_Pin GPIO_PIN_1
#define M2_ENA_GPIO_Port GPIOD
#define M3_ENA_Pin GPIO_PIN_4
#define M3_ENA_GPIO_Port GPIOD
#define M4_ENA_Pin GPIO_PIN_5
#define M4_ENA_GPIO_Port GPIOD
#define M3_PUL_Pin GPIO_PIN_6
#define M3_PUL_GPIO_Port GPIOD
#define M4_PUL_Pin GPIO_PIN_7
#define M4_PUL_GPIO_Port GPIOD
#define M3_DIR_Pin GPIO_PIN_6
#define M3_DIR_GPIO_Port GPIOB
#define M4_DIR_Pin GPIO_PIN_7
#define M4_DIR_GPIO_Port GPIOB
#define M1_PUL_Pin GPIO_PIN_8
#define M1_PUL_GPIO_Port GPIOB
#define M2_PUL_Pin GPIO_PIN_9
#define M2_PUL_GPIO_Port GPIOB
#define M1_DIR_Pin GPIO_PIN_0
#define M1_DIR_GPIO_Port GPIOE
#define M2_DIR_Pin GPIO_PIN_1
#define M2_DIR_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */
#define uart huart1
#define Timeout 0xFFFF
#define MAX_DATA_SIZE 16
#define Min_Delay 100
#define Medium_Delay 550
#define Max_Delay 1000
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
