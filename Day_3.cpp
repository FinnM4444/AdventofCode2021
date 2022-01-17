#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

int LineCounter = 0;
ifstream TestFileInput ("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Day_3_Input_Values.txt");
    if (!TestFileInput) {
        exit(1); // terminate with error
    }
string Line;
int Length = 0;
vector<int> DiagBits = {};

while (getline(TestFileInput, Line)){
    int LineLength = Line.length();
    if (LineLength>Length){
        DiagBits.resize(LineLength-Length);
    }
    for(int i=0; i<LineLength; i++){
        if (Line[i] & 1){
            DiagBits[i]++;
        }
    }
    LineCounter++;
}

string gamma;
string epsilon;

for (int i=0; i<DiagBits.size(); i++){
    if (DiagBits[i]>=((LineCounter+1)/2)){
        gamma.append("1");
        epsilon.append("0");
    } else {
        gamma.append("0");
        epsilon.append("1");
    }
}

int FinalValue = (stoi(gamma, 0, 2))*(stoi(epsilon, 0, 2));
std::cout << FinalValue << endl;

return 0;
}