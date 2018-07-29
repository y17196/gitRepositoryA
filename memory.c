#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);

struct student
{
    char name[20];
    int age;
    int number;
};

struct student s;

int main(int argc, const char *argv[])
{
    char data[20] = "Dont give up!";
    memcpy(data + 1, data, 13);
    char data2[20] = "Dont give up!";
    memmove(data2 + 1, data2, 13);
    cout << data << endl;
    cout << data2 << endl;
    
    strcpy(s.name, "hehe");
    s.age = 10;
    s.number = 10;
    cout << s.name << " " << s.age << " " << s.number << endl;
    memset(&s, 0, sizeof(s));
    cout << s.name << " " << s.age << " " << s.number << endl;
    
    char buf0[10] = "abcdefghi";
    strncpy(buf0, "hello world", sizeof(buf0));
    buf0[sizeof(buf0) - 1] = '\0';
    cout << buf0 <<endl;
    
    char buf1[10];
    char buf2[10];
    strcpy(buf1, "hello world");
    strcpy(buf2, "holly shit!");
    cout << &buf1 << endl;
    cout << &buf2 << endl;
    cout << buf1 << endl;
    cout << buf2 << endl;
    return 0;
}