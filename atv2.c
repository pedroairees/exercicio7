/* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem decrescente. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    int zero = 0;

    printf("Digite seu n�mero (INTEIRO E POSITIVO):");
    scanf("%d", &num);

    while(num >= 0) {
        printf("\n%d", num);
        num--;
    }
}