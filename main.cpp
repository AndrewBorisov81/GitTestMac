#include <iostream>
#include <vector>
#include <string>

#include "src/Employee.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    Driver* driver = new Driver("Andrew", 0331);
    driver->doWork();
    std::cout << driver->getName() << '\n';

    Employee* programmer = new Programmer();
    programmer->doWork();
}

