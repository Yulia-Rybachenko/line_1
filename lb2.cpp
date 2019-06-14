#include <iostream>

using namespace std ;

int main()
{
    int N , K ;
    cin >> N >> K ;

    int *arr_1 , *arr_2 ;
    arr_1 = new int[N] ;
    arr_2 = new int[K] ; // down

    for(int i = 0 ; i < N ; i++)
    {
        cin >> arr_1[i] ;
    }
    for(int i = 0 ;i < K ; i++)
    {
        cin >> arr_2[i];
    }


    bool YES = false ;

    for(int i = 0 ; i < K ; i++)
    {
       for(int j = 0 ; j < N ; j++)
       {
           if(arr_2[i] == arr_1[j])
           {
               YES = true;
               break;
           }
       }

       if(YES == true)
       {
           cout << "YES" << endl;
           YES = false ;
       }
       else{
           cout << "NO" << endl; 
       }

    }

}
