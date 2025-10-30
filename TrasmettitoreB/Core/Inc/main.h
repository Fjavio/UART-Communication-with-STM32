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
#include "stm32f3xx_hal.h"

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
#define PS2_Pin GPIO_PIN_1
#define PS2_GPIO_Port GPIOC
#define PS2_EXTI_IRQn EXTI1_IRQn
#define PS3_Pin GPIO_PIN_2
#define PS3_GPIO_Port GPIOC
#define PS4_Pin GPIO_PIN_3
#define PS4_GPIO_Port GPIOC
#define PS4_EXTI_IRQn EXTI3_IRQn
#define PS5_Pin GPIO_PIN_4
#define PS5_GPIO_Port GPIOC
#define PS5_EXTI_IRQn EXTI4_IRQn
#define Red_light_Pin GPIO_PIN_0
#define Red_light_GPIO_Port GPIOD
#define Green_light_Pin GPIO_PIN_1
#define Green_light_GPIO_Port GPIOD
#define Red_lightD2_Pin GPIO_PIN_2
#define Red_lightD2_GPIO_Port GPIOD
#define Green_lightD3_Pin GPIO_PIN_3
#define Green_lightD3_GPIO_Port GPIOD
#define Red_lightD4_Pin GPIO_PIN_4
#define Red_lightD4_GPIO_Port GPIOD
#define Green_lightD5_Pin GPIO_PIN_5
#define Green_lightD5_GPIO_Port GPIOD
#define I2C1_SCL_Pin GPIO_PIN_8
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_9
#define I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
