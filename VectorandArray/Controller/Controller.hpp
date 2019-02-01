//
//  Controller.hpp
//  VectorandArray
//
//  Created by Reyes, Joshua on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
using namespace std;

class Controller
{
private:
    vector<int> numList{20, 50, 60, 80, 120};
    vector<string> wordList{"tie", "lopez", "is", "here", "now"};
public:
    void start();
};

#endif /* Controller_hpp */
