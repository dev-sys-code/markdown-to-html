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
    
    vector<string> keywords{};
    string user_markdown{};
    string result{};

    ofstream file("html.txt");
    getline(cin, user_markdown);

    if (user_markdown.rfind("###", 0) == 0) { result.append("<h3>" + user_markdown.substr(3) + "</h3>"); }

    cout << result;
}
