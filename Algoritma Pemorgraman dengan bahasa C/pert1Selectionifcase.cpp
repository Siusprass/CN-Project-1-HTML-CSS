#include<stdio.h>

int main(){
    // Selection
    // if else, Switch case
    int input;
    printf("1. print angka 123\n");
    printf("2. print angka 456\n");
    printf("3. print angka 789\n");
    printf("Pilih menu : ");
    scanf("%d", &input);fflush(stdin);

   switch (input)
   {
   case 1:
    /* code */
    printf("123\n");
    break;
    case 2:
    printf("456\n");
    break;
    case 3:
    printf("789");
    break;
   default:
   printf("input invalid");
    break;
   }

    return 0;
}