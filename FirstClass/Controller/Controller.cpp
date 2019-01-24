//
//  Controller.cpp
//  FirstClass
//
//  Created by Larson, David on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 4527;
}

void Controller :: start()
{
    cout << "This is in the start method" << endl;
    cout << "Here is the class number: " << specialNumber << " Ithink it is really cool!" << endl;  //always end these output statements with "endl". 
}
