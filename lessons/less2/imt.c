#include <stdio.h>
int main() {
  float m, h;
  float imt;
  scanf("%f%f", &m, &h);
  imt = m / (h * h);
  printf("%f\n", imt);
  return 0;
}
