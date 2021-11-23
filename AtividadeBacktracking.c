#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirCombinacoes_tarefa1(char* vet, int pos, int n);
void imprimirCombinacoes_tarefa2(int* vet, int pos, int n, int* vetAux);
void imprimirCombinacoes_tarefa3(int valor,int pos, int* vet,int* vetAux,int* vetorFull);

int main(){
    char vet[3] = {'a','e','i'};
    int vet2[4] = {15,31,44,55};
    int vetAux[4] = {15,31,44,55};
    int vet3[5] = {1,5,10,25,50};
    int vetAux2[5] = {1,5,10,25,50};
    int vetorFull[5]={0,0,0,0,0};

    int num, tam_n,valor;
    printf("Você deseja visualizar qual tarefa?\nDigite 1, 2, 3 ou 4 para sair: ");
    
    while(num !=4){
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        puts("Informe o tamanho do N desejado");
        scanf("%d", &tam_n);

        imprimirCombinacoes_tarefa1(vet,0,tam_n);
        break;
    case 2:
        puts("Informe o tamanho do N desejado");
        scanf("%d", &tam_n);

        imprimirCombinacoes_tarefa2(vet2,0,tam_n,vetAux);
        break;
    
    case 3:
        puts("Informe o valor desejado");
        scanf("%d", &valor);

        imprimirCombinacoes_tarefa3(valor,0,vet3,vetAux2,vetorFull);
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

void imprimirCombinacoes_tarefa1(char* vet, int pos, int n){
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
        imprimirCombinacoes_tarefa1(vet,pos+1,n);
        vet[pos] = 'e';
        imprimirCombinacoes_tarefa1(vet,pos+1,n);
        vet[pos] = 'i';
        imprimirCombinacoes_tarefa1(vet,pos+1,n);
    }
}
void imprimirCombinacoes_tarefa2(int* vet, int pos, int n,int* vetAux){
    int i;
    if (pos == n){
        int contadorSoma = 0;
        for (i = 0; i < n; i++) {
            contadorSoma += vet[i];
        }
        if(contadorSoma%2 == 0){
            for (i = 0; i < n; i++) {
                printf("%d",vet[i]);
            }
            printf("\n");
        }
    }
    else{
        for (i = 0; i < 4; i++) {
            vet[pos] = vetAux[i];
            imprimirCombinacoes_tarefa2(vet,pos+1,n,vetAux);
        }
    }
}

void imprimirCombinacoes_tarefa3(int valor,int pos,int* vet,int* vetAux,int* vetorFull){
    int i;
    if (valor == 0){
        printf("%d moedas de 1 centavo, %d moedas de 5 centavos, %d moedas de 10 centavo, %d moedas de 25 centavos, %d moedas de 50 centavos",vetorFull[0],vetorFull[1],vetorFull[2],vetorFull[3],vetorFull[4]);

        for (int j = 0; j < 5; ++j) {
            vetorFull[j] = 0;
        }
        printf("\n");
    }
    for (int j = 0; j < 5; ++j) {
        if (valor - vet[j] >= 0){
            vetorFull[j] += 1;
            imprimirCombinacoes_tarefa3((valor - vet[j]),pos+1,vet,vetAux,vetorFull);
    }
//    if (pos == 5){
//        int contadorSomaMoeda = 0;
//        int contador1 = 0;
//        int contador5 = 0;
//        int contador10 = 0;
//        int contador25 = 0;
//        int contador50 = 0;
//
//        for (i = 0; i < 5; i++) {
//            contadorSomaMoeda += vet[i];
//            if(vet[i] == 1){contador1++;}
//            else if(vet[i] == 5){contador5++;}
//            else if(vet[i] == 10){contador10++;}
//            else if(vet[i] == 25){contador25++;}
//            else{contador50++;}
//        }
//        if(contadorSomaMoeda == valor){
//            printf("%d moedas de 1 centavo, %d moedas de 5 centavos, %d moedas de 10 centavo, %d moedas de 25 centavos, %d moedas de 50 centavos",contador1,contador5,contador10,contador25,contador50);
//
//            printf("\n");
//        }
//    }
//    else{
//        for (i = 0; i < 5; i++) {
//            vet[pos] = vetAux[i];
//            imprimirCombinacoes_tarefa3(valor,pos+1,vet,vetAux);
//        }
    }


}

