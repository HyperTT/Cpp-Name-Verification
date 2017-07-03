#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool name_validation(string test)
{
    bool name_valid = true;
    for (int counter = 0; counter < test.length();counter++)
    {
        if (isdigit(test[counter]))
        {
            name_valid = false;
            cout << "Your name cannot contain: "<<test[counter]<<endl;
        }
        if (ispunct(test[counter]))
        {
            name_valid = false;
            cout << "Your name cannot contain: "<<test[counter]<<endl;
        }
        if (isspace(test[counter]))
        {
            name_valid = false;
            cout << "Your name cannot contain: "<<test[counter]<<endl;
        }
    }
    return name_valid;
}

int main ()
{
    string first_name;
    cout << "What's your first name?\n";
    cin >> first_name;
    if (!name_validation(first_name))
    {
        cout << "Invalid name.\n";
        return 0;
    }
    cout << "Valid name.\n";
    return 0;
}
