#include <printf.h>

extern void uart_init_boot();
extern void uart_send_boot(unsigned int c);
extern char uart_getc_boot();

void main() {
    uart_init_boot();
    printf("main.c:\tmain is start ...\n");
    // arm64_init();
    while (1) {
        uart_send_boot(uart_getc_boot());
    }
    
    panic("main is over is error!");
}
