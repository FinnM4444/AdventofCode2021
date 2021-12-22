#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const string Direction = {"f,u,d"};

int main() {
int horizontalPosition = 0;
int Depth = 0;
int FinalProduct = 0;

string Line;
int NumericValue = 0;
string TempNumericValue;
string LetterFound;

ifstream TestFileInput ("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Day_2_Input_Values.txt");
cout << "sup";
if (!TestFileInput){
    cout << "Unable to open the file";
    exit(1);
} else {

while (getline(TestFileInput, Line)) {
    //TempNumericValue = Line.back();
    //cout << TempNumericValue;
    //NumericValue = stoi(TempNumericValue);
    LetterFound = "f";
    LetterFound = Line.find_first_of(Direction);
    //cout << LetterFound;

    if (LetterFound == "f"){
        horizontalPosition += NumericValue;
        cout << "Forward";
    } else if (LetterFound == "u"){
        Depth -= NumericValue;
        cout << "Up";
    } else if (LetterFound == "d"){
        Depth += NumericValue;
        cout << "Down";
    }

    FinalProduct = horizontalPosition*Depth;
    //cout << "The final product is"<< FinalProduct << endl;
}
}

cout << "sup";


return 0;
}