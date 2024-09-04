#include<iostream>
using namespace std;

bool assess_1_7(int val){
    return val%3%5==0;
}

int gcd(int a,int b){
    int x=min(a,b);
    int y=max(a,b);
    int times=0;
    while(x>0){
        int r=y%x;
        y=x;
        x=r;
        times++;
    }
    cout<<times<<endl;
    return y;
}

int gcdcommon(int a,int b){
    int d=min(a,b);
    if(d==0){
        return max(a,b);
    }
    int times=0;
    while(d>=1){
        if(a%d==0&&b%d==0){
            return d;
        }
        d--;
        times++;
        cout<<times<<endl;
    }
    
    cout<<times<<endl;
    return -1;
}
int main(){
    // int val=15;
    // if(assess_1_7(val)){
    //     cout<<val<<" is in the array"<<endl;
    // }else{
    //     cout<<val<<" is out of the array"<<endl;
    // }
    gcdcommon(45,117);
    return 0;
}

