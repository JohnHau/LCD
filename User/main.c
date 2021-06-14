#include "stm32f10x.h"
#include "./usart/bsp_usart.h"
#include "./led/bsp_led.h" 
#include "./i2c/bsp_i2c_ee.h"

int8_t tstr[]="hello world";	
int main(void)
{
  
    LED_GPIO_Config();
  
    /* 串口初始化 */
		USART_Config();
	
		i2c_CfgGpio();

		printf("eeprom 软件模拟i2c测试例程 \r\n");		
  
	Initial_oled_device();
	
	fill_picture(0x00);
	oled_096_print(0, 0, tstr);
	
	while(1);
	//fill_picture(0xff);
	//fill_picture(0xf0);
	//picture_1();
	
	//LED2_ON;
  //LED1_ON;
 
}
/*********************************************END OF FILE**********************/
