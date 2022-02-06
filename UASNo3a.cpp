#include <iostream>

using namespace std;

int hasil(int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    return total;
}

int main(){
    int n, total = 0;

    a:
    cout << "Masukkan sebuah bilangan bulat positif lebih besar dari 10\n";
    cin >> n;

    if(n <= 10){
        cout << "Harap masukkan bilangan bulat positif LEBIH BESAR DARI 10!" << endl;
        goto a;
    }

    cout << "\nTotal = " << hasil(n);

    return 0;
}