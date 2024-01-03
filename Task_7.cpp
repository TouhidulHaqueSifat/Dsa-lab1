#include<bits/stdc++.h>
using namespace std;
void removeAll(int source[],int n, int element)
{
    int index = 0;
    for(int i=0;i<n;i++)
    {
        if(source[i]!=element)
        {
            source[index]=source[i];
            index++;
        }

    }
    for(int i=index;i<n;i++)
    {
        source[i]=0;
    }
}
int main()
{
    int n, element;
    cin>>n>>element;
    int source[n];
    for(int i=0;i<n;i++)
    {
        cin>>source[i];
    }
    removeAll(source,n,element);
    for(int i=0;i<n;i++)
    {
        cout<<source[i]<<" ";
    }
    return 0;

}
