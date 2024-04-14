       // calculator//

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,result;
    char op;

    cout << "*************CALCULATOR**************" << endl;

    cout << "Enter the value 1: ";
    cin >> a;

    cout << "Enter the value 2: ";
    cin >> b;

    cout << "Operators: (+, -, %, *) " << endl;
    cout << "Choose operator: ";
    cin >> op;

    switch (op)
    {
    case '+' :
        result= a+b;
        cout << "Answer: " << result << endl;
        break;
    case '-' :
        result= a-b;
        cout << "Answer: " << result << endl;
        break;    
    case '%' :
        result= a%b;
        cout << "Answer: " << result << endl;
        break;
    case '*' :
        result= a*b;
        cout << "Answer: " << result << endl;
        break;
    
    }

    cout << "*************************************";
    return 0;
}