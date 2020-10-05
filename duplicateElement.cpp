#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print duplicates 
void printDuplicate(int arr[], int size) 
{ 
int i; 
cout << "The duplicate elements are:" << endl; 
for (i = 0; i < size; i++) 
{ 
    if (arr[abs(arr[i])] >= 0) 
    arr[abs(arr[i])] = -arr[abs(arr[i])]; 
    else
    cout << abs(arr[i]) << " "; 
} 
} 
  

int main() 
{   
    int n,i;
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    printDuplicate(arr, n); 
    return 0; 
} 