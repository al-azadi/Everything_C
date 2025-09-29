#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){


    hello("Sifat", 22);

    if(ageCheck(30)){
        printf("You are old enough");
    }
    else{
        printf("You must be 16+");
    }

    return 0;
}

void hello(char name[], int age){

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;  


}