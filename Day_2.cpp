#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


vector<int> StringToint (string file){
    string temp;
    ifstream inputFile (file);
    vector<int> depthVector = {};
    while (inputFile >> temp){
        depthVector.push_back(stoi(temp));
    }
    inputFile.close();
    return depthVector;
}

int main() {

int increased=0;
vector<int> depthData = StringToint("C:\\Users\\finnm\\OneDrive\\Documents\\Visual Studio\\AdventofCode2021\\Day_1_Input_Values.txt");

for (int i=3; i<depthData.size(); i++){
    if ((depthData[i-3]+depthData[i-2]+depthData[i-1])<(depthData[i-2]+depthData[i-1]+depthData[i])){
        increased++;
    }
}
cout << "Sum = " << increased << endl; 
return 0;

}
