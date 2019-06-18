#include <bits/stdc++.h>
using namespace std;

void sortBySelect(int array[], int n);

int main()
{

   // введення arr_size

   int size;
   cin >> size;

   // ініціалізувати масив

   int arr[size];

   // введення масиву

   for(int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }

   // сортування

   sortBySelect(arr, size);

   // виведення масиву

   for(int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
}

void sortBySelect(int array[], int n)
{
   int i, j, max_index;

   for(i = n - 1; i >= 0; i--)
   {
      max_index = i; // поточна вартість

      for(j = i; j >= 0; j--) // для інших елементів після [i]
      {
         if(array[j] > array[max_index]) // if element > max element
         {
            max_index = j; // запам'ятайте індекс цього елемента
         }
      }
      swap(array[max_index], array[i]); // поміняти даний елемент з max елементами
   }
}
