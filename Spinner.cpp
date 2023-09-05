#include <stdio.h>
#include <unistd.h> // Biblioteca para usar a função sleep

int main() {
    char spinner[] = "|/-\\"; // Os caracteres para a animação de rotação
    int i;

    for (i = 0; i < 10; i++) { // Quantidade de vezes que a animação irá girar
        printf("\r%c", spinner[i % 4]); // "\r" move o cursor para o início da linha
        fflush(stdout); // Limpa o buffer de saída para que o caractere seja impresso imediatamente
        usleep(100000); // Aguarda por 100 milissegundos (0.1 segundos)
    }

    printf("\n");
    return 0;
}

