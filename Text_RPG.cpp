#include <iostream>
#include <time.h>
#define NAME_SIZE 32
using namespace std;

enum MENU 
{
    MM_MAP = 1,
    MM_STORE,
    MM_INVENTORY,
    MM_EXIT,
};

enum MAP
{
    MM_RIVERWOOD = 1,
    MM_WHITERUN,
    MM_SOLITUDE,
    MM_BACK,
};

enum JOB 
{
    JOB_WARRIOR = 1,
    JOB_ARCHEOR,
    JOB_WIZARD,
    JOB_THIEF,
};

enum RACE 
{
    RACE_HUMAN = 1,
    RACE_OAK,
    RACE_ELF,
    RACE_DWARF,
    RACE_DEVIL
};

struct _tagChar 
{
    char strName[NAME_SIZE];
    char jobName[NAME_SIZE];
    JOB eJOB;
    RACE eRace;
    int minAttack;
    int maxAttack;
    int minDefence;
    int maxDefence;
    int currentHP;
    int maxHP;
    int currentMP;
    int maxMP;
    int iEXP;
    int iLevel;
    int iGold;
};

struct _tagMonster
{
    char strName[NAME_SIZE];
    RACE eRace;
    int minAttack;
    int maxAttack;
    int minDefence;
    int maxDefence;
    int currentHP;
    int maxHP;
    int currentMP;
    int maxMP;
    int iEXP;
    int iLevel;
    int iGold;
};

int main() {
    while(true)
    {
        system("clear");
        cout << "======== 선택지를 정해주십시오. ========" << endl;
        cout << "1. 지도 열기" << endl;
        cout << "2. 상점 열기" << endl;
        cout << "3. 가방 열기" << endl;
        cout << "4. 게임 종료" << endl;
        cout << "=> ";
        int iMenu;
        cin >> iMenu;
        
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }

        if(iMenu == MM_EXIT)
        {   
            cout << "게임을 종료합니다..." << endl;
            break;
        }

        switch(iMenu)
        {
            case MM_MAP:
            {
                while(true){
                    system("clear");
                    cout << "======== 마을 간 이동 ========" << endl;
                    cout << "1. 리버우드" << endl;
                    cout << "2. 화이트런" << endl;
                    cout << "3. 솔리튜드" << endl;
                    cout << "4. 뒤로가기" << endl;
                    cout << "=> ";
                    cin >> iMenu;

                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(1024, '\n');
                        continue;
                    }

                    if(iMenu == MM_BACK)
                    {   
                        break;
                    }
                    break;
                }
                break;
            }
            case MM_STORE:
            {

                break;
            }
            case MM_INVENTORY:
            {
                break;
            }
            default:
                cout << "잘못된 선택지입니다." << endl;
                break;
        }
    }
    return 0;
}