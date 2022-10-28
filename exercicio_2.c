#include <stdio.h>


int busca( int vet[], int n, int a, int d ) {
    while ( a < d ) {                
        int m = ( a + d ) / 2;
        if ( vet[m] == n ) {
            return m;
        }
		if ( vet[m] < n ) {
            a = m + 1;
        } else {
            d = m;                   
        }
    }

    return -1;
}

void ordena(int vet[]){
    int i, j, t;
    for( i=0; i<4; i++ ){
        for( j=i+1; j<4; j++ ){
            if( vet[i] > vet[j] ){
                t  = vet[i];
                vet[i] = vet[j];
                vet[j] = t;
            }
        }
    }
}

int main(void)
{
	int tamanho, b, i;
	printf("Qual o tamanho do vetor? \n \n");
	scanf("%d", &tamanho);
	
	printf("\ndigite os numeros do vetor: \n \n");
	
	int vet[tamanho];
	for(i=0; i<tamanho; i++){
		printf("numero %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	
	ordena(vet);
	
	printf("\nQual numero deseja procurar? ");
	scanf("%d", &b);
	
	int r = busca( vet, b, 0, tamanho );
	if(r == -1){
		printf("%d.\n", r);
		printf("\n nao foi encontrado \n \n");
	}
	else{
		system("cls");
		printf("o numero %d esta no ponto %d do vetor \n \n", b, r+1);
	}
}
