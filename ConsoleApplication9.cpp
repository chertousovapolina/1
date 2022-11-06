// Чертоусова дз Задача 1

#include <iostream>
using namespace std;
int main()
{
    
    
    const int size = 100;
     int n;
     cin >> n;
     int mass[size];;
     for (int i = 0; i != n; i++)
     {
         cin >> mass[i];

         if ((mass[i]%2)!=0) {
              mass[i]  = 0;
             
         }
         
     }
    
   
     for (int i = 0; i != n; i++) {


         if (mass[i] < 0) {
             mass[i] *= -1;
            
         }
     }
     for (int i = 0; i != n; i++) cout << mass[i];
}


