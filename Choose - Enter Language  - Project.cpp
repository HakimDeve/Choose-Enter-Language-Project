
#include <iostream>
#include <string>
using namespace std;

enum enReversName { EN = 1, AR };

struct stInfoPerson
{
    string FirstName;
    string LastName;
};



void ReadInfo(stInfoPerson& Info)
{


    cout << "Please Enter your First Name ..? ";
    cin >> Info.FirstName;

    cout << "Please Enter your Last Name ..? ";
    cin >> Info.LastName;


}


void MenuLanguage()
{
    cout << "========== ====== ==============\n";
    cout << " \t Menu Language  \n";
    cout << "========== ====== ==============\n";
    cout << " [1] - English Language \n";
    cout << " [2] - Arabic Language \n";
    cout << "========== ====== ==============\n";
    cout << "your Choice ...? \n";
}

enReversName ReadNumberChoice()
{
    enReversName Lang;
    int LangNumber = 0;
    cin >> LangNumber;
    Lang = (enReversName)LangNumber;
    return Lang;
}

string GetFullNameinEnglishLanguage(stInfoPerson Info)
{

    string FullName = " ";
    FullName = Info.LastName + "  " + Info.FirstName;
    return FullName;
}

string GetFullNameinArabicLanguage(stInfoPerson Info)
{
    string FullName = " ";
    FullName = Info.FirstName + "  " + Info.LastName;
    return FullName;
}


string CheckLang(enReversName Lang)
{
    stInfoPerson Info;
    switch (Lang)
    {
    case enReversName::EN:
        ReadInfo(Info);
        return GetFullNameinEnglishLanguage(Info);
        break;
    case enReversName::AR:
        ReadInfo(Info);
        return GetFullNameinArabicLanguage(Info);
        break;
    default:
        return "Wrong Number";
        break;
    }


}



void PrintFullName(string fullName)
{
    cout << "\nYour Full Name is : " << fullName << endl;
}

int main()
{
    MenuLanguage();
    PrintFullName(CheckLang(ReadNumberChoice()));

    return 0;
}

