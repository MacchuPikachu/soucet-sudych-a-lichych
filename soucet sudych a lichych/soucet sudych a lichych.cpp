#include<stdio.h>
    int soucet_sudych(int cislo) {
        int suda = 0;
        for (int i = 0; i <= cislo; i += 2) {
            suda += i;
        }
        return suda;
    }
    int soucet_lichych(int cislo) {
        int licha = 1;
        for (int i = -1; i <= cislo; i += 2) {
            licha += i;
        }
        return licha;
    }

    int main(){
        int cislo = 13;
    printf("soucet sudych: %d\n", soucet_sudych(cislo));
    printf("soucet lichych: %d\n", soucet_lichych(cislo));
}