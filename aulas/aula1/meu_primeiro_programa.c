#include <stdio.h>

int main() {
float pi = 3.14;
float raio = 0.0;
  
printf("Informe o valor do raio pizza");
  scanf("%f", &raio);.

  float area_da_pizza = pi * raio * raio;

  printf("a area_da_pizza é de %f\n", area_da_pizza);
  
  return 0;
}