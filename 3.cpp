#include<iostream>
using namespace std;
int main(){
    int count = 0 , sum=0 ;
    while(count<=10){
        sum += count;
        count = count + 1;
    }
    cout << "sum of 10 numbers is  " <<  sum << endl;
    return 0;

}