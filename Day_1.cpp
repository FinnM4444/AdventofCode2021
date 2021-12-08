#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
int x;
int OldDepth=0;
int increased=-1;
ifstream Depths;
Depths.open("C:\\Users\\Finn McDonnell\\Documents\\VisualStudioCode\\AdventofCode\\Day_1_Input_Values.txt");

    if (!Depths) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    while (Depths >> x) {
        if(x>OldDepth){
            increased++;
        }
        OldDepth=x;
    }
    Depths.close();
    cout << "Sum = " << increased << endl; 
    return 0;
}