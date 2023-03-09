#include <iostream>
#define NAME_LENGTH 32
#define GUILD_MAX 100

using namespace std;

enum JOB 
{
    warrior = 1,
    wizard,
    archer,
    hunter,
    thief,
    king
};

enum MENU 
{
    MENU_INSERT = 1,
    MENU_DELETE,
    MENU_SEARCH,
    MENU_OUTPUT,
    MENU_EXIT
};

struct _tagCharacter 
{
    char strName[NAME_LENGTH];
    int iNum;
    char iGender; 
    int iAge;
    int iJob;
};

int main(){
    _tagCharacter tGuildmemberArr[GUILD_MAX] = {};
    int iGuildmemberCount = 0;
    int iMemberNum = 1;

    while(true){
        system("clear");
        cout << "저희 길드에 오신 것을 환영합니다. 무엇을 도와드릴까요?" << endl;
        cout << "1. 길드에 가입한다. " << endl;
        cout << "2. 길드원을 추방한다. " << endl;
        cout << "3. 길드원을 조회한다. . " << endl;
        cout << "4. 모든 길드원을 조회한다. " << endl;
        cout << "5. 볼 일 없음. ㅅㄱ" << endl;
        cout << "=> ";
        int iMenu = 0;
        cin >> iMenu;

        if(cin.fail())
        {
            cin.clear(); // 에러 버퍼를 지워준다.
            cin.ignore(1024, '\n'); //처음부터 \n이 있는 곳까지 찾아서 지워줌.
            continue;
        }

        if(iMenu == MENU_EXIT)
        {
            cout << "그럼 ㅃㅇ." << endl;
            break;
        }

        switch(iMenu)
        {
        case MENU_INSERT:
            system("clear");
            cout << "============== 길드 가입 ==============" << endl;
            cout << "이름 : ";
            cin >> tGuildmemberArr[iMemberNum].strName;
            tGuildmemberArr[iMemberNum].iNum = iMemberNum;
            cin.ignore(1024, '\n');
            cout << "성별(M/F) : ";
            cin >> tGuildmemberArr[iMemberNum].iGender;
            cout << "나이 : ";
            cin >> tGuildmemberArr[iMemberNum].iAge;
            cout << "직업 : ";
            cin >> tGuildmemberArr[iMemberNum].iJob;
            break;
            
        case MENU_DELETE:
            break;

            
        case MENU_SEARCH:
            break;


        case MENU_OUTPUT:
            system("clear");
            cout << "============== 길드 횐님덜 ==============" << endl;
            for (int i=0; i< iGuildmemberCount; ++i)
            {
                cout << "이름 : " << tGuildmemberArr[iMemberNum].strName << endl;
                cout << "성별 : " << tGuildmemberArr[iMemberNum].iGender << endl;
                cout << "직업 : " << tGuildmemberArr[iMemberNum].iJob << endl;
                cout << "나이 : " << tGuildmemberArr[iMemberNum].iAge << endl;
            }
            break;
        default:
            cout << "뭐라는거야 적힌대로 답을 하세요." << endl;
            break;
        }
        system("read");
    }


    return 0;
}
