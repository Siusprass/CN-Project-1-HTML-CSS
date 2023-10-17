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

    for (int Baris = 1; Baris <= 5; Baris++)
    {
        for (int Kolom = 1; Kolom <= 5; Kolom++)
        {
            // Cara 1
            // if (Baris==1 || Kolom==1 || Baris==5 || Kolom==5){
            //     printf("@");
            // } else {
            // printf("*");
            // }

            // Cara 2
            if(Baris > 1 && Baris < 5 && Kolom > 1 && Kolom < 5)
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