#include <stdio.h> // разобрать!

int main(void) {
  int x, y, z;

  if (scanf("%d %d %d", &x, &y, &z) != 3 || (x != 0 && x != 1) ||
      (y != 0 && y != 1) || (z != 0 && z != 1)) {
    printf("n/a");
    return 0;
  }

  printf("%d", x && (z || y));

  return 0;
}