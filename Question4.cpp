#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int chars=0, spaces=0, tabs=0, lines=1; // Start lines at 1
    cout << "Enter text (end with ~): ";
    char ch;
    while (cin.get(ch) && ch != '~') {
        chars++;
        if (ch == ' ') spaces++;
        else if (ch == '\t') tabs++;
        else if (ch == '\n') lines++;
    }
    cout << "Chars: " << chars << "\nSpaces: " << spaces << "\nTabs: " << tabs << "\nLines: " << lines << endl;
    return 0;
}