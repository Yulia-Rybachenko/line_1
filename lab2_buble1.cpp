#include <iostream>
#include "vector"

using namespace std;

int main()
{
  int a;
  cin >> a;
  vector<int> arr(a);
  for(int i = 0; i < a; i++)
  {
    cin >> arr[i]; 
  }
  for(int i = 1; i < a; ++i)
  {
    for(int j = 0; j < a-i; ++j)
    {
      if(arr[j+1] < arr[j])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for(int i = 0; i < a; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
