# pragma once

class Analyze{
    public:
        virtual void GetOutputData() = 0;
    
    private:
        float _avrLandingTime;
        float _avrTakeOffTime;
        float _avrFuelSaved;
        int _emergencyNum;
        int _crashNum;

};

