/* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem crescente. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1;
    int zero = 0;

    printf("Digite um n�muero (INTEIRO POSITIVO):");
    scanf("%d", &num1);

    while(zero <= num1) {
         printf("\n%d", zero);
        zero++;
    }

}