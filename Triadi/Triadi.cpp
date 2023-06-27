#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char* str = "abcdef";
    int len = strlen(str);
    char* newStr = new char[len * 2 + 1];
    char* ptr = newStr;

    for (const char* p = str; p < str + len; p += 3) {
        *ptr++ = *p;
        *ptr++ = *(p + 1);
        *ptr++ = *(p + 2);
        *ptr++ = *p;
        *ptr++ = *(p + 1);
        *ptr++ = *(p + 2);
    }
    *ptr = '\0';

    cout << newStr << endl;

    delete[] newStr;
    return 0;
}



