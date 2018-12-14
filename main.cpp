#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

double input()
{
    double num1,num2,ans;
    char fun;

    cout << "\nEnter the expression:\n\n";
    cin >> num1 >> fun >> num2;

    switch (fun)
    {
    case '+':
        {ans = num1 + num2;
        break;}

    case '-':
        {ans = num1 - num2;
        break;}

    case '*':
        {ans = num1 * num2;
        break;}

    case '/':
        {ans = num1 / num2;
        break;}

    case '^':
        {ans = pow(num1,num2);
        break;}

    default:
        cout << "\nAnswer can not be calculated due to unknown function\n";
    }

    cout << "\nThe answer is " << ans << "\n";
}
int main()
{
    //First Interface
    cout << "+-*/^+-*/^+-*/^ {Simple Calculator} +-*/^+-*/^+-*/^\n" << endl;
    cout << "\t      ~ Available Functions ~\n\n" << "\t\tAddition       [+]\n" << "\t\tSubtraction    [-]\n" << "\t\tMultiplication [*]\n" << "\t\tDivision       [/]\n" << "\t\tPower          [^]" << endl;
    cout << "\nExample ==> [First Number] [Function] [Second Number]\n\n";

    //Calculation
    input();

    char io;
    int x;

    do{
        cout << "\nDo you want to continue ? [Y/N]\n";
    cin >> io;
    if(io=='y'||io=='Y')
        input();
    else{
        cout << "\n*** Thank You for using my calculator ***\n";
        exit(0);
        break;}
    x++;
    }while(x>0);

    return 0;
}
