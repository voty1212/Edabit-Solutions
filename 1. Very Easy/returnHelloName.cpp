/* Problem-Task : Create a function that takes a name and returns a greeting in the form of a string.
 * Problem Link : https://edabit.com/challenge/MtG39AgXhyeePSiY2
*/

#include <iostream>
#include <string>
using namespace std;

string helloName(string name)
{
    string S = "Hello brother, how are you " + name + "!";
    return S;
}

int main()
{
    string S;
    cin >> S;
    cout << helloName(S);
    return 0;
}
