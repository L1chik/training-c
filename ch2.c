#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}

struct Abstract {
    int width, height;
};

void calc(struct Abstract *obj);

void f(unsigned  int n, int *restrict p, int *restrict q) {
    while (n-- > 0) {
        *p++ = *q++;
    }
}

int main() {
#if 0
    enum day { sun, mon, tue };
    enum val { val1 = 90, val2 = 30, val3 = -30};

    int f(void);
    int *fip();
    void g(int i, int j);
    void h(int, int);

    // Pointers
    int *ip;
    char *cp;
    void *vp;

    int ia[11];    float *afp[17];
    char str[11];

    for (int i = 0; i < 10; ++i) {
        str[i] = '0' + i; // identical to *(str + i)
    }

    str[10] = '\0';

    for (int i = 0; i < 10; ++i) {
        printf("%c", str[i]);
    }

    // N dim array
    void fn(int arr[5]);

    unsigned int i = 0;
    unsigned int j = 0;

    int arr[3][5];
//     fn(arr[i]);
     int c = arr[i][j];

     // Structure
     struct sigrecord {
         int signum;
         char signame[20];
         char sigdesc[100];
     } sigline, *sigline_p;

     sigline.signum = 5;
     strcpy(sigline.signame, "SIGINT");
     strcpy(sigline.sigdesc, "Interrupt from keyboard");

     sigline_p = &sigline;

     sigline_p -> signum = 5;
    strcpy(sigline_p -> signame, "SIGINT");
    strcpy(sigline_p -> sigdesc, "Interrupt from keyboard");

    union {
        struct {
            int type;
        } n;

        struct {
            int type;
            int intnode;
        } ni;

        struct {
            int type;
            double doublenode;
        } nf;
    } u;

    u.nf.type = 1;
    u.nf.doublenode = 3.14;


//    enum day { sun, mon, tue};
//    day today // недостаточно для объявления переменной
    enum day tomorrow;

    typedef struct s {
        int x;
    } t;


    const int a = 1; // объект константного типа
    int *ipp = (int *)&a;
    *ipp = 2; // неопределенное поведение

    int b = 12;
    const int d = 12;
    const int *bp = &b;
    const int *dp = &d;

    *(int *)bp = 42; // код верный
    *(int *)dp = 42; // Неопределенное поведение

    volatile int port;
    port = port;
#endif

#if 0
    int num = 0;
    int *pNum = &num;

    *pNum = 10;
    printf("%p\n", pNum);
    printf("%d - %d\n", *pNum, num);
#endif

#if 1
    struct Abstract square = {5, 7};
    calc(&square);
#endif

    return 0;
}

void calc (struct Abstract *obj) {
    int res = obj->width * obj->height;

    printf("Result: %d", res);
}