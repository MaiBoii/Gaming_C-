#include <iostream>
#include <cstring>
#define NAME_LENGTH 32
#define CHAR_MAX 100

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
    bool iGender; 
    int iAge;
    int iJob;
    float exp;
};

int main(){

    _tagCharacter tCharacter = {};
    _tagCharacter tCharacterArr[100] = {};
    tCharacter.iJob = 2;

    //문자열을 배열에 대입할 때는 단순 대입법으로는 불가능하다.
    //대신 strcpy_s 함수를 사용하여 문자열을 복사해주어야한다.
    //그리고 문자열의 끝은 항상 NULL로 끝나야 남은 공간에 쓰레기값이 들어가지 않는다.

    strcpy(tCharacter.strName, "z지존검사사짱짱z");

    strcat(tCharacter.strName, "따흐흑!");

    int compareResult =  strcmp(tCharacter.strName, "다른_닉네임");

    cout << "이름 : " << tCharacter.strName << endl;
    cout << "이름 길이 : " << strlen(tCharacter.strName) << endl;
    cout << compareResult << endl;

    return 0;
}
