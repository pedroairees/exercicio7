/* Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3 considerando n�meros maiores que 0. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int contador = 0;
    int num = 1;
    
    printf("Os cinco primeiros m�ltiplos de 3 maiores que 0 s�o:\n");
    while(contador < 5) {
        if(num % 3 == 0) {
            printf("%d\n", num);
            contador++;
        }
        num++;
    }
}