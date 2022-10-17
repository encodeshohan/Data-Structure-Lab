#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10], c, i, j;

    int fq[10];

    cout<<"Enter the Array : " ;
    for(int i = 0; i<10; i++){
        cin>>arr[i];
        fq[i] = 0;
    }

    for(i=0; i<10; i++)
    {
        c = 1;
        for(j = i+1; j < 10; j++)
        {

            if(arr[i] == arr[j])
            {
                c++;
                fq[j] = -1;
            }
        }
         if(fq[i] == 0)
        {
            fq[i] = c;
        }
    }

    for(i=0; i<10; i++)
    {
        if(fq[i] != -1)
        {
            cout<< arr[i] <<" occurs = " << fq[i] << " times."<<endl<<endl;
        }
    }



return 0;}
