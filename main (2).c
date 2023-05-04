#include <stdio.h>


void soma(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}


void subtrai(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}


void multiplica(int *a, int *b, int *resultado) {
    *resultado = *a * *b;
}


void divide(int *a, int *b, float *resultado) {
    *resultado = (float) *a / *b;
}

int main() {
    int a = 10, b = 5, resultado;
    float resultado_divisao;

    
    soma(&a, &b, &resultado);
    subtrai(&a, &b, &resultado);
    multiplica(&a, &b, &resultado);
    divide(&a, &b, &resultado_divisao);

    
    printf("Soma: %d\n", resultado);
    printf("Subtracao: %d\n", resultado);
    printf("Multiplicacao: %d\n", resultado);
    printf("Divisao: %.2f\n", resultado_divisao);

    return 0;
}
