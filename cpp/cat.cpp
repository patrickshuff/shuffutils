#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std; 

int main(int argc, char* argv[]) {
    string line;
    ifstream myfile;
    std::string fname = argv[1];
    myfile.open(fname.c_str());
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << "\n";
        }
    }
    return 0;
}
