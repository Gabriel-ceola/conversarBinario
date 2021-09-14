#include <stdio.h>
#define TAM 21
void main(){

  int binario[TAM], aux, numero;

  printf("Digite o numero que ira converter: ");
  scanf("%d", &numero);

  for (aux = TAM -1; aux >= 0; aux--){
    binario[aux]= (numero % 2)==0 ?0 : 1;
    numero = numero / 2;
  }

  printf("\n\t");
  for (aux = 1; aux < TAM; aux++){
    printf("%d", binario[aux]);
    if((aux%4)==0)
      printf(" ");
  }
}