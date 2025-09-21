// return = returns a value back to where you call a function 

#include <stdio.h>

double cube(double num){

    return num * num * num;
}

double square(double num){

    return num * num;
}

int main(){

    double x = square(2.2);
    double y = cube(3.3);
    double z = square(4.4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}
