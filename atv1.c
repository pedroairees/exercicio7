/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1;
    int zero = 0;

    printf("Digite um númuero (INTEIRO POSITIVO):");
    scanf("%d", &num1);

    while(zero <= num1) {
         printf("\n%d", zero);
        zero++;
    }

}