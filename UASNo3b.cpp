#include <iostream>

using namespace std;

int rekur(int n);

int main(){
    int n;

    cout << "Masukkan sebuah bilangan bulat positif lebih besar dari 10\n";
    cin >> n;

    cout << "\nTotal = " << rekur(n);

    return 0;
}

int rekur(int n){
    if (n != 0) {
        return n + rekur(n - 1);
    }

    return 0;
}