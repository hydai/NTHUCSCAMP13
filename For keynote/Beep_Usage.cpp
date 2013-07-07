#include <iostream>
#include <windows.h>
using namespace std;
int main() 
{    
    int frequency, duration;

    cin >> frequency >> duration;
    Beep(frequency, duration);

    return 0;
}

