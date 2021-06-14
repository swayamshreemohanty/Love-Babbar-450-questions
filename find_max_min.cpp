#include"iostream"
using namespace std;

struct Pair
{
    int min;
    int max;
};



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

struct Pair min_maxArray(int A[],int size)
{
    struct Pair minmax;
    int i=0;
    //1st set the 1st two element as min, max
    if (A[0]>A[1])
    {
       minmax.max=A[0];
       minmax.min=A[1];
    }
    else 
    {
        minmax.max=A[1];
        minmax.min=A[0];
    }

    //with respect to these two values, set the min, max foe the whole array

    for (i = 2; i < size; i++)
    {
        if (A[i]>minmax.max)
        {
            minmax.max=A[i];
            // cout<<minmax.max<<endl;
        }
        else if (A[i] < minmax.min)
        {
            minmax.min=A[i];
        }
    }
    
    return minmax;
    
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
    struct Pair minmax=min_maxArray(A,size);
    
    cout<<"The minimum number "<<minmax.min;
    cout<<endl;
    cout<<"The maximum number "<<minmax.max;


}