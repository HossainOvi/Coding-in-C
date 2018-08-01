#include <stdio.h>
#include<cs50.h>
#include<math.h>

int main (void){
    float change;

    int count= 0;
    int quantity;

    do{

        printf(" much do I owe you:  ");
        change= get_float();
        }
    while (change<0);
     quantity = round(change * 100.00);


    while(quantity>=25) {

      quantity -=25;
      count++;
     }
    while(quantity>=10){


        quantity-=10;
        count++;

    }
    while (quantity>=5){

        quantity-=5;
        count++;


    }
    while(quantity>=1){


        quantity-=1;
        count++;

    }

 printf("numer of coins: %i for change", count);



}
