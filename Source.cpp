
#include <map>
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    map<int, string> id =
    { {10,"���������� ���� ���������"},
      {3,"���� ������ ���������"},
      {8,"����� ��������� �������"},
      {7,"������ ���������� ��������"},
      {14,"��� ������� �����"}
    };
    int k = 0;
    int i = 0;
    cout << "������� ����: ";
    cin >> k;
    for (auto pair : id)
    {
        if (k <= pair.first)
        {
            cout << "Id :" << pair.first << "  Fio :" << pair.second << endl;
            i++;
        }

    }
    cout << "����� ����� ��� �������: " << i;
}



















