#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int score;

    cout << "請輸入你的成績(0~100)：";
    cin >> score;

    if (score <= 0 || score >= 100) {
        cout << "成績輸入錯誤，分數必定在0~100" << endl;
        exit(1);
    }

    if (score >= 60) {
        cout << "Pass!" << endl;
    }
    else {
        cout << "GG!" << endl;
    }

    return 0;
}
