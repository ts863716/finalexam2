//
//  countLine.cpp
//  finalExam
//
//  Created by Trevor Smith on 12/12/17.
//  Copyright © 2017 Trevor Smith. All rights reserved.
//
#include <iostream>
#include <fstream>
#include "countLine.hpp"
int main() {
    std::ifstream myfile("text.txt");
    
    // new lines will be skipped unless we stop it from happening:
    myfile.unsetf(std::ios_base::skipws);
    
    // count the newlines with an algorithm specialized for counting:
    unsigned line_count = std::count(
                                     std::istream_iterator<char>(myfile),
                                     std::istream_iterator<char>(),
                                     '\n');
    
    std::cout << line_count << " Lines" << "\n";
    return 0;
}
