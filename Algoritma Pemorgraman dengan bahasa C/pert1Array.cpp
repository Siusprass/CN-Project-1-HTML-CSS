#include<stdio.h>

int main (){

    // array 2 dimensi
    // angka [baris][kolom]
    int angka[2][4] ={{1,2,3,4},{5,6,7,8}} ;
    for (int j = 0; j < 2; j++)
    {
        /* code */
        printf("Isi dari baris ke - %d : ", j+1);
        for(int i = 0 ; i < 4 ; i++){
            printf("%d ",angka[j][i]);
    }
    printf("\n");
    }
   
    return 0;
}