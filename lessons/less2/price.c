#include <stdio.h>
int main() {
  int k_rice, k_veg;
  scanf("%d %d", &k_rice, &k_veg);
  int n = k_veg * 2 + k_rice;
  printf("%d price", n);
  return 0;
}
