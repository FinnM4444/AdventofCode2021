#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const string Direction = {"f,u,d"};

int main() {
int horizontalPosition = 0;
int Depth = 0;
int FinalProduct = 0;
int Aim = 0;

string Line;
int NumericValue = 0;
string TempNumericValue;
string LetterFound;

ifstream TestFileInput ("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Day_2_Input_Values.txt");

if (!TestFileInput){
    cout << "Unable to open the file";
    exit(1);
}

while (getline(TestFileInput, Line)) {
    TempNumericValue = Line.back();
    NumericValue = stoi(TempNumericValue);
    LetterFound = Line[0];

    if (LetterFound == "f"){
        horizontalPosition += NumericValue;
        Depth += (NumericValue*Aim);
    } else if (LetterFound == "u"){
        Aim -= NumericValue;
    } else if (LetterFound == "d"){
        Aim += NumericValue;
    }
}

FinalProduct = horizontalPosition*Depth;

cout << "The final depth is "<< Depth << endl;
cout << "The final horizontal position is "<< horizontalPosition << endl;
cout << "The final product is "<< FinalProduct << endl;
return 0;
}