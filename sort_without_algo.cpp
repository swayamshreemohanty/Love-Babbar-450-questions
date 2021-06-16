#include"iostream"
using namespace std;



int insertArray(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element no "<<i+1<<" : ";
        cin>>A[i];
    }
    
}
int displayArray(int A[],int size)
{
     for (int index = 0; index < size; index++)
    {
        cout<<A[index]<<" ";
    }
    cout<<endl;
}

int sorting(int A[],int size)
{
    int temp=0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (A[i] > A[j])
            {
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
            
        }
        
    }
    
    return 1;
}



int main()
{
    int size=0;
    cout<<"Set the element number: ";
    cin>>size;
    int A[size];
    insertArray(A,size);
    cout<<"You entered: "<<endl;
    displayArray(A,size);
    sorting(A,size);
    cout<<"After sorting: "<<endl;
    displayArray(A,size);
}