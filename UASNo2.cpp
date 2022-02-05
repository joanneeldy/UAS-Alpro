#include <iostream>

using namespace std;

int main(){
    int A[3][5] = {
        {1, 10, 2, 10, 3}, 
        {4, 10, 5, 10, 6}, 
        {7, 10, 8, 10, 9}};

    int baris = 3, kolom = 5, j, k;

    int *p = &A[0][0];

    for(j = 0; j < baris; j++){
        cout << endl << "-------------------------------------------" << endl;
        for(k = 0; k < kolom; k++){
            cout << "| ";
            if(*(p + j * kolom + k) == 10){
                cout << "\t" << " ";             
            }
            else{
                cout << "\t" << (*(p + j * kolom + k));
            }
        }
        cout << " |";
    }   
    cout << endl << "-------------------------------------------";
    return 0;
}