#include<iostream>
#include<string>
using namespace std;
int main(){
    cout << "kesempatanku jadi pacarmu" << endl;
    double godloking,mewing,sultan,perhatian,sigma;

    cout << "Nilai Good Looking:";
    cin >> godloking;
    cout << "Nilai Mewing:";
    cin >> mewing;
    cout << "Nilai Sultan:";
    cin >> sultan;
    cout << "Nilai Perhatian:";
    cin >> perhatian;
    cout << "Nilai Sigma:";
    cin >> sigma;

    double avg = (godloking+mewing+sultan+perhatian+sigma) /5;

    cout << "TOTAL GYATT:" << avg << "%" << endl;

    bool yes = (avg>=75)&&(godloking>=75)&&(mewing>=75)&&(sultan>=75)&&(perhatian>=75)&&(sigma>=75);

    if (yes)
    cout << "NGERIZZ BEJIR" << endl <<endl;
    else
    cout << "sadar diri blog" << endl;

    //MAS GANTENGG,MAAF YAA BARU NGERJAIN SEKARANG :D





return 0;
}
