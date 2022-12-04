#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    string word;

    FILE* f;

    fopen_s(&f, "db.txt", "r");

    char ryphm[30];

    cout << "Введите слово: ";
    getline(cin, word);

    while (true)
    {
        fgets(ryphm, 199, f);

        string tmp = ryphm;

        if (feof(f) != 0)
            break;

        if (word[word.length() - 2] == tmp[tmp.length() - 3] && word[word.length() - 1] == tmp[tmp.length() - 2])
        {
            cout << tmp;
        }
    }
}