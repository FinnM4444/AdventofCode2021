#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
int x;
int increased=-1;
int SumOne = 0;
int SumTwo = 0;

ifstream Depths;
int line_number = 0;
Depths.open("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Test_Input_File.txt");

    if (!Depths) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while (Depths >> x) {

        if (line_number == 3){
            if (SumTwo>SumOne){
                increased++;
                line_number = 0;
                SumOne = SumTwo;
                SumTwo = 0;
            } else {
                line_number = 0;
                SumOne = SumTwo;
                SumTwo = 0;
            }
        } else {
            SumTwo += x;
            line_number++;
            cout << SumTwo << endl;
        }
  
    }
    Depths.close();
    cout << "Sum = " << increased << endl; 
    return 0;
}