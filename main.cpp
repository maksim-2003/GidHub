#include <iostream>
#include <cstdio>
#include <windows.h>

using namespace std;

int k=0;

void sh(int v)
{
    for(int i=0;i<k;i++) cout<<" ";
    cout<<(char)192;
    k++;
    for(int i=0;i<=v;i++)
    {
        cout<<(char)196;
        k++;
    }
    cout<<(char)191<<endl;
    for(int j=0;j<=v;j++)
    {
    for(int i=0;i<k;i++)
        cout<<" ";
        cout<<(char)179<<endl;
    }
}

int main()
{
    //freopen("1.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    sh(i);
    system("pause");
}
