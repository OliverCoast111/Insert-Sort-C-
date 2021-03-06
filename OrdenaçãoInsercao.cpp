// Autor: Deivison Oliveira Costa
// Curso: Engenharia de Computa??o
// PAA: Tarefa de Ordena??o
// Data: 31/07/2021
// Hora: 12:27:54
#include <iostream>
using namespace std;

// Declarando vetor A.
int A[15] = {9 , 10 , -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0};

void InsertSort (int nAux){
    // No in?cio de cada repeti??o, antes da compara??o j < nAux,
    // o vetor A[0..nAux-1] ? uma permuta??o do vetor original e
    // o vetor A[0..j-1] est? em ordem crescente.
    for (int j = 1; j < nAux; ++j){
        int x = A[j];
        int i;
        for (i = j-1; i >= 0 && A[i] > x; --i)
            A[i+1] = A[i];
        A[i+1] = x;
    }
}
int main (){
    // Declarando vari?vel de compara??o.
    int nValores = 15;
    // Apresentando o vetor A.
    cout << "Vetor A:\n";
    cout << "-----------------------------------\n";
    for (int cont = 0; cont < nValores; cont++){
        cout << A[cont];
        cout << " ";
    }
    cout << "\n-----------------------------------\n";

    // Apresentando o vetor A ordenado.
    cout << "Vetor A ordenado:\n";
    cout << "\-----------------------------------\n";
    // Chamada do procedimento.
    InsertSort(nValores);
    for (int contOrdem = 0; contOrdem < nValores; contOrdem++){
        cout << A[contOrdem];
        cout << " ";
    }
    cout << "\n-----------------------------------\n";

    return 0;

}
