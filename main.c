#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, a, soma=0;
    printf("Somat�ria de A!\n");
    do{
        printf("Digite um n�mero maior que zero para somat�ria de A: ");
        scanf("%d", &a);
    }while(a == 0 );

    for(i= 0; i<= a; i++){
        printf(" Contagem -> %d\n",i);
        soma= soma + i;
        printf("\t \t Somat�ria = %d\n", soma);



    }

    return 0;
}
