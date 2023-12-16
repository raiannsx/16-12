#include <stdio.h>

// Função para calcular a soma de dois numeros
float soma(float num1, float num2) {
    return num1 + num2;
}

// Função para calcular a subtraçao de dois numeros
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função para calcular a multiplicaçao de dois numeros
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Função para calcular a divisão de dois numeros
float divisao(float num1, float num2) {
    // Verificar se o divisor é zero para evitar divisao por zero
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero.\n");
        return 0; // Você pode escolher outra abordagem aqui, como retornar um valor especial para indicar erro.
    }
}

int main() {
    float num1, num2;

    // Solicitar ao usuário para inserir dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Chamar as funções e exibir os resultados
    printf("Soma: %.2f\n", soma(num1, num2));
    printf("Subtraçao: %.2f\n", subtracao(num1, num2));
    printf("Multiplicacao: %.2f\n", multiplicacao(num1, num2));
    printf("Divisao: %.2f\n", divisao(num1, num2));

    return 0;
}




