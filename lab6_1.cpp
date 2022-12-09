#include<iostream>
using namespace std;

int main(){
    int N[1000];
    int i = 0;
    int x = 0;
    int E = 0;
    int O = 0;
   cout << "Enter an integer: ";
   cin >> N[0];
   while(N[i] > 0){
        cout << "Enter an integer: ";
        cin >> N[i+1];
        i++;
   }

    while(x <= i){
        if(N[x]%2 == 0){
            E = E + 1 ;
        }else{
            O = O + 1 ;
        }
        x++;
    }
    cout << "#Even numbers = " << E - 1 << endl;
    cout << "#Odd numbers = " << O << endl;
    
    return 0;
}
