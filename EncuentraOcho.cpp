#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ban;
    cin>>num;
    int a[num];
    for(int i=0;i<num; i++){
        cin>>a[i];
    }
    for(int i=0; i<num; i++){
        if(a[i]==8){
            ban=1;
            break;
        }else{
            ban=0;
        }
    }
    cout<<ban<<endl;
    return 0;
}
