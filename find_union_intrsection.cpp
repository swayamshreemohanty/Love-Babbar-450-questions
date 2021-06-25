#include"iostream"
using namespace std;


void union_intersection(int A1[], int A2[],int size1, int size2)
{
    int i=0,j=0;
    while ((i<size1) && (j<size2))
    {
        if (A1[i]<A2[j])
        {
            cout<<A1[i++]<<" ";
        }
        else if (A2[j]<A1[i])
        {
            cout<<A2[j++]<<" ";
        }
        else
        {
            cout<<A2[j++]<<" ";
            i++;
        }
    }
    while (i<size1)
    {
        cout<<A1[i++]<<" ";
    }
    
    while (j<size2)
    {
        cout<<A2[j++]<<" ";
    }
    
}

int main()
{
    int A1[]={1,2,3,4,5,6};
    int A2[]={2,3,4};
    int size1=sizeof(A1)/sizeof(A1[0]), size2=sizeof(A2)/sizeof(A2[0]);

    union_intersection(A1, A2, size1, size2);
    union_intersection(A1, A2, size1, size2);

    return 0;
}