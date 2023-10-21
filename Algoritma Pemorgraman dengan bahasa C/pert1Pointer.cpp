#include<stdio.h>

int main (){
    // pointer
    // * menunjukan isi dari variable
    // & menunjukan isi dari alamat


    int angka = 100;
    int *ptr;
    
    ptr = &angka;

    printf("isi dari angka : %d\n", angka);
    printf("alamat dari angka: %d\n", &angka);
    printf("alamat dari ptr : %d\n", &ptr);
    printf("isi dari *ptr : %d\n", *ptr);
    printf("isi dari ptr : %d\n", ptr);

    *ptr = 30;
    printf("isi dari : %d\n", angka);

    return 0;
}