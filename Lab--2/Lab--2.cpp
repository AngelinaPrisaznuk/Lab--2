#include <iostream>
using namespace std;
int main()
{

    setlocale(0, "");

    double a, b;

    cout << "Exponentiate the number:" << endl; // Зведіть число до степеня 

    cout << "Example: 5^2" << endl; //Наприклад: 5^2 

    cout << "Enter a number:" << endl; //Введіть число 

    cin >> a;

    cout << "Enter the degree:" << endl; //Введіть степінь 

    cin >> b;

    cout << "Your answer = " << pow(a, b) << endl; //Ваша відповідь 

    return 0;

}