#include<stdio.h>

    int a [5] = {5,1,4,3,2};
    int n = 5;

int searchAngka(int input){

    for(int i = 0; i< n ; i++){
        if(input == a[i]){
            return i;
        }
    }

    return -1;
}

int main (){
    //search

    //pencarian data dalam sebuah kumpulan
    

    int input = 5;
    int index = searchAngka(input);
    if(index < 0){
        printf ("Tidak ketemu");
    } else {
        printf (" ketemu di index-%d\n",index);
    }



    return 0;
}