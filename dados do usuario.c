#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Inicializando variáveis.
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    // solicitando dados do usúario.
    printf("Digite seu idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // limapa o cache de imput.

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Digite seu Nome: ");
    gets(nome); //precisa colocar uma quantidade a mais de letras
    //scanf("%s", &nome); //so pega ate duas letras 
    //fgets(nome, 250 , stdin); //não utilizavel no momento
    //nome[strcspn(nome, "\n")] = 0; //comando que tira os espaços   

//limpa a tela (limpa o terminal).
system("clr || clear"); // serve para qualquer sistema operacional
//system("clr")//utilizavel para windos
//system("clear")//utilizavel no linox

    // exibindo dados do usúario.
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sexo: %c \n", sexo);

    return 0;
}