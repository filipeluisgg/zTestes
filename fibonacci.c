#include <stdio.h>

int main() {
    int numero, primeiro = 0, segundo = 1, proximo = 0;
    int pertence = 0;

    printf("Informe um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    while (proximo <= numero) {
        if (proximo == numero) {
            pertence = 1;
            break;
        }
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    if (pertence) {
        printf("O numero %d Pertence a sequencia de Fibonacci!\n", numero);
    } else {
        printf("O numero %d Nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
