#include<iostream>
using namespace std;
int main(){
    int T,i,j,N;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>N;
        cout<<"case "<<i<<":";

        for(j=1;j<=N;j++){
            if(N%j==0)
            {
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}
