/* Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0;
    int numero = 2;

    printf("A soma dos 50 primeiros n�meros pares �: ");

    for(int i = 0; i < 50; i++) {
        soma += numero;
        numero += 2;
    }
    printf("%d", numero);

}