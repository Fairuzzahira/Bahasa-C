#include <stdio.h>
 
int main() {
  int data[100], cari, i, n;
 
  printf("Masukkan banyaknya jumlah data : ");
  scanf("%d", &n);
 
  printf("Input setiap data integer sebanyak %d :\n", n);
 
  for (i = 0; i < n; i++){
    scanf("%d", &data[i]);
  }
 
  printf("Input data yang ingin dicari: ");
  scanf("%d", &cari);
 
  for (i = 0; i < n; i++) {
    if (data[i] == cari) {
      printf("%d berada di indeks ke %d.\n", cari, i+1);
      break;
    }
  }
  if (i == n){
    printf("%d tidak ada.\n", cari);
  }
  
  return 0;
}
