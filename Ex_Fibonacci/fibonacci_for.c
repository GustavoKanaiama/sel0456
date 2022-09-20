#include <stdio.h>

int main(int n) {

    int num = 0;
    int ant = 1;
    int ult = 1;

    for(int i=0; i < n; i++){

        num = ant + ult;


        ant = ult;
        ult = num;


    }
    
    printf("%d\n", num);

    return 0;
}