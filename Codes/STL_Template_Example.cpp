#include <iostream>

template <typename T>
    T area(T a, T b){
    T result = a * b;
    return result;
}

using namespace std;

int main()
{
    int x = area<int>(5,10);
    double y = area<double>(5.5,10.1) ;
    float z = area<float>(5.5,10.1);
    cout<< x << ',' << y << ',' << z;

    return 0;
}