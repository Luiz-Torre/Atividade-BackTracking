#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirCombinacoes(char* vet, int pos, int n);
void imprimirCombinacoesPares(char* vet, int pos, int n);

int main(){
    char vet[3] = {'a','e','i'};
    int vet2[4] = {15,31,44,55};
    int num, tam_n;
    printf("Você deseja visualizar qual tarefa?\nDigite 1, 2, 3 ou 4 para sair ");
    
    while(num !=4){
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        puts("Informe o tamanho do N desejado");
        scanf("%d", &tam_n);

        imprimirCombinacoes(vet,0,tam_n);
        break;
    case 2:
        break;
    
    case 3:
        break;
    
    case 4:
        exit(0);
        break;
    default:
        puts("\nNúmero invalido.");
        break;
    }
    printf("Você deseja visualizar qual tarefa?\nDigite 1, 2, 3 ou 4 para sair ");
    }
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
void imprimirCombinacoesPares(char* vet, int pos, int n){
    
}
