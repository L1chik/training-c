#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
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

    int ia[11];
    float *afp[17];
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
     fn(arr[i]);
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


     return 0;
}

