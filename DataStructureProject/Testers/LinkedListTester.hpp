//
//  LinkedListTester.hpp
//  DataStructureProject
//
//  Created by Miller, Wyatt on 2/14/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
    void testListWithStrings();
};

#endif /* LinkedListTester_hpp */
