#include<iostream>
using namespace std;
int main(){
    int curval, val=0;
     cout<< "Enter some numbers" <<endl;
     if (cin>>curval){
         int cnt=1;
         while (cin>>val){
             if(val== curval){
                  ++cnt;

             }
             else {
             cout<< curval << "occurs" << cnt << "times" << endl;
             curval = val;
             cnt=1;
             }

         }
         cout<< curval << "occurs" << cnt << "times" << endl;
     }
     return 0;
    
}