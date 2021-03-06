#include <iostream>
#include <cmath>

using namespace std;

void introart()
{
    std::cout << R"(

.-----------------------------.
| # C45IO(?)            TI-86 |
| .-------------------------. |
| |            ./           | |
| |            +            | |
| |. . . . . ./. . . . . . .| |
| |          / .            | |
| | X=5.2   /  .   Y=0      | |
| '-------------------------' |
| [Y=][WIN][ZOOM][TRACE][GRH] |
|                  _ [ ^ ] _  |
| [2nd][MODE][DEL]|_|     |_| |
| [ALP][XTO][STAT]   [ V ]    |
| [MATH][MAT][PGM][VARS][CLR] |
| [x-1] [SIN] [COS] [TAN] [^] |
|  [x2][ , ][ ( ][ ) ][ / ]   |
| [LOG][ 7 ][ 8 ][ 9 ] [ X ]  |
| [LN ][ 4 ][ 5 ][ 6 ] [ - ]  |
| [STO>][ 1 ][ 2 ][ 3 ][ + ]  |
| [ON][ 0 ][ . ][ (-) ][ENTR] |
| ----                        |
'-----------------------------'
)"<< '\n';

}

void LineSep()
{
    cout << "++++++++++++++++++++++++++" << endl;
}

void Backtomenu()
{
    system("pause");
}

void Add(long long n1, long long n2)
{
    long long c;
    c = n1+n2;
    cout << "The result is: " << c << endl;
    Backtomenu();
}

void Substract(long long n1, long long n2)
{
    long long c;
    c = n1-n2;
    cout << "The result is: " << c << endl;
    Backtomenu();
}

void Multiply(long long n1, long long n2)
{
    long long c;
    c = n1*n2;
    cout << "The result is: " << c << endl;
    Backtomenu();
}

void Divide(long long n1, long long n2)
{
    long long c;
    if (n1>=n2 && n2!=0)
    {
        c = n1/n2;
        cout << "The result is: " << c << endl;
    }
    else cout << "Invalid number" << endl;
    Backtomenu();
}

void Factorial(long long n1)
{
    for (int i = n1 - 1; i > 1; i--)
    {
        n1 = n1 * i;
    }
    cout << "The result is: " << n1 << endl;
    Backtomenu();
}

void Squareroot(long long n1)
{
    long long result =sqrt(n1);
    cout << "The result is: " << result << endl;
    Backtomenu();
}

void Menu()
{
    LineSep();
    cout << "        Calculator" << endl;
    LineSep();
    cout << "1. Add" << endl;
    cout << endl;
    cout << "2. Subtract" << endl;
    cout << endl;
    cout << "3. Multiply" << endl;
    cout << endl;
    cout << "4. Divide" << endl;
    cout << endl;
    cout << "5. Factorial" << endl;
    cout << endl;
    cout << "6. Square root" << endl;
    cout << endl;
    cout << "7. Exit" << endl;
    cout << endl;
    LineSep();
    LineSep();
}

int main()
{
    introart();
    int l;
    long long a,b;
    do
    {
        Menu();
        cin >> l;
        if (l<7)
        {
            cout << "Enter a number: ";
            cin >> a;
            if(l<5)
            {
                cout << "Enter the second number: ";
                cin >> b;
            }

            switch (l)
            {
            case 1:
                Add(a,b);
                break;
            case 2:
                Substract(a,b);
                break;
            case 3:
                Multiply(a,b);
                break;
            case 4:
                Divide(a,b);
                break;
            case 5:
                Factorial(a);
                break;
            case 6:
                Squareroot(a);
                break;
            }
        }
    }
    while (l>0 && l<7);
    return 0;
}

