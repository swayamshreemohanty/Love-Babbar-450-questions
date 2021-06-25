#include"iostream"
#include"climits"
using namespace std;

struct Pair
{
    //INT_MAX, INT_MIN used to initialize the variable with the max and min number of integer.
    int min=INT_MAX;
    int max=INT_MIN;
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

    // //1st set the 1st two element as min, max
    // if (A[0]>A[1])
    // {
    //    minmax.max=A[0];
    //    minmax.min=A[1];
    // }
    // else 
    // {
    //     minmax.max=A[1];
    //     minmax.min=A[0];
    // }

    //with respect to these two values, set the min, max foe the whole array

    for (int i = 2; i < size; i++)
    {
        if (A[i]>minmax.max)
        {
            minmax.max=A[i];
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