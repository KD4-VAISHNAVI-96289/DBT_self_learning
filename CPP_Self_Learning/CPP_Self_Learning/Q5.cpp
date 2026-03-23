#include<iostream>
using namespace std;

// Custom strlen
int myStrlen(char str[])
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

// Custom strcpy
void myStrcpy(char dest[], char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char src[] = "Hello";
    char dest[20];

    cout << "Length: " << myStrlen(src) << endl;

    myStrcpy(dest, src);

    cout << "Copied String: " << dest << endl;

    return 0;
}