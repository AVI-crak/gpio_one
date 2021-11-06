
#include "gpio_one.h"


#if !defined (__OPTIMIZE__)

uint32_t zap_gpio_nomer ( char* vss )
{
    uint16_t n = 0; uint32_t br = 0;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    if (vss[n] == "zap_gpio."[n]) n++;else return br;
    br = vss[n] - 'A'; br <<= 26; n += 5;
    br += ((vss[n] - '0') * 10) + (vss[n+1] - '0'); n += 3;
    if (vss[n] == 'a') // analog
    {
        br |= 3 << 8; n += 13; //(GPIO_MODE_analog 3<< 8)
        if (vss[n] == 'n') br |=  1<<15; // lock_on 1<< 15
    }else if (vss[n] == 'i')  // inprit
    {
        n += 12; //(GPIO_MODE_input.pull_up)
        if (vss[n] == 'p')
        {
            br |=  1<<12; n += 8; // pull_up << 12
            if (vss[n] == 'n') br |= 1 << 15; // lock_on 1<< 15
        }else if (vss[n] == 'o') // input.pull_down.
        {
            br |= 2<<12; n += 10; //pull_down
            if (vss[n] == 'n') br |=  1 << 15; // lock_on 1<< 15
        }else if (vss[n] == 'n') br |= 1 << 15; // lock_on 1<< 15
    }else if (vss[n] == 'o')  // Out.speedX
    {
        br |= 1<<8; n += 9; //(GPIO_MODE_out 1<< 8)
        if (vss[n] == '2') br |= 1 << 10; // GPIO_SPEED_2
        else if (vss[n] == '3') br |= 2 << 10; // GPIO_SPEED_3
        else if (vss[n] == '4') br |= 3 << 10; // GPIO_SPEED_4
        n += 8;
        if (vss[n] == 'o')       //speedx.pull_dOwn
        {
            br |= 2<<12; n += 10; //pull_down
            if (vss[n] == 'n') br |= 1 << 15; // lock_oN 1<< 15
        }else if (vss[n] == 'n') // speedx.lock_oN 1<< 15
        {
            br |= 1 << 15;
        }else if (vss[n] == 'p') // speedx.pull_uP
        {
            br |= 1<<12; n += 8;  // p.open_dRain.lock_oN
            if (vss[n] == 'r')
            {
                br |= 1 << 14; n += 11; // open_dRain 1<< 14
                if (vss[n] == 'n') br |= 1 << 15; // .lock_oN 1<< 15
            }else if (vss[n] == 'n') br |= 1 << 15; // lock_oN 1<< 15
        };
    }
    else  // alt af
    {
        n += 4; br |=  2<<8;  //(GPIO_MODE_alt 1<< 8), v_afxx
        br |= (((vss[n] - '0') * 10) + (vss[n+1] - '0')) << 4; // (GPIO_AF_XX << 4)
        n += 2;
        if (vss[n++] == '.') n++; //n + 20
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++;
        else if (vss[n++] == '.') n++; //.sPeedx
        n += 4;
        if (vss[n] == '2') br |= 1 << 10; // GPIO_SPEED_2
        else if (vss[n] == '3') br |= 2 << 10; // GPIO_SPEED_3
        else if (vss[n] == '4') br |= 3 << 10; // GPIO_SPEED_4
        n += 8;
        if (vss[n] == 'o')       //speedx.pull_dOwn
        {
            br |= 2<<12; n += 10; //pull_down
            if (vss[n] == 'n') br |= 1 << 15; // lock_oN 1<< 15
        }else if (vss[n] == 'n') // speedx.lock_oN 1<< 15
        {
            br |= 1 << 15;
        }else if (vss[n] == 'p') // speedx.pull_uP
        {
            br |= 1<<12; n += 8;  // p.open_dRain.lock_oN
            if (vss[n] == 'r')
            {
                br |= 1 << 14; n += 11; // open_dRain 1<< 14
                if (vss[n] == 'n') br |= 1 << 15; // .lock_oN 1<< 15
            }else if (vss[n] == 'n') br |= 1 << 15; // lock_oN 1<< 15
        };
    };
    return br;
};
#endif


typedef union
{
 struct
    {
        uint32_t pin:4;
        uint32_t af:4;
        uint32_t mode:2;
        uint32_t sped:2;
        uint32_t pup:2;
        uint32_t yper:1;
        uint32_t lok:1;
        uint32_t port:16;
    };
 struct
    {
        uint32_t pin_afd:3;
        uint32_t pin_afa:1;
        uint32_t RESERVED1:28;
    };
 uint32_t data_s;
} zap_in_TypeDef;

typedef struct
{
  volatile uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  volatile uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
  volatile uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
  volatile uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
  volatile uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
  volatile uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
  volatile uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
  volatile uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
  volatile uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} zap_GPIO_TypeDef;       /// alternate copy



void zap_gpio_one_pin (const uint32_t s_gpio)
{
    zap_in_TypeDef init;
    init.data_s = s_gpio;
    zap_GPIO_TypeDef* GPIOx = (void*)0x40020000 + init.port;

    GPIOx->MODER = (GPIOx->MODER & (~(3 << (init.pin << 1)))) | (init.mode << (init.pin << 1));
    GPIOx->PUPDR = (GPIOx->PUPDR & (~(3 << (init.pin << 1)))) | (init.pup << (init.pin << 1));
    GPIOx->OSPEEDR = (GPIOx->OSPEEDR & (~(3 << (init.pin << 1)))) | (init.sped << (init.pin << 1));
    if (init.yper)  GPIOx->OTYPER |= 1 << init.pin; else GPIOx->OTYPER &= ~(1 << init.pin);
    if (init.mode == 2 )
    {
        GPIOx->AFR[init.pin_afa] = (GPIOx->AFR[init.pin_afa] &(~(15 << (init.pin_afd << 2)))) | (init.af << (init.pin_afd << 2));
    };
    if (init.lok)
    {
        GPIOx->LCKR = (1 << 16) | (1 << init.pin);
        GPIOx->LCKR = 1 << init.pin;
        GPIOx->LCKR = (1 << 16) | (1 << init.pin);
    };
};

