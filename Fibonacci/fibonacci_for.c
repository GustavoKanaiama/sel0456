#include <stdio.h>


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

    return 0;
}