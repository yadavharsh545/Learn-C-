#include <iostream>
using namespace std;

int main(){
    int a=10 , *ptra;
    string s ="hello" , *ptrs;
    float f = 5.3 , *ptrf;
    ptra = &a;
    ptrs = &s;
    ptrf = &f;
    cout<<*ptra<<" ";
    cout<<*ptrs<<" "; 
    cout<<*ptrf<<" ";  

}