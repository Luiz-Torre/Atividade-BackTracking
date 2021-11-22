#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirCombinacoes(char* vet, int pos, int n);

int main(){
    char vet[3] = {'a','e','i'};
    int num;
    printf("Você deseja visualizar qual tarefa?\nDigite 1, 2 ou 3: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        imprimirCombinacoes(vet,0,3);
        break;
    case 2:
        break;
    
    case 3:
        break;
    default:
        puts("Número invalido. Digite 1, 2 ou 3: ");
        scanf("%d", &num);
        break;
    }
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
            printf("\n");
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
