#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string str = "Hello, World!";
    char findCh = 'o';
    int count = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == findCh)
        {
            ++count;
        }
    }

    cout << "Symbol " << findCh << " is found " << count << endl;

    char line[150];
    int total = 0;
    int digits = 0;
    int spaces = 0;

    cout << "Entered string: ";
    cin.getline(line, 150);

    for(int i = 0; line[i] != '\0'; ++i)
    {
        ++total;
        if(line[i] >= '0' && line[i] <= '9')
        {
            ++digits;
        }
        else if(line[i] == ' ')
        {
            ++spaces;
        }
    }
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Total: " << total << endl;

    std::string myline;
    cout << "Entered string: ";

    getline(cin, myline);
    int i;

    for(i = 0; myline[i] != '\0'; ++i);
    cout << "Length: " << i << endl;

    std::string s1, s2, res;

    cout << "Entered string s1: ";
    getline(cin, s1);

    cout << "Entered string s2: ";
    getline(cin, s2);

    res = s1 + s2;

    cout <<  "Result = " << res << endl;

    std::string mystr[10], tmp;

    cout << "Enter 10 words: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        getline(cin, mystr[i]);
    }

    for(int i = 0; i < 9; ++i)
    {
        for(int j = i + 1; j < 10; ++j)
        {
            if(mystr[i] > mystr[j])
            {
                tmp = mystr[i];
                mystr[i] = mystr[j];
                mystr[j] = tmp;
            }
        }
    }

    cout << endl << endl;
    cout << "Sorting: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        cout << mystr[i] << endl;
    }

    return 0;
}
