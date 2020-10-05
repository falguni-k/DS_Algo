#include<iostream>
using namespace std;

void find_sumPair (int A[], int n, int sum)
{
  for(int i = 0 ; i <= n-1 ; i++)
  {
     for(int j = i+1 ; j <= n-1; j++)
     { 
         if(A[i]+A[j] == sum)
         {
             cout << A[i] << " " << A[j] << endl;
         }
     }
  }
}

int main()
{
    int size; cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    int sum; cin >> sum;
    find_sumPair(a, size, sum);
    return 0;
}
