#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	system("color 02");
	int quant, contLetra, aux, palavra, i;
	srand(time(NULL));

	printf("\n1 = 100 caracteres\n2 = 200 caracteres\n3 = 300 caracteres\n...\n -> ");
	scanf("%d", &quant);
	
	quant  *= 100;
	for (i = 1; i<=quant; i++) {
		contLetra = 0;
		aux = rand()%57;
		aux += 65; 			//chega em seu código ASCII, onde maioria sao letras
		palavra = rand()%12;
		palavra += 1; 		//Evita palavra = 0
		contLetra ++;
		printf("%c", aux);
		if(palavra == contLetra)	//palavra =  [1-13] e contLetra separa com [SPACE], gerando palavra com no maximo 13 letras
			printf(" ");
	}
	printf("\n\n\nPressione qualquer tecla para encerrar...");
	getch();
}

