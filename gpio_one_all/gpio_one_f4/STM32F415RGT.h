/// STM32F415RGT.h

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

struct zap_gpio_PC13   /// Position:2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rtc_af1;
};

struct zap_gpio_PC14   /// Position:3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_osc32_in;
};

struct zap_gpio_PC15   /// Position:4 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_osc32_out;
};

struct zap_gpio_PH0   /// Position:5 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_osc_in;
};

struct zap_gpio_PH1   /// Position:6 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_osc_out;
};

struct zap_gpio_PC0   /// Position:8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_stp;
};

struct zap_gpio_PC1   /// Position:9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PC2   /// Position:10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi2_miso;
    struct zap_gpio_speed_option    v_af06_i2s2_ext_sd;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_dir;
};

struct zap_gpio_PC3   /// Position:11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_nxt;
};

struct zap_gpio_PA0   /// Position:14 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_wkup;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af02_tim5_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_etr;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
};

struct zap_gpio_PA1   /// Position:15 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af02_tim5_ch2;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
};

struct zap_gpio_PA2   /// Position:16 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af02_tim5_ch3;
    struct zap_gpio_speed_option    v_af03_tim9_ch1;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
};

struct zap_gpio_PA3   /// Position:17 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af02_tim5_ch4;
    struct zap_gpio_speed_option    v_af03_tim9_ch2;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d0;
};

struct zap_gpio_PA4   /// Position:20 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_sof;
};

struct zap_gpio_PA5   /// Position:21 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_ck;
};

struct zap_gpio_PA6   /// Position:22 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_bkin;
    struct zap_gpio_speed_option    v_af05_spi1_miso;
    struct zap_gpio_speed_option    v_af09_tim13_ch1;
};

struct zap_gpio_PA7   /// Position:23 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_spi1_mosi;
    struct zap_gpio_speed_option    v_af09_tim14_ch1;
};

struct zap_gpio_PC4   /// Position:24 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PC5   /// Position:25 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PB0   /// Position:26 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d1;
};

struct zap_gpio_PB1   /// Position:27 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d2;
};

struct zap_gpio_PB2   /// Position:28 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PB10   /// Position:29 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch3;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d3;
};

struct zap_gpio_PB11   /// Position:30 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d4;
};

struct zap_gpio_PB12   /// Position:33 
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
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_id;
};

struct zap_gpio_PB13   /// Position:34 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart3_cts;
    struct zap_gpio_speed_option    v_af09_can2_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d6;
};

struct zap_gpio_PB14   /// Position:35 
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

struct zap_gpio_PB15   /// Position:36 
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

struct zap_gpio_PC6   /// Position:37 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch1;
    struct zap_gpio_speed_option    v_af03_tim8_ch1;
    struct zap_gpio_speed_option    v_af05_i2s2_mck;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d6;
};

struct zap_gpio_PC7   /// Position:38 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch2;
    struct zap_gpio_speed_option    v_af03_tim8_ch2;
    struct zap_gpio_speed_option    v_af06_i2s3_mck;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d7;
};

struct zap_gpio_PC8   /// Position:39 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch3;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af12_sdio_d0;
};

struct zap_gpio_PC9   /// Position:40 
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
};

struct zap_gpio_PA8   /// Position:41 
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

struct zap_gpio_PA9   /// Position:42 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af04_i2c3_smba;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
};

struct zap_gpio_PA10   /// Position:43 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_id;
};

struct zap_gpio_PA11   /// Position:44 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af07_usart1_cts;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dm;
};

struct zap_gpio_PA12   /// Position:45 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af07_usart1_rts;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dp;
};

struct zap_gpio_PA13   /// Position:46 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtms_swdio;
};

struct zap_gpio_PA14   /// Position:49 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtck_swclk;
};

struct zap_gpio_PA15   /// Position:50 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdi;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
};

struct zap_gpio_PC10   /// Position:51 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d2;
};

struct zap_gpio_PC11   /// Position:52 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s3_ext_sd;
    struct zap_gpio_speed_option    v_af06_spi3_miso;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af08_uart4_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d3;
};

struct zap_gpio_PC12   /// Position:53 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af08_uart5_tx;
    struct zap_gpio_speed_option    v_af12_sdio_ck;
};

struct zap_gpio_PD2   /// Position:54 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_etr;
    struct zap_gpio_speed_option    v_af08_uart5_rx;
    struct zap_gpio_speed_option    v_af12_sdio_cmd;
};

struct zap_gpio_PB3   /// Position:55 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdo_swo;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
};

struct zap_gpio_PB4   /// Position:56 
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

struct zap_gpio_PB5   /// Position:57 
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
};

struct zap_gpio_PB6   /// Position:58 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af09_can2_tx;
};

struct zap_gpio_PB7   /// Position:59 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af04_i2c1_sda;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
};

struct zap_gpio_PB8   /// Position:61 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af03_tim10_ch1;
    struct zap_gpio_speed_option    v_af04_i2c1_scl;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af12_sdio_d4;
};

struct zap_gpio_PB9   /// Position:62 
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
    struct zap_gpio_PD2      pin02;
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
    struct zap_gpio_port_h   H;
}zap_gpio;
