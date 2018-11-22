/* This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */

/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS	DT_ARM_V6M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_FLASH_DEV_BASE_ADDRESS		DT_SILABS_GECKO_FLASH_CONTROLLER_400C0000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_SILABS_GECKO_FLASH_CONTROLLER_400C0000_LABEL

#define DT_USART_GECKO_0_BASE_ADDRESS	DT_SILABS_GECKO_USART_4000C000_BASE_ADDRESS
#define DT_USART_GECKO_0_CURRENT_SPEED	DT_SILABS_GECKO_USART_4000C000_CURRENT_SPEED
#define DT_USART_GECKO_0_IRQ_RX		DT_SILABS_GECKO_USART_4000C000_IRQ_0
#define DT_USART_GECKO_0_IRQ_RX_PRIORITY	DT_SILABS_GECKO_USART_4000C000_IRQ_0_PRIORITY
#define DT_USART_GECKO_0_IRQ_TX		DT_SILABS_GECKO_USART_4000C000_IRQ_1
#define DT_USART_GECKO_0_IRQ_TX_PRIORITY	DT_SILABS_GECKO_USART_4000C000_IRQ_1_PRIORITY
#define DT_USART_GECKO_0_LABEL		DT_SILABS_GECKO_USART_4000C000_LABEL
#define DT_USART_GECKO_0_LOCATION		DT_SILABS_GECKO_USART_4000C000_LOCATION
#define DT_USART_GECKO_0_SIZE		DT_SILABS_GECKO_USART_4000C000_SIZE

#define DT_USART_GECKO_1_BASE_ADDRESS	DT_SILABS_GECKO_USART_4000C400_BASE_ADDRESS
#define DT_USART_GECKO_1_CURRENT_SPEED	DT_SILABS_GECKO_USART_4000C400_CURRENT_SPEED
#define DT_USART_GECKO_1_IRQ_RX		DT_SILABS_GECKO_USART_4000C400_IRQ_0
#define DT_USART_GECKO_1_IRQ_RX_PRIORITY	DT_SILABS_GECKO_USART_4000C400_IRQ_0_PRIORITY
#define DT_USART_GECKO_1_IRQ_TX		DT_SILABS_GECKO_USART_4000C400_IRQ_1
#define DT_USART_GECKO_1_IRQ_TX_PRIORITY	DT_SILABS_GECKO_USART_4000C400_IRQ_1_PRIORITY
#define DT_USART_GECKO_1_LABEL		DT_SILABS_GECKO_USART_4000C400_LABEL
#define DT_USART_GECKO_1_LOCATION		DT_SILABS_GECKO_USART_4000C400_LOCATION
#define DT_USART_GECKO_1_SIZE		DT_SILABS_GECKO_USART_4000C400_SIZE

#define DT_GPIO_GECKO_COMMON_NAME	DT_SILABS_EFM32_GPIO_40006100_LABEL
#define DT_GPIO_GECKO_COMMON_EVEN_IRQ	DT_SILABS_EFM32_GPIO_40006100_IRQ_GPIO_EVEN
#define DT_GPIO_GECKO_COMMON_EVEN_PRI	DT_SILABS_EFM32_GPIO_40006100_IRQ_GPIO_EVEN_PRIORITY
#define DT_GPIO_GECKO_COMMON_ODD_IRQ	DT_SILABS_EFM32_GPIO_40006100_IRQ_GPIO_ODD
#define DT_GPIO_GECKO_COMMON_ODD_PRI	DT_SILABS_EFM32_GPIO_40006100_IRQ_GPIO_ODD_PRIORITY

#define DT_GPIO_GECKO_PORTA_NAME	DT_SILABS_EFM32_GPIO_PORT_40006000_LABEL
#define DT_GPIO_GECKO_PORTB_NAME	DT_SILABS_EFM32_GPIO_PORT_40006024_LABEL
#define DT_GPIO_GECKO_PORTC_NAME	DT_SILABS_EFM32_GPIO_PORT_40006048_LABEL
#define DT_GPIO_GECKO_PORTD_NAME	DT_SILABS_EFM32_GPIO_PORT_4000606C_LABEL
#define DT_GPIO_GECKO_PORTE_NAME	DT_SILABS_EFM32_GPIO_PORT_40006090_LABEL
#define DT_GPIO_GECKO_PORTF_NAME	DT_SILABS_EFM32_GPIO_PORT_400060B4_LABEL

/* End of SoC Level DTS fixup file */
