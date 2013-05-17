#include <iostream>

#define PI (3.14159)

using namespace std;

int main(int argc, char *argv[])
{
    int integer = 0;
    double double_value = 0.0;

    cout << "預設值" << endl;
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    integer = PI;
    double_value = PI;

    cout << "讓他們等於PI" << endl;
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    return 0;
}
