#include <iostream>
using namespace std;



int main() {
    int nilai, uts, uas;
    
    cout << "UTS" << endl;
    cin >> uts;
    cout << "UAS" << endl;
    cin >> uas;
    nilai = (uts + uas)/2;
    if (nilai > 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus" << endl;
    }
    return 0;
}


