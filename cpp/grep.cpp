#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std; 

int main(int argc, char* argv[]) {
    string line;
    ifstream myfile;
    std::string grep_str = argv[1];
    std::string fname = argv[2];
    myfile.open(fname.c_str());
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            std::size_t found = line.find(grep_str);
            if (found != std::string::npos) {
                cout << line << "\n";
            }
        }
    }
    return 0;
}
