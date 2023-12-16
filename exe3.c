#include <stdio.h>

// Fun��o para calcular a soma de dois numeros
float soma(float num1, float num2) {
    return num1 + num2;
}

// Fun��o para calcular a subtra�ao de dois numeros
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Fun��o para calcular a multiplica�ao de dois numeros
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Fun��o para calcular a divis�o de dois numeros
float divisao(float num1, float num2) {
    // Verificar se o divisor � zero para evitar divisao por zero
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divis�o por zero.\n");
        return 0; // Voc� pode escolher outra abordagem aqui, como retornar um valor especial para indicar erro.
    }
}

int main() {
    float num1, num2;

    // Solicitar ao usu�rio para inserir dois n�meros
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Chamar as fun��es e exibir os resultados
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtra�ao: %.2f\n", subtracao(num1, num2));
    printf("Multiplicacao: %.2f\n", multiplicacao(num1, num2));
    printf("Divisao: %.2f\n", divisao(num1, num2));

    return 0;
}




