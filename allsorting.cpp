#include<iostream>
using namespace std;

void bubblesort(int arr[],int size) //time complexcity 1,n2
{

    int i,j,temp;

    for(i=0;i<size-1;i++)
{

    for(j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;


        }

    }
}


cout<<"\nAfter sorting by bubble sort : "<<endl;
for(i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}

}




void selectionsort(int arr[],int a)
{

    int i,j,temp,minimum;


for(i=0;i<a-1;i++)
{
   minimum=i;

    for(j=i+1;j<a-1;j++)
    {
        if(arr[j]<arr[minimum])
        {
            minimum=j;
        }
    }

    temp=arr[i];
    arr[i]=arr[minimum];
    arr[minimum]=temp;
}

cout<<"\nAfter sorting by selection sort : "<<endl;
for(i=0;i<a;i++)
{
    cout<<arr[i]<<" ";
}

}



void insertionsort(int arr[],int a)
{

int i,j,temp;
for(i=1;i<a-1;i++)
{
    temp=arr[i];
    j=i-1;
   while(j>=0 && arr[j]>temp)
   {
       arr[j+1]=arr[j];

       j--;
   }
   arr[j+1]=temp;
}

cout<<"\nAfter sorting by insertion sort : "<<endl;
for(i=0;i<a;i++)
{
    cout<<arr[i]<<" ";
}
}

//Main function

int main(){


int a;

cout<<"Enter the size of array : ";
cin>>a;

int arr[a];

cout<<"Enter the numbers : ";
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}

cout<<"The numbers are : ";
for(int i=0;i<a;i++)
{
    cout<<arr[i]<<" ";
}

bubblesort(arr,a);
selectionsort(arr,a);
insertionsort(arr,a);


}
