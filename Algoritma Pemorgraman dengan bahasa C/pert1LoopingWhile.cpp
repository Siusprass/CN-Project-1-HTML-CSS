#include<stdio.h>

int main(){
    // looping (perulangan repetisi)
    // do while, while, for
    // do while, dipakai ketika pasti mau melakukan statementnya sampai objektif tercapai minimal 1x
    // while, dipakai ketika mau melakukan repetisi tapi dengan kondisi terlebih dahulu

    int angka;
    printf("Masukan angka : ");
    scanf("%d", &angka);fflush(stdin);
    // while (/* condition */)
    // {
    //     /* code */
    // }

    while (angka<=10)
    {
        printf("%d ", angka);
        angka++;
    }
    printf("Program selesai");
    
    
    return 0;
}