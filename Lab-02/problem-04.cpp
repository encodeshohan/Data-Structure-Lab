#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10], c = 0, num;

    cout<<"Enter a number to search : ";
    cin>>num;

    cout<<""<<endl;

    cout<<"Enter the element of  an array that store multiple "<<num<<" : " ;
    for(int i = 0; i<10; i++){
        cin>>a[i];
    }

    cout<<""<<endl;

    for (int i = 0; i < 10; i++){
        if (a[i] == num){
            c++;
        }
    }


    cout<<"The number "<< num <<" occurs "<<c<<" times in the array";


return 0;}
