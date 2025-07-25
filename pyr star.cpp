//Jasnoor Kaur
//24070123049
#include <iostream>
using namespace std;

int main() {
    int i, j, space;
    int rows = 5; 
    for(i = 0; i < rows; i++) {
        for(space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        // Print stars
        for(j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl; 
    }

    return 0;
}
