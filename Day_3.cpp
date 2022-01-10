#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

cout << "entering main" << endl;

int LineCounter = 0;
ifstream TestFileInput ("C:\\Users\\Finn McDonnell\\Documents\\VisualStudioCode\\AdventofCode2021");
string Line;
int Length = 0;
vector<int> DiagBits = {};

cout << "prewhile working" << endl;

while (getline(TestFileInput, Line)){
    int LineLength = Line.length();
    if (LineLength>Length){
        DiagBits.resize(LineLength-Length);
    }

    for(int i=0; i<LineLength; i++){
        if (Line[i]==1){
            DiagBits[i]++;
            cout << "DiagBitsIncreasing" << endl;
        }
    }
    LineCounter++;
    cout << "while working" << endl;
}

//std::vector<string> gamma(DiagBits.size(), "0");
//std::vector<string> epsilon(DiagBits.size(), "0");

string gamma;
string epsilon;

for (int i=0; i<DiagBits.size(); i++){
    if (DiagBits[i]>((LineCounter+1)/2)){
        gamma.append("1");
        epsilon.append("0");
    } else {
        gamma.append("0");
        epsilon.append("1");
    }
}

cout << gamma << endl;
cout << epsilon << endl;
cout << DiagBits.size() << endl;

//int FinalValue = (stoi(gamma, 0, 2))*(stoi(epsilon, 0, 2));

return 0;
}