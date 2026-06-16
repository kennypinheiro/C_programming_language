#include <stdio.h>
#include <math.h> // Pode ser necessário para acos()

// Método 1: #define (Mais comum)
#define PI 3.14159265358979323846

// Método 2: const
const double pi = 3.14159265358979323846;

int main() {
    double raio = 5.0;
    double area = PI * raio * raio;
    printf("Area: %f\n", area);
    return 0;
}