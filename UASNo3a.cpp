#include <iostream>

using namespace std;

int main(){
    int n, total = 0;
    cout << "Masukkan sebuah bilangan bulat positif lebih besar dari 10\n";
    cin >> n;

    for(int i = 1; i <= n; i++){
        total += i;
    }
    
    cout << "\nTotal = " << total;
    
    return 0;
}