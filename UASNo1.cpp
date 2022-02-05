#include <iostream>

using namespace std;

int main(){
    int A[3][5] = {
    {23, 95, 50, 27, 18},
    {19, 49, 83, 32, 41},
    {68, 15, 37, 77, 95}
    };

    int baris = 3, kolom = 5, j, k;
    int *p = &A[0][0];

    for (j = 0; j < baris; j++) {
    cout << endl << "-------------------------------------------" << endl;
    for (k = 0; k < kolom; k++) {
      cout << "| ";
      cout << "\t" << (*(p + j * kolom + k));
    }
    cout << " |";
    }
    cout << endl << "-------------------------------------------\n";

    int maks;
    for(j = 0; j < baris; j++){
        for(k = 1; k < kolom; k++){
            if(*(p + j * kolom + k) > *(p + j * kolom + k - 1)){
                maks = *(p + j * kolom + k);
            }
        }
    }
    cout << "\nNilai terbesar adalah " << maks << "." << endl;

    int brp = 0;
    for(j = 0; j < baris; j++){
        for(k = 0; k < kolom; k++){
            if(*(p + j * kolom + k) == maks){
                brp++;
            }
        }
    }
    cout << "Terdapat nilai terbesar " << maks << " sebanyak " << brp << " buah."
       << endl;

       int cari = 50;
       bool ada = false;
       for(j = 0; j < baris; j++){
           for(k = 0; k < kolom; k++){
               if(*(p + j * kolom + k) == cari){
                   ada = true;
               }
           }
       }

       if(ada != true){
           cout << "Tidak terdapat angka dengan nilai " << cari << "." << endl;
       }
       else {
           cout << "Terdapat angka dengan nilai " << cari << "." << endl;
       }
}