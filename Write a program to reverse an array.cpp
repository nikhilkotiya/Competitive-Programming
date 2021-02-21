#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void reverse(int arr[],int j,int end)
{
    while(j<end)
        {
        int temp;        
        temp = arr[j];
        arr[j]=arr[end];
        arr[end]=temp;
        end--;
        j++;
    }
    
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 

int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    printArray(arr,n);

    return 0;
}