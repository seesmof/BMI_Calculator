#include <iostream>
#include <math.h>

using namespace std;

void CALC()
{
    double height, weight, bmi;

    cout << "Enter your height: " << endl;
    cin >> height;
    height /= 100;

    cout << "Enter your weight: " << endl;
    cin >> weight;
    cout << endl;

    bmi = (weight) / (pow(height, 2));

    if (bmi <= 18.4)
    {
        cout << "Your BMI is " << bmi << ". Your weight is a bit too low for your height. Balance your diet and get some workouts going." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "Your BMI is " << bmi << ". You have a normal weight, keep it up!" << endl;
    }
    else if (bmi >= 25 && bmi <= 39.9)
    {
        cout << "Your BMI is " << bmi << ". You have some excess weight, try balancing your diet a bit." << endl;
    }
    else if (bmi >= 40)
    {
        cout << "Your BMI is " << bmi << ". You have exessive weight. Balance your diet and get some workouts going." << endl;
    }
    else
    {
        cout << "Please add valid height and weight" << endl;
    }
}

int main(int argc, char **argv)
{
    CALC();

    return 0;
}