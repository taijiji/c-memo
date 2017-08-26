#include <stdio.h>

// function


// definition of prototype
// you can use function without care about in order of function. 
float getMax(float a, float b);


void sayHi(void){
    printf("hi!\n");
}

// int = numner of return = 0
int main(void){

    float result;
    result = getMax(1.1, 10.2);
    printf("%f\n", result);

    sayHi();
    return 0;
}

float getMax(float a, float b){
    if(a >= b){
        return a;
    }else{
        return b;
    }
}