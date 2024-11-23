#include<iostream>

using namespace std;

int main(){

    int a;

    cin>> a;

    string numberStatus;

    numberStatus = (a%2==1) ? "ODD" : "EVEN";

    cout<<numberStatus<<endl;
    return 0;



}
