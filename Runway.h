# pragma once
#include <Stratagy.h>
#include <queue>
using namespace std;

class Runway{
    public: 
        queue<int> LandingQueueFirst; // odd
        queue<int> LandingQueueSecond; // odd
        queue<int> TakeOffQueue; // even
    
    private:

};