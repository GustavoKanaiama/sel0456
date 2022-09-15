#include <stdio.h>


int fib(int n){

    int ind = 0;

    if(ind >= n){

        

    };

}


int main() {

    // 1, 1, 2, 3, 5, 8, 13

    int n = 5;

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