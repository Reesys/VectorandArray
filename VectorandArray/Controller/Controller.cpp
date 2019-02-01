//
//  Controller.cpp
//  VectorandArray
//
//  Created by Reyes, Joshua on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

void Controller :: start()
{    
    for (int x = 0; x < numList.size(); x++)
    {
        cout << numList[x] << endl;
    }
    
    for (int x = 0; x < wordList.size(); x++)
    {
        cout << wordList[x] << endl;
    }
}
