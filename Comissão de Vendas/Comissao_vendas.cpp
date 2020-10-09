#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main()
{
int codigo, filial;
float m1, m2, m3, totalRestaurante, totalFilial;
setlocale(LC_ALL,"Portuguese");

for (filial = 1; filial < 4; filial++)
    {
    printf("\nDigite o código da filial %d: ", filial);
    scanf("%d", &codigo);
         while (codigo <= 0)
            {
                printf("Erro. Digite o código da filial: ");
                scanf("%d", &codigo);
            }    
    printf("Digite o valor de venda do primeiro mês: ");
    scanf("%f", &m1);
    printf("Digite o valor de venda do segundo mês: ");
    scanf("%f", &m2);
    printf("Digite o valor de venda do terceiro mês: ");
    scanf("%f", &m3);
    
    totalFilial = (m1+m2+m3);
    totalRestaurante = (totalRestaurante + totalFilial);

    printf("\nA filial %d, teve um valor total de: %.2f.\n", filial, totalFilial);
    if (filial == 3)
        
        {
            printf("\nO restaurante, teve um valor total apurado de: %.2f.\n", totalRestaurante);
        }    
    
    }
return 0;
}


