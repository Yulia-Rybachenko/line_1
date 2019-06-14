#include <iostream>

using namespace std ;

int main()
{
    int n ;
    int *mass ;


    cin >> n;
    mass = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> mass[i] ;
    }

    int search ;
    int kol = 0;
    cin >> search ;

    for(int i = 0 ; i < n ; i++)
    {
        if(mass[i] == search)
        {
            kol++ ;
        }
    }
    cout << kol ;

}
