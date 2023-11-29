#include <iostream>
#include "Header.h"
using namespace std;


int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    cout << "Before : \n" << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    my_strncat(str1, str2, 6);
    cout << "After : \n" << endl;

    cout << str1 << endl; 

    char str3[100];
    my_strcpy(str3, str1);
    cout << str3 << endl; 

    return 0;
}
