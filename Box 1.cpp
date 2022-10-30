
#include<iostream>
using namespace std;

int main()
{
    int T,N,k,i,j;
    cin>>T;
    while(T--){

    cin>>N;
    for(int i = 0 ; i < N ; i++)
	{
        for(int j = 0; j < N;j++)
		{
            cout<<"*";
        }
        cout<<endl;
    }

    if(T> 0)
    cout<<endl;

   }
    return 0;
}
