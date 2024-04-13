#include <iostream>
#include <string>

using namespace std;

class StringProcessor {
private:
    string str;

public:
    StringProcessor(const string& s) : str(s) {}
//calculate total words in string
    int totalWords() const {
        int count = 0;
        bool inWord = false;

        for (char c : str) {
            if (isspace(c)) {
                inWord = false;
            } else if (!inWord) {
                count++;
                inWord = true;
            }
        }
        return count;
    }
};

int main() {
    //creating object of string class
    StringProcessor processor("Hello, world! This is a test.");
    cout << "Total words in the string: " << processor.totalWords() << endl;
    return 0;
}
