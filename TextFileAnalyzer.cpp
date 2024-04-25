#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& text) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : text) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int countWords(const string& text) {
    int count = 0;
    bool inWord = false;
    for (char c : text) {
        if (isalpha(c) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(c)) {
            inWord = false;
        }
    }
    return count;
}

string reverse(const string& text) {
    string reversed;
    for (int i = text.size() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

string capitalizeSecondLetter(const string& text) {
    string result;
    bool capitalize = true;
    for (char c : text) {
        if (isspace(c)) {
            capitalize = true;
            result += c;
        } else {
            if (capitalize) {
    result += toupper(c);
                capitalize = false;
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    ifstream inputFile("text_file.txt");
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

  string fileData;
    getline(inputFile, fileData);
       inputFile.close();

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
  cout << "Reversed statement: " << reverse(fileData) << endl;
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
