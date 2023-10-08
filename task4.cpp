#include <iostream>
using namespace std;
string projectTimeCalculation(float needHours,float days,float noOfWorkers);
main()
{
    float needHours,days,noOfWorkers;
    string result;
    cout<<"Enter the needed hours: ";
    cin>>needHours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>noOfWorkers;
    result=projectTimeCalculation(needHours,days,noOfWorkers);
    cout<<result;
}
string projectTimeCalculation(float needHours,float days,float noOfWorkers)
{
    string answer;
    float hour;
    hour=days*10*noOfWorkers*0.9;
    int hourLeft;
    if (hour>=needHours)
    {
        hourLeft=hour-needHours;
        answer="Yes!"+to_string(hourLeft)+" hours left.";
    }
    if(hour<needHours)
    {
        hourLeft=needHours-hour;
        answer="Not enough time! "+ to_string(hourLeft)+" hours needed.";
    }
    return answer;

}

