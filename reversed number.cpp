//Jasnoor Kaur
//24070123049

#include <iostream>
using namespace std;

int main() {
    int num;
    int reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;            
        reversed = reversed * 10 + digit;  
        num = num / 10;                    
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
