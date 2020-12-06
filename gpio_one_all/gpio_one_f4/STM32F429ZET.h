/// STM32F429ZET.h

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

struct zap_gpio_PE2   /// Position:1 
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

struct zap_gpio_PE3   /// Position:2 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced0;
    struct zap_gpio_speed_option    v_af06_sai1_sd_b;
    struct zap_gpio_speed_option    v_af12_fmc_a19;
};

struct zap_gpio_PE4   /// Position:3 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_traced1;
    struct zap_gpio_speed_option    v_af05_spi4_nss;
    struct zap_gpio_speed_option    v_af06_sai1_fs_a;
    struct zap_gpio_speed_option    v_af12_fmc_a20;
    struct zap_gpio_speed_option    v_af13_dcmi_d4;
    struct zap_gpio_speed_option    v_af14_ltdc_b0;
};

struct zap_gpio_PE5   /// Position:4 
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
    struct zap_gpio_speed_option    v_af14_ltdc_g0;
};

struct zap_gpio_PE6   /// Position:5 
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
    struct zap_gpio_speed_option    v_af14_ltdc_g1;
};

struct zap_gpio_PC13   /// Position:7 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PC14   /// Position:8 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PC15   /// Position:9 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PF0   /// Position:10 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af12_fmc_a0;
};

struct zap_gpio_PF1   /// Position:11 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_scl;
    struct zap_gpio_speed_option    v_af12_fmc_a1;
};

struct zap_gpio_PF2   /// Position:12 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af04_i2c2_smba;
    struct zap_gpio_speed_option    v_af12_fmc_a2;
};

struct zap_gpio_PF3   /// Position:13 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a3;
};

struct zap_gpio_PF4   /// Position:14 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a4;
};

struct zap_gpio_PF5   /// Position:15 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a5;
};

struct zap_gpio_PF6   /// Position:18 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim10_ch1;
    struct zap_gpio_speed_option    v_af05_spi5_nss;
    struct zap_gpio_speed_option    v_af06_sai1_sd_b;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af12_fmc_niord;
};

struct zap_gpio_PF7   /// Position:19 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af03_tim11_ch1;
    struct zap_gpio_speed_option    v_af05_spi5_sck;
    struct zap_gpio_speed_option    v_af06_sai1_mclk_b;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af12_fmc_nreg;
};

struct zap_gpio_PF8   /// Position:20 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi5_miso;
    struct zap_gpio_speed_option    v_af06_sai1_sck_b;
    struct zap_gpio_speed_option    v_af09_tim13_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_niowr;
};

struct zap_gpio_PF9   /// Position:21 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi5_mosi;
    struct zap_gpio_speed_option    v_af06_sai1_fs_b;
    struct zap_gpio_speed_option    v_af09_tim14_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_cd;
};

struct zap_gpio_PF10   /// Position:22 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_intr;
    struct zap_gpio_speed_option    v_af13_dcmi_d11;
    struct zap_gpio_speed_option    v_af14_ltdc_de;
};

struct zap_gpio_PH0   /// Position:23 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PH1   /// Position:24 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PC0   /// Position:26 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_stp;
    struct zap_gpio_speed_option    v_af12_fmc_sdnwe;
};

struct zap_gpio_PC1   /// Position:27 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_mdc;
};

struct zap_gpio_PC2   /// Position:28 
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

struct zap_gpio_PC3   /// Position:29 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_sd_spi2_mosi;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_nxt;
    struct zap_gpio_speed_option    v_af11_eth_tx_clk;
    struct zap_gpio_speed_option    v_af12_fmc_sdcke0;
};

struct zap_gpio_PA0   /// Position:34 
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

struct zap_gpio_PA1   /// Position:35 
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

struct zap_gpio_PA2   /// Position:36 
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

struct zap_gpio_PA3   /// Position:37 
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
    struct zap_gpio_speed_option    v_af14_ltdc_b5;
};

struct zap_gpio_PA4   /// Position:40 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_usb_otg_hs_sof;
    struct zap_gpio_speed_option    v_af13_dcmi_hsync;
    struct zap_gpio_speed_option    v_af14_ltdc_vsync;
};

struct zap_gpio_PA5   /// Position:41 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af03_tim8_ch1n;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_ck;
};

struct zap_gpio_PA6   /// Position:42 
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
    struct zap_gpio_speed_option    v_af14_ltdc_g2;
};

struct zap_gpio_PA7   /// Position:43 
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

struct zap_gpio_PC4   /// Position:44 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_rxd0;
};

struct zap_gpio_PC5   /// Position:45 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_rxd1;
};

struct zap_gpio_PB0   /// Position:46 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af02_tim3_ch3;
    struct zap_gpio_speed_option    v_af03_tim8_ch2n;
    struct zap_gpio_speed_option    v_af09_ltdc_r3;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d1;
    struct zap_gpio_speed_option    v_af11_eth_rxd2;
};

struct zap_gpio_PB1   /// Position:47 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af02_tim3_ch4;
    struct zap_gpio_speed_option    v_af03_tim8_ch3n;
    struct zap_gpio_speed_option    v_af09_ltdc_r6;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d2;
    struct zap_gpio_speed_option    v_af11_eth_rxd3;
};

struct zap_gpio_PB2   /// Position:48 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
};

struct zap_gpio_PF11   /// Position:49 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi5_mosi;
    struct zap_gpio_speed_option    v_af12_fmc_sdnras;
    struct zap_gpio_speed_option    v_af13_dcmi_d12;
};

struct zap_gpio_PF12   /// Position:50 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a6;
};

struct zap_gpio_PF13   /// Position:53 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a7;
};

struct zap_gpio_PF14   /// Position:54 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a8;
};

struct zap_gpio_PF15   /// Position:55 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a9;
};

struct zap_gpio_PG0   /// Position:56 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a10;
};

struct zap_gpio_PG1   /// Position:57 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a11;
};

struct zap_gpio_PE7   /// Position:58 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af08_uart7_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d4_da4;
};

struct zap_gpio_PE8   /// Position:59 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1n;
    struct zap_gpio_speed_option    v_af08_uart7_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d5_da5;
};

struct zap_gpio_PE9   /// Position:60 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af12_fmc_d6_da6;
};

struct zap_gpio_PE10   /// Position:63 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2n;
    struct zap_gpio_speed_option    v_af12_fmc_d7_da7;
};

struct zap_gpio_PE11   /// Position:64 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af05_spi4_nss;
    struct zap_gpio_speed_option    v_af12_fmc_d8_da8;
    struct zap_gpio_speed_option    v_af14_ltdc_g3;
};

struct zap_gpio_PE12   /// Position:65 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3n;
    struct zap_gpio_speed_option    v_af05_spi4_sck;
    struct zap_gpio_speed_option    v_af12_fmc_d9_da9;
    struct zap_gpio_speed_option    v_af14_ltdc_b4;
};

struct zap_gpio_PE13   /// Position:66 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af05_spi4_miso;
    struct zap_gpio_speed_option    v_af12_fmc_d10_da10;
    struct zap_gpio_speed_option    v_af14_ltdc_de;
};

struct zap_gpio_PE14   /// Position:67 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af05_spi4_mosi;
    struct zap_gpio_speed_option    v_af12_fmc_d11_da11;
    struct zap_gpio_speed_option    v_af14_ltdc_clk;
};

struct zap_gpio_PE15   /// Position:68 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_bkin;
    struct zap_gpio_speed_option    v_af12_fmc_d12_da12;
    struct zap_gpio_speed_option    v_af14_ltdc_r7;
};

struct zap_gpio_PB10   /// Position:69 
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
    struct zap_gpio_speed_option    v_af14_ltdc_g4;
};

struct zap_gpio_PB11   /// Position:70 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim2_ch4;
    struct zap_gpio_speed_option    v_af04_i2c2_sda;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_hs_ulpi_d4;
    struct zap_gpio_speed_option    v_af11_eth_tx_en;
    struct zap_gpio_speed_option    v_af14_ltdc_g5;
};

struct zap_gpio_PB12   /// Position:73 
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

struct zap_gpio_PB13   /// Position:74 
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

struct zap_gpio_PB14   /// Position:75 
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

struct zap_gpio_PB15   /// Position:76 
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

struct zap_gpio_PD8   /// Position:77 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d13_da13;
};

struct zap_gpio_PD9   /// Position:78 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d14_da14;
};

struct zap_gpio_PD10   /// Position:79 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_ck;
    struct zap_gpio_speed_option    v_af12_fmc_d15_da15;
    struct zap_gpio_speed_option    v_af14_ltdc_b3;
};

struct zap_gpio_PD11   /// Position:80 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart3_cts;
    struct zap_gpio_speed_option    v_af12_fmc_a16_cle;
};

struct zap_gpio_PD12   /// Position:81 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch1;
    struct zap_gpio_speed_option    v_af07_usart3_rts;
    struct zap_gpio_speed_option    v_af12_fmc_a17_ale;
};

struct zap_gpio_PD13   /// Position:82 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch2;
    struct zap_gpio_speed_option    v_af12_fmc_a18;
};

struct zap_gpio_PD14   /// Position:85 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch3;
    struct zap_gpio_speed_option    v_af12_fmc_d0_da0;
};

struct zap_gpio_PD15   /// Position:86 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_ch4;
    struct zap_gpio_speed_option    v_af12_fmc_d1_da1;
};

struct zap_gpio_PG2   /// Position:87 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a12;
};

struct zap_gpio_PG3   /// Position:88 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a13;
};

struct zap_gpio_PG4   /// Position:89 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a14_ba0;
};

struct zap_gpio_PG5   /// Position:90 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_a15_ba1;
};

struct zap_gpio_PG6   /// Position:91 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af12_fmc_int2;
    struct zap_gpio_speed_option    v_af13_dcmi_d12;
    struct zap_gpio_speed_option    v_af14_ltdc_r7;
};

struct zap_gpio_PG7   /// Position:92 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_ck;
    struct zap_gpio_speed_option    v_af12_fmc_int3;
    struct zap_gpio_speed_option    v_af13_dcmi_d13;
    struct zap_gpio_speed_option    v_af14_ltdc_clk;
};

struct zap_gpio_PG8   /// Position:93 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi6_nss;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af11_eth_pps_out;
    struct zap_gpio_speed_option    v_af12_fmc_sdclk;
};

struct zap_gpio_PC6   /// Position:96 
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
    struct zap_gpio_speed_option    v_af14_ltdc_hsync;
};

struct zap_gpio_PC7   /// Position:97 
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
    struct zap_gpio_speed_option    v_af14_ltdc_g6;
};

struct zap_gpio_PC8   /// Position:98 
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

struct zap_gpio_PC9   /// Position:99 
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

struct zap_gpio_PA8   /// Position:100 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_rcc_mco_1;
    struct zap_gpio_speed_option    v_af01_tim1_ch1;
    struct zap_gpio_speed_option    v_af04_i2c3_scl;
    struct zap_gpio_speed_option    v_af07_usart1_ck;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_sof;
    struct zap_gpio_speed_option    v_af14_ltdc_r6;
};

struct zap_gpio_PA9   /// Position:101 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch2;
    struct zap_gpio_speed_option    v_af04_i2c3_smba;
    struct zap_gpio_speed_option    v_af07_usart1_tx;
    struct zap_gpio_speed_option    v_af13_dcmi_d0;
};

struct zap_gpio_PA10   /// Position:102 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch3;
    struct zap_gpio_speed_option    v_af07_usart1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_id;
    struct zap_gpio_speed_option    v_af13_dcmi_d1;
};

struct zap_gpio_PA11   /// Position:103 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_ch4;
    struct zap_gpio_speed_option    v_af07_usart1_cts;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dm;
    struct zap_gpio_speed_option    v_af14_ltdc_r4;
};

struct zap_gpio_PA12   /// Position:104 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af01_tim1_etr;
    struct zap_gpio_speed_option    v_af07_usart1_rts;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af10_usb_otg_fs_dp;
    struct zap_gpio_speed_option    v_af14_ltdc_r5;
};

struct zap_gpio_PA13   /// Position:105 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtms_swdio;
};

struct zap_gpio_PA14   /// Position:109 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtck_swclk;
};

struct zap_gpio_PA15   /// Position:110 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdi;
    struct zap_gpio_speed_option    v_af01_tim2_ch1_etr;
    struct zap_gpio_speed_option    v_af05_spi1_nss;
    struct zap_gpio_speed_option    v_af06_i2s3_ws_spi3_nss;
};

struct zap_gpio_PC10   /// Position:111 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
    struct zap_gpio_speed_option    v_af07_usart3_tx;
    struct zap_gpio_speed_option    v_af08_uart4_tx;
    struct zap_gpio_speed_option    v_af12_sdio_d2;
    struct zap_gpio_speed_option    v_af13_dcmi_d8;
    struct zap_gpio_speed_option    v_af14_ltdc_r2;
};

struct zap_gpio_PC11   /// Position:112 
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

struct zap_gpio_PC12   /// Position:113 
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

struct zap_gpio_PD0   /// Position:114 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_rx;
    struct zap_gpio_speed_option    v_af12_fmc_d2_da2;
};

struct zap_gpio_PD1   /// Position:115 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_can1_tx;
    struct zap_gpio_speed_option    v_af12_fmc_d3_da3;
};

struct zap_gpio_PD2   /// Position:116 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim3_etr;
    struct zap_gpio_speed_option    v_af08_uart5_rx;
    struct zap_gpio_speed_option    v_af12_sdio_cmd;
    struct zap_gpio_speed_option    v_af13_dcmi_d11;
};

struct zap_gpio_PD3   /// Position:117 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s2_ck_spi2_sck;
    struct zap_gpio_speed_option    v_af07_usart2_cts;
    struct zap_gpio_speed_option    v_af12_fmc_clk;
    struct zap_gpio_speed_option    v_af13_dcmi_d5;
    struct zap_gpio_speed_option    v_af14_ltdc_g7;
};

struct zap_gpio_PD4   /// Position:118 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_rts;
    struct zap_gpio_speed_option    v_af12_fmc_noe;
};

struct zap_gpio_PD5   /// Position:119 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_tx;
    struct zap_gpio_speed_option    v_af12_fmc_nwe;
};

struct zap_gpio_PD6   /// Position:122 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_i2s3_sd_spi3_mosi;
    struct zap_gpio_speed_option    v_af06_sai1_sd_a;
    struct zap_gpio_speed_option    v_af07_usart2_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nwait;
    struct zap_gpio_speed_option    v_af13_dcmi_d10;
    struct zap_gpio_speed_option    v_af14_ltdc_b2;
};

struct zap_gpio_PD7   /// Position:123 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af07_usart2_ck;
    struct zap_gpio_speed_option    v_af12_fmc_nce2_ne1;
};

struct zap_gpio_PG9   /// Position:124 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nce3_ne2;
    struct zap_gpio_speed_option    v_af13_dcmi_vsync;
};

struct zap_gpio_PG10   /// Position:125 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af09_ltdc_g3;
    struct zap_gpio_speed_option    v_af12_fmc_nce4_1_ne3;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
    struct zap_gpio_speed_option    v_af14_ltdc_b2;
};

struct zap_gpio_PG11   /// Position:126 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af11_eth_tx_en;
    struct zap_gpio_speed_option    v_af12_fmc_nce4_2;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
    struct zap_gpio_speed_option    v_af14_ltdc_b3;
};

struct zap_gpio_PG12   /// Position:127 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi6_miso;
    struct zap_gpio_speed_option    v_af08_usart6_rts;
    struct zap_gpio_speed_option    v_af09_ltdc_b4;
    struct zap_gpio_speed_option    v_af12_fmc_ne4;
    struct zap_gpio_speed_option    v_af14_ltdc_b1;
};

struct zap_gpio_PG13   /// Position:128 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi6_sck;
    struct zap_gpio_speed_option    v_af08_usart6_cts;
    struct zap_gpio_speed_option    v_af11_eth_txd0;
    struct zap_gpio_speed_option    v_af12_fmc_a24;
};

struct zap_gpio_PG14   /// Position:129 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af05_spi6_mosi;
    struct zap_gpio_speed_option    v_af08_usart6_tx;
    struct zap_gpio_speed_option    v_af11_eth_txd1;
    struct zap_gpio_speed_option    v_af12_fmc_a25;
};

struct zap_gpio_PG15   /// Position:132 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_usart6_cts;
    struct zap_gpio_speed_option    v_af12_fmc_sdncas;
    struct zap_gpio_speed_option    v_af13_dcmi_d13;
};

struct zap_gpio_PB3   /// Position:133 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af00_sys_jtdo_swo;
    struct zap_gpio_speed_option    v_af01_tim2_ch2;
    struct zap_gpio_speed_option    v_af05_spi1_sck;
    struct zap_gpio_speed_option    v_af06_i2s3_ck_spi3_sck;
};

struct zap_gpio_PB4   /// Position:134 
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

struct zap_gpio_PB5   /// Position:135 
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

struct zap_gpio_PB6   /// Position:136 
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

struct zap_gpio_PB7   /// Position:137 
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

struct zap_gpio_PB8   /// Position:139 
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
    struct zap_gpio_speed_option    v_af14_ltdc_b6;
};

struct zap_gpio_PB9   /// Position:140 
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
    struct zap_gpio_speed_option    v_af14_ltdc_b7;
};

struct zap_gpio_PE0   /// Position:141 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af02_tim4_etr;
    struct zap_gpio_speed_option    v_af08_uart8_rx;
    struct zap_gpio_speed_option    v_af12_fmc_nbl0;
    struct zap_gpio_speed_option    v_af13_dcmi_d2;
};

struct zap_gpio_PE1   /// Position:142 
{
    struct zap_gpio_lock_option     analog;
    struct zap_gpio_pull_option_in  input;
    struct zap_gpio_speed_option    out;
    struct zap_gpio_speed_option    v_af08_uart8_tx;
    struct zap_gpio_speed_option    v_af12_fmc_nbl1;
    struct zap_gpio_speed_option    v_af13_dcmi_d3;
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
