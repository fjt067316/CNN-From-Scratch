#include <iostream>
using namespace std;
#pragma once

// generic class type for all layers ie convolutional, fcl, bath norm...
class Layer {
public:
    virtual ~Layer() { // virtual destructor
        cout << "Base destructor called." << endl;
    }
};