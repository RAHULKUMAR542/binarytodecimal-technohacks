#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int size = binary.size();

    for (int i = 0; i < size; ++i) {
        if (binary[i] == '1') {
            decimal += pow(2, size - 1 - i);
        } else if (binary[i] != '0') {
            cout << "Invalid binary digit encountered: " << binary[i] << endl;
            return -1;  
        }
    }
    return decimal;
}
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    if (decimal != -1) {
        cout << "Decimal equivalent: " << decimal << endl;
    }
     else {
        cout << "Conversion failed. Please enter a valid binary number." << endl;
    }

    return 0;
}