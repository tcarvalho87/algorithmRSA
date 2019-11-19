#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

/*
Gera um numero primo aleatório
*/
bool isPrime(int numEntrada){

    if(numEntrada > 1 && !(numEntrada%2==0 || numEntrada%3==0 || numEntrada%5==0 || numEntrada%7==0)
       || (numEntrada == 2 || numEntrada == 3 || numEntrada == 5 || numEntrada == 7)) {
        return true;
       }
    else {
        return false;
    }
}
/*
Gera um numero primo aleatório
*/
int generate_prime(){ //generate the prime number - p e q

    int numeroPrimo = 0;
    while(true) {
        numeroPrimo = rand() % 1000 - 1; //define the range of the primes
        if(isPrime(numeroPrimo))
            return numeroPrimo;
    }
}

/* Escolhe dois numeros primos grandes e calcula n*/
long int calculaN(){
    int p, q;

    p = generate_prime();
    q = generate_prime();
    printf("\np: %d q:%d n:%ld",p,q,p*q);
    return p*q;

}

int main()
{
    long int n = calculaN();

    return 0;
}
