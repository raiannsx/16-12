#include <stdio.h>
int compara(int primeiroNumero, int segundoNumero);
int main(){
 int numero1, numero2, res;
 printf("Digite o primeiro valor:\n");
 scanf("%d", &numero1);

	printf("Digite o segundo valor:\n");
 scanf("%d", &numero2);
	
 res = compara(numero1, numero2);
 printf("o menor numero eh: %d\n", res);
 return 0;
}

int compara(int primeiroNumero, int segundoNumero){
 if (primeiroNumero > segundoNumero) {
 return segundoNumero;
 }else{
 return primeiroNumero;
 }
}
