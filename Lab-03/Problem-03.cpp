#include <bits/stdc++.h>
using namespace std;

struct students{
    int id;
    int comCr;
    double cgpa;
};

int main()
{
    struct students s[10];

    for(int i = 0; i<10; i++){
        cout<<"Enter Students Details For "<<(i + 1)<<"st4 Student: "<<endl;
        cout<<"ID :";
        cin>> s[i].id;
        cout<<"Complete Credit :";
        cin>> s[i].comCr;
        cout<<"CGPA :";
        cin>> s[i].cgpa;
        cout<<""<<endl;
    }

    cout<<"Students ID whose CGPA is more than 3.75: "<<endl;
    for(int i = 0; i<10; i++){
        if(s[i].id >= 3.75){
            cout<<s[i].id<<endl;
        }
    }

    cout<<"Students ID who has completed more than 50 credits: "<<endl;
    for(int i = 0; i<10; i++){
        if(s[i].comCr>= 50){
            cout<<s[i].comCr<<endl;
        }
    }



   return 0;
}
