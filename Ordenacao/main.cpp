#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string vetor[], int tamanho){
    for(int ult = tamanho - 1; ult > 0; ult--){
        for(int i=0; i<ult; i++){
            if(vetor[i] > vetor[i + 1]){
                string aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void insertionSort(string vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        string chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

void selectionSort(string vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int minorIndex = i;

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minorIndex]) {
                minorIndex = j;
            }
        }

        if (minorIndex != i) {
            string aux = vetor[i];
            vetor[i] = vetor[minorIndex];
            vetor[minorIndex] = aux;
        }
    }
}


int main() {
    string vetor[] = {"bruno", "afonso", "caue", "daniel", "gustavo"};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    string vetorCopia[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vetorCopia[i] = vetor[i];
    }

    bubbleSort(vetorCopia, tamanho);
    cout << "BUBBLE SORT \n";
    for(int i=0; i<tamanho; i++){
        cout << vetorCopia[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < tamanho; i++) {
        vetorCopia[i] = vetorCopia[i];
    }


    insertionSort(vetorCopia, tamanho);
    cout << "INSERTION SORT: \n";
    for(int i =0; i<tamanho; i++){
        cout << vetorCopia << ", ";
    }
    cout << endl;
    for (int i = 0; i < tamanho; i++) {
        vetorCopia[i] = vetorCopia[i];
    }


    selectionSort(vetorCopia, tamanho);
    cout << "SELECTION SORT: \n";
    for (int i = 0; i < tamanho; i++) {
        cout << vetorCopia[i] << ", ";
    }
    cout << endl;

    return 0;
}
