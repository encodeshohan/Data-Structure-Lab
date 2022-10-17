#include<bits/stdc++.h>
using namespace std;

int main(){

    int s1, s2;

    cout<<"Enter Size of the First Array: ";
    cin>>s1;
    cout<<""<<endl;
    cout<<"Enter Size of the Second Array: ";
    cin>>s2;
    cout<<""<<endl;

    int a[s1], b[s2], c[s1+s2];

    cout<<"Enter the First Array Element: ";

    for(int i = 0; i<s1; i++){
        cin>>a[i];
    }

    cout<<""<<endl;

    cout<<"Enter the Second Array Element: ";

    for(int i = 0; i<s2; i++){
        cin>>b[i];
    }

    int j = 0;
    for(int i = 0 ; i < s1+s2; i++)
    {
        if(i < s1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[j];
            j++;
        }
    }

    cout<<"Array After Merge :";
    for (int i = 0; i < s1+s2; i++)
    {
        cout << c[i] <<" ";
    }

    cout<<""<<endl;

    cout<<"Reverse: ";

    for (int i = (s1+s2)-1; i >= 0; i--)
    {
        cout << c[i] <<" ";
    }


return 0;}
