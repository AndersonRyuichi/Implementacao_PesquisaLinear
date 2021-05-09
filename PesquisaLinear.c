#include <stdio.h>
#include <stdlib.h>

int pesquisaLinear(int a[], int size, int chave) {
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] == chave) {
            return i;
        }
    }
    return -1;
}

//Código de testes
int main() {
    int a[] = {1,5,2,5,7,8,98,34,2,4,6,7,1,6};
    int size = 8;
    printf("Chave = 4, Index = %d\n", pesquisaLinear(a, size, 4));
    printf("Chave = 12, Index = %d", pesquisaLinear(a, size, 12));
    return 0;
}