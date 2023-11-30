#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int n;
    cout << "n: "; cin >> n;
    cin.ignore();
    cout << "Nhap chuoi : ";
    getline(cin, str);
    cout << "Chuoi vua nhap: " << str;
}