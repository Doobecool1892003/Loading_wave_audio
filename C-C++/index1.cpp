#include<iostream>
#define MAX 100
using namespace std;

void Nhap(int a[], int &n){
    cout << "n: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

void Insert(int a[], int &n, int vt, int x){
    for(int i = n; i >= vt; i--){
        a[i] = a[i - 1];
    }
    a[vt - 1] = x;
    n++;
}

int main(){
    int a[MAX], n, vt, x;
    Nhap(a, n);
    cout << "x, vt: "; cin >> x >> vt;
    Insert(a, n, vt, x);
    Xuat(a, n);
}
