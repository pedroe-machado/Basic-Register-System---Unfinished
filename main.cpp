#include <fstream>
#include <iostream>
#include <stdio.h>

using namespace std;

struct registro {

    int ID;
    string descritor;
    string certificado;
    float precoCompra;
    float precoVenda;

};

void swap(int vetor[],int pos1, int pos2){
    int aux = vetor[pos1];
    vetor[pos1] = vetor[pos2];
    vetor[pos2] = aux;
}

int part(int vetor[], int p, int r) { // Lomuto
   int pivo = vetor[r];
   int j = p;
   int k;
   for (k = p; k < r; k++) {
      if (vetor[k] <= pivo) {
         swap(vetor,j,k);
         j++; 
      } 
   }
   swap(vetor,j,r);
   return j; 
}

void quickSort(int vetor[], int pos_pivo, int fim) {
   int pos_novo_pivo;         
   if (pos_pivo < fim) {  
      pos_novo_pivo = part(vetor, pos_pivo, fim);
      quickSort(vetor, pos_pivo, pos_novo_pivo - 1); 
      quickSort(vetor, pos_novo_pivo + 1, fim); 
   }
}

void ordena(int opcao){ //quicksort

    switch (opcao)

    {
    case 0:

        break;
    
    case 1:

        break;
    
    case 2:

        break;
    
    default:

        break;
    }
};

int busca(){ //binaria


    return pos;
};

void apaga(int pos){}; //marca id negativo 

void imprime(int pos, int n){}; //loop de couts a partir da posicao dada

void insere(registro novo){}; //ordenado


