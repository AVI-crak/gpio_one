/// STM32F413ZGJ.h

struct zap_gpio_lock_option
{
    uint16_t lock_of[0];
    uint16_t lock_on[0];
};

struct zap_gpio_otyper_option
{
    struct zap_gpio_lock_option open_drain;
    uint16_t lock_of[0];
    uint16_t lock_on[0];
};

struct zap_gpio_pull_option_in
{
    struct zap_gpio_lock_option pull_up;
    struct zap_gpio_lock_option pull_down;
    uint16_t lock_of[0];
    uint16_t lock_on[0];
};

struct zap_gpio_pull_option_out
{
    struct zap_gpio_otyper_option   pull_up;
    struct zap_gpio_lock_option     pull_down;
    uint16_t lock_of[0];
    uint16_t lock_on[0];
};

struct zap_gpio_speed_option
{
    struct zap_gpio_pull_option_out     speed1;
    struct zap_gpio_pull_option_out     speed2;
    struct zap_gpio_pull_option_out     speed3;
    struct zap_gpio_pull_option_out     speed4;
};

struct zap_gpio_PC13   /// Position:A1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE3   /// Position:A2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced0;
    struct zap_gpio_speed_option    v_af07_sai1_sd_b;
    struct zap_gpio_speed_option    v_af11_uart10_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_a19;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE2   /// Position:A3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traceclk;
    struct zap_gpio_speed_option    v_af05_i2s4_ck_spi4_sck;
    struct zap_gpio_speed_option    v_af06_i2s5_ck_spi5_sck;
    struct zap_gpio_speed_option    v_af07_sai1_mclk_a;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io2;
    struct zap_gpio_speed_option    v_af11_uart10_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_a23;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE1   /// Position:A4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin4;
    struct zap_gpio_speed_option    v_af08_uart8_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_nbl1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE0   /// Position:A5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_etr;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin4;
    struct zap_gpio_speed_option    v_af08_uart8_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_nbl0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB4   /// Position:A6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtrst;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af05_i2s3_ext_sd_spi1_miso;
    struct zap_gpio_speed_option    v_af06_spi3_miso;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af09_i2c3_sda;
    struct zap_gpio_speed_option    v_af10_sai1_sck_a;
    struct zap_gpio_speed_option    v_af11_can3_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB3   /// Position:A7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdo_swo;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af05_i2s1_ck_spi1_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af09_i2c2_sda;
    struct zap_gpio_speed_option    v_af10_sai1_sd_a;
    struct zap_gpio_speed_option    v_af11_can3_rx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD6   /// Position:A8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af06_dfsdm1_datin1;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_nwait;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD7   /// Position:A9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckin1;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_fsmc_ne1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA15   /// Position:A10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdi;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af05_i2s1_ws_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af10_sai1_mclk_a;
    struct zap_gpio_speed_option    v_af11_can3_tx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA14   /// Position:A11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtck_swclk;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA13   /// Position:A12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtms_swdio;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC14   /// Position:B1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE4   /// Position:B2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced1;
    struct zap_gpio_speed_option    v_af05_i2s4_ws_spi4_nss;
    struct zap_gpio_speed_option    v_af06_i2s5_ws_spi5_nss;
    struct zap_gpio_speed_option    v_af07_sai1_sd_a;
    struct zap_gpio_speed_option    v_af08_dfsdm1_datin3;
    struct zap_gpio_speed_option    v_af12_fsmc_a20;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE5   /// Position:B3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced2;
    struct zap_gpio_speed_option    v_af03_tim9_ch1;
    struct zap_gpio_speed_option    v_af05_spi4_miso;
    struct zap_gpio_speed_option    v_af06_spi5_miso;
    struct zap_gpio_speed_option    v_af07_sai1_sck_a;
    struct zap_gpio_speed_option    v_af08_dfsdm1_ckin3;
    struct zap_gpio_speed_option    v_af12_fsmc_a21;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE6   /// Position:B4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced3;
    struct zap_gpio_speed_option    v_af03_tim9_ch2;
    struct zap_gpio_speed_option    v_af05_i2s4_sd_spi4_mosi;
    struct zap_gpio_speed_option    v_af06_i2s5_sd_spi5_mosi;
    struct zap_gpio_speed_option    v_af07_sai1_fs_a;
    struct zap_gpio_speed_option    v_af12_fsmc_a22;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB9   /// Position:B5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch4;
    struct zap_gpio_speed_option    v_af03_tim11_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_sda;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_spi2_nss;
    struct zap_gpio_speed_option    v_af06_dfsdm2_datin1;
    struct zap_gpio_speed_option    v_af08_can1_tx;
    struct zap_gpio_speed_option    v_af09_i2c2_sda;
    struct zap_gpio_speed_option    v_af11_uart5_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d5;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB5   /// Position:B6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_in1;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af04_i2c1_smba;
    struct zap_gpio_speed_option    v_af05_i2s1_sd_spi1_mosi;
    struct zap_gpio_speed_option    v_af06_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af09_can2_rx;
    struct zap_gpio_speed_option    v_af10_sai1_fs_a;
    struct zap_gpio_speed_option    v_af11_uart5_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG15   /// Position:B7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_cts;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG12   /// Position:B8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af11_uart10_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_ne4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD5   /// Position:B9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckout;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_nwe;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC11   /// Position:B10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin5;
    struct zap_gpio_speed_option    v_af05_i2s3_ext_sd;
    struct zap_gpio_speed_option    v_af06_spi3_miso;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk2_ncs;
    struct zap_gpio_speed_option    v_af10_fsmc_d2_da2;
    struct zap_gpio_speed_option    v_af12_sdio_d3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC10   /// Position:B11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin5;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io1;
    struct zap_gpio_speed_option    v_af12_sdio_d2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA12   /// Position:B12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin5;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_spi5_miso;
    struct zap_gpio_speed_option    v_af07_usart1_rts;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dp;
    struct zap_gpio_speed_option    v_af11_uart4_tx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC15   /// Position:C1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF0   /// Position:C3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af12_fsmc_a0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF1   /// Position:C4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af12_fsmc_a1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB8   /// Position:C5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af03_tim10_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af06_i2s5_sd_spi5_mosi;
    struct zap_gpio_speed_option    v_af07_dfsdm2_ckin1;
    struct zap_gpio_speed_option    v_af08_can1_rx;
    struct zap_gpio_speed_option    v_af09_i2c3_sda;
    struct zap_gpio_speed_option    v_af11_uart5_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB6   /// Position:C6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_etr;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af06_dfsdm2_ckin7;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af10_quadspi_bk1_ncs;
    struct zap_gpio_speed_option    v_af11_uart5_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG14   /// Position:C7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced3;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk2_io3;
    struct zap_gpio_speed_option    v_af12_fsmc_a25;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG11   /// Position:C8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can2_rx;
    struct zap_gpio_speed_option    v_af11_uart10_rx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD4   /// Position:C9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckin0;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af12_fsmc_noe;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC12   /// Position:C10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af08_uart5_tx;
    struct zap_gpio_speed_option    v_af10_fsmc_d3_da3;
    struct zap_gpio_speed_option    v_af12_sdio_ck;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA11   /// Position:C12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin5;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_spi2_nss;
    struct zap_gpio_speed_option    v_af06_spi4_miso;
    struct zap_gpio_speed_option    v_af07_usart1_cts;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dm;
    struct zap_gpio_speed_option    v_af11_uart4_rx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PH0   /// Position:D1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF2   /// Position:D4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af12_fsmc_a2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB7   /// Position:D6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_in2;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af04_i2c1_sda;
    struct zap_gpio_speed_option    v_af06_dfsdm2_datin7;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_nl;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG13   /// Position:D7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced2;
    struct zap_gpio_speed_option    v_af08_usart6_cts;
    struct zap_gpio_speed_option    v_af12_fsmc_a24;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG10   /// Position:D8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fsmc_ne3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD3   /// Position:D9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced1;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af06_dfsdm1_datin0;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af09_quadspi_clk;
    struct zap_gpio_speed_option    v_af12_fsmc_clk;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD1   /// Position:D10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin6;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af11_uart4_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_d3_da3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA10   /// Position:D11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin3;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af06_i2s5_sd_spi5_mosi;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_id;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA9   /// Position:D12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin3;
    struct zap_gpio_speed_option    v_af04_i2c3_smba;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_vbus;
    struct zap_gpio_speed_option    v_af12_sdio_d2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PH1   /// Position:E1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF3   /// Position:E2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch1;
    struct zap_gpio_speed_option    v_af12_fsmc_a3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF4   /// Position:E3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch2;
    struct zap_gpio_speed_option    v_af12_fsmc_a4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF5   /// Position:E4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch3;
    struct zap_gpio_speed_option    v_af12_fsmc_a5;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG9   /// Position:E8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk2_io2;
    struct zap_gpio_speed_option    v_af12_fsmc_ne2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD2   /// Position:E9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_etr;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckout;
    struct zap_gpio_speed_option    v_af08_uart5_rx;
    struct zap_gpio_speed_option    v_af10_fsmc_nwe;
    struct zap_gpio_speed_option    v_af12_sdio_cmd;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD0   /// Position:E10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin6;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af11_uart4_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_d2_da2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC9   /// Position:E11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_mco_2;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch4;
    struct zap_gpio_speed_option    v_af04_i2c3_sda;
    struct zap_gpio_speed_option    v_af05_i2s_ckin;
    struct zap_gpio_speed_option    v_af07_dfsdm2_datin3;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io0;
    struct zap_gpio_speed_option    v_af12_sdio_d1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA8   /// Position:E12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_mco_1;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af04_i2c3_scl;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckout;
    struct zap_gpio_speed_option    v_af07_usart1_ck;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_sof;
    struct zap_gpio_speed_option    v_af11_can3_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF7   /// Position:F2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced1;
    struct zap_gpio_speed_option    v_af03_tim11_ch1;
    struct zap_gpio_speed_option    v_af07_sai1_mclk_b;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io2;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF6   /// Position:F3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced0;
    struct zap_gpio_speed_option    v_af03_tim10_ch1;
    struct zap_gpio_speed_option    v_af07_sai1_sd_b;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC8   /// Position:F11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch3;
    struct zap_gpio_speed_option    v_af07_dfsdm2_ckin3;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io2;
    struct zap_gpio_speed_option    v_af12_sdio_d0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC7   /// Position:F12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_mck;
    struct zap_gpio_speed_option    v_af07_dfsdm2_ckin6;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af10_dfsdm1_datin3;
    struct zap_gpio_speed_option    v_af12_sdio_d7;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF10   /// Position:G1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af02_tim5_ch4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF9   /// Position:G2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_sai1_fs_b;
    struct zap_gpio_speed_option    v_af08_uart8_tx;
    struct zap_gpio_speed_option    v_af09_tim14_ch1;
    struct zap_gpio_speed_option    v_af10_quadspi_bk1_io1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF8   /// Position:G3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_sai1_sck_b;
    struct zap_gpio_speed_option    v_af08_uart8_rx;
    struct zap_gpio_speed_option    v_af09_tim13_ch1;
    struct zap_gpio_speed_option    v_af10_quadspi_bk1_io0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG8   /// Position:G11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC6   /// Position:G12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_ch1;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af05_i2s2_mck;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckin3;
    struct zap_gpio_speed_option    v_af07_dfsdm2_datin6;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af10_fsmc_d1_da1;
    struct zap_gpio_speed_option    v_af12_sdio_d6;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC0   /// Position:H1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_in1;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin4;
    struct zap_gpio_speed_option    v_af07_sai1_mclk_b;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC1   /// Position:H2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin4;
    struct zap_gpio_speed_option    v_af07_sai1_sd_b;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC2   /// Position:H3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_in2;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin7;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af07_sai1_sck_b;
    struct zap_gpio_speed_option    v_af08_dfsdm1_ckout;
    struct zap_gpio_speed_option    v_af12_fsmc_nwe;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC3   /// Position:H4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_etr;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin7;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af07_sai1_fs_b;
    struct zap_gpio_speed_option    v_af12_fsmc_a0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE11   /// Position:H8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin0;
    struct zap_gpio_speed_option    v_af05_i2s4_ws_spi4_nss;
    struct zap_gpio_speed_option    v_af06_i2s5_ws_spi5_nss;
    struct zap_gpio_speed_option    v_af12_fsmc_d8_da8;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD11   /// Position:H9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_smba;
    struct zap_gpio_speed_option    v_af07_usart3_cts;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io0;
    struct zap_gpio_speed_option    v_af12_fsmc_a16;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG7   /// Position:H10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG6   /// Position:H11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af10_quadspi_bk1_ncs;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG5   /// Position:H12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fsmc_a15;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA0   /// Position:J2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af02_tim5_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_etr;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA4   /// Position:J3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s1_ws_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af08_dfsdm1_datin1;
    struct zap_gpio_speed_option    v_af12_fsmc_d6_da6;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC4   /// Position:J4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin2;
    struct zap_gpio_speed_option    v_af05_i2s1_mck;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io2;
    struct zap_gpio_speed_option    v_af12_fsmc_ne4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB2   /// Position:J5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_lptim1_out;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckin0;
    struct zap_gpio_speed_option    v_af09_quadspi_clk;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG1   /// Position:J6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af11_uart9_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_a11;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE10   /// Position:J7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin0;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io3;
    struct zap_gpio_speed_option    v_af12_fsmc_d7_da7;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE12   /// Position:J8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin7;
    struct zap_gpio_speed_option    v_af05_i2s4_ck_spi4_sck;
    struct zap_gpio_speed_option    v_af06_i2s5_ck_spi5_sck;
    struct zap_gpio_speed_option    v_af12_fsmc_d9_da9;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD10   /// Position:J9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_d15_da15;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG4   /// Position:J10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fsmc_a14;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG3   /// Position:J11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fsmc_a13;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG2   /// Position:J12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fsmc_a12;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA1   /// Position:K2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af02_tim5_ch2;
    struct zap_gpio_speed_option    v_af05_i2s4_sd_spi4_mosi;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io3;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA5   /// Position:K3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_i2s1_ck_spi1_sck;
    struct zap_gpio_speed_option    v_af08_dfsdm1_ckin1;
    struct zap_gpio_speed_option    v_af12_fsmc_d7_da7;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PC5   /// Position:K4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_dfsdm2_datin2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_smba;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io3;
    struct zap_gpio_speed_option    v_af12_fsmc_noe;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF13   /// Position:K5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_smba;
    struct zap_gpio_speed_option    v_af12_fsmc_a7;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PG0   /// Position:K6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af11_uart9_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_a10;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE9   /// Position:K7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckout;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io2;
    struct zap_gpio_speed_option    v_af12_fsmc_d6_da6;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE13   /// Position:K8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin7;
    struct zap_gpio_speed_option    v_af05_spi4_miso;
    struct zap_gpio_speed_option    v_af06_spi5_miso;
    struct zap_gpio_speed_option    v_af12_fsmc_d10_da10;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD9   /// Position:K9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_d14_da14;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD13   /// Position:K10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io3;
    struct zap_gpio_speed_option    v_af12_fsmc_a18;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD14   /// Position:K11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af10_dfsdm2_ckin0;
    struct zap_gpio_speed_option    v_af11_uart9_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_d0_da0;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD15   /// Position:K12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch4;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af10_dfsdm2_datin0;
    struct zap_gpio_speed_option    v_af11_uart9_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_d1_da1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA2   /// Position:L2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af02_tim5_ch3;
    struct zap_gpio_speed_option    v_af03_tim9_ch1;
    struct zap_gpio_speed_option    v_af05_i2s_ckin;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_d4_da4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA6   /// Position:L3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_bkin;
    struct zap_gpio_speed_option    v_af05_spi1_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_mck;
    struct zap_gpio_speed_option    v_af07_dfsdm2_ckin1;
    struct zap_gpio_speed_option    v_af09_tim13_ch1;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io0;
    struct zap_gpio_speed_option    v_af12_sdio_cmd;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB0   /// Position:L4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af06_i2s5_ck_spi5_sck;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF12   /// Position:L5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_bkin;
    struct zap_gpio_speed_option    v_af12_fsmc_a6;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF15   /// Position:L6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af12_fsmc_a9;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE8   /// Position:L7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af06_dfsdm1_ckin2;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io1;
    struct zap_gpio_speed_option    v_af12_fsmc_d5_da5;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE14   /// Position:L8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af05_i2s4_sd_spi4_mosi;
    struct zap_gpio_speed_option    v_af06_i2s5_sd_spi5_mosi;
    struct zap_gpio_speed_option    v_af10_dfsdm2_datin1;
    struct zap_gpio_speed_option    v_af12_fsmc_d11_da11;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD8   /// Position:L9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af12_fsmc_d13_da13;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PD12   /// Position:L10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af03_dfsdm2_ckin2;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af07_usart3_rts;
    struct zap_gpio_speed_option    v_af09_quadspi_bk1_io1;
    struct zap_gpio_speed_option    v_af12_fsmc_a17;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB14   /// Position:L11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_sda;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af07_usart3_rts;
    struct zap_gpio_speed_option    v_af08_dfsdm1_datin2;
    struct zap_gpio_speed_option    v_af09_tim12_ch1;
    struct zap_gpio_speed_option    v_af10_fsmc_d0_da0;
    struct zap_gpio_speed_option    v_af12_sdio_d6;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB15   /// Position:L12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rtc_refin;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af08_dfsdm1_ckin2;
    struct zap_gpio_speed_option    v_af09_tim12_ch2;
    struct zap_gpio_speed_option    v_af12_sdio_ck;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA3   /// Position:M2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af02_tim5_ch4;
    struct zap_gpio_speed_option    v_af03_tim9_ch2;
    struct zap_gpio_speed_option    v_af05_i2s2_mck;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af10_sai1_sd_b;
    struct zap_gpio_speed_option    v_af12_fsmc_d5_da5;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PA7   /// Position:M3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_i2s1_sd_spi1_mosi;
    struct zap_gpio_speed_option    v_af07_dfsdm2_datin1;
    struct zap_gpio_speed_option    v_af09_tim14_ch1;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io1;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB1   /// Position:M4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af06_i2s5_ws_spi5_nss;
    struct zap_gpio_speed_option    v_af08_dfsdm1_datin0;
    struct zap_gpio_speed_option    v_af09_quadspi_clk;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF11   /// Position:M5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_etr;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PF14   /// Position:M6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af12_fsmc_a8;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE7   /// Position:M7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af06_dfsdm1_datin2;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af10_quadspi_bk2_io0;
    struct zap_gpio_speed_option    v_af12_fsmc_d4_da4;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PE15   /// Position:M8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af10_dfsdm2_ckin1;
    struct zap_gpio_speed_option    v_af12_fsmc_d12_da12;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB10   /// Position:M9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_mck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af09_fmpi2c1_scl;
    struct zap_gpio_speed_option    v_af10_dfsdm2_ckout;
    struct zap_gpio_speed_option    v_af12_sdio_d7;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB11   /// Position:M10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af05_i2s_ckin;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB12   /// Position:M11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_ck_spi2_nss;
    struct zap_gpio_speed_option    v_af06_i2s4_ws_spi4_nss;
    struct zap_gpio_speed_option    v_af07_spi3_sck;
    struct zap_gpio_speed_option    v_af08_usart3_ck;
    struct zap_gpio_speed_option    v_af09_can2_rx;
    struct zap_gpio_speed_option    v_af10_dfsdm1_datin1;
    struct zap_gpio_speed_option    v_af11_uart5_rx;
    struct zap_gpio_speed_option    v_af12_fsmc_d13_da13;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_PB13   /// Position:M12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af04_fmpi2c1_smba;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af06_i2s4_ck_spi4_sck;
    struct zap_gpio_speed_option    v_af08_usart3_cts;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af10_dfsdm1_ckin1;
    struct zap_gpio_speed_option    v_af11_uart5_tx;
    struct zap_gpio_speed_option    v_af15_eventout;
};

struct zap_gpio_port_a 
{
    struct zap_gpio_PA0      pin00;
    struct zap_gpio_PA1      pin01;
    struct zap_gpio_PA2      pin02;
    struct zap_gpio_PA3      pin03;
    struct zap_gpio_PA4      pin04;
    struct zap_gpio_PA5      pin05;
    struct zap_gpio_PA6      pin06;
    struct zap_gpio_PA7      pin07;
    struct zap_gpio_PA8      pin08;
    struct zap_gpio_PA9      pin09;
    struct zap_gpio_PA10     pin10;
    struct zap_gpio_PA11     pin11;
    struct zap_gpio_PA12     pin12;
    struct zap_gpio_PA13     pin13;
    struct zap_gpio_PA14     pin14;
    struct zap_gpio_PA15     pin15;
};

struct zap_gpio_port_b 
{
    struct zap_gpio_PB0      pin00;
    struct zap_gpio_PB1      pin01;
    struct zap_gpio_PB2      pin02;
    struct zap_gpio_PB3      pin03;
    struct zap_gpio_PB4      pin04;
    struct zap_gpio_PB5      pin05;
    struct zap_gpio_PB6      pin06;
    struct zap_gpio_PB7      pin07;
    struct zap_gpio_PB8      pin08;
    struct zap_gpio_PB9      pin09;
    struct zap_gpio_PB10     pin10;
    struct zap_gpio_PB11     pin11;
    struct zap_gpio_PB12     pin12;
    struct zap_gpio_PB13     pin13;
    struct zap_gpio_PB14     pin14;
    struct zap_gpio_PB15     pin15;
};

struct zap_gpio_port_c 
{
    struct zap_gpio_PC0      pin00;
    struct zap_gpio_PC1      pin01;
    struct zap_gpio_PC2      pin02;
    struct zap_gpio_PC3      pin03;
    struct zap_gpio_PC4      pin04;
    struct zap_gpio_PC5      pin05;
    struct zap_gpio_PC6      pin06;
    struct zap_gpio_PC7      pin07;
    struct zap_gpio_PC8      pin08;
    struct zap_gpio_PC9      pin09;
    struct zap_gpio_PC10     pin10;
    struct zap_gpio_PC11     pin11;
    struct zap_gpio_PC12     pin12;
    struct zap_gpio_PC13     pin13;
    struct zap_gpio_PC14     pin14;
    struct zap_gpio_PC15     pin15;
};

struct zap_gpio_port_d 
{
    struct zap_gpio_PD0      pin00;
    struct zap_gpio_PD1      pin01;
    struct zap_gpio_PD2      pin02;
    struct zap_gpio_PD3      pin03;
    struct zap_gpio_PD4      pin04;
    struct zap_gpio_PD5      pin05;
    struct zap_gpio_PD6      pin06;
    struct zap_gpio_PD7      pin07;
    struct zap_gpio_PD8      pin08;
    struct zap_gpio_PD9      pin09;
    struct zap_gpio_PD10     pin10;
    struct zap_gpio_PD11     pin11;
    struct zap_gpio_PD12     pin12;
    struct zap_gpio_PD13     pin13;
    struct zap_gpio_PD14     pin14;
    struct zap_gpio_PD15     pin15;
};

struct zap_gpio_port_e 
{
    struct zap_gpio_PE0      pin00;
    struct zap_gpio_PE1      pin01;
    struct zap_gpio_PE2      pin02;
    struct zap_gpio_PE3      pin03;
    struct zap_gpio_PE4      pin04;
    struct zap_gpio_PE5      pin05;
    struct zap_gpio_PE6      pin06;
    struct zap_gpio_PE7      pin07;
    struct zap_gpio_PE8      pin08;
    struct zap_gpio_PE9      pin09;
    struct zap_gpio_PE10     pin10;
    struct zap_gpio_PE11     pin11;
    struct zap_gpio_PE12     pin12;
    struct zap_gpio_PE13     pin13;
    struct zap_gpio_PE14     pin14;
    struct zap_gpio_PE15     pin15;
};

struct zap_gpio_port_f 
{
    struct zap_gpio_PF0      pin00;
    struct zap_gpio_PF1      pin01;
    struct zap_gpio_PF2      pin02;
    struct zap_gpio_PF3      pin03;
    struct zap_gpio_PF4      pin04;
    struct zap_gpio_PF5      pin05;
    struct zap_gpio_PF6      pin06;
    struct zap_gpio_PF7      pin07;
    struct zap_gpio_PF8      pin08;
    struct zap_gpio_PF9      pin09;
    struct zap_gpio_PF10     pin10;
    struct zap_gpio_PF11     pin11;
    struct zap_gpio_PF12     pin12;
    struct zap_gpio_PF13     pin13;
    struct zap_gpio_PF14     pin14;
    struct zap_gpio_PF15     pin15;
};

struct zap_gpio_port_g 
{
    struct zap_gpio_PG0      pin00;
    struct zap_gpio_PG1      pin01;
    struct zap_gpio_PG2      pin02;
    struct zap_gpio_PG3      pin03;
    struct zap_gpio_PG4      pin04;
    struct zap_gpio_PG5      pin05;
    struct zap_gpio_PG6      pin06;
    struct zap_gpio_PG7      pin07;
    struct zap_gpio_PG8      pin08;
    struct zap_gpio_PG9      pin09;
    struct zap_gpio_PG10     pin10;
    struct zap_gpio_PG11     pin11;
    struct zap_gpio_PG12     pin12;
    struct zap_gpio_PG13     pin13;
    struct zap_gpio_PG14     pin14;
    struct zap_gpio_PG15     pin15;
};

struct zap_gpio_port_h 
{
    struct zap_gpio_PH0      pin00;
    struct zap_gpio_PH1      pin01;
};

/// ALL
const struct
{
    struct zap_gpio_port_a   A;
    struct zap_gpio_port_b   B;
    struct zap_gpio_port_c   C;
    struct zap_gpio_port_d   D;
    struct zap_gpio_port_e   E;
    struct zap_gpio_port_f   F;
    struct zap_gpio_port_g   G;
    struct zap_gpio_port_h   H;
}zap_gpio;
