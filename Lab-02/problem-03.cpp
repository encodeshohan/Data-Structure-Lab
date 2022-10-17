#include<bits/stdc++.h>
using namespace std;

int main(){

    int s, flag = 0;
    cout<<"Enter Size of the First Array: ";
    cin>>s;

    int a[s];

    cout<<""<<endl;

    cout<<"Enter the First Array Element: ";
    for(int i=0; i<s; i++){
        cin >> a[i];
    }


    for (int i = 0; i < s; i++){
        int j;
        for(j = 0; j < i; j++){
            if (a[i] == a[j]){
                flag = 1;
                break;
            }
        }

        if (i == j){
            cout << a[i] << " ";
        }
    }
    if(flag == 0){
        cout<<"Array already unique!";
    }

return 0;}
