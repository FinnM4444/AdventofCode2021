#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

int LineCounter = 0;
ifstream TestFileInput ("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Day_3_Input_Values.txt");
string Line;
int Length = 0;
vector<int> DiagBits = {};


while (getline(TestFileInput, Line)){
    int LineLength = Line.length();
    if (LineLength>Length){
        DiagBits.resize(LineLength-Length);
    }

    for(int i=0; i<LineLength; i++){
        if (Line[i]==1){
            DiagBits[i]++;
        }
    }
    LineCounter++;
}

//std::vector<string> gamma(DiagBits.size(), "0");
//std::vector<string> epsilon(DiagBits.size(), "0");

string gamma;
string epsilon;

for (int i=0; i<DiagBits.size(); i++){
    if (DiagBits[i]>((LineCounter+1)/2)){
        gamma.push_back(1);
        epsilon.push_back(0);
    } else {
        gamma.push_back(0);
        epsilon.push_back(1);
    }
}

cout << gamma << endl;
cout << epsilon << endl;

//int FinalValue = (stoi(gamma, 0, 2))*(stoi(epsilon, 0, 2));

return 0;
}