#include <iostream>
using namespace std;
float Volume(float length, float width, float height);
main()
{
    float length, width, height,result;
    string unit;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    result=Volume(length, width,height);
    if(unit=="millimeters")
    {
        result=result*1000;
        cout<<"The volume of the pyramid is: "<<result<<" cubic millimeters";
    }
    if(unit=="centimeters")
    {
        result=result*1000000;
        cout<<"The volume of the pyramid is: "<<result<<" cubic centimeters";
    }
    if(unit=="meters")
    {
        cout<<"The volume of the pyramid is: "<<result<<" cubic meters";
    }
    if(unit=="kilometers")
    {
        result=result*0.000000001;
        cout<<"The volume of the pyramid is: "<<result<<" cubic kilometers";
    }
}
float Volume(float length, float width, float height)
{
    float volume;
    volume=(length*width*height)/3;
    return volume;
    }