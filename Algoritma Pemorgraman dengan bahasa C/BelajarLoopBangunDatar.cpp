#include<stdio.h>

int main (){

    //print kata "halo . . ." 5x
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     printf("Halo . . .\n");
    // }
    

    // Membuat bangun datar - persegi
    // for (int Baris = 1; Baris <= 5; Baris++)
    // {
        
    //     for (int Kolom = 1; Kolom <= 5; Kolom++)
    //     {
            
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }

    // Persegi Berlubang

    int angkasaya;
    printf("Masukan panjang sisi : \n");
    scanf("%d", &angkasaya);

    for (int Baris = 1; Baris <= angkasaya; Baris++)
    {
        for (int Kolom = 1; Kolom <= angkasaya; Kolom++)
        {
            // Cara 1
            // if (Baris==1 || Kolom==1 || Baris==5 || Kolom==5){
            //     printf("@");
            // } else {
            // printf("*");
            // }

            // Cara 2
            if(Baris > 1 && Baris < angkasaya && Kolom > 1 && Kolom < angkasaya)
            {
                printf(" ");
            } else {
                printf("i");
            }
        } 
        printf("\n"); 
    }

    
    

    return 0;
}