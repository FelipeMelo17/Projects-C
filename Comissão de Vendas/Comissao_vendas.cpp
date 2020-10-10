#include <stdio.h>
#include <locale.h>

int main()
{
int matricula, tempo;
char nome[30];
float mes1, mes2, mes3, comissao;

setlocale(LC_ALL,"Portuguese");

    printf("Digite o número da matrícula do vendedor: ");
    scanf("%d", &matricula);
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite quantos anos trabalha na empresa: ");
    scanf("%d", &tempo);
    printf("Digite o valor recebido do mês 1: ");
    scanf("%f", &mes1);
    printf("Digite o valor recebido do mês 2: ");
    scanf("%f", &mes2);
    printf("Digite o valor recebido do mês 3: ");
    scanf("%f", &mes3);
    
    if (tempo >= 10)
	{
    comissao = mes1 * 0.1 + mes2 * 0.12 + mes3 * 0.15;    
    }
	else if (tempo < 10){
    comissao = mes1 * 0.1 + mes2 * 0.1 + mes3 * 0.1;
	}

    printf("\nO colaborador %s, matrícula: %d, trabalha na empresa a: %d anos e teve um total de R$ %.2f de comissão.", nome, matricula, tempo, comissao);   
    return 0;
}
