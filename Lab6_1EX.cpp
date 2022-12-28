#include<iostream>
using namespace std;

int main(){
    int N[1000];
    int i = 0;
    int n = 0;
    int E = 0;
    int O = 0;

    cout << "Enter an integer: ";
    cin >> N[0];
    while(N[i] > 0){
        cout << "Enter an integer: ";
        cin >> N[i+1];
        i++;
    }
    while(n < i+1){
        if(N[n]%2 == 0){
            E++;
        }else{
            O++;
        }
        n++;
    }


    cout << "#Even numbers = "<<E-1<<endl;
    cout << "#Odd numbers = "<< O;
    return 0;
}