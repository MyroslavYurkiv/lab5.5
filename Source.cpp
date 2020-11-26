#include <iostream>
#define DEBUG
using namespace std;

void double_sys(int num)
{
    int count = 1;
    int copy_num = num;
    while (copy_num != 1)
    {
        count++;
        copy_num /= 2;
    }
    int* arr = new int[count];
    for (int i = (count - 1); i > 0; i--)
    {
        arr[i] = num % 2;
        num /= 2;
    }
    arr[0] = (int)(num);
    for (int i = 0; i < count; i++)
        cout << arr[i];
    cout << endl;
    delete[] arr;
}

void eight_sys(int num)
{
    int count = 1;
    int copy_num = num;
    while (copy_num > 7)
    {
        count++;
        copy_num /= 8;
    }
    int* arr = new int[count];
    for (int i = (count - 1); i > 0; i--)
    {
        arr[i] = num % 8;
        num /= 8;
    }
    arr[0] = (int)(num);
    for (int i = 0; i < count; i++)
        cout << arr[i];
    cout << endl;
    delete[] arr;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int num;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "| ����������� ����� � ���������i ������� ������� � ��i����� i �i������� |" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    cout << "���i�� �����: "; cin >> num;

    cout << "� 2-�: "; double_sys(num);
    cout << "� 8-�: "; eight_sys(num);
    system("pause");
    return 0;
}