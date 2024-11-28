#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_23
// Circle Area Described Around an Arbitrary Triangle.

void ReadTriangleData(float& A, float &B , float &C)
{

    cout << "Please Enter triangle side A " << endl;
    cin >> A;

    cout << "Please Enter triangle side B " << endl;
    cin >> B;

    cout << "Please Enter triangle base C " << endl;
    cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.141592653589;
    float P;
    P = (A + B + C) / 2;

    float T; 
    T = (A * B * C) / (4 * sqrt (P * (P - A) * (P - B) * (P - C)));
    
    float Area = PI * pow(T, 2);
    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    float A, B , C;
    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATriangle(A, B, C));
    return 0;
}
