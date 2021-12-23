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
        if (Line[i] & 1)
    }
    LineCounter++;
}
return 0;
}