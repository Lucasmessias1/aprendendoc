#include <stdio.h>
#include <stdlib.h>

int main()
{

    float NotaUm = 0;
    float NotaDois = 0;
    float media;

    printf("Digite primeira nota:");
    scanf("%f", &NotaUm);

    printf("Digite sua segunda nota: ");
    scanf("%f", &NotaDois);

    // calculando media
    media = (NotaUm + NotaDois) / 2;

    if (media >= 7)
    {
        printf("aprovado! \n");
    }
    else
    {
        printf("reprovado! \n ");
    }

    // exibindo dados para aluno
    printf("%f", media);

    return 0;
}
