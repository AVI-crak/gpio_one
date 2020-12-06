/// DMA_ONE32F746BG.h

/*
Available for stm32f746xx.
___________________________________________________________________________________________________________________
 DMA1     | Stream 0    | Stream 1  | Stream 2    | Stream 3    | Stream 4   | Stream 5    | Stream 6  | Stream 7  |
----------|-------------|-----------|-------------|-------------|------------|-------------|-----------|-----------|
Channel 0 | SPI3_RX     |SPDIFRX_DT | SPI3_RX     | SPI2_RX     | SPI2_TX    | SPI3_TX     |SPDIFRX_CS | SPI3_TX   |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 1 | I2C1_RX     | I2C3_RX   | TIM7_UP     |             | TIM7_UP    | I2C1_RX     | I2C1_TX   | I2C1_TX   |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 2 | TIM4_CH1    |           |  I2C4 _RX   | TIM4_CH2    |            |  I2C4 _TX   |  TIM4_UP  | TIM4_CH3  |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 3 |             | TIM2_UP   | I2C3_RX     |             | I2C3_TX    | TIM2_CH1    | TIM2_CH2  | TIM2_UP   |
          |             | TIM2_CH3  |             |             |            |             | TIM2_CH4  | TIM2_CH4  |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 4 | UART5_RX    | USART3_RX | UART4_RX    | USART3_TX   | UART4_TX   | USART2_RX   | USART2_TX | UART5_TX  |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 5 | UART8_TX    | UART7_TX  | TIM3_CH4    | UART7_RX    | TIM3_CH1   | TIM3_CH2    | UART8_RX  | TIM3_CH3  |
          |             |           | TIM3_UP     |             | TIM3_TRIG  |             |           |           |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 6 | TIM5_CH3    | TIM5_CH4  | TIM5_CH1    | TIM5_CH4    | TIM5_CH2   |             | TIM5_UP   |           |
          | TIM5_UP     | TIM5_TRIG |             | TIM5_TRIG   |            |             |           |           |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 7 |             | TIM6_UP   | I2C2_RX     | I2C2_RX     | USART3_TX  | DAC1        | DAC2      | I2C2_TX   |
----------|-------------|-----------|-------------|-------------|------------|-------------|-----------|---------- |

___________________________________________________________________________________________________________________
 DMA2     | Stream 0    | Stream 1  | Stream 2    | Stream 3    | Stream 4   | Stream 5    | Stream 6  | Stream 7  |
----------|-------------|-----------|-------------|-------------|------------|-------------|-----------|-----------|
Channel 0 | ADC1        | SA1_A     | TIM8_CH1    | SAI1_A      | ADC1       | SAI1_B      | TIM1_CH1  |  SAI2_B   |
          |             |           | TIM8_CH2    |             |            |             | TIM1_CH2  |           |
          |             |           | TIM8_CH3    |             |            |             | TIM1_CH3  |           |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 1 |             | DCMI      | ADC2        | ADC2        | SAI1_B     | SPI6_TX     | SPI6_RX   | DCMI      |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 2 | ADC3        | ADC3      |             | SPI5_RX     | SPI5_TX    | CRYP_OUT    | CRYP_IN   | HASH_IN   |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 3 | SPI1_RX     |           | SPI1_RX     | SPI1_TX     |  SAI2_A    | SPI1_TX     |  SAI2_B   | QUADSPI   |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 4 | SPI4_RX     | SPI4_TX   | USART1_RX   | SDMMC1      |            | USART1_RX   | SDMMC1    | USART1_TX |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 5 |             | USART6_RX | USART6_RX   | SPI4_RX     | SPI4_TX    |             | USART6_TX | USART6_TX |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 6 | TIM1_TRIG   | TIM1_CH1  | TIM1_CH2    | TIM1_CH1    | TIM1_CH4   | TIM1_UP     | TIM1_CH3  |           |
          |             |           |             |             | TIM1_TRIG  |             |           |           |
          |             |           |             |             | TIM1_COM   |             |           |           |
==========|=============|===========|=============|=============|============|=============|===========|===========|
Channel 7 |             | TIM8_UP   | TIM8_CH1    | TIM8_CH2    | TIM8_CH3   | SPI5_RX     | SPI5_TX   | TIM8_CH4  |
          |             |           |             |             |            |             |           | TIM8_TRIG |
          |             |           |             |             |            |             |           | TIM8_COM  |
----------|-------------|-----------|-------------|-------------|------------|-------------|-----------|------------
*/

#define swDMA_SxCR_CHSEL(write)             (((write) & 0x07U) << 25)
#define swDMA_SxCR_PL(write)                (((write) & 0x03U) << 16)

static const struct
{
const uint32_t  single_transfer;
const uint32_t  incremental_burst_of_4_beats;
const uint32_t  incremental_burst_of_8_beats;
const uint32_t  incremental_burst_of_16_beats;
const uint32_t  FFFF;
}sDMA_SxCR_MBURST = {(0 << 23),(1 << 23),(2 << 23),(3 << 23),(3 << 23),};

static const struct
{
const uint32_t  single_transfer;
const uint32_t  incremental_burst_of_4_beats;
const uint32_t  incremental_burst_of_8_beats;
const uint32_t  incremental_burst_of_16_beats;
const uint32_t  FFFF;
}sDMA_SxCR_PBURST = {(0 << 21),(1 << 21),(2 << 21),(3 << 21),(3 << 21),};

static const struct
{
const uint32_t  t8_bit;
const uint32_t  t16_bit;
const uint32_t  t32_bit;
const uint32_t  FFFF;
}sDMA_SxCR_MSIZE = {(0 << 13),(1 << 13),(2 << 13),(3 << 13),};

static const struct
{
const uint32_t  t8_bit;
const uint32_t  t16_bit;
const uint32_t  t32_bit;
const uint32_t  FFFF;
}sDMA_SxCR_PSIZE = {(0 << 11),(1 << 11),(2 << 11),(3 << 11),};


static const struct
{
const uint32_t  fixed_index;
const uint32_t  index_plus;
const uint32_t  index_plus_four;
const uint32_t  FFFF;
}sDMA_SxCR_PINC = {0,(1 << 9),((1 << 9)|(1 << 15)),((1 << 9)|(1 << 15)),};

static const struct
{
const uint32_t  peripheral_to_memory;
const uint32_t  memory_to_peripheral;
const uint32_t  memory_to_memory;
const uint32_t  FFFF;
}sDMA_SxCR_DIR = {(0 << 6),(1 << 6),(2 << 6),(3 << 6),};

static const struct
{
const uint32_t  of;
const uint32_t  double_buffer_mode;
const uint32_t  double_buffer_2_start;
const uint32_t  FFFF;
}sDMA_SxCR_DBM = {0,(1 << 18),((1 << 18)|(1 << 19)),((1 << 18)|(1 << 19)),};


struct dma1_s0
{
    uint32_t ch0_SPI3_RX;
    uint32_t ch1_I2C1_RX;
    uint32_t ch2_TIM4_CH1;
    uint32_t ch3;
    uint32_t ch4_UART5_RX;
    uint32_t ch5_UART8_TX;
    uint32_t ch6_TIM5_CH3__TIM5_UP;
    uint32_t ch7;
};

struct dma1_s1
{
    uint32_t ch0_SPDIFRX_DT;
    uint32_t ch1_I2C3_RX;
    uint32_t ch2;
    uint32_t ch3_TIM2_UP__TIM2_CH3;
    uint32_t ch4_USART3_RX;
    uint32_t ch5_UART7_TX;
    uint32_t ch6_TIM5_CH4__TIM5_TRIG;
    uint32_t ch7_TIM6_UP;
};

struct dma1_s2
{
    uint32_t ch0_SPI3_RX;
    uint32_t ch1_TIM7_UP;
    uint32_t ch2_I2C4_RX;
    uint32_t ch3_I2C3_RX;
    uint32_t ch4_UART4_RX;
    uint32_t ch5_TIM3_CH4__TIM3_UP;
    uint32_t ch6_TIM5_CH1;
    uint32_t ch7_I2C2_RX;
};

struct dma1_s3
{
    uint32_t ch0_SPI2_RX;
    uint32_t ch1;
    uint32_t ch2_TIM4_CH2;
    uint32_t ch3;
    uint32_t ch4_USART3_TX;
    uint32_t ch5_UART7_RX;
    uint32_t ch6_TIM5_CH4__TIM5_TRIG;
    uint32_t ch7_I2C2_RX;
};

struct dma1_s4
{
    uint32_t ch0_SPI2_TX;
    uint32_t ch1_TIM7_UP;
    uint32_t ch2;
    uint32_t ch3_I2C3_TX;
    uint32_t ch4_UART4_TX;
    uint32_t ch5_TIM3_CH1__TIM3_TRIG;
    uint32_t ch6_TIM5_CH2;
    uint32_t ch7_USART3_TX;
};

struct dma1_s5
{
    uint32_t ch0_SPI3_TX;
    uint32_t ch1_I2C1_RX;
    uint32_t ch2_I2C4_TX;
    uint32_t ch3_TIM2_CH1;
    uint32_t ch4_USART2_RX;
    uint32_t ch5_TIM3_CH2;
    uint32_t ch6;
    uint32_t ch7_DAC1;
};

struct dma1_s6
{
    uint32_t ch0_SPDIFRX_CS;
    uint32_t ch1_I2C1_TX;
    uint32_t ch2_TIM4_UP;
    uint32_t ch3_TIM2_CH2__TIM2_CH4;
    uint32_t ch4_USART2_TX;
    uint32_t ch5_UART8_RX;
    uint32_t ch6_TIM5_UP;
    uint32_t ch7_DAC2;
};

struct dma1_s7
{
    uint32_t ch0_SPI3_TX;
    uint32_t ch1_I2C1_TX;
    uint32_t ch2_TIM4_CH3;
    uint32_t ch3_TIM2_UP__TIM2_CH4;
    uint32_t ch4_UART5_TX;
    uint32_t ch5_TIM3_CH3;
    uint32_t ch6;
    uint32_t ch7_I2C2_TX;
};

struct dma2_s0
{
    uint32_t ch0_ADC1;
    uint32_t ch1;
    uint32_t ch2_ADC3;
    uint32_t ch3_SPI1_RX;
    uint32_t ch4_SPI4_RX;
    uint32_t ch5;
    uint32_t ch6_TIM1_TRIG;
    uint32_t ch7;
};

struct dma2_s1
{
    uint32_t ch0_SAI1_A;
    uint32_t ch1_DCMI;
    uint32_t ch2_ADC3;
    uint32_t ch3;
    uint32_t ch4_SPI4_TX;
    uint32_t ch5_USART6_RX;
    uint32_t ch6_TIM1_CH1;
    uint32_t ch7_TIM8_UP;
};

struct dma2_s2
{
    uint32_t ch0_TIM8_CH1__TIM8_CH2__TIM8_CH3;
    uint32_t ch1_ADC2;
    uint32_t ch2;
    uint32_t ch3_SPI1_RX;
    uint32_t ch4_USART1_RX;
    uint32_t ch5_USART6_RX;
    uint32_t ch6_TIM1_CH2;
    uint32_t ch7_TIM8_CH1;
};

struct dma2_s3
{
    uint32_t ch0_SAI1_A;
    uint32_t ch1_ADC2;
    uint32_t ch2_SPI5_RX;
    uint32_t ch3_SPI1_TX;
    uint32_t ch4_SDMMC1;
    uint32_t ch5_SPI4_RX;
    uint32_t ch6_TIM1_CH1;
    uint32_t ch7_TIM8_CH2;
};

struct dma2_s4
{
    uint32_t ch0_ADC1;
    uint32_t ch1_SAI1_B;
    uint32_t ch2_SPI5_TX;
    uint32_t ch3_SAI2_A;
    uint32_t ch4;
    uint32_t ch5_SPI4_TX;
    uint32_t ch6_TIM1_CH4__TIM1_TRIG__TIM1_COM;
    uint32_t ch7_TIM8_CH3;
};

struct dma2_s5
{
    uint32_t ch0_SAI1_B;
    uint32_t ch1_SPI6_TX;
    uint32_t ch2_CRYP_OUT;
    uint32_t ch3_SPI1_TX;
    uint32_t ch4_USART1_RX;
    uint32_t ch5;
    uint32_t ch6_TIM1_UP;
    uint32_t ch7_SPI5_RX;
};

struct dma2_s6
{
    uint32_t ch0_TIM1_CH1__TIM1_CH2__TIM1_CH3;
    uint32_t ch1_SPI6_RX;
    uint32_t ch2_CRYP_IN;
    uint32_t ch3_SAI2_B;
    uint32_t ch4_SDMMC1;
    uint32_t ch5_USART6_TX;
    uint32_t ch6_TIM1_CH3;
    uint32_t ch7_SPI5_TX;
};

struct dma2_s7
{
    uint32_t ch0_SAI2_B;
    uint32_t ch1_DCMI;
    uint32_t ch2_HASH_IN;
    uint32_t ch3_QUADSPI;
    uint32_t ch4_USART1_TX;
    uint32_t ch5_USART6_TX;
    uint32_t ch6;
    uint32_t ch7_TIM8_CH4__TIM8_TRIG__TIM8_COM;
};


struct  dma1_all_stream
{
    struct  dma1_s0     stream_0;
    struct  dma1_s1     stream_1;
    struct  dma1_s2     stream_2;
    struct  dma1_s3     stream_3;
    struct  dma1_s4     stream_4;
    struct  dma1_s5     stream_5;
    struct  dma1_s6     stream_6;
    struct  dma1_s7     stream_7;
};

struct  dma2_all_stream
{
    struct  dma2_s0     stream_0;
    struct  dma2_s1     stream_1;
    struct  dma2_s2     stream_2;
    struct  dma2_s3     stream_3;
    struct  dma2_s4     stream_4;
    struct  dma2_s5     stream_5;
    struct  dma2_s6     stream_6;
    struct  dma2_s7     stream_7;
};

#define DMA_MAKRO    {(0<<25),(1<<25),(2<<25),(3<<25),(4<<25),(5<<25),(6<<25),(7<<25)}


static const struct
{
    struct  dma1_all_stream dma1;
    struct  dma2_all_stream dma2;
}sdma_line = {{DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO},
                {DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO,DMA_MAKRO}};

/*
    DMAx_Streamx->CR = sdma_line.xx             /// channe - tmigger
                        |sDMA_SxCR_DIR.xx       /// data transfer direction
                        |sDMA_SxCR_MBURST.xx    /// memory burst transfer configuration
                        |sDMA_SxCR_PBURST.xx    /// peripheral burst transfer configuration
                        |swDMA_SxCR_PL(write)   /// priority level 0-Low, 1-Medium, 2-High, 3-Very high
                        |sDMA_SxCR_MSIZE.xx     /// memory data size
                        |DMA_SxCR_MINC          /// memory increment mode
                        |sDMA_SxCR_DBM          /// double buffer mode
                        |sDMA_SxCR_PSIZE.xx     /// peripheral data size
                        |sDMA_SxCR_PINC.xx      /// peripheral increment mode
                        |DMA_SxCR_CIRC          /// endless loop
                        |DMA_SxCR_PFCTRL        /// peripheral flow controller
                        |DMA_SxCR_TCIE          /// transfer complete interrupt enable
                        |DMA_SxCR_HTIE          /// half transfer interrupt enable
                        |DMA_SxCR_TEIE          /// transfer error interrupt enable
                        |DMA_SxCR_DMEIE         /// direct mode error interrupt enable
                        |DMA_SxCR_EN;           /// stream enable

*/

static const struct
{
const uint32_t  full_FIFO_1_4;
const uint32_t  full_FIFO_2_4;
const uint32_t  full_FIFO_3_4;
const uint32_t  full_FIFO_4_4;
const uint32_t  FFFF;
}sDMA_SxFCR_FTH = {0,1,2,3,3,};