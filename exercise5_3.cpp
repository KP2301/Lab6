#include <iostream>
using namespace std;

int N;  //จำนวนเงิน
int B = 0; //ขวด
int S1; //stamp
int S2;

int cheetah(int x){
    if(x >= 10){
       B = x/10;
       S1 = B; 
        while(S1 >= 3){
        B += S1/3;
        S2 = S1 - ((S1/3)*3);
        S1 = S2 + S1/3;
       }
    }else{
        return 0;
    }
    return B;
}

int main(){
    cout << cheetah(204);
    return 0;
}