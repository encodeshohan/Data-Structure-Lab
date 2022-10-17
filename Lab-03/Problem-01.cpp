#include <bits/stdc++.h>
using namespace std;

int main(){

    int mat[3][4], tranMat[3][4];

    cout<<"Enter the value of Matrix: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            tranMat[j][i] = mat[i][j];
        }
    }

    cout<<"Transpose Matrix :"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << tranMat[i][j] << " ";
        }
        cout << endl;
    }

}
