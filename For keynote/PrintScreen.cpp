#include <iostream>

using namespace std;

int main()
{
    int integer = 0;
    double double_value = 0.0;

    cout << "預設值" << endl;
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    integer = 3.14159;
    double_value = 3.14159;

    cout << "讓他們等於PI" << endl;
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    return 0;
}

