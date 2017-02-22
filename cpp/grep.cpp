#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std; 

int main(int argc, char* argv[]) {
    string line;
    istream *in;
    ifstream myfile;
    if (argc == 1) {
        cout << "Usage:  grep search_string filename\n";
        exit(1);
    }

    std::string grep_str = argv[1];
    if (argc == 2) {
        cout << "Using stdin";
        while (getline(std::cin, line)) {
            std::size_t found = line.find(grep_str);
            if (found != std::string::npos) {
                cout << line << "\n";
            }
        }
    }

    // TODO(shuff): Dedup these while loops with pointers
    if (argc == 3) {
        std::string fname = argv[2];
        myfile.open(fname.c_str());
        while (getline(myfile, line)) {
            std::size_t found = line.find(grep_str);
            if (found != std::string::npos) {
                cout << line << "\n";
            }
        }
    }
    return 0;
}
