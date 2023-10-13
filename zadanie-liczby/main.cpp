#include <iostream>
using namespace std;

string cyfra(char arg) {
    string nazwa = "";
    if (arg == '1') {
        nazwa = "jeden";
    }
    if (arg == '2') {
        nazwa = "dwa";
    }
    if (arg == '3') {
        nazwa = "trzy";
    }
    if (arg == '4') {
        nazwa = "cztery";
    }
    if (arg == '5') {
        nazwa = "piec";
    }
    if (arg == '6') {
        nazwa = "szesc";
    }
    if (arg == '7') {
        nazwa = "siedem";
    }
    if (arg == '8') {
        nazwa = "osiem";
    }
    if (arg == '9') {
        nazwa = "dziewiec";
    }
    return nazwa;
}

string setki(char arg) {
    string nazwa = "";
    if (arg == '1') {
        nazwa = "sto";
    }
    if (arg == '2') {
        nazwa = "dwiescie";
    }
    if (arg == '3') {
        nazwa = "trzysta";
    }
    if (arg == '4') {
        nazwa = "czterysta";
    }
    if (arg == '5') {
        nazwa = "piecset";
    }
    if (arg == '6') {
        nazwa = "szescset";
    }
    if (arg == '7') {
        nazwa = "siedemset";
    }
    if (arg == '8') {
        nazwa = "osiemset";
    }
    if (arg == '9') {
        nazwa = "dziewiecset";
    }
    return nazwa;
}

string dziesiatki(char arg) {
    string nazwa = "";
    if (arg == '2') {
        nazwa = "dwadziescia";
    }
    if (arg == '3') {
        nazwa = "trzydziesci";
    }
    if (arg == '4') {
        nazwa = "czterdziesci";
    }
    if (arg == '5') {
        nazwa = "piecdziesiat";
    }
    if (arg == '6') {
        nazwa = "szescdziesiat";
    }
    if (arg == '7') {
        nazwa = "sieddziesiat";
    }
    if (arg == '8') {
        nazwa = "osiemdziesiat";
    }
    if (arg == '9') {
        nazwa = "dziewiecdziesiat";
    }
    return nazwa;
}

string nastki(char arg) {
    string nazwa = "";
    if (arg == '0') {
        nazwa = "dziesiec";
    }
    if (arg == '1') {
        nazwa = "jedenascie";
    }
    if (arg == '2') {
        nazwa = "dwanascie";
    }
    if (arg == '3') {
        nazwa = "trzynascie";
    }
    if (arg == '4') {
        nazwa = "czternascie";
    }
    if (arg == '5') {
        nazwa = "pietnascie";
    }
    if (arg == '6') {
        nazwa = "szesnascie";
    }
    if (arg == '7') {
        nazwa = "siedemnascie";
    }
    if (arg == '8') {
        nazwa = "osiemnascie";
    }
    if (arg == '9') {
        nazwa = "dziewietnascie";
    }
    return nazwa;
}

int main (int argc, char* argv[]) {
    string liczba = argv[1];
    //cout << liczba;
    string tysiac = "tysiac";
    string tysiace = "tysiace";
    string tysiecy = "tysiecy";

    const int wielkosc = liczba.length();
    if (wielkosc == 4) {
        cout << cyfra(liczba.at(0)) << " ";
        if (liczba.at(0) == '1') {
            cout << tysiac << " ";
        }
        if (liczba.at(0) == '2' || liczba.at(0) == '3' || liczba.at(0) == '4' ) {
            cout << tysiace << " ";
        }
        if (liczba.at(0) == '5' || liczba.at(0) == '6' || liczba.at(0) == '7' || liczba.at(0) == '8' || liczba.at(0) == '9') {
            cout << tysiecy << " ";
        }

        cout << setki(liczba.at(1)) << " ";
        if (liczba.at(2) == '1') {
            cout << nastki(liczba.at(3));
        }
        else {
            //tu dziesiatki
            cout << dziesiatki(liczba.at(2)) << " ";
            //tu jednosci
            cout << cyfra(liczba.at(3));
        }
    }

    if (wielkosc == 3) {
        cout << setki(liczba.at(0)) << " ";
        if (liczba.at(1) == '1') {
            cout << nastki(liczba.at(2));
        }
        else {
            //tu dziesiatki
            cout << dziesiatki(liczba.at(1)) << " ";
            //tu jednosci
            cout << cyfra(liczba.at(2));
        }
    }

    if (wielkosc == 2) {
        if (liczba.at(0) == '1') {
            cout << nastki(liczba.at(1));
        }
        else {
            //tu dziesiatki
            cout << dziesiatki(liczba.at(0)) << " ";
            //tu jednosci
            cout << cyfra(liczba.at(1));
        }
    }

    if (wielkosc == 1) {
        cout << cyfra(liczba.at(0));
    }
    return 0;
}
