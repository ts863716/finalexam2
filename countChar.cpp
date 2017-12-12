//
//  countChar.cpp
//  finalExam
//
//  Created by Trevor Smith on 12/12/17.
//  Copyright © 2017 Trevor Smith. All rights reserved.
//

#include "countChar.hpp"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char FileName[] = "text.txt";

int main ()
{
    string line;
    ifstream inMyStream (FileName);
    int c;
    
    if (inMyStream.is_open())
    {
        
        while( getline ( inMyStream, line ) )
        {
            cout << line << endl;
            c += line.length();
        }
    }
    inMyStream.close();
    
    system("pause");
    return 0;
}
