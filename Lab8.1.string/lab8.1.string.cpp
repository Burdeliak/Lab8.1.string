#include <iostream>
#include <string>
using namespace std;

// Функція для підрахунку кількості входжень підрядка "abc"
int Count(const string s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos) { // Знаходимо "abc"
        k++;
        pos += 1; // Продовжуємо пошук з наступної позиції
    }
    return k;
}

// Функція для заміни кожного входження "abc" на "****"
string Change(string& s) {
    size_t pos = 0;
    while ((pos = s.find("abc", pos)) != string::npos) { // Знаходимо "abc"
        s.replace(pos, 3, "****"); // Замінюємо "abc" на "****"
        pos += 4; // Продовжуємо пошук після вставленого "****"
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
