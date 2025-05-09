//colors for C

#define black "\x1b[30m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"
#define magenta "\x1b[35m"
#define cyan "\x1b[36m"
#define white "\x1b[37m"
#define normal "\x1b[m"

//for C++
//dont forget to include Windows.h :>
//put the color name before the code

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

#define cppBlue SetConsoleTextAttribute(h, 1);
#define cppGreen SetConsoleTextAttribute(h, 2);
#define cppCyan SetConsoleTextAttribute(h, 3);
#define cppRed SetConsoleTextAttribute(h, 4);
#define cppPurple SetConsoleTextAttribute(h, 5);
#define cppDarkYellow SetConsoleTextAttribute(h, 6);
#define cppWhite SetConsoleTextAttribute(h, 7);
#define cppGray SetConsoleTextAttribute(h, 8);
#define cppBrightBlue SetConsoleTextAttribute(h, 9);
#define cppBrightGreen SetConsoleTextAttribute(h, 10);
#define cppBrightCyan SetConsoleTextAttribute(h, 11);
#define cppBrightRed SetConsoleTextAttribute(h, 12);
#define cppPink SetConsoleTextAttribute(h, 13);
#define cppYellow SetConsoleTextAttribute(h, 14);
#define cppBrightWhite SetConsoleTextAttribute(h, 15);