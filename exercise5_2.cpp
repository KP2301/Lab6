#include <iostream>
#include <string>
using namespace std;

string text1 = "" ;
string text2 = "" ;
int N ;
int count = 0 ;
int main(){
    cout << "Enter the first text: ";
    cin >> text1;
    cout << "Enter the second text: ";
    cin >> text2;
    cout << "Enter N: ";
    cin >> N ;
    while(count < N){
        if(count%2 == 0){
            cout << text1 << " ";
        }else{
            cout << text2 << " ";
        }
        count++ ;
    }

}
