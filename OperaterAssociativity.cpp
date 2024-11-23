#include<iostream>

using namespace std;

int main(){

    int a = 100 , b = 20 , c = 10;

    a = a / 10 * 20 % 27;

    a = b += c -= 35;

    cout<<a<<" "<<b<<endl;
    return 0;

}