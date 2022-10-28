#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <locale.h>


int  f_fib() {
static int first = 0, second = 1;
int rez = first + second;
    first = second;
    second = rez;

return rez;
}

//int *func(int i) {
//    const int j = i;
//    static int k = j;
//
//    return &k;
//}

struct S {
    int i; double d; char c;
};

int main() {
    setlocale(0, "rus");

    #if 0
        for (int i = 0; i < 6; i++)
            printf("%d\n", f_fib());
    #endif

#if 0
    int o = 020, h = 0x20, d = 20, b = 0b111;
    printf("dec = %i | oct = %o | hex = %x \n\n", d, d, d);

    printf("7 / 2 = %d \n", 7 / 2);
    printf("7 / 2 = %.3f \n", 7 /(float)2);
    printf("7 / 2 = %.2f \n", 7/2 + 0.0);
#endif

#if 0
    if (printf("Hello world!\n") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
#endif

#if 0
    void swap(int*, int*);
    int a = 12;
    int b = 33;

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);

    return 0;
#endif

#if 0
    void increment(void);

    for (int i = 0; i < 5; i++) {
        increment();
    }

    return 0;
#endif

#if 1
    unsigned char bad_buff[sizeof(struct S)];
    _Alignas(struct S) unsigned  char good_buff[sizeof (struct S)];

    // Неправильное выравнивание указателя
    struct S *bad_s_ptr = (struct S *)bad_buff;

    //Правильное выравниваение указателя
    struct S *good_s_ptr = (struct S *)good_buff;

#endif
}

void swap(int *a, int *b) {
    int t = *b;
    *b = *a;
    *a = t;

//    printf("swap: a = %d, b = %d\n", a, b);
}

void increment(void) {
    static unsigned int counter = 0;
    counter++;

    printf("%d\n", counter);
}