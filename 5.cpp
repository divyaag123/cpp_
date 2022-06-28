#include<iostream>
using namespace std;
int main(){
    int sum = 0 , val;
    cout<< "Enter the number till which the sum has to be calculated ";
    cin>> val;
    for (int i = 0; i<=val ; i++){
        sum+=i;
    }
    cout<< "The sum of 1 to "<< val << " is "<< sum;
    return 0;


}