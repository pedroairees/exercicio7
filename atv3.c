/* Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros naturais �mpares (sem usar comando condicional). */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("Digite seu n�mero (INTEIRO E POSITIVO):");
    scanf("%d", &num);
    printf("\nOs primeiros %d n�meros naturais �mpares s�o:\n", num);

    for (int i = 1; num > 0; i += 2) {
        printf("%d ", i);
        num--;
    }
    printf("\n");
}