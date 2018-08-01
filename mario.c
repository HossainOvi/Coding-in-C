#include <stdio.h>
#include<cs50.h>
int main (void){

    int n;

    do{
        printf("Enter the height of the pyramid");

      n= get_int ();
    }
    while (n<0 || n>23);

    for (int i=1; i<=n; i++){
        for (int j=n-i; j>0; j--){
            printf(" ");


        }
        for (int k=1; k<=i+1; k++){

             printf("#");

        }


      printf("\n");
    }
return 0;


    }

