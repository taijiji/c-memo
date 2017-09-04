#include <stdio.h>

// array


int main(void){

    int sales[3];
    sales[0] = 100;
    sales[1] = 200;
    sales[2] = 300;

    int sales2[] = {100, 200, 300};

    printf("%d\n", sales[2]);
    printf("%d\n", sales2[2]);
    return 0;
}

