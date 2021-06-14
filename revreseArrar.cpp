#include "iostream"
using namespace std;


int arrayInput(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }
    
}

int displayArray(int A[],int size)
{
     for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 1;
}

int reverseArray(int A[],int size)
{
    int start=0,end=size-1;

        int temp=0;
    while (start<end)
    {
        temp=A[end];
        A[end]=A[start];
        A[start]=temp;

        start++;
        end--;
    }
    return 1;
    
}

int main()
{
    int size=0;
    cout<<"Enter the number of the element ";
    cin>>size;
    int A[size];

    arrayInput(A,size);
    cout<<"Array before Reverse ";
    displayArray(A,size);
    reverseArray(A,size);
    cout<<"Array after Reverse ";
    displayArray(A,size);


}
