#include <stdio.h>
#include <string.h>

void happyBirthday(char name[50], int age){

    printf("\n Happay birthday to you");    
    printf("\n Happay birthday to you");    
    printf("\n Happay birthday dear %s!", name);
    printf("\n Happay birthday to you");
    printf("\n You are %d years old!\n", age);


}

int main(){


    char name[50] = "";
    int age = 0;
  
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    
    happyBirthday(name, age);
  


    return 0;
}