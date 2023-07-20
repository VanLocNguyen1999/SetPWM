/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

#include "stm32g4xx_ll_comp.h"
#include "stm32g4xx_ll_exti.h"
#include "stm32g4xx_ll_dac.h"
#include "stm32g4xx_ll_rcc.h"
#include "stm32g4xx_ll_bus.h"
#include "stm32g4xx_ll_crs.h"
#include "stm32g4xx_ll_system.h"
#include "stm32g4xx_ll_cortex.h"
#include "stm32g4xx_ll_utils.h"
#include "stm32g4xx_ll_pwr.h"
#include "stm32g4xx_ll_dma.h"
#include "stm32g4xx_ll_tim.h"
#include "stm32g4xx_ll_usart.h"
#include "stm32g4xx_ll_gpio.h"

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
#define BRAKE_Pin LL_GPIO_PIN_13
#define BRAKE_GPIO_Port GPIOC
#define BRAKE_EXTI_IRQn EXTI15_10_IRQn
#define I_U_Pin LL_GPIO_PIN_0
#define I_U_GPIO_Port GPIOA
#define I_V_Pin LL_GPIO_PIN_1
#define I_V_GPIO_Port GPIOA
#define TEMP_MOTOR_Pin LL_GPIO_PIN_2
#define TEMP_MOTOR_GPIO_Port GPIOA
#define I_W_Pin LL_GPIO_PIN_3
#define I_W_GPIO_Port GPIOA
#define BEMF_U_Pin LL_GPIO_PIN_6
#define BEMF_U_GPIO_Port GPIOA
#define BEMF_V_Pin LL_GPIO_PIN_7
#define BEMF_V_GPIO_Port GPIOA
#define V_SYS_Pin LL_GPIO_PIN_0
#define V_SYS_GPIO_Port GPIOB
#define TEMP_BOARD_Pin LL_GPIO_PIN_1
#define TEMP_BOARD_GPIO_Port GPIOB
#define BEMF_W_Pin LL_GPIO_PIN_2
#define BEMF_W_GPIO_Port GPIOB
#define TX_Pin LL_GPIO_PIN_10
#define TX_GPIO_Port GPIOB
#define RX_Pin LL_GPIO_PIN_11
#define RX_GPIO_Port GPIOB
#define THROTTLE_Pin LL_GPIO_PIN_12
#define THROTTLE_GPIO_Port GPIOB
#define PHASE_U_LS_Pin LL_GPIO_PIN_13
#define PHASE_U_LS_GPIO_Port GPIOB
#define PHASE_V_LS_Pin LL_GPIO_PIN_14
#define PHASE_V_LS_GPIO_Port GPIOB
#define PHASE_W_LS_Pin LL_GPIO_PIN_15
#define PHASE_W_LS_GPIO_Port GPIOB
#define PHASE_U_HS_Pin LL_GPIO_PIN_8
#define PHASE_U_HS_GPIO_Port GPIOA
#define PHASE_V_HS_Pin LL_GPIO_PIN_9
#define PHASE_V_HS_GPIO_Port GPIOA
#define PHASE_W_HS_Pin LL_GPIO_PIN_10
#define PHASE_W_HS_GPIO_Port GPIOA
#define TP3_Pin LL_GPIO_PIN_15
#define TP3_GPIO_Port GPIOA
#define TP2_Pin LL_GPIO_PIN_3
#define TP2_GPIO_Port GPIOB
#define TP1_Pin LL_GPIO_PIN_4
#define TP1_GPIO_Port GPIOB
#define STB_Pin LL_GPIO_PIN_5
#define STB_GPIO_Port GPIOB
#define HALL_A_Pin LL_GPIO_PIN_6
#define HALL_A_GPIO_Port GPIOB
#define HALL_B_Pin LL_GPIO_PIN_7
#define HALL_B_GPIO_Port GPIOB
#define HALL_C_Pin LL_GPIO_PIN_9
#define HALL_C_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
