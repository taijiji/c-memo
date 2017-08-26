#include <stdio.h>

// if statement
// Swtich statement

int main(void){

    int score = 55;
    /*
    if(score >= 60){
        printf("OK! \n");
    }else if(score >= 50){
        printf("so so \n");
    }else{
        printf("NG \n");
    }
    */

    switch(score){
        case 60:
            printf("OK \n");
            break;
        case 55:
            printf("soso \n");
            break;
        default:
            printf("NG \n");
            break;
    }

    return 0;
}