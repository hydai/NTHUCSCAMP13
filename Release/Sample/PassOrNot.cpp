#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "> key in your score (0~100) ";
    cin >> score;

    if (score < 0) {
        cout << "INPUT ERROR!! Score < 0" << endl;
        return 1; // 還記得我們提過，回傳0代表程式正常結束，而這裡表示意外結束
    }
    
    if (score >= 60) {
        cout << "Pass!" << endl;
    }
    else {
        cout << "GG!" << endl;
    }

    return 0;
}
