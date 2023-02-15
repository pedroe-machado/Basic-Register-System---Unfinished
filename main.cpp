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

void quicksort(int a[], int pos_pivo, int fim) {
   int pos_novo_pivo;         
   if (pos_pivo < fim) {  
      pos_novo_pivo = particiona(a, pos_pivo, fim);
      quicksort(a, pos_pivo, pos_novo_pivo - 1); 
      quicksort(a, pos_novo_pivo + 1, fim); 
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


