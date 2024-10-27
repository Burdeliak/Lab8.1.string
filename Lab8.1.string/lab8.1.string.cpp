#include <iostream>
#include <string>
using namespace std;

// ������� ��� ��������� ������� �������� ������� "abc"
int Count(const string s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos) { // ��������� "abc"
        k++;
        pos += 1; // ���������� ����� � �������� �������
    }
    return k;
}

// ������� ��� ����� ������� ��������� "abc" �� "****"
string Change(string& s) {
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos) { // ��������� "abc"
        s.replace(pos, 3, "****"); // �������� "abc" �� "****"
        pos += 4; // ���������� ����� ���� ����������� "****"
    }
    return s;
}

int main() {
    string str;
    cout << "Enter:" << endl;
    getline(cin, str);

    cout << "Have " << Count(str) << "  'abc'" << endl;

    string dest = Change(str);

    cout << "Parametrs : " << str << endl;
    cout << "Results: " << dest << endl;

    return 0;
}
