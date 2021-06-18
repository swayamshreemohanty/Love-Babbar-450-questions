#include"iostream"
using namespace std;

int negativeLeft(int A[],int size)
{
    int index=0,traverseIndex=0;
    while (traverseIndex<size)
    {
        if (A[traverseIndex]<0)
        {
            int temp=0;
            temp=A[traverseIndex];
            A[traverseIndex]=A[index];
            A[index]=temp;
            index++;
            traverseIndex++;
        }
        else
        {
            traverseIndex++;
        }
        
        
    }
    
}

void displayArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int insertArray(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>A[i];
    }
}

int main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int A[size];
    insertArray(A,size);
    cout<<"You entered: "<<endl;
    displayArray(A,size);
    negativeLeft(A,size);
    cout<<"After element negative shift:"<<endl;
    displayArray(A,size);
}