#include <stdio.h>

int main() {
    int tamanho_vetor = 10;
    int vetor[10];

    for (int i = 0; i < tamanho_vetor; i++) {
        scanf("%d", &vetor[i]);
    }

    while (tamanho_vetor > 1) {
        for (int i = 0; i < tamanho_vetor - 1; i++) {
            
            int sum = vetor[i] + vetor[i + 1];
            vetor[i] = sum;
            
            printf("%d", vetor[i]);

            if (i < tamanho_vetor - 1) {
                printf(" ");
            }
        }
        printf("\n");
        tamanho_vetor -= 1;
    }

    return 0;
}
