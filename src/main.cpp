#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    using std::cout;
    using std::cin;
    using std::getline;
    using std::vector;
    using std::string;
    using std::ofstream;
    using std::ifstream;
    
    vector<string> keywords{};
    string userMarkdown{};
    string result{};
    string fileName{};

    cout << "Enter markdown file name:\n  >_";
    getline(cin, fileName);
    ifstream mdFile(fileName);
    ofstream htmlFile("output.html");

    if (!mdFile.is_open()) { cout << "Unknown error opening markdown file.\n"; }
    if (!htmlFile.is_open()) { cout << "Unknown error opening markdown file.\n"; }


    if (userMarkdown.rfind("###", 0) == 0) { result.append("<h3>" + userMarkdown.substr(4) + "</h3>"); }
    if (userMarkdown.rfind("##", 0) == 0) { result.append("<h2>" + userMarkdown.substr(3) + "</h2>"); }
    if (userMarkdown.rfind("#", 0) == 0) { result.append("<h1>" + userMarkdown.substr(2) + "</h1>"); }
}
