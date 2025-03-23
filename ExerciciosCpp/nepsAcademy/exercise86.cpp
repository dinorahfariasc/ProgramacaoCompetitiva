#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    float A, B;
    cin >> A >> B;

    float soma = (A+B)/2;

    if (soma >= 7)
    {

        cout << "Aprovado " << endl;
    }
    else if (soma >= 4)
    {
        cout << "Recuperacao" << endl;
    }
    else
    {
        cout << "Reprovado" << endl;
    }

}