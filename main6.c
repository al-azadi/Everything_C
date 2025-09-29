// while loop = continue some code while the sondition remains true 
//              Condition must be true for usto enter while loop

#include <stdio.h>


int main(){

    int number = 0;

    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }while(number <= 0);


    return 0;
}