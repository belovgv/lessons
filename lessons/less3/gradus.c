#include <stdio.h>

float fahr(int cel) {
  float res;
  res = (cel * 1.8) + 32;
  return res;
}

int main() {
  int cel; // градусы Цельсия
  float f; // градусы Фаренгейта

  // тест
  cel = 0;
  f = fahr(cel);
  printf("C = %d, F = %.2f\n", cel, f);

  // для произвольного числа
  scanf("%d", &cel);
  f = fahr(cel);
  printf("C = %d, F = %.2f\n", cel, f);

  return 0;
}