#include<stdio.h>

// int angka(){
//     int a = 5;
//     printf("%d",a);
//     return angka();
// }

int factorial (int n){
    if(n == 0 || n== 1){
        return 1;
    } else {
        return n* factorial(n-1);
    }
}

int main (){
    // recursive
    // adalah function yang memanggil dirinya sendiri
    int hasil = factorial(3);
    printf("hasil factorial : %d",hasil);
    return 0;
}