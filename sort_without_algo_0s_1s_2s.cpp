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

//This algo is only for if the array consists of 0,1 and 2. like {2,1,0,2,1,0,0}
int sorting(int A[], int size)
{
    int low=0,high=size-1,mid=0;

    while (mid<=high)
    {
        if (A[mid]==0)
        {
            int temp=0;
            temp=A[mid];
            A[mid]=A[low];
            A[low]=temp;
            low++;
            mid++;
        }
        else if(A[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=0;
            temp=A[mid];
            A[mid]=A[high];
            A[high]=temp;
            high--;
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