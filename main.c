#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


int  f_fib() {
static int first = 0, second = 1;
int rez = first + second;
    first = second;
    second = rez;

return rez;
}

int main() {
    setlocale(0, "rus");

    #if 0
        for (int i = 0; i < 6; i++)
            printf("%d\n", f_fib());
    #endif

    #if 1
        int o = 020, h = 0x20, d = 20, b = 0b111;
        printf("dec = %i | oct = %o | hex = %x \n\n", d, d, d);

        printf("7 / 2 = %d \n", 7 / 2);
        printf("7 / 2 = %.3f \n", 7 /(float)2);
        printf("7 / 2 = %.2f \n", 7/2 + 0.0);
    #endif
}