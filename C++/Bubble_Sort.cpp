#include <iostream>
using namespace std;
void swap(int *x, int *y)   //swap function
{
int temp = *x;
*x = *y;
*y = temp;
}
void bubbleSort(int arr[], int n)   //bubblesort
{
int i, j;
bool flag;
for (i = 0; i < n-1; i++)
{
flag = false;
for (j = 0; j < n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
swap(&arr[j], &arr[j+1]);
flag = true;
}
}
if (flag == false)
break;

}
}

void printArray(int arr[], int size)    //function for printing an array
{
int i;
for (i=0; i < size; i++)
cout<<arr[i]<<" ";
cout<<" " <<endl;
}

int main()
{
int n;
cout<<"Enter the size of the array : ";
cin>>n;
int *arr = new int[n];
cout<<"Enter the array to sort : "<<endl;

for(int i = 0; i<n ; i++){
cin>>arr[i];
}
bubbleSort(arr, n);
cout<<"Sorted array : "<<endl;
printArray(arr, n);
return 0;

}