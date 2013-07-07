#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int intA, intB;
    double doubleA, doubleB;

    cout << "請輸入整數的A, B，將會輸出A, B的四則運算(B不能為零)" << endl;
    cin >> intA >> intB;
    cout << "A + B = " << intA+intB << endl;
    cout << "A - B = " << intA-intB << endl;
    cout << "A * B = " << intA*intB << endl;
    cout << "A / B = " << intA/intB << endl;
    cout << "A % B = " << intA%intB << endl;

    cout << "請輸入浮點數的A, B，將會輸出A, B的四則運算(B不能為零)" << endl;
    cin >> doubleA >> doubleB;
    cout << "A + B = " << doubleA + doubleB << endl;
    cout << "A - B = " << doubleA - doubleB << endl;
    cout << "A * B = " << doubleA * doubleB << endl;
    cout << "A / B = " << doubleA / doubleB << endl;
    cout << "只有整數形態有%這個運算子" << endl;
    return 0;
}

