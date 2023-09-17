/* Uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de uma determinada regi�o coletou os seguintes dados, referentes a cada habitante:

a) sexo (m e f);

b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

d) idade em anos.

e) valor do sal�rio.

Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, ser�o aceitos somente as op��es ?m? e ?f?; para cor de olhos, apenas as op��es ?a?, ?v?, ?c? e ?p?; para cor dos cabelos, apenas as op��es ?l?, ?c?, ?p? e ?r?; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o sal�rio, n�o aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usu�rio fornecer� um habitante fict�cio com idade igual a ?1.

Ao final, o algoritmo deve determinar a porcentagem de indiv�duos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");


    int totalHabitantes = 0;
    int totalMulheresCastanhas = 0;
    int idade, idadeMin = 18, idadeMax = 35;
    char sexo, olhos, cabelos;
    double salario;
    
    printf("Informe os dados dos habitantes. Para finalizar, digite uma idade igual a -1.\n");
    
    while (1) {
        printf("\nSexo (m/f): ");
        scanf(" %c", &sexo);
        
        if (sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
            
            if (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') {
                printf("Cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &cabelos);
                
                if (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') {
                    printf("Idade (entre 10 e 100): ");
                    scanf("%d", &idade);
                    
                    if (idade == -1) {
                        break; // Finalizar a entrada de dados
                    }
                    
                    if (idade >= 10 && idade <= 100) {
                        printf("Sal�rio: ");
                        scanf("%lf", &salario);
                        
                        if (salario >= 0) {
                            totalHabitantes++;
                            if (sexo == 'f' && idade >= idadeMin && idade <= idadeMax && olhos == 'c' && cabelos == 'c') {
                                totalMulheresCastanhas++;
                            }
                        } else {
                            printf("Sal�rio n�o pode ser negativo. Tente novamente.\n");
                        }
                    } else {
                        printf("Idade fora do intervalo permitido. Tente novamente.\n");
                    }
                } else {
                    printf("Op��o de cor de cabelos inv�lida. Tente novamente.\n");
                }
            } else {
                printf("Op��o de cor de olhos inv�lida. Tente novamente.\n");
            }
        } else {
            printf("Op��o de sexo inv�lida. Tente novamente.\n");
        }
    }
    
    if (totalHabitantes > 0) {
        double porcentagemMulheresCastanhas = ((double)totalMulheresCastanhas / totalHabitantes) * 100;
        printf("\nPorcentagem de mulheres com olhos e cabelos castanhos entre 18 e 35 anos: %.2lf%%\n", porcentagemMulheresCastanhas);
    } else {
        printf("\nNenhum habitante foi registrado.\n");
    }
    
    return 0;
}
