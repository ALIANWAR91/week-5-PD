#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void erasePlayer();
void printPlayer();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void maze();
void movePlayerLeft();
void conditionsPlayer();
void header();
void enemy1();
void enemy2();
void enemy3();
void eraseEnemy1();
void eraseEnemy2();
void eraseEnemy3();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
char getCharAtxy(short int x, short int y);
int eX1 = 270, eY1 = 45;
int eX2 = 270, eY2 = 10;
int eX3 = 270, eY3 = 65;
int pX = 3, pY = 35;
main()
{
    system("cls");
    header();
    maze();
    printPlayer();
    enemy1();
    enemy2();
    enemy3();
    getCharAtxy(pX + 1, pY) == ' ';
    getCharAtxy(pX, pY + 1) == ' ';
    getCharAtxy(pX, pY - 1) == ' ';
    getCharAtxy(pX - 1, pY) == ' ';
    while (1)
    {
        conditionsPlayer();
        moveEnemy1();
        moveEnemy2();
        moveEnemy3();
    }
}
void printPlayer()
{
    gotoxy(pX, pY);
    cout << "           __        ";
    gotoxy(pX, pY + 1);
    cout << "        ---  \\      ";
    gotoxy(pX, pY + 2);
    cout << "      / ~ * * <      ";
    gotoxy(pX, pY + 3);
    cout << "     | ~       >     ";
    gotoxy(pX, pY + 4);
    cout << " /``-         ~      ";
    gotoxy(pX, pY + 5);
    cout << "|  (   ( )   |       ";
    gotoxy(pX, pY + 6);
    cout << "| (    \\ \\ ______  ";
    gotoxy(pX, pY + 7);
    cout << "\\(     \\  |------> ";
    gotoxy(pX, pY + 8);
    cout << "  |    __\\__|       ";
    gotoxy(pX, pY + 9);
    cout << "  \\  /    \\ >      ";
    gotoxy(pX, pY + 10);
    cout << "   | |      | |      ";
    gotoxy(pX, pY + 11);
    cout << "   > >      > >      ";
    gotoxy(pX, pY + 12);
    cout << "  / \\      / \\     ";
    gotoxy(pX, pY + 13);
    cout << " -__-      -__-      ";
}
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "                     ";
    gotoxy(pX, pY + 1);
    cout << "                     ";
    gotoxy(pX, pY + 2);
    cout << "                     ";
    gotoxy(pX, pY + 3);
    cout << "                     ";
    gotoxy(pX, pY + 4);
    cout << "                     ";
    gotoxy(pX, pY + 5);
    cout << "                     ";
    gotoxy(pX, pY + 6);
    cout << "                     ";
    gotoxy(pX, pY + 7);
    cout << "                     ";
    gotoxy(pX, pY + 8);
    cout << "                     ";
    gotoxy(pX, pY + 9);
    cout << "                     ";
    gotoxy(pX, pY + 10);
    cout << "                     ";
    gotoxy(pX, pY + 11);
    cout << "                     ";
    gotoxy(pX, pY + 12);
    cout << "                     ";
    gotoxy(pX, pY + 13);
    cout << "                     ";
}
void movePlayerRight()
{
    if (getCharAtxy(pX + 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}
void movePlayerUp()
{
    if (getCharAtxy(pX, pY + 1) == ' ')
    {
        erasePlayer();
        pY = pY - 1;
        printPlayer();
    }
}
void movePlayerDown()
{
    if (getCharAtxy(pX, pY - 1) == ' ')
    {
        erasePlayer();
        pY = pY + 1;
        printPlayer();
    }
}
void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void conditionsPlayer()
{
    if (GetAsyncKeyState(VK_RIGHT))
    {
        movePlayerRight();
    }
    Sleep(200);
    if (GetAsyncKeyState(VK_UP))
    {
        movePlayerUp();
    }
    Sleep(200);
    if (GetAsyncKeyState(VK_DOWN))
    {
        movePlayerDown();
    }
    Sleep(200);
    if (GetAsyncKeyState(VK_LEFT))
    {
        movePlayerLeft();
    }
}
void enemy1()
{
    gotoxy(eX1, eY1);
    cout << "         ^^^^^   ";
    gotoxy(eX1, eY1 + 1);
    cout << "        (     )  ";
    gotoxy(eX1, eY1 + 2);
    cout << "<======(===O   ) ";
    gotoxy(eX1, eY1 + 3);
    cout << "        (     )  ";
}
void enemy2()
{
    gotoxy(eX2, eY2);
    cout << "            ____                    ";
    gotoxy(eX2, eY2 + 1);
    cout << "  |        | ___\\          /~~~|   ";
    gotoxy(eX2, eY2 + 2);
    cout << " _:_______|/'(..)`\\______/  | |    ";
    gotoxy(eX2, eY2 + 3);
    cout << "<_|``````  \\__~~__/       ___|_|   ";
    gotoxy(eX2, eY2 + 4);
    cout << "  :\\____(=========,   ,--\\_|_/    ";
    gotoxy(eX2, eY2 + 5);
    cout << "  |       \\      /---'             ";
    gotoxy(eX2, eY2 + 6);
    cout << "          |     /                   ";
    gotoxy(eX2, eY2 + 7);
    cout << "          |____/                    ";
}
void enemy3()
{
    gotoxy(eX3, eY3);
    cout << "         ----     ";
    gotoxy(eX3, eY3 + 1);
    cout << "=======||||||||   ";
    gotoxy(eX3, eY3 + 2);
    cout << "    [||||||||||||]";
    gotoxy(eX3, eY3 + 3);
    cout << "     \\OOOOOOOOO/ ";
}
void eraseEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "                    ";
    gotoxy(eX1, eY1 + 1);
    cout << "                    ";
    gotoxy(eX1, eY1 + 2);
    cout << "                    ";
    gotoxy(eX1, eY1 + 3);
    cout << "                    ";
}
void eraseEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 1);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 2);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 3);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 4);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 5);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 6);
    cout << "                                    ";
    gotoxy(eX2, eY2 + 7);
    cout << "                                    ";
}
void eraseEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "                  ";
    gotoxy(eX3, eY3 + 1);
    cout << "                  ";
    gotoxy(eX3, eY3 + 2);
    cout << "                  ";
    gotoxy(eX3, eY3 + 3);
    cout << "                  ";
}
void moveEnemy1()
{

    eraseEnemy1();
    eX1 = eX1 - 1;
    if (eX1 == 180)
    {
        eX1 = 270;
    }
    enemy1();
}
void moveEnemy2()
{

    eraseEnemy2();
    eX2 = eX2 - 1;
    if (eX2 == 2)
    {
        eX2 = 270;
    }
    enemy2();
}
void moveEnemy3()
{

    eraseEnemy3();
    eX3 = eX3 - 1;
    if (eX3 == 150)
    {
        eX3 = 270;
    }
    enemy3();
}
void maze()
{
    cout << "____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________" << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|                                                                                                                                                                                                                                                                                                                                           " << endl;
    cout << "|###########################################################################################################################################################################################################################################################################################################################################" << endl;
}
void header()
{
    cout<<"               __  __ _____ _____  _    _       ____  _    _   _  ____"<<endl;
    cout<<"               | \\/  | ____|_   _|/ \\  | |     / ___|| |  | | | |/ ___|"<<endl;
    cout<<"               | |\\/| |  _|   | | / _ \\ | |     \\___ \\| |  | | | | |  _ "<<endl;
    cout<<"               | |  | | |___  | |/ ___ \\| |___   ___) | |__| |_| | |_| |"<<endl;
    cout<<"               |_|  |_|_____| |_/_/   \\_\\_____| |____/|_____\\__/ \\___|"<<endl;

}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}