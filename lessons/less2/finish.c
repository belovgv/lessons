#include <stdio.h>
int main() {
  int round, total, x, y;
  scanf("%d%d", &round, &total);
  y = total / round;
  x = total - (round * y);
  printf("%d %d", y, x);

  return 0;
}