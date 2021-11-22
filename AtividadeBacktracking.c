#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirCombinacoes(char* vet, int pos, int n);

int main(){
    char vet[3] = {'a','e','i'};
    imprimirCombinacoes(vet,0,3);
}

void imprimirCombinacoes(char* vet, int pos, int n){
    int i;
    if (pos == n){
        int contadorA = 0;
        int contadorE = 0;
        int contadorI = 0;
        for (i = 0; i < n; i++) {
            if(vet[i] == 'a'){contadorA++;}
            else if (vet[i] == 'e'){contadorE++;}
            else {contadorI++;}
        }
        if(contadorA > (contadorI+contadorE)){
            for (i = 0; i < n; i++) {
                printf("%c",vet[i]);
            }
        }
    }
    else{
        vet[pos] = 'a';
        imprimirCombinacoes(vet,pos+1,n);
        vet[pos] = 'e';
        imprimirCombinacoes(vet,pos+1,n);
        vet[pos] = 'i';
        imprimirCombinacoes(vet,pos+1,n);
    }
}
