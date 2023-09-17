/* Elabore um algoritmo que permita ao usu�rio realizar a compra de frutas. Assim, apresente a lista de frutas dispon�veis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usu�rio retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 
1 => ABACAXI ? 5,00 a unidade 2 => MA�A ? 1,00 a unidade 3 => PERA ? 4,00 a unidade */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    double total = 0.0;

    printf("Bem-vindo � compra de frutas!\n");

    do {
        printf("\nMenu de frutas dispon�veis:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MA�A - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("0 => Finalizar a compra\n");

        printf("Digite o n�mero da fruta que deseja comprar ( ou 0 para finalizar): ");
        scanf("%d", &opcao);

        if(opcao == 0) {
            break;
        } else if (opcao >= 1 && opcao <= 3) {
            int quantidade;
            printf("Digite a quantidade de frutas que deseja comprar: ");
            scanf("%d", &quantidade);

            double preco_unitario;
            switch (opcao) {
                case 1:
                    preco_unitario = 5.0;
                    printf("Voc� comprou %d ABACAXI(s).\n", quantidade);
                    break;
                case 2:
                    preco_unitario = 1.0;
                    printf("Voc� comprou %d MA�A(s).\n", quantidade);
                    break;
                case 3:
                    preco_unitario = 4.0;
                    printf("Voc� comprou %d PERA(s).\n", quantidade);
                    break;
            }
            total += (quantidade * preco_unitario);
        } else {
            printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
        }
    } while (1);

    printf("Total da compra> R$%.2lf\n", total);
    printf("Obrigado por comprar conosco!\n");

    return 0;
}