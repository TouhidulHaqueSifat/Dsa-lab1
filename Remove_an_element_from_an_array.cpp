#include<bits/stdc++.h>
using namespace std;
void remove(int source[],int n,int idx)
{
    if(idx > n || idx < 0)
        cout<<"Not valid position";
    for(int i= idx; i<n;i++)
    {
        source[i]=source[i+1];
    }


}
int main()
{
    int n,idx;
    cin>>n>>idx;

    int source[n];
    for(int i=0;i<n;i++)
    {
        cin>>source[i];
    }

    remove(source,n,idx);
    for(int i=0;i<n;i++)
    {
        cout<<source[i]<<" ";
    }
    return 0;


}
