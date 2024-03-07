#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char *str1, *str2;
    str1 = (char*) calloc(10, 100);
    str2 = (char*) calloc(10, 100);
    int dlina1(char*);
    int dlina2(char*);
    int dlina3(char*);
    void kopir(char*, char*);
    void sravn(char*, char*);
    void konkat(char*, char*);

    cout << "длина str1="<<dlina1(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "длина str1="<<dlina2(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "длина str1="<<dlina3(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "результат копирования: str1= " << str1;
    cout << ", str2 =" << str2 << endl;
    cout << "результат сравнения:str1 = " << str1;
    cout << " , str2=" << str2 << endl;
    cout << "результат сцепления:str1= " << str1;
    cout << ", str2=" << str2 << endl;

    free(str1);
    free(str2);
    return 0;
}

int dlina1(char* ch) {
    string str = ch;
    return str.size();
}
int dlina2(char* ch) {
    string str = ch;
    return str.length();
}
int dlina3(char* ch) {
    return strlen(ch);
}
void kopir(char* ch1, char* ch2) {
    strcpy(ch1,ch2);
}
void sravn(char* ch1, char* ch2) {
    strcmp(ch1,ch2);
}
void konkat(char* ch1, char* ch2) {
    strcat(ch1,ch2);
}