#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
string memperbaruikata(string word) {

    string New = "";
    int sizeWord = word.length();
    for (int i = 0; i < sizeWord; i++) {
        char eachWord = word[i];
        int decimalLetter = int(eachWord);
        if (decimalLetter >= 97 and decimalLetter <= 122 or decimalLetter >= 48 and decimalLetter <= 57)
            New += eachWord;
        else if (decimalLetter >= 65 and decimalLetter <= 90)
            New += (char(decimalLetter + 32));

    }
    return New;

}

int main() {
    vector <string> eachWord;
    ifstream Filetest;
    Filetest.open("D:\YUJIEM\HEH\input.txt");

    if (!Filetest.is_open()) {
        cout << "eror input data" << endl;
        return 0;
    }

    while (!Filetest.eof()) {
        string katadariinput;
        katadariinput = memperbaruikata(katadariinput);
        if (katadariinput.length() != 0)
            eachWord.push_back(katadariinput);
    }

    Filetest.close();


    string Json = "";
    Json += "{\n";

    for (auto i = eachWord.begin(); i != eachWord.end(); i++) {
        vector <string>::iterator
            it = find(eachWord.begin(), eachWord.end(), *i);
        if (it - eachWord.begin() == i - eachWord.begin()) {
            Json += "\t\"";
            Json += *i;
            Json += "\":";
            Json += to_string(count(eachWord.begin(), eachWord.end(), *i));
            Json += ",\n";
        }
    }
    Json.erase(Json.length() - 2, 1);
    Json += "}";
    ofstream FileJson;
    FileJson.open("output.Json");
    FileJson << Json;
    FileJson.close();

    return 0;
}

