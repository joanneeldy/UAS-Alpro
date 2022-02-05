#include <iostream>

using namespace std;

class kpop{
    public:
    string genre;
    string singer;
    string song;
    float views(float mill);
};

float kpop::views(float mill){
    return mill;
}

int main(){
    kpop kpopObj1;
    kpopObj1.genre = "Bubblegum Pop";
    kpopObj1.singer = "TWICE";
    kpopObj1.song = "Likey";

    kpop kpopObj2;
    kpopObj2.genre = "Electronic";
    kpopObj2.singer = "EXO";
    kpopObj2.song = "Ko Ko Bop";

    kpop kpopObj3;
    kpopObj3.genre = "Drumline";
    kpopObj3.singer = "After School";
    kpopObj3.song = "Bang!";

    kpop kpopObj4;
    kpopObj4.genre = "Pop-Ballad";
    kpopObj4.singer = "IOI";
    kpopObj4.song = "Downpour";

    cout << kpopObj1.genre << " - " << kpopObj1.singer << " - "
         << kpopObj1.song << " (" << kpopObj1.views(554) << "M)";
    
    cout << endl;

    cout << kpopObj2.genre << " - " << kpopObj2.singer << " - "
         << kpopObj2.song << " (" << kpopObj2.views(327) << "M)";

    cout << endl;
    
    cout << kpopObj3.genre << " - " << kpopObj3.singer << " - "
         << kpopObj3.song << " (" << kpopObj3.views(9.109) << "M)";

    cout << endl;
    
    cout << kpopObj4.genre << " - " << kpopObj4.singer << " - "
         << kpopObj4.song << " (" << kpopObj4.views(3.784) << "M)";

    return 0;
}