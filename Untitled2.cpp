#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int vetor[3];//definifno quantidades de vetores.
    int i;
	int nota;
	int soma;
	float media;

    //utilizando vetor em um laço de repetição.
    printf("Digite os elementos do vetor\n");
    for (i = 0; i < 3; i++){
        printf("Elementos %d:",i+1);
        scanf("%d",&vetor[1]);
	
		soma += nota;
    }
    
    media = soma /3; 
    
    //exibindo dados em um vetor em um laço de repetição.
    for ( i = 0; i < 5; i++){ 
        printf("nota %d: %d\n", i+1, vetor[1]);
    }
    

    return 0;
}
