#include <stdio.h>

int main() {
  int n;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  if (n > 0) {
    printf("Bilangan positif\n");
  } else if (n < 0) {
    printf("Bilangan negatif\n");
  } else {
    printf("Nol\n");
  }

  return 0;
}
