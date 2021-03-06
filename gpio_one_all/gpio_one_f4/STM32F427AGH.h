/// STM32F427AGH.h

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

struct zap_gpio_PI6   /// Position:A2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch2;
    struct zap_gpio_speed_option    v_af12_fmc_d28;
    struct zap_gpio_speed_option    v_af13_dcmi_d6;
};

struct zap_gpio_PI5   /// Position:A3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_nbl3;
    struct zap_gpio_speed_option    v_af13_dcmi_vsync;
};

struct zap_gpio_PE1   /// Position:A4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_uart8_tx;
    struct zap_gpio_speed_option    v_af12_fmc_nbl1;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
};

struct zap_gpio_PB4   /// Position:A6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtrst;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af05_spi1_miso;
    struct zap_gpio_speed_option    v_af06_spi3_miso;
    struct zap_gpio_speed_option    v_af07_i2s3_ext_sd;
};

struct zap_gpio_PG12   /// Position:A7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af12_fmc_ne4;
};

struct zap_gpio_PD7   /// Position:A8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_fmc_nce2_ne1;
};

struct zap_gpio_PD3   /// Position:A9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af12_fmc_clk;
    struct zap_gpio_speed_option    v_af13_dcmi_d5;
};

struct zap_gpio_PC12   /// Position:A10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af08_uart5_tx;
    struct zap_gpio_speed_option    v_af12_sdio_ck;
    struct zap_gpio_speed_option    v_af13_dcmi_d9;
};

struct zap_gpio_PA14   /// Position:A11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtck_swclk;
};

struct zap_gpio_PI3   /// Position:A12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_etr;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af12_fmc_d27;
    struct zap_gpio_speed_option    v_af13_dcmi_d10;
};

struct zap_gpio_PI7   /// Position:B1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch3;
    struct zap_gpio_speed_option    v_af12_fmc_d29;
    struct zap_gpio_speed_option    v_af13_dcmi_d7;
};

struct zap_gpio_PE2   /// Position:B2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traceclk;
    struct zap_gpio_speed_option    v_af05_spi4_sck;
    struct zap_gpio_speed_option    v_af06_sai1_mclk_a;
    struct zap_gpio_speed_option    v_af11_eth_txd3;
    struct zap_gpio_speed_option    v_af12_fmc_a23;
};

struct zap_gpio_PI4   /// Position:B3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_bkin;
    struct zap_gpio_speed_option    v_af12_fmc_nbl2;
    struct zap_gpio_speed_option    v_af13_dcmi_d5;
};

struct zap_gpio_PE0   /// Position:B4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_etr;
    struct zap_gpio_speed_option    v_af08_uart8_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nbl0;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
};

struct zap_gpio_PB7   /// Position:B5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af04_i2c1_sda;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nl;
    struct zap_gpio_speed_option    v_af13_dcmi_vsync;
};

struct zap_gpio_PB3   /// Position:B6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdo_swo;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
};

struct zap_gpio_PG11   /// Position:B7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_tx_en;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
};

struct zap_gpio_PD6   /// Position:B8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af06_sai1_sd_a;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nwait;
    struct zap_gpio_speed_option    v_af13_dcmi_d10;
};

struct zap_gpio_PD2   /// Position:B9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_etr;
    struct zap_gpio_speed_option    v_af08_uart5_rx;
    struct zap_gpio_speed_option    v_af12_sdio_cmd;
    struct zap_gpio_speed_option    v_af13_dcmi_d11;
};

struct zap_gpio_PC11   /// Position:B10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s3_ext_sd;
    struct zap_gpio_speed_option    v_af06_spi3_miso;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d3;
    struct zap_gpio_speed_option    v_af13_dcmi_d4;
};

struct zap_gpio_PA15   /// Position:B11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdi;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
};

struct zap_gpio_PI2   /// Position:B12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch4;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af12_fmc_d26;
    struct zap_gpio_speed_option    v_af13_dcmi_d9;
};

struct zap_gpio_PI0   /// Position:B13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch4;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_spi2_nss;
    struct zap_gpio_speed_option    v_af12_fmc_d24;
    struct zap_gpio_speed_option    v_af13_dcmi_d13;
};

struct zap_gpio_PE3   /// Position:C1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced0;
    struct zap_gpio_speed_option    v_af06_sai1_sd_b;
    struct zap_gpio_speed_option    v_af12_fmc_a19;
};

struct zap_gpio_PE4   /// Position:C2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced1;
    struct zap_gpio_speed_option    v_af05_spi4_nss;
    struct zap_gpio_speed_option    v_af06_sai1_fs_a;
    struct zap_gpio_speed_option    v_af12_fmc_a20;
    struct zap_gpio_speed_option    v_af13_dcmi_d4;
};

struct zap_gpio_PB9   /// Position:C4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch4;
    struct zap_gpio_speed_option    v_af03_tim11_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_sda;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_spi2_nss;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d5;
    struct zap_gpio_speed_option    v_af13_dcmi_d7;
};

struct zap_gpio_PB6   /// Position:C5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af12_fmc_sdne1;
    struct zap_gpio_speed_option    v_af13_dcmi_d5;
};

struct zap_gpio_PG15   /// Position:C6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_cts;
    struct zap_gpio_speed_option    v_af12_fmc_sdncas;
    struct zap_gpio_speed_option    v_af13_dcmi_d13;
};

struct zap_gpio_PG10   /// Position:C7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_ne3;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
};

struct zap_gpio_PD5   /// Position:C8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
    struct zap_gpio_speed_option    v_af12_fmc_nwe;
};

struct zap_gpio_PD1   /// Position:C9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d3_da3;
};

struct zap_gpio_PC10   /// Position:C10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d2;
    struct zap_gpio_speed_option    v_af13_dcmi_d8;
};

struct zap_gpio_PI1   /// Position:C11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af12_fmc_d25;
    struct zap_gpio_speed_option    v_af13_dcmi_d8;
};

struct zap_gpio_PH15   /// Position:C12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af12_fmc_d23;
    struct zap_gpio_speed_option    v_af13_dcmi_d11;
};

struct zap_gpio_PH14   /// Position:C13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af12_fmc_d22;
    struct zap_gpio_speed_option    v_af13_dcmi_d4;
};

struct zap_gpio_PE5   /// Position:D1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced2;
    struct zap_gpio_speed_option    v_af03_tim9_ch1;
    struct zap_gpio_speed_option    v_af05_spi4_miso;
    struct zap_gpio_speed_option    v_af06_sai1_sck_a;
    struct zap_gpio_speed_option    v_af12_fmc_a21;
    struct zap_gpio_speed_option    v_af13_dcmi_d6;
};

struct zap_gpio_PE6   /// Position:D2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced3;
    struct zap_gpio_speed_option    v_af03_tim9_ch2;
    struct zap_gpio_speed_option    v_af05_spi4_mosi;
    struct zap_gpio_speed_option    v_af06_sai1_sd_a;
    struct zap_gpio_speed_option    v_af12_fmc_a22;
    struct zap_gpio_speed_option    v_af13_dcmi_d7;
};

struct zap_gpio_PB8   /// Position:D4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af03_tim10_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af11_eth_txd3;
    struct zap_gpio_speed_option    v_af12_sdio_d4;
    struct zap_gpio_speed_option    v_af13_dcmi_d6;
};

struct zap_gpio_PB5   /// Position:D5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af04_i2c1_smba;
    struct zap_gpio_speed_option    v_af05_spi1_mosi;
    struct zap_gpio_speed_option    v_af06_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af09_can2_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d7;
    struct zap_gpio_speed_option    v_af11_eth_pps_out;
    struct zap_gpio_speed_option    v_af12_fmc_sdcke1;
    struct zap_gpio_speed_option    v_af13_dcmi_d10;
};

struct zap_gpio_PD4   /// Position:D8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af12_fmc_noe;
};

struct zap_gpio_PD0   /// Position:D9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d2_da2;
};

struct zap_gpio_PH13   /// Position:D13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d21;
};

struct zap_gpio_PC14   /// Position:E1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PI9   /// Position:E2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d30;
};

struct zap_gpio_PI10   /// Position:E3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_rx_er;
    struct zap_gpio_speed_option    v_af12_fmc_d31;
};

struct zap_gpio_PC13   /// Position:E4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PA9   /// Position:E8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af04_i2c3_smba;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af13_dcmi_d0;
};

struct zap_gpio_PA10   /// Position:E9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_id;
    struct zap_gpio_speed_option    v_af13_dcmi_d1;
};

struct zap_gpio_PA11   /// Position:E10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af07_usart1_cts;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dm;
};

struct zap_gpio_PA12   /// Position:E11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af07_usart1_rts;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dp;
};

struct zap_gpio_PA13   /// Position:E12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtms_swdio;
};

struct zap_gpio_PA8   /// Position:E13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_mco_1;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af04_i2c3_scl;
    struct zap_gpio_speed_option    v_af07_usart1_ck;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_sof;
};

struct zap_gpio_PC15   /// Position:F1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PF0   /// Position:F2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af12_fmc_a0;
};

struct zap_gpio_PF1   /// Position:F3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af12_fmc_a1;
};

struct zap_gpio_PC6   /// Position:F9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_ch1;
    struct zap_gpio_speed_option    v_af05_i2s2_mck;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d6;
    struct zap_gpio_speed_option    v_af13_dcmi_d0;
};

struct zap_gpio_PC7   /// Position:F10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch2;
    struct zap_gpio_speed_option    v_af06_i2s3_mck;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d7;
    struct zap_gpio_speed_option    v_af13_dcmi_d1;
};

struct zap_gpio_PC8   /// Position:F11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch3;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af12_sdio_d0;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
};

struct zap_gpio_PC9   /// Position:F12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_mco_2;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch4;
    struct zap_gpio_speed_option    v_af04_i2c3_sda;
    struct zap_gpio_speed_option    v_af05_i2s_ckin;
    struct zap_gpio_speed_option    v_af12_sdio_d1;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
};

struct zap_gpio_PG8   /// Position:F13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af11_eth_pps_out;
    struct zap_gpio_speed_option    v_af12_fmc_sdclk;
};

struct zap_gpio_PH1   /// Position:G1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PH0   /// Position:G2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PF4   /// Position:G3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a4;
};

struct zap_gpio_PF3   /// Position:G4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a3;
};

struct zap_gpio_PF2   /// Position:G5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af12_fmc_a2;
};

struct zap_gpio_PC0   /// Position:G6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_stp;
    struct zap_gpio_speed_option    v_af12_fmc_sdnwe;
};

struct zap_gpio_PG6   /// Position:G11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_int2;
    struct zap_gpio_speed_option    v_af13_dcmi_d12;
};

struct zap_gpio_PG7   /// Position:G12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af13_dcmi_d13;
};

struct zap_gpio_PG5   /// Position:G13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a15_ba1;
};

struct zap_gpio_PF10   /// Position:H1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af13_dcmi_d11;
};

struct zap_gpio_PF5   /// Position:H3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a5;
};

struct zap_gpio_PC1   /// Position:H5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_mdc;
};

struct zap_gpio_PC2   /// Position:H6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_dir;
    struct zap_gpio_speed_option    v_af11_eth_txd2;
    struct zap_gpio_speed_option    v_af12_fmc_sdne0;
};

struct zap_gpio_PC3   /// Position:H7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_nxt;
    struct zap_gpio_speed_option    v_af11_eth_tx_clk;
    struct zap_gpio_speed_option    v_af12_fmc_sdcke0;
};

struct zap_gpio_PE13   /// Position:H9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af05_spi4_miso;
    struct zap_gpio_speed_option    v_af12_fmc_d10_da10;
};

struct zap_gpio_PD11   /// Position:H10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_cts;
    struct zap_gpio_speed_option    v_af12_fmc_a16_cle;
};

struct zap_gpio_PD14   /// Position:H11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af12_fmc_d0_da0;
};

struct zap_gpio_PG4   /// Position:H12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a14_ba0;
};

struct zap_gpio_PG2   /// Position:H13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a12;
};

struct zap_gpio_PA0   /// Position:J5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af02_tim5_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_etr;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af11_eth_crs;
};

struct zap_gpio_PE8   /// Position:J8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d5_da5;
};

struct zap_gpio_PE14   /// Position:J9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af05_spi4_mosi;
    struct zap_gpio_speed_option    v_af12_fmc_d11_da11;
};

struct zap_gpio_PD15   /// Position:J12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch4;
    struct zap_gpio_speed_option    v_af12_fmc_d1_da1;
};

struct zap_gpio_PD12   /// Position:J13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af07_usart3_rts;
    struct zap_gpio_speed_option    v_af12_fmc_a17_ale;
};

struct zap_gpio_PA1   /// Position:K1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af02_tim5_ch2;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
    struct zap_gpio_speed_option    v_af11_eth_ref_clk_rx_clk;
};

struct zap_gpio_PA2   /// Position:K2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af02_tim5_ch3;
    struct zap_gpio_speed_option    v_af03_tim9_ch1;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
    struct zap_gpio_speed_option    v_af11_eth_mdio;
};

struct zap_gpio_PA3   /// Position:K3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af02_tim5_ch4;
    struct zap_gpio_speed_option    v_af03_tim9_ch2;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d0;
    struct zap_gpio_speed_option    v_af11_eth_col;
};

struct zap_gpio_PA7   /// Position:K4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_spi1_mosi;
    struct zap_gpio_speed_option    v_af09_tim14_ch1;
    struct zap_gpio_speed_option    v_af11_eth_crs_dv_rx_dv;
};

struct zap_gpio_PB1   /// Position:K5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d2;
    struct zap_gpio_speed_option    v_af11_eth_rxd3;
};

struct zap_gpio_PF14   /// Position:K7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a8;
};

struct zap_gpio_PE9   /// Position:K8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_d6_da6;
};

struct zap_gpio_PE15   /// Position:K9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af12_fmc_d12_da12;
};

struct zap_gpio_PH9   /// Position:K10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c3_smba;
    struct zap_gpio_speed_option    v_af09_tim12_ch2;
    struct zap_gpio_speed_option    v_af12_fmc_d17;
    struct zap_gpio_speed_option    v_af13_dcmi_d0;
};

struct zap_gpio_PD10   /// Position:K11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af12_fmc_d15_da15;
};

struct zap_gpio_PD13   /// Position:K12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af12_fmc_a18;
};

struct zap_gpio_PD9   /// Position:K13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d14_da14;
};

struct zap_gpio_PH3   /// Position:L1 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_col;
    struct zap_gpio_speed_option    v_af12_fmc_sdne0;
};

struct zap_gpio_PH2   /// Position:L2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_crs;
    struct zap_gpio_speed_option    v_af12_fmc_sdcke0;
};

struct zap_gpio_PH5   /// Position:L3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af05_spi5_nss;
    struct zap_gpio_speed_option    v_af12_fmc_sdnwe;
};

struct zap_gpio_PC4   /// Position:L4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_rxd0;
};

struct zap_gpio_PB2   /// Position:L5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PF15   /// Position:L7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a9;
};

struct zap_gpio_PE10   /// Position:L8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af12_fmc_d7_da7;
};

struct zap_gpio_PB10   /// Position:L9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d3;
    struct zap_gpio_speed_option    v_af11_eth_rx_er;
};

struct zap_gpio_PH8   /// Position:L10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c3_sda;
    struct zap_gpio_speed_option    v_af12_fmc_d16;
    struct zap_gpio_speed_option    v_af13_dcmi_hsync;
};

struct zap_gpio_PH12   /// Position:L11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch3;
    struct zap_gpio_speed_option    v_af12_fmc_d20;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
};

struct zap_gpio_PD8   /// Position:L12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d13_da13;
};

struct zap_gpio_PB15   /// Position:L13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rtc_refin;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af09_tim12_ch2;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_dp;
};

struct zap_gpio_PH4   /// Position:M2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_nxt;
};

struct zap_gpio_PA5   /// Position:M3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_ck;
};

struct zap_gpio_PC5   /// Position:M4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_rxd1;
};

struct zap_gpio_PF11   /// Position:M5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi5_mosi;
    struct zap_gpio_speed_option    v_af12_fmc_sdnras;
    struct zap_gpio_speed_option    v_af13_dcmi_d12;
};

struct zap_gpio_PF13   /// Position:M6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a7;
};

struct zap_gpio_PG1   /// Position:M7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a11;
};

struct zap_gpio_PE11   /// Position:M8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af05_spi4_nss;
    struct zap_gpio_speed_option    v_af12_fmc_d8_da8;
};

struct zap_gpio_PB11   /// Position:M9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d4;
    struct zap_gpio_speed_option    v_af11_eth_tx_en;
};

struct zap_gpio_PH7   /// Position:M10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c3_scl;
    struct zap_gpio_speed_option    v_af05_spi5_miso;
    struct zap_gpio_speed_option    v_af11_eth_rxd3;
    struct zap_gpio_speed_option    v_af12_fmc_sdcke1;
    struct zap_gpio_speed_option    v_af13_dcmi_d9;
};

struct zap_gpio_PH11   /// Position:M11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch2;
    struct zap_gpio_speed_option    v_af12_fmc_d19;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
};

struct zap_gpio_PB13   /// Position:M12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart3_cts;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d6;
    struct zap_gpio_speed_option    v_af11_eth_txd1;
};

struct zap_gpio_PB14   /// Position:M13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af07_usart3_rts;
    struct zap_gpio_speed_option    v_af09_tim12_ch1;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_dm;
};

struct zap_gpio_PA4   /// Position:N2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_sof;
    struct zap_gpio_speed_option    v_af13_dcmi_hsync;
};

struct zap_gpio_PA6   /// Position:N3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_bkin;
    struct zap_gpio_speed_option    v_af05_spi1_miso;
    struct zap_gpio_speed_option    v_af09_tim13_ch1;
    struct zap_gpio_speed_option    v_af13_dcmi_pixclk;
};

struct zap_gpio_PB0   /// Position:N4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d1;
    struct zap_gpio_speed_option    v_af11_eth_rxd2;
};

struct zap_gpio_PF12   /// Position:N5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a6;
};

struct zap_gpio_PG0   /// Position:N6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a10;
};

struct zap_gpio_PE7   /// Position:N7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d4_da4;
};

struct zap_gpio_PE12   /// Position:N8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af05_spi4_sck;
    struct zap_gpio_speed_option    v_af12_fmc_d9_da9;
};

struct zap_gpio_PH6   /// Position:N10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af05_spi5_sck;
    struct zap_gpio_speed_option    v_af09_tim12_ch1;
    struct zap_gpio_speed_option    v_af11_eth_rxd2;
    struct zap_gpio_speed_option    v_af12_fmc_sdne1;
    struct zap_gpio_speed_option    v_af13_dcmi_d8;
};

struct zap_gpio_PH10   /// Position:N11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim5_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_d18;
    struct zap_gpio_speed_option    v_af13_dcmi_d1;
};

struct zap_gpio_PB12   /// Position:N12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af05_i2s2_ws_spi2_nss;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af09_can2_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d5;
    struct zap_gpio_speed_option    v_af11_eth_txd0;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_id;
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
    struct zap_gpio_PG4      pin04;
    struct zap_gpio_PG5      pin05;
    struct zap_gpio_PG6      pin06;
    struct zap_gpio_PG7      pin07;
    struct zap_gpio_PG8      pin08;
    struct zap_gpio_PG10     pin10;
    struct zap_gpio_PG11     pin11;
    struct zap_gpio_PG12     pin12;
    struct zap_gpio_PG15     pin15;
};

struct zap_gpio_port_h 
{
    struct zap_gpio_PH0      pin00;
    struct zap_gpio_PH1      pin01;
    struct zap_gpio_PH2      pin02;
    struct zap_gpio_PH3      pin03;
    struct zap_gpio_PH4      pin04;
    struct zap_gpio_PH5      pin05;
    struct zap_gpio_PH6      pin06;
    struct zap_gpio_PH7      pin07;
    struct zap_gpio_PH8      pin08;
    struct zap_gpio_PH9      pin09;
    struct zap_gpio_PH10     pin10;
    struct zap_gpio_PH11     pin11;
    struct zap_gpio_PH12     pin12;
    struct zap_gpio_PH13     pin13;
    struct zap_gpio_PH14     pin14;
    struct zap_gpio_PH15     pin15;
};

struct zap_gpio_port_i 
{
    struct zap_gpio_PI0      pin00;
    struct zap_gpio_PI1      pin01;
    struct zap_gpio_PI2      pin02;
    struct zap_gpio_PI3      pin03;
    struct zap_gpio_PI4      pin04;
    struct zap_gpio_PI5      pin05;
    struct zap_gpio_PI6      pin06;
    struct zap_gpio_PI7      pin07;
    struct zap_gpio_PI9      pin09;
    struct zap_gpio_PI10     pin10;
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
    struct zap_gpio_port_i   I;
}zap_gpio;
