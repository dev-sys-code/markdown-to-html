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

    {
        ofstream mdFile(fileName + ".md");
    }

    ifstream mdFile(fileName + ".md");
    ofstream htmlFile("output.html");

    if (!mdFile.is_open()) { cout << "Unknown error opening markdown file.\n"; }
    if (!htmlFile.is_open()) { cout << "Unknown error opening html file.\n"; }

    string line{};

    while (getline(mdFile, line)) {
        string result{""};
        if (line.rfind("###", 0) == 0) { result.append("<h3>" + line.substr(4) + "</h3>"); }
        else if (line.rfind("##", 0) == 0) { result.append("<h2>" + line.substr(3) + "</h2>"); }
        else if (line.rfind("#", 0) == 0) { result.append("<h1>" + line.substr(2) + "</h1>"); }
    }
}
