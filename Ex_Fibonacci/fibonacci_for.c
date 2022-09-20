#include <stdio.h>

int fib_recursivo(int n){

    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    return fib_recursivo(n-1) + fib_recursivo(n-2);
}


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