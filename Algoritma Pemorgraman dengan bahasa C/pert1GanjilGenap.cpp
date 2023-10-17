#include<stdio.h>

int main(){
    printf("masukan angka : ");
    int input;
    scanf("%d", &input);fflush(stdin);
    if(input%2==0){// pengecekan apakah angka yang dimasukkan jika di bagi 2 adalah 0, jika ya maka angka yang dimasukan adalah angka genap
        printf("Angka yang dimasukan adalah genap");
    } else { //jika tidak angka dibagi 2 masih selalu sisa koma, maka angka tersebut adalah bilangan ganjil
        printf("Angka yang dimasukan adalah ganjil");
    }
    return 0;
}