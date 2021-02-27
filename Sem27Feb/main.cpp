//
//  main.cpp
//  Sem27Feb
//
//  Created by Alyaev Roman on 27.02.2021.
//

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    string outFile = "out.dat";
    ofstream out(outFile);
    if (!out.is_open())
    {
        cerr << "Can not open: " << outFile << endl;
        return EXIT_FAILURE;
    }
    double h = 0.1;
    for (auto i = 0U; i < 100U; ++i)
    {
        out << i*h << "\t" << sin(i*h) << "\n";
    }
    out.close();
    return 0;
}
