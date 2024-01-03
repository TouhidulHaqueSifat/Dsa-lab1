#include<bits/stdc++.h>
using namespace std;
int n;
void rotateRight(int source[], int k)
{
    for(int j=0; j<k; j++)
    {
        int f=n-1;
        int s=n-2;
        int temp = source[n-1];
        for(int i=n-1; i>=0; i--)
        {
            source[f]=source[s];
            f = f-1;
            s = f-1;
        }
        source[0]=temp;
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

    rotateRight(source,k);
    for(int i=0; i<n; i++)
    {
        cout<<source[i]<<" ";
    }
    return 0;

}
