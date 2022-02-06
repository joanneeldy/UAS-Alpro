#include <iostream>

using namespace std;

int rekur(int n);

int main(){
    int n;

    a:
    cout << "Masukkan sebuah bilangan bulat positif lebih besar dari 10\n";
    cin >> n;
    
    if(n < 10){
        cout << "Harap masukkan bilangan bulat positif LEBIH BESAR DARI 10!" << endl << endl;
        goto a;
    }

    cout << "\nTotal = " << rekur(n);

    return 0;
}
 
int rekur(int n){
    if (n != 0){
        return n + rekur(n - 1);
    }

    return 0;
}