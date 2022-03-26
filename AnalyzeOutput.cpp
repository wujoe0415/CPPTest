#include <Analyze.h>
#include <vector>

using namespace std;

class AnalyzeOutput : Analyze
{
    public:
        void GetOutputData() override;

    private:
        vector<int> TakeOffPlanes;
        vector<int> TakeOffTimes;
        vector<int> LandingPlanes;
        vector<int> LandingTime;

        float _avrLandingTime;
        float _avrTakeOffTime;
        float _avrFuelSaved;
        int _emergencyNum;
        int _crashNum;
};
void AnalyzeOutput::GetOutputData()
{
    
}