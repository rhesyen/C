#include <iostream>
using namespace std;

int main()
{
    //OpenGl nie korzysta ze stringów, jedynie z tablic znakow
    const char* liczba_napis = "g7744gk";
    size_t dlugosc_napisu{
        strlen(liczba_napis)
    };

    int liczba = atoi(liczba_napis);


    if (liczba) {
        printf("%d", liczba);
    }
    else {
        while (!isdigit(liczba)) {
            //liczba = atoi(liczba_napis +1);
            //dokonczyc, jak sie poruszac po tablicy const char*
        }
        liczba_napis += 1;
        printf("Konwersja niemozliwa");
    }
}
