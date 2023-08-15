#include <stdio.h>
#include <unistd.h> // Biblioteca para usar a fun��o sleep

int main() {
    char spinner[] = "|/-\\"; // Os caracteres para a anima��o de rota��o
    int i;

    for (i = 0; i < 10; i++) { // Quantidade de vezes que a anima��o ir� girar
        printf("\r%c", spinner[i % 4]); // "\r" move o cursor para o in�cio da linha
        fflush(stdout); // Limpa o buffer de sa�da para que o caractere seja impresso imediatamente
        usleep(100000); // Aguarda por 100 milissegundos (0.1 segundos)
    }

    printf("\n");
    return 0;
}

