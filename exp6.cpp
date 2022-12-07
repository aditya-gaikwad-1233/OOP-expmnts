/*Write C++ program using STL for sorting and searching user defined records
such as personal records (Name, DOB, Telephone number etc) using vector container.*/
#include <iostream>
#include <algorithm>
using namespace std;

class person
{
public:
    string name;
    string dob;
    long tel;

    void getdata()
    {
        cout << "ENTER NAME: " << endl;
        cin >> name;
        cout << "ENTER BIRTHDATE: " << endl;
        cin >> dob;
        cout << "ENTER PHONE NUMBER: " << endl;
        cin >> tel;
    }
    void displaydata()
    {
        cout << "\nNAME :-" << name << endl;
        cout << "DATE OF BIRTH:-" << dob << endl;
        cout << "TELEPHONE :-" << tel << endl;
    }
};

bool compare(const person &a, const person &b)
{
    return a.name < b.name;
}

int main()
{
    int n, c;
    cout << "ENTER TOTAL NUMBER OF RECORDS :-";
    cin >> n;
    string z[n];
    person p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].getdata();
    }

    cout << "*****SORTED RECORD******" << endl;
    sort(p, p + n, compare);
    for (int i = 0; i < n; i++)
    {
        p[i].displaydata();
    }
    cout << endl;

    string nm;
    cout << "ENTER NAME TO BE SEARCH: ";
    cin >> nm;
    for (int i = 0; i < n; i++)
    {
        z[i] = p[i].name;
    }

    if (binary_search(z, z + n, nm))
    {
        cout << "****RECORD FOUND****";
    }
    else
        cout << "****RECORD NOT FOUND****";
}