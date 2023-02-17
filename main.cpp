/* PROJETO PRATICO IALG
    Nomes: Ana Elis Naves / Beatriz Euzébio / Pedro Ernesto
    */

#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;
struct registro {

    int ID;
    string descritor;
    string certificado;
    float precoCompra;
    float precoVenda;

};

int Converte() { //converte o arquivo em binario
    std::ifstream infile("base8.csv"); // Abrir o arquivo CSV
    std::ofstream outfile("base08.bin", std::ios::out | std::ios::binary); // Criar o arquivo binário

    std::string linha;
    while (std::getline(infile, linha)) { // Ler cada linha do arquivo CSV
        int inteiro;
        std::string texto;
        std::stringstream ss(linha);
        std::getline(ss, texto, ','); // Extrair o valor inteiro
        inteiro = std::stoi(texto);
        std::getline(ss, texto); // Extrair a string
        outfile.write(reinterpret_cast<char*>(&inteiro), sizeof(int)); // Escrever o valor inteiro no arquivo binário
        outfile.write(texto.c_str(), texto.size()); // Escrever a string no arquivo binário
    }

    infile.close(); // Fechar o arquivo CSV
    outfile.close(); // Fechar o arquivo binário
    return 0;
}


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

void quickSortID(int ID[], int pos_pivo, int fim) {
   int pos_novo_pivo;         
   if (pos_pivo < fim) {  
      pos_novo_pivo = part(ID, pos_pivo, fim);
      quickSortID(ID, pos_pivo, pos_novo_pivo - 1); 
      quickSortID(ID, pos_novo_pivo + 1, fim); 
   }
}

void quickSortprecoVenda (float precoVenda, float pospivo, float fim2){
    float posnovopivo ;
    if (pospivo < fim2) {
        posnovopivo = part (precoVenda, pospivo, fim2);
        quickSortprecoVenda (precoVenda, pospivo, posnovopivo -1);
        quickSortprecoVenda (precoVenda, posnovopivo +1, fim2);
    }
}

void ordena(int opcao){ //quicksort

    switch (opcao){

    case 0: //ordena por ID

        break;
    
    case 1: //ordena por preço de venda

        break;
    
    default:

        break;
    }
}

int binRecursiva(int vetor[], int inicio, int fim, int buscado) {     
    
    if (inicio <= fim){
        int meio = (inicio+fim)/2;
        if (buscado > vetor[meio]) return binRecursiva(vetor,meio+1,fim,buscado);
        else if (buscado < vetor[meio]) return binRecursiva(vetor,inicio,meio-1,buscado);
        else return meio;
    } return -1;

}

void apaga(registro &vetor[], int pos){ //marca id negativo 
    int aux = vetor[pos].ID;
    vetor[pos].ID = -1*aux;
}

void imprime(registro vetor[], int pos, int n){ //loop de couts a partir da posicao dada
   
    for(int i=pos; i<n; i++){
        cout << vetor[i].ID << " "
        << vetor[i].descritor << " "
        << vetor[i].certificado << " "
        << vetor[i].precoCompra << " "
        << vetor[i].precoVenda << ";" << endl;
    }
}

void insere(registro novo){


} //ordenado