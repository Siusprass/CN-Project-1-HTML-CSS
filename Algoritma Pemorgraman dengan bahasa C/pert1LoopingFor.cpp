#include<stdio.h>

int main(){
    // looping (perulangan repetisi)
    // do while, while, for
    // do while, dipakai ketika pasti mau melakukan statementnya sampai objektif tercapai minimal 1x
    // while, dipakai ketika mau melakukan repetisi tapi dengan kondisi terlebih dahulu
    // for, dipakai ketika kita mengetahui betul kapan kita mau Looping dan kapan kita mau selesai looping
    int angka = 10;
    // for (inisialisasi; kondisi; increment/decrement) 
    // {
    //     /* code */
    // }
    for (int i = 0; i > angka; i++)
    {
        /* code */
        printf("angka : %d\n",angka);
    }

    return 0;
}