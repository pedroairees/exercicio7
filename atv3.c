/* Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;

    printf("Digite seu número (INTEIRO E POSITIVO):");
    scanf("%d", &num);
    printf("\nOs primeiros %d números naturais ímpares são:\n", num);

    for (int i = 1; num > 0; i += 2) {
        printf("%d ", i);
        num--;
    }
    printf("\n");
}