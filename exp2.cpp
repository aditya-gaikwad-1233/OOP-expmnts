#include <iostream>
using namespace std;
class data
{
private:
    string name;
    char bg;
    string address;
    string dob;
    string cldiv;
    string lic;
    static int c;
    int roll;
    long int phone;

public:
    data();
    static int getcount();
    void getdata();
    void show();
    data(data *obj);
    data(int roll, long int phone, string name, string address, string dob, string cldiv, string lic);
    ~data();
};

int data::c = 0;
data::data(data *obj)
{
    cout << "\nCopy constructor implemented" << endl;
}
data::~data()
{
    cout << "Destructor called \n";
}
void data::getdata()
{
    cout << "Enter roll number \n";
    cin >> roll;
    cout << "Enter telephone number \n";
    cin >> phone;
    cout << "Enter Name \n";
    cin >> name;
    cout << "Enter address \n";
    cin >> address;
    cout << "Enter D.O.B \n";
    cin >> dob;
    cout << "Enter Class and Division\n";
    cin >> cldiv;
    cout << "Enter license number \n";
    cin >> lic;
}

void data::show()
{
    cout << "Name :" << name << endl;
    cout << "Roll Number :" << roll << endl;
    cout << "Telephone Number :" << phone << endl;
    cout << "Address :" << address << endl;
    cout << "Date of birth :" << dob << endl;
    cout << "Class and division: " << cldiv << endl;
    cout << "License number :" << lic << endl;
}

data::data(int roll, long int phone, string name, string address, string dob, string cldiv, string lic)
{
    cout << "\nParameterized Constructor" << endl;
    c++;
    this->roll = roll;
    this->phone = phone;
    this->name = name;
    this->address = address;
    this->dob = dob;
    this->cldiv = cldiv;
    this->lic = lic;
}

data::data()
{
    roll = 0;
    phone = 0;
    name = "Name";
    address = "Address";
    dob = "DOB";
    cldiv = "Class and Division";
    lic = "License no.";
    cout << "Default Constructor" << endl;
    c++;
}

int data::getcount()
{
    return c;
}

int main()
{
    int num;

    data *d1 = new data();
    d1->show();
    delete d1;

    data *d2 = new data(73, 9823694961, "Vijay", "Ravet", "26.11.85", "SE A", "MSIN85U");
    d2->show();

    data *d3 = new data(d2);
    d3->show();
    delete d2;

    cout << "\nEnter size of database";
    cin >> num;

    data dx[num];
    for (int i = 0; i < num; i++)
    {
        dx[i].getdata();
    }
    for (int i = 0; i < num; i++)
    {
        dx[i].show();
    }
    cout << "Number of constructor calls and total number of objects:" << data::getcount() << endl;
    return 0;
}
