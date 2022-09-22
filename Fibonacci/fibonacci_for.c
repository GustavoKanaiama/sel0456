#include <stdio.h>

int fib_recursivo(int n){

    //Caso base quando n vale 0
    if(n == 0){
        return 0;
    }

    //Caso base quando n vale 1
    if(n == 1){
        return 0;
    }

    //Caso base quando n vale 2
    if(n == 2){
        return 1;
    }

    return fib_recursivo(n-1) + fib_recursivo(n-2);
}

int main(void) {

    int n;

    //Input para o índice do Fibonacci
    scanf("%d", &n);

    //Inicializa 'num' em 0
    int num = 0;
    int ant = 0;
    int ult = 1;


    //Caso excepcional
    if(n == 2){
        num = 1;
    }


    for(int i=2; i < n; i++){

        num = ant + ult;

        ant = ult;
        ult = num;

    }
    
    printf("Dado o índice n=%d, o seu valor de fibonacci pelo laço 'for' é de: %d\n",n, num);
    printf("Dado o índice n=%d, o seu valor de fibonacci de forma recursiva é de: %d\n\n", n, fib_recursivo(n));
    
    return 0;
}