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
#include "stm32h7xx_hal.h"

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
#define WIFI_GPIO_Pin GPIO_PIN_4
#define WIFI_GPIO_GPIO_Port GPIOI
#define LCD_B6_Pin GPIO_PIN_5
#define LCD_B6_GPIO_Port GPIOK
#define I2S6_SDO_Pin GPIO_PIN_14
#define I2S6_SDO_GPIO_Port GPIOG
#define OCSPI1_IO6_Pin GPIO_PIN_9
#define OCSPI1_IO6_GPIO_Port GPIOG
#define OCSPI1_IO7_Pin GPIO_PIN_7
#define OCSPI1_IO7_GPIO_Port GPIOD
#define SDIO1_D2_Pin GPIO_PIN_10
#define SDIO1_D2_GPIO_Port GPIOC
#define WIFI_BOOT_Pin GPIO_PIN_3
#define WIFI_BOOT_GPIO_Port GPIOI
#define WIFI_DATRDY_Pin GPIO_PIN_5
#define WIFI_DATRDY_GPIO_Port GPIOI
#define LCD_B7_Pin GPIO_PIN_6
#define LCD_B7_GPIO_Port GPIOK
#define LCD_B4_Pin GPIO_PIN_3
#define LCD_B4_GPIO_Port GPIOK
#define USER_LED1_Pin GPIO_PIN_11
#define USER_LED1_GPIO_Port GPIOG
#define LCD_B3_Pin GPIO_PIN_15
#define LCD_B3_GPIO_Port GPIOJ
#define SDIO1_CMD_Pin GPIO_PIN_2
#define SDIO1_CMD_GPIO_Port GPIOD
#define SDIO1_CK_Pin GPIO_PIN_12
#define SDIO1_CK_GPIO_Port GPIOC
#define JTCK_Pin GPIO_PIN_14
#define JTCK_GPIO_Port GPIOA
#define uSD_Detect_Pin GPIO_PIN_8
#define uSD_Detect_GPIO_Port GPIOI
#define JTDO_TRACESWO_Pin GPIO_PIN_3
#define JTDO_TRACESWO_GPIO_Port GPIOB
#define LCD_B5_Pin GPIO_PIN_4
#define LCD_B5_GPIO_Port GPIOK
#define I2S6_SDI_Pin GPIO_PIN_12
#define I2S6_SDI_GPIO_Port GPIOG
#define LCD_B2_Pin GPIO_PIN_14
#define LCD_B2_GPIO_Port GPIOJ
#define JTDI_Pin GPIO_PIN_15
#define JTDI_GPIO_Port GPIOA
#define SPI2_SCK_Pin GPIO_PIN_12
#define SPI2_SCK_GPIO_Port GPIOA
#define SPI2_NSS_Pin GPIO_PIN_11
#define SPI2_NSS_GPIO_Port GPIOA
#define LCD_DE_Pin GPIO_PIN_7
#define LCD_DE_GPIO_Port GPIOK
#define I2S6_CK_Pin GPIO_PIN_13
#define I2S6_CK_GPIO_Port GPIOG
#define LCD_B1_Pin GPIO_PIN_13
#define LCD_B1_GPIO_Port GPIOJ
#define SDIO1_D3_Pin GPIO_PIN_11
#define SDIO1_D3_GPIO_Port GPIOC
#define WIFI_WKUP_Pin GPIO_PIN_2
#define WIFI_WKUP_GPIO_Port GPIOI
#define LCD_B0_Pin GPIO_PIN_12
#define LCD_B0_GPIO_Port GPIOJ
#define WIFI_RST_Pin GPIO_PIN_1
#define WIFI_RST_GPIO_Port GPIOI
#define JTMS_Pin GPIO_PIN_13
#define JTMS_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_10
#define VCP_RX_GPIO_Port GPIOA
#define SDIO1_D1_Pin GPIO_PIN_9
#define SDIO1_D1_GPIO_Port GPIOC
#define WAKEUP_Pin GPIO_PIN_13
#define WAKEUP_GPIO_Port GPIOC
#define VCP_TX_Pin GPIO_PIN_9
#define VCP_TX_GPIO_Port GPIOA
#define SDIO1_D0_Pin GPIO_PIN_8
#define SDIO1_D0_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_8
#define MCO_GPIO_Port GPIOA
#define OCSPI1_NCS_Pin GPIO_PIN_6
#define OCSPI1_NCS_GPIO_Port GPIOG
#define AUDIO_NRST_Pin GPIO_PIN_3
#define AUDIO_NRST_GPIO_Port GPIOG
#define LCD_HSYNC_Pin GPIO_PIN_12
#define LCD_HSYNC_GPIO_Port GPIOI
#define LCD_CLK_Pin GPIO_PIN_14
#define LCD_CLK_GPIO_Port GPIOI
#define LCD_VSYNC_Pin GPIO_PIN_13
#define LCD_VSYNC_GPIO_Port GPIOI
#define USER_LED2_Pin GPIO_PIN_2
#define USER_LED2_GPIO_Port GPIOG
#define LCD_G7_Pin GPIO_PIN_2
#define LCD_G7_GPIO_Port GPIOK
#define LCD_G6_Pin GPIO_PIN_1
#define LCD_G6_GPIO_Port GPIOK
#define SPI2_MISO_Pin GPIO_PIN_2
#define SPI2_MISO_GPIO_Port GPIOC
#define LCD_G4_Pin GPIO_PIN_11
#define LCD_G4_GPIO_Port GPIOJ
#define LCD_G5_Pin GPIO_PIN_0
#define LCD_G5_GPIO_Port GPIOK
#define LCD_G3_Pin GPIO_PIN_10
#define LCD_G3_GPIO_Port GPIOJ
#define LCD_G2_Pin GPIO_PIN_9
#define LCD_G2_GPIO_Port GPIOJ
#define LCD_G1_Pin GPIO_PIN_8
#define LCD_G1_GPIO_Port GPIOJ
#define I2C4_SDA_Pin GPIO_PIN_13
#define I2C4_SDA_GPIO_Port GPIOD
#define LCD_R7_Pin GPIO_PIN_6
#define LCD_R7_GPIO_Port GPIOJ
#define LCD_G0_Pin GPIO_PIN_7
#define LCD_G0_GPIO_Port GPIOJ
#define I2C4_SCL_Pin GPIO_PIN_12
#define I2C4_SCL_GPIO_Port GPIOD
#define OCSPI1_IO4_Pin GPIO_PIN_1
#define OCSPI1_IO4_GPIO_Port GPIOC
#define LCD_INT_Pin GPIO_PIN_2
#define LCD_INT_GPIO_Port GPIOH
#define LCD_R0_Pin GPIO_PIN_15
#define LCD_R0_GPIO_Port GPIOI
#define SPI2_MOSI_Pin GPIO_PIN_3
#define SPI2_MOSI_GPIO_Port GPIOC
#define OCSPI1_IO5_Pin GPIO_PIN_3
#define OCSPI1_IO5_GPIO_Port GPIOH
#define OCSPI1_DQS_Pin GPIO_PIN_5
#define OCSPI1_DQS_GPIO_Port GPIOC
#define LCD_R1_Pin GPIO_PIN_0
#define LCD_R1_GPIO_Port GPIOJ
#define LCD_R6_Pin GPIO_PIN_5
#define LCD_R6_GPIO_Port GPIOJ
#define I2S6_WS_Pin GPIO_PIN_0
#define I2S6_WS_GPIO_Port GPIOA
#define LCD_BL_CTRL_Pin GPIO_PIN_1
#define LCD_BL_CTRL_GPIO_Port GPIOA
#define LCD_R2_Pin GPIO_PIN_1
#define LCD_R2_GPIO_Port GPIOJ
#define LCD_R5_Pin GPIO_PIN_4
#define LCD_R5_GPIO_Port GPIOJ
#define LCD_ON_OFF_Pin GPIO_PIN_2
#define LCD_ON_OFF_GPIO_Port GPIOA
#define I2S6_MCK_Pin GPIO_PIN_3
#define I2S6_MCK_GPIO_Port GPIOA
#define OCSPI1_CLK_Pin GPIO_PIN_2
#define OCSPI1_CLK_GPIO_Port GPIOB
#define LCD_R3_Pin GPIO_PIN_2
#define LCD_R3_GPIO_Port GPIOJ
#define LCD_R4_Pin GPIO_PIN_3
#define LCD_R4_GPIO_Port GPIOJ
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
