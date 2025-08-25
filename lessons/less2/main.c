#include <stdio.h>

int main() {
  int min; // переменная для минут
  int sec; // переменная для секунд

  min = 2 * 60 + 37;
  sec = min * 60;

  printf("min: %d\n", min);
  printf("sek: %d\n", sec);

  return 0;
}