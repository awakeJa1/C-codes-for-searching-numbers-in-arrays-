#include <stdio.h>

main()
{
	int a, n, i;
	int vet[a];
	
	
 printf("Informe o tamanho do vetor: ");
 scanf("%d", &a);
	
	for(i=0; i<a; i++){
		printf("numero %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
 printf("informe o numero a ser encontrado: ");
 scanf("%d", &n);
	i=0;
	while(i < a){
		if(vet[i] == n){
			printf("%d esta no %d ponto do vetor ", n, i+1);
			i = a + 1;
		}else{
			
		i++;}
	}
	if(i == a){
		printf("O numero nao foi encontrado.\n");
	}
}
