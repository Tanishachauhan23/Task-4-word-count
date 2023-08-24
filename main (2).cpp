 #include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <locale>

std::string removePunctuation(const std::string& str) {
    std::string result;
    std::locale loc;

    for (char c : str) {
        if (std::isalnum(c, loc) || c == ' ') {
            result += std::tolower(c, loc);
        }
    }

    return result;
}

int countWords(const std::string& text) {
    std::stringstream ss(removePunctuation(text));
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    std::string inputText;
    std::cout << "Enter a text: ";
    std::getline(std::cin, inputText);

    int wordCount = countWords(inputText);
    std::cout << "Word count: " << wordCount << std::endl;

    return 0;
}



















































































