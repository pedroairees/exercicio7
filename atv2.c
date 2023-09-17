/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    int zero = 0;

    printf("Digite seu número (INTEIRO E POSITIVO):");
    scanf("%d", &num);

    while(num >= 0) {
        printf("\n%d", num);
        num--;
    }
}