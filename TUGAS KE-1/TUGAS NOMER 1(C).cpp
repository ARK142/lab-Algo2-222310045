#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
  int i, j, maxIndex, temp;
  for (i = 1; i <= n-1; i++) {
    maxIndex = i;
    for (j = i+1; j <= n; j++) {
      if (arr[j] > arr[maxIndex]) {
        maxIndex = j;
      }
    }
    temp = arr[maxIndex];
    arr[maxIndex] = arr[i];
    arr[i] = temp;
    cout << "Iterasi ke-" << i+1 << ": ";
    for (int k = 1; k <= n; k++) {
      cout << arr[k] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n, i;
  cout << "Masukan jumlah elemen: ";
  cin >> n;
  int arr[n];
  cout << "Masukan nilai elemen: " << endl;
  for (i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  cout << "Data sebelum sorting: ";
  for (i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  selectionSort(arr, n);
  cout << "Data setelah sorting: ";
  for (i = 11; i <= n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
