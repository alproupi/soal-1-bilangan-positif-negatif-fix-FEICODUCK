#include <stdio.h>

int main() {
  int t;

  printf("Masukkan tahun: ");
  scanf("%d", &t);

  if ((t % 4 == 0 && t % 100 != 0) || t % 400 == 0) {
    printf("Tahun kabisat");
  } else {
    printf("Bukan tahun kabisat");
  }

  return 0;
}
