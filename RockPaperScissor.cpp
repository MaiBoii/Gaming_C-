#include <iostream>
#include <time.h>

using namespace std;

enum NUM
{
    NUM_0 = 10,
    NUM_1,
    NUM_2,
    NUM_3,
    NUM_4
};

enum SRP
{
    Scissor = 1,
    Rock,
    Paper,
    End
};

int main(){

    int iNumber = 1;
    while(true){
        cout << iNumber << " 입니다." << endl;
        iNumber++;

        if(iNumber == 10)
            break;
    }

    system("clear");

    srand((unsigned int) time(0));

    int iPlayer = 0;

    while(true){
        cout << "1.가위" << endl;
        cout << "2.바위" << endl;
        cout << "3.보" << endl;
        cout << "4.종료" << endl;
        cout << "메뉴를 입력하세요. : ";
        cin >> iPlayer;

        if(iPlayer < Scissor || iPlayer > End) {
            cout << "잘못된 값을 입력하였으" << endl;
            system("read");
            continue;
        }
        else if( iPlayer == End) {
            cout << "게임을 종료합니다. "<< endl;
            break;
        }

    // 봇이 랜덤으로 선택을 함.
    int iAI = rand()%3 + Scissor; //1~4

    switch(iAI){
        case Scissor:
            cout<< "AI : 가위 " << endl;
            break;
        case Rock:
            cout<< "AI : 바위 " << endl;
            break;
        case Paper:
            cout<< "AI : 보 " << endl;
            break;
    }

    int iWin = iPlayer - iAI;

    if(iWin == 1 || iWin == -2 ){
        cout << "승리했습니다!" << endl;
    }
    else if(iWin == 0){
        cout << "비김!" << endl;
    }
    else
        cout << "졌습니다." << endl;
    }
    system("read");
    

    return 0;
}