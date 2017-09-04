#include <stdio.h>

// static

void func(void){
    //int a = 0;
    static int a = 0;
    a++;
    printf("a: %d\n", a);
}

int main(void){

    func(); // a: 1
    func(); // a: 2
    func(); // a: 3
    return 0;
}

