#include<bits/stdc++.h>
using namespace std;
int n;
void rotateLeft(int source[], int k)
{
    for(int j=0; j<k; j++)
    {
        int f=0;
        int s=1;
        int temp = source[0];
        for(int i=0; i<n; i++)
        {
            source[f]=source[s];
            f = f+1;
            s = f+1;
        }
        source[n-1]=temp;
    }
}
int main()
{
    int k;
    cin>>n>>k;
    int source[n];
    for(int i=0; i<n; i++)
    {
        cin>>source[i];
    }

    rotateLeft(source,k);
    for(int i=0; i<n; i++)
    {
        cout<<source[i]<<" ";
    }
    return 0;

}
