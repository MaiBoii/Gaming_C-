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
    MM_VILLAGE = 1,
    MM_MOUNTAIN,
    MM_DUNGEON,
    MM_DEVIL,
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
    char raceName[NAME_SIZE];
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

    int iRACE = 0;
    while(iRACE == 0)
    {
        cout << "종족을 선택해 주세요." <<endl;
            cout << "1. 인간" << endl;
            cout << "2. 오크" << endl;
            cout << "3. 엘프" << endl;
            cout << "4. 드워프" << endl;
            cout << "5. 마족" <<endl;
            cout << "=> ";
            cin >> iRACE;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1024, '\n');
                continue;
            }

            else if(iRACE <= 0 || iRACE > RACE_DEVIL) 
            {   
                system("clear");
                cout << "잘못된 선택지입니다." <<endl;
                iRACE = 0;
            } 

            tPlayer.eRace = (RACE)iRACE;
            switch(tPlayer.eRace)
            {
                case RACE_HUMAN:
                    strcpy(tPlayer.raceName, "인간");
                case RACE_OAK:
                    strcpy(tPlayer.raceName, "오크");
                case RACE_ELF:
                    strcpy(tPlayer.raceName, "엘프");
                case RACE_DWARF:
                    strcpy(tPlayer.raceName, "드워프");
                case RACE_DEVIL:
                    strcpy(tPlayer.raceName, "마족");  
            };
    }

    int iJOB = 0;
    while(iJOB == 0)
    {
        cout << "직업을 선택해 주세요. " << endl;
            cout << "1. 전사" << endl;
            cout << "2. 궁수" << endl;
            cout << "3. 마법사" << endl;
            cout << "4. 도적" << endl;
            cout << "5. 개닝기미씨발줟버러지무직백수" <<endl;
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
            _tagMonster tMonsterArr[5] = {};

            strcpy(tMonsterArr[0].strName, "늑대");
            tMonsterArr[0].minAttack = 10;
            tMonsterArr[0].maxAttack = 20;
            tMonsterArr[0].minDefence = 10;
            tMonsterArr[0].maxDefence = 20;
            tMonsterArr[0].maxHP = 100;
            tMonsterArr[0].currentHP = 100;
            tMonsterArr[0].maxMP = 20;
            tMonsterArr[0].currentMP = 20;

            strcpy(tMonsterArr[1].strName, "고블린");
            tMonsterArr[1].minAttack = 10;
            tMonsterArr[1].maxAttack = 20;
            tMonsterArr[1].minDefence = 10;
            tMonsterArr[1].maxDefence = 20;
            tMonsterArr[1].maxHP = 100;
            tMonsterArr[1].currentHP = 100;
            tMonsterArr[1].maxMP = 20;
            tMonsterArr[1].currentMP = 20;

            strcpy(tMonsterArr[2].strName, "트롤");
            tMonsterArr[2].minAttack = 10;
            tMonsterArr[2].maxAttack = 20;
            tMonsterArr[2].minDefence = 10;
            tMonsterArr[2].maxDefence = 20;
            tMonsterArr[2].maxHP = 100;
            tMonsterArr[2].currentHP = 100;
            tMonsterArr[2].maxMP = 20;
            tMonsterArr[2].currentMP = 20;


            strcpy(tMonsterArr[4].strName, "대마왕");
            tMonsterArr[4].minAttack = 1000;
            tMonsterArr[4].maxAttack = 2000;
            tMonsterArr[4].minDefence = 1000;
            tMonsterArr[4].maxDefence = 2000;
            tMonsterArr[4].maxHP = 10000;
            tMonsterArr[4].currentHP = 10000;
            tMonsterArr[4].maxMP = 2000;
            tMonsterArr[4].currentMP = 2000;
    }

    while(true)
    {
        system("clear");
        cout << "             환영합니다." << tPlayer.strName << "님!\n" << endl;
        cout << "================ 선택지를 정해주십시오. ================" << endl;
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
                    cout << "================ 마을 간 이동 ================" << endl;
                    cout << "1. 마을(쉬움)" << endl;
                    cout << "2. 산골(중간)" << endl;
                    cout << "3. 던전(어려움)" << endl;
                    cout << "4. 마계(극악)" << endl;
                    cout << "5. 뒤로 가기" << endl;
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

                    _tagMonster tMonster = tMonsterArr[iMenu - 1];
                    while(true)
                    {
                        switch(iMenu)
                        {
                            case MM_VILLAGE:
                                cout << " ============== 마을 ============== " << endl;
                                break;
                            case MM_MOUNTAIN:
                                cout << " ============== 산골 ============== " << endl;
                                break;
                            case MM_DUNGEON:
                                cout << " ============== 던전 ============== " << endl;
                                break;
                            case MM_DEVIL:
                                cout << " ============== 마왕 ============== " << endl;
                                break;
                        }

                        cout << ""
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