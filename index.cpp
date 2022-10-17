// include necessary libraries
#include <iostream>
#include <math.h>
using namespace std;

// create calculation function to determine BMI value
void CALC()
{
    // declare variables
    double height, weight, bmi;

    // ask user to enter height and weight
    cout << "Enter your height: ";
    cin >> height;
    height /= 100; // divide height by 100 for correct calculation
    cout << "Enter your weight: ";
    cin >> weight;
    cout << endl;

    // calculate BMI itself by dividing weight by height in second power
    bmi = (weight) / (pow(height, 2));

    // create conditionals
    if (bmi <= 18.4) // if bmi is no more than 18.4 => output insufficient weight
    {
        cout << "Your BMI is " << bmi << ". This is believed to be insufficient weight to height ratio." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) // if bmi is between 18.5 and 24.9 => output sufficient weight
    {
        cout << "Your BMI is " << bmi << ". This is believed to be normal weight to height ratio." << endl;
    }
    else if (bmi >= 25 && bmi <= 39.9) // if bmi is between 25 and 39.9 => output overweight
    {
        cout << "Your BMI is " << bmi << ". This is believed to be a bit excessive weight to height ratio." << endl;
    }
    else if (bmi >= 40) // if bmi is more than 40 => output obesity
    {
        cout << "Your BMI is " << bmi << ". This is belived to be an excessive weight to height ratio." << endl;
    }
    else // if bmi was not calculated for some reason, output error
    {
        cout << "Please enter valid height and weight" << endl;
    }
}

// declare main function
int main(int argc, char **argv)
{
    // output program intro
    cout << endl;
    cout << "************************************** BMI Calculator *****************************************" << endl
         << endl;

    // use calculation function
    CALC();

    // output program outro
    cout << endl;
    cout << "***********************************************************************************************" << endl;

    // end main function
    system("pause");
}