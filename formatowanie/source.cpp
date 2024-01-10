#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
int main() {
    srand(time(NULL));
    int integerNumber = rand() % 500 + 50;
    unsigned int unsignedIntegerNumber = rand() % 500 + 50;
    float floatNumber = static_cast<float>(rand() % 500 + 50) / 0.12;
    //cout << integerNumber << " " << floatNumber << endl;
    cout << "Using Streams:" << endl;
    cout << setw(10) << left << "specifier" << setw(75) << "output" << setw(20) << "example" << endl;
    cout << setw(10) << left << "d or i" << setw(75) << "Signed decimal integer" << setw(20) << showpos << integerNumber << noshowpos << endl;
    cout << setw(10) << left << "u" << setw(75) << "Unsigned decimal integer" << setw(20) << unsignedIntegerNumber << endl;
    cout << setw(10) << left << "o" << setw(75) << "Unsigned octal" << setw(20) << oct << unsignedIntegerNumber << dec << endl;
    cout << setw(10) << left << "x" << setw(75) << "Unsigned hexadecimal integer" << setw(20) << hex << unsignedIntegerNumber << dec << endl;
    cout << setw(10) << left << "X" << setw(75) << "Unsigned hexadecimal integer (uppercase)" << setw(20) << uppercase << hex << unsignedIntegerNumber << dec << endl;
    cout << setw(10) << left << "f" << setw(75) << "Decimal floating point, lowercase" << fixed << setprecision(2) << setw(20) << floatNumber << endl;
    cout << setw(10) << left << "F" << setw(75) << "Decimal floating point, uppercase" << fixed << setprecision(2) << setw(20) << uppercase << floatNumber << endl;
    cout << setw(10) << left << "e" << setw(75) << "Scientific notation (mantissa/exponent), lowercase" << scientific << nouppercase << setprecision(2) << setw(20) << floatNumber << endl;
    cout << setw(10) << left << "E" << setw(75) << "Scientific notation (mantissa/exponent), uppercase" << scientific << uppercase << setprecision(2) << setw(20) << floatNumber << endl;
    cout << setw(10) << left << "g" << setw(75) << "Use the shortest representation: %e or %f" << fixed << nouppercase << setprecision(2) << setw(20) << floatNumber << endl;
    cout << setw(10) << left << "G" << setw(75) << "Use the shortest representation: %E or %F" << fixed << uppercase << setprecision(2) << setw(20) << floatNumber << endl;
    cout << setw(10) << left << "a" << setw(75) << "Hexadecimal floating point, lowercase" << setw(20) << nouppercase << hexfloat << floatNumber << defaultfloat << endl;
    cout << setw(10) << left << "A" << setw(75) << "Hexadecimal floating point, uppercase" << setw(20) << uppercase << hexfloat << floatNumber << defaultfloat << endl;
    cout << setw(10) << left << "c" << setw(75) << "Character" << setw(20) << 'c' << endl;
    cout << setw(10) << left << "s" << setw(75) << "String of characters" << setw(20) << "string" << endl;
    cout << setw(10) << left << "p" << setw(75) << "Pointer address" << setw(20) << hex << (void*)&integerNumber << endl;
    cout << setw(10) << left << "n" << setw(75) << "Nothing printed." << setw(20) << endl;
    cout << setw(10) << left << "%" << setw(75) << "A % followed by another % character will write a single % to the stream." << setw(20) << "%" << endl;
   
    cout << endl << "Using Printf:" << endl;
    printf("%-10s%-75s%-20s\n", "specifier", "output", "example");
    printf("%-10s%-75s%-20d\n", "d or i", "Signed decimal integer", integerNumber);
    printf("%-10s%-75s%-20u\n", "u", "Unsigned decimal integer", unsignedIntegerNumber);
    printf("%-10s%-75s%-20o\n", "o", "Unsigned octal", unsignedIntegerNumber);
    printf("%-10s%-75s%-20x\n", "x", "Unsigned hexadecimal integer", unsignedIntegerNumber);
    printf("%-10s%-75s%-20X\n", "X", "Unsigned hexadecimal integer (uppercase)", unsignedIntegerNumber);
    printf("%-10s%-75s%-20f\n", "f", "Decimal floating point, lowercase", floatNumber);
    printf("%-10s%-75s%-20F\n", "F", "Decimal floating point, uppercase", floatNumber);
    printf("%-10s%-75s%-20e\n", "e", "Scientific notation, lowercase", floatNumber);
    printf("%-10s%-75s%-20E\n", "E", "Scientific notation, uppercase", floatNumber);
    printf("%-10s%-75s%-20a\n", "a", "Hexadecimal floating point, lowercase", floatNumber);
    printf("%-10s%-75s%-20A\n", "a", "Hexadecimal floating point, uppercase", floatNumber);
    printf("%-10s%-75s%-20c\n", "c", "Character", 'c');
    printf("%-10s%-75s%-20s\n", "s", "String of characters", "string");
    printf("%-10s%-75s%-20p\n", "p", "Pointer address", static_cast<void*>(&integerNumber));
    printf("%-10s%-75s%-20s\n", "n", "Nothing printed.", "string");
    printf("%-10s%-75s%-20s\n", "%", "A % followed by another % character will write a single % to the stream.", "%");
    return 0;
}