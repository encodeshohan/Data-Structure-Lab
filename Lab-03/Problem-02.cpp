#include <bits/stdc++.h>
using namespace std;

void encode(string str, int j)
{
    int temp;
    for(int i = j; i < str.size(); i = i+j+1)
    {
        temp = str[i];
        str[i] = (char)(temp + j);
    }
    cout << "Converted String: " << str<<endl;
    cout << " " <<endl;
}

int main()
{
    int j;
    string str;
    cout<< "Enter a sample string: ";
    cin >> str;
    cout<< "Enter a sample integer: ";
    cin >> j;

    cout << "Sample String: " << str;
    cout << " " <<endl;
    cout << "Sample Integer: " << j;
    cout << " " <<endl;

    encode(str, j);
    return 0;
}
