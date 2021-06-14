#include"iostream"
#include "bits/stdc++.h"
using namespace std;

int arrayInput(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
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


void kth_smallest(int A[],int size,int kth_num)
{
    if (kth_num>size)
    {
        cout<<"invalid kth number, it must be below the size"<<endl;
    }
    else
    {
        int kth_min_data=0;
        int kth_max_data=0;
        int min_element=0;
        int max_element=0;
        int i=0;
        arrayInput(A,size);
        //1st sort the array
        cout<<"The entered elements are ";
        displayArray(A,size);
        sort(A,A+size);

        //find the greatest and smallest element in the array
        if(A[0]>A[1])
        {
            max_element=A[0];
            min_element=A[1];
        }
        else
        {
            max_element=A[1];
            min_element=A[0];
        }

        for ( i = 2; i < size; i++)
        {
            if (A[i]>max_element)
            {
                max_element=A[i];
            }
            else if (A[i]< min_element)
            {
                min_element=A[i];
            }
        }
        ///////////////////////////////////////////////////////
        
        kth_min_data=A[kth_num-1];  //to find kth min 
        kth_max_data=A[size-kth_num];  //to find kth max 
        cout<<"The "<<kth_num<<" smallest number "<<kth_min_data<<endl;
        cout<<"The "<<kth_num<<" highest number "<<kth_max_data<<endl;
    }
    
}

int main()
{
    int size=0;
    int kth=0;

    cout<<"Enter the number of the element: ";
    cin>>size;
    cout<<"Enter the kth number: ";
    cin>>kth;
    int A[size];

    kth_smallest(A,size,kth);

    
}