#include <iostream>
#include <time.h>
using namespace std;

enum MENU 
{
    MM_MAP = 1,
    MM_STORE,
    MM_INVENTORY,
    MM_EXIT,
};

int main() {
    while(true)
    {
        system("cls");
        cout << "선택지를 정해주십시오." << endl;
        cout << "1. 지도 열기" << endl;
        cout << "2. 상점 열기" << endl;
        cout << "3. 가방 열기" << endl;
        cout << "4. 게임 종료" << endl;
        break;
    }
    return 0;
}