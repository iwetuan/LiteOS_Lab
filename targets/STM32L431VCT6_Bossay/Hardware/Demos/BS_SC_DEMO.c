/********************************************************************************
* 文件名称 ：BS_SC_DEMO.c
* 作 者：Bossay IoT 开发组
* 版 本：V1.0
* 编写日期 ：2019-11-01
* 功 能：SC_Demo驱动
*********************************************************************************
* 说 明 ：本案例配套Bossay IoT Box开发板使用
* 网 站 ：edu.ibossay.com
* 电 话 ：4006916913 
*********************************************************************************/

#include "Actuators.h"
#include "DEMO.h"
#include "BH1750.h"
#include "stm32l4xx.h"
#include "i2c.h"
#include "gpio.h"

void Init_BS_SC_DEMO(void)
{
	MX_I2C1_Init();
	Init_Light();
	Init_BH1750();
}

