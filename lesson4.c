#include <stdio.h>

// for statement

// contiue; skip 1 times
// break; break loop
int main(void){

    int m;
    for(m=0; m<10; m++){
        if(m == 3){
            continue;
        }
        if(m == 8){
            break;
        }
        printf("m: %d\n", m);

    }

    return 0;
}