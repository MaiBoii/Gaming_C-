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
    JOB_NONE
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

    srand((unsigned int)time(0));

    //시작할 때 캐릭터 정보 입력
    _tagChar tPlayer = {};

    cout << "캐릭터의 이름을 입력하세요. " <<endl;
    cout << "=> ";
    cin.getline(tPlayer.strName, NAME_SIZE-1);

    int iJOB = 0;
    while(iJOB == 0)
    {
        cout << "직업을 선택해 주세요. " << endl;
            cout << "1. 전사" << endl;
            cout << "2. 궁수" << endl;
            cout << "3. 마법사" << endl;
            cout << "4. 도적" << endl;
            cout << "5. 개닝기미씨발버러지무직백수(30)" <<endl;
            cout << "=> ";
            cin >> iJOB;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1024, '\n');
                continue;
            }

            else if(iJOB <= 0 || iJOB > JOB_NONE) 
            {   
                system("clear");
                cout << "잘못된 선택지입니다." <<endl;
                iJOB = 0;
            }

            tPlayer.iEXP = 0;
            tPlayer.iLevel = 1;
            tPlayer.iGold = 0;

            tPlayer.eJOB = (JOB)iJOB;
            switch(tPlayer.eJOB)
            {
                case JOB_WARRIOR:
                    strcpy(tPlayer.jobName, "전사");
                    tPlayer.minAttack = 100;
                    tPlayer.maxAttack = 150;
                    tPlayer.minDefence = 200;
                    tPlayer.maxDefence = 300;
                    tPlayer.maxHP = 1000;
                    tPlayer.currentHP = 1000;
                    tPlayer.maxMP = 0;
                    tPlayer.currentMP = 0;
                    break;
                case JOB_ARCHEOR:
                    strcpy(tPlayer.jobName, "궁수");
                    tPlayer.minAttack = 250;
                    tPlayer.maxAttack = 500;
                    tPlayer.minDefence = 200;
                    tPlayer.maxDefence = 300;
                    tPlayer.maxHP = 700;
                    tPlayer.currentHP = 700;
                    tPlayer.maxMP = 400;
                    tPlayer.currentMP = 400;
                    break;
                case JOB_WIZARD:
                    strcpy(tPlayer.jobName, "마법사");
                    tPlayer.minAttack = 100;
                    tPlayer.maxAttack = 120;
                    tPlayer.minDefence = 100;
                    tPlayer.maxDefence = 120;
                    tPlayer.maxHP = 300;
                    tPlayer.currentHP = 300;
                    tPlayer.maxMP = 1000;
                    tPlayer.currentMP = 1000;
                    break;
                case JOB_THIEF:
                    strcpy(tPlayer.jobName, "도적");
                    tPlayer.minAttack = 700;
                    tPlayer.maxAttack = 1000;
                    tPlayer.minDefence = 200;
                    tPlayer.maxDefence = 300;
                    tPlayer.maxHP = 500;
                    tPlayer.currentHP = 500;
                    tPlayer.maxMP = 300;
                    tPlayer.currentMP = 300;
                    break;
                case JOB_NONE:
                    strcpy(tPlayer.jobName, "개닝기미씨1발졷버러지무직백수");
                    tPlayer.minAttack = 10000;
                    tPlayer.maxAttack = 10000;
                    tPlayer.minDefence = 20000;
                    tPlayer.maxDefence = 30000;
                    tPlayer.maxHP = 50000;
                    tPlayer.currentHP = 50000;
                    tPlayer.maxMP = 30000;
                    tPlayer.currentMP = 30000;
                    break;   
            }


    }

    while(true)
    {


        system("clear");
        cout << "          환영합니다." << tPlayer.strName << "님!\n" << endl;
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