#include<bits/stdc++.h>
using namespace std;
int n;
bool is_present(int arr[],int second_arr[])
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(second_arr[i]==second_arr[j])
            {
                cnt++;
            }
        }
    }

    if(cnt>=2)
        return true;

    return false;
}
int main()
{
    int cnt;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int second_array[100]={0};
    for(int i=0;i<n;i++)
    {
        second_array[arr[i]]++;
    }
    bool s = is_present(arr,second_array);
    if(s==true)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
