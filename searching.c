#include <stdio.h>
 
int binarySearch(int array[], int CariAngka, int left, int right) {//int left dan int right berfungsi untuk mengeksekusi rumus dari teori binary search yaitu memeriksa data dengan cara memeriksa nilai tengah.
  if (right >= left) {//fungsi binarysearch
    int mid = left + (right - left) / 2;//rumus binarysearch
 
    // Jika menemukan angka tengah maka return mid
    if (array[mid] == CariAngka)
      return mid;
 
    // Cari angka pada bagian kiri
    if (array[mid] > CariAngka)
      return binarySearch(array, CariAngka, left, mid - 1);
 
    // Cari angka pada bagian kanan
    return binarySearch(array, CariAngka, mid + 1, right);
  }
 
  return -1;
}
 
int main() {
  int array[] = {7, 11, 12, 23, 29, 32, 38};
  int n = sizeof(array) / sizeof(array[0]); //rumus simpul
  int CariAngka = 32; //angka yang ingin dicari
  int hasil = binarySearch(array, CariAngka, 0, n - 1);
  
  if (hasil == -1){
    printf("Data tidak ditemukan\n");
  }
  else{
    printf("Angka %d ditemukan pada index %d\n", CariAngka, hasil);
  }
  
  return 0;
}
