#include<stdio.h>

int main(){
    // Operasi Aritmatika
    // Modulus %
    // int permen = 18;
    // int sisa;
    // sisa = permen % 5;

    // printf("Sisa perment adalah %d \n",sisa);

    // Increment dan Decrement
    // pre, PostIncrement
    // preIncrement ++angka, postIncrement angka++;
    int angka = 10;
   
    printf("nilai awal angka %d \n",angka);
    printf("angka postIncrement %d \n",angka++); 
    //nilai angka disini 11, namun yang ke print adalah 10 karena penambahannya setelah di printf
    printf("angka preIncrement %d \n",++angka);
    printf("angka postDecrement %d \n",angka--);
    //nilai angka disini 11, namun yang ke print adalah 10 karena pengurangannya setelah di printf
    printf("angka preDecrement %d",--angka);

    return 0;
}