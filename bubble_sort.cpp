#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter total no. of elements :";
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(A[i+1]<A[i])
                {
                    int temp=A[i+1];
                    A[i+1]=A[i];
                    A[i]=temp;
                }
            
        }
        
        cout<<"Counter is "<<counter<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
        cout<<endl;

        
        counter++;
    }

    cout<<"Sorted Array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    
}