#include <stdio.h>

// Pointer
// dot install c-lang #16-20


/*
void f(long a){
    a += 100;
    printf("%ld\n", a);
}
*/

void f(long *pa){
    *pa = *pa + 100;
    printf("%ld\n", *pa);
}


int main(void){

    /*
    int a;
    a = 10;

    int *pa;
    //pa = &a; // address of a
    printf("%d\n", *pa); //data of address of a(= value a)
    */


    long a = 1000;
    //f(a);
    f(&a);




    return 0;
}

