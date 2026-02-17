#pragma once

/* Enable full duplex operation mode */
#define SERIAL_USART_FULL_DUPLEX

/* The GPIO pins used for full duplex split communication */
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13

#define MASTER_LEFT

/* Right half uses different row/col pins */
#define MATRIX_ROW_PINS_RIGHT { GP3, GP4, GP11, GP10, GP9 }
#define MATRIX_COL_PINS_RIGHT {GP14, GP15, GP26, GP27, GP28, GP29} 
