#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;

    for(int i=1;i<=T;i++)
    {

        int s1,s2,sum = 0;
        cin>>N;
        s1=N%10; //find last digit of the number
        s2=N/10000; //Given the number have 5 digit so we used 10000
        sum=s1+s2;
        cout<<"Sum"<<" = "<<sum<<endl;
    }

   return 0;
}
