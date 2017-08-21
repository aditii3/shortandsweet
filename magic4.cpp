#include <iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t>0){
    int a;
    cin>>a;
    int n,count=0;
   while(a!=0){
        n=a%10;if(n==4){count++;}
        a=a/10;
   }
   cout<<count<<endl;t--;

    }
     return 0;

}
