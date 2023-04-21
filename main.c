#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, a, soma=0;
    printf("Somatória de A!\n");
    do{
        printf("Digite um número maior que zero para somatória de A: ");
        scanf("%d", &a);
    }while(a == 0 );

    for(i= 0; i<= a; i++){
        printf(" Contagem -> %d\n",i);
        soma= soma + i;
        printf("\t \t Somatória = %d\n", soma);



    }

    return 0;
}
