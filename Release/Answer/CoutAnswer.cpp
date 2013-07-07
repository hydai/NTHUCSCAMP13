#include <iostream>

using namespace std;

int main()
{
    int integer = 0;
    double double_value = 0.0;
    double PI = 3.14159;

    cout << "預設值" << endl;
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    /*-------------------------------------------------------------------
     * 以下XXXX處，請自己改成程式碼，來達成目的喔！
     * ----------------------------------------------------------------*/
    integer = PI;
    double_value = PI;

    cout << "讓他們等於PI" << endl;
    /*-------------------------------------------------------------------
     * 以下要分別印出integer、double_value等於PI的值
     * 請使用cout寫寫看(把XXX取代掉)
     * 記得換行喔！
     * ----------------------------------------------------------------*/
    cout << "integer = " << integer << endl;
    cout << "double_value = " << double_value << endl;

    return 0;
}

