#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void)
{
    // シリアルデバイスを初期化
    serial_init(SERIAL_DEFAULT_DEVICE);

    // Hello Worldを出力
    puts("Hello World\n");

    // 無限ループで停止
    while(1)
        ;
    
    return 0;
}