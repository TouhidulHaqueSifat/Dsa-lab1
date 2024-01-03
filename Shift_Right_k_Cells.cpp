#include<bits/stdc++.h>
using namespace std;
int n;
void shiftRight(int source[], int k)
{
    for(int i=n-1;i>=n-k;i--)
    {
        source[i]=source[i-k];
    }
    for(int i=0;i<n-k;i++)
    {
        source[i]=0;
    }
}

int main()
{
    int k;
    cin>>n>>k;
    int source[n];
    for(int i=0;i<n;i++)
    {
        cin>>source[i];
    }
    shiftRight(source,k);
    for(int i=0;i<n;i++)
    {
        cout<<source[i]<<" ";
    }
    return 0;
}
