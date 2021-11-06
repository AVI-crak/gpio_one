  /// gpio_one.h


/// шаблон
// gpio_one_pin(zap_gpio.   )
// gpio_one_pin(zap_gpio.H.pin05.v_af12_fmc_sdnwe.speed4.pull_up.lock_on);            /// FMC_sdnwe



#ifdef _gpio_one_pin_
 extern "C" {
#endif /* _gpio_one_pin_ */

#include <stdint.h>
/// добавить свой мк
#include "GPIO_ONE32F746BG.h"
void zap_gpio_one_pin (const uint32_t s_gpio);
#define zap_char(v) #v

//#pragma GCC push_options
//#pragma GCC optimize ("-Os")

#if defined(__OPTIMIZE__)
__attribute__ ((always_inline, pure))inline uint32_t zap_gpio_nomer ( char* vss )
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
#else
uint32_t zap_gpio_nomer ( char* vss );
#endif



#define gpio_one_pin(zap_gpio_s)    zap_gpio_one_pin(zap_gpio_nomer(zap_char(zap_gpio_s)))



//#pragma GCC pop_options



#ifdef _gpio_one_pin_
}
#endif /* _gpio_one_pin_ */
#define _gpio_one_pin_
