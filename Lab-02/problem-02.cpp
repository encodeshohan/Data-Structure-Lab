#include<bits/stdc++.h>
using namespace std;

int main(){

    int s1, s2, n=0;

    cout<<"Enter Size of the First Array: ";
    cin>>s1;
    cout<<""<<endl;
    cout<<"Enter Size of the Second Array: ";
    cin>>s2;
    cout<<""<<endl;

    int a[s1],  b[s2],  c[max(s1,s2)];

    cout<<"Enter the First Array Element: ";

    for(int i = 0; i<s1; i++){
        cin>>a[i];
    }

    cout<<""<<endl;

    cout<<"Enter the Second Array Element: ";

    for(int i = 0; i<s2; i++){
        cin>>b[i];
    }

    for(int i = 0 ; i < s1; i++)
    {
        for (int j = 0 ; j < s2; j++)
        {
            if(a[i] == b[j])
            {
                c[n] = b[j];
                n++;
            }
        }
    }

    cout<<""<<endl;

    if(n == 0)
    {
        cout<<"No Common Element"<<endl<<endl;
    }
    else
    {
        cout<<"The common elements of both array are: ";
        for (int i = 0; i<n; i++)
        {
                cout << c[i] << " ";
        }
    }


return 0;}
