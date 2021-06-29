// bloodBank.cpp : This file contains the 'main' function. Program execution begins and ends there.

#pragma once
#ifndef NOMINMAX // KB
#define NOMINMAX // KB
#endif // KB
#include <iostream> // KB
#include <windows.h> // KB
#include<stdlib.h> // KB
#include <string> //KB
#include <fstream> //KB
#include <sstream> //KB
#include <cstdlib> //IR
#include <ctime> //IR

using namespace std; // KB

struct Date { // KB
    string monday, tuesday, wednesday, thursday, friday; // KB
};



struct Donor { // KB
    string first_name; // KB
    string last_name; // KB
    string dob; // KB
    string nationality; // KB
    string ethnicity; // KBd
    string gender; // KB
    string underlying_conditions; // KB
    string blood_group; // KB
    int contact_no; // KB
    string email; // KB
    string physical_address; // KB
    string username; // KB
    string password;  // KB
    int id;
}; // KB

struct Recipient { // KB
    string hospital_name; // KB
    string blood_bank_name; // KB
    string patient_name; // KB  
    int contact_no; // KB
    string email; // KB
    string physical_address; // KB
    string username; // KB
    string password;  // KB
    int id;
}; // KB

struct Blood_test { //IR
    int id;
    string first_name;
    string last_name;
    string dob;
    string gender;
    string blood_group;
    string amount;
};

struct Blood_test* input_data(struct Blood_test* a) { //IR
    ofstream myfile("bloodtest.csv", ios::out);
    cout << "\n   Please enter donor's ID : ";
    cin >> (a)->id;
    cin.ignore();
    cout << "\n   Please enter the donor's first name : ";
    getline(cin, (a)->first_name);
    cout << "\n   Please enter the donor's last name : "; 
    getline(cin, (a)->last_name);  
    cout << "\n   Please enter the donor's date of birth (xx/xx/xx) : "; 
    getline(cin, (a)->dob);
    cout << "\n   Please enter the donor's gender : ";
    getline(cin, (a)->gender);
    cout << "\n   Please enter the donor's blood group : ";
    getline(cin, (a)->blood_group);
    cout << "\n   Please enter the blood amount in ml: ";
    getline(cin, (a)->amount);
    myfile << (a)->id << "," << (a)->first_name << "," << (a)->last_name << "," << (a)->dob << "," << (a)->gender << "," << (a)->blood_group << "," << (a)->amount << endl;
    myfile.close();

    return(a);
}

struct Donor* input_data(struct Donor* u) { // KB
    ofstream myfile("donor.csv", ios::app); //KB
    //for (int i = 0; i < n; i++) {  // KB
    srand((unsigned)time(0));
    if ((u)->id = (rand() % 8999 + 1000)) {
        (u)->id = (rand() % 8999 + 1000) + 1;
    }
    else {
        (u)->id = (rand() % 8999 + 1000);
    }
    cin.ignore(); // KB
    cout << "\n   Please enter your first name : "; // KB
    getline(cin, (u)->first_name); // KB
    cout << "\n   Please enter your last name : "; // KB
    getline(cin, (u)->last_name);  // KB
    cout << "\n   Please enter your date of birth (xx/xx/xx) : "; // KB
    getline(cin, (u)->dob); // KB
    cout << "\n   Please enter your nationality : "; // KB
    getline(cin, (u)->nationality); // KB
    cout << "\n   Please enter your ethnicity : "; // KB
    getline(cin, (u)->ethnicity); // KB
    cout << "\n   Please enter your biological gender (male / female) : "; // KB
    getline(cin, (u)->gender); // KB
    cout << "\n   Please enter (if any) underlying conditions : "; // KB
    getline(cin, (u)->underlying_conditions); // KB
    cout << "\n   Please enter your blood group : "; // KB
    getline(cin, (u)->blood_group); // KB
    cout << "\n   Please enter your contact number : "; // KB
    cin >> (u)->contact_no; // KB
    cin.ignore(); // KB
    cout << "\n   Please enter your email : "; // KB
    getline(cin, (u)->email); // KB
    cout << "\n   Please enter your physical address : "; // KB
    getline(cin, (u)->physical_address); // KB
    cout << "\n   Please enter your username : "; // KB
    getline(cin, (u)->username); // KB
    cout << "\n   Please enter your password : "; // KB
    getline(cin, (u)->password); // KB
    myfile << (u)->id << ',' << (u)->first_name << ',' << (u)->last_name << ',' << (u)->dob << ',' << (u)->nationality << ',' << (u)->ethnicity << ',' << (u)->gender << ',' << (u)->underlying_conditions << ',' << (u)->blood_group << ',' << (u)->contact_no << ',' << (u)->email << ',' << (u)->physical_address << ',' << (u)->username << ',' << (u)->password << ',' << endl;
    myfile.close();


    return(u); // KB

} // KB



struct Recipient* input_data(struct Recipient* s) { // KB
    ofstream myfile("recipient.csv", ios::app); //KB
    srand((unsigned)time(0)); //IR
    if ((s)->id = (rand() % 8999 + 1000)) {
        (s)->id = (rand() % 899 + 100) + 1;
    }
    else {
        (s)->id = (rand() % 899 + 100);
    } //IR
    cin.ignore(); // KB
    cout << "\n   Please enter the hospital name : "; // KB
    getline(cin, (s)->hospital_name); // KB
    cout << "\n   Please enter the blood bank name\n   (put n/a if you do not have one) : "; // KB
    getline(cin, (s)->blood_bank_name);  // KB
    cout << "\n   Please enter your patients name\n   (put n/a if you do not have one) : "; // KB
    getline(cin, (s)->patient_name); // KB
    cout << "\n   Please enter your contact number : ";
    cin >> (s)->contact_no; // KB
    cin.ignore(); // KB
    cout << "\n   Please enter your email : "; // KB
    getline(cin, (s)->email); // KB
    cout << "\n   Please enter your physical address : "; // KB
    getline(cin, (s)->physical_address); // KB
    cout << "\n   Please enter your username : "; // KB
    getline(cin, (s)->username); // KB
    cout << "\n   Please enter your password : "; // KB
    getline(cin, (s)->password); // KB
    myfile << (s)->id << "," << (s)->hospital_name << ',' << (s)->blood_bank_name << ',' << (s)->patient_name << ',' << (s)->contact_no << ',' << (s)->email << ',' << (s)->physical_address << ',' << (s)->username << ',' << (s)->password << ',' << endl;
    myfile.close();


    return(s); // KB

} // KB

void setcolor(unsigned char color) // KB
{ // KB
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // KB
} // KB


void update_contact_details(struct Donor* d) { //KB

    cout << "\n\n\t     UPDATE CONTACT DETAILS   \n" << "\n\t   ------------------------------";

    cout << "\n\n\t    Your current details are : ";  // shows current details
    setcolor(0x0A);
    cout << "\n\n\t    First Name     : " << d->first_name << endl;
    cout << "\n\t    Last Name      : " << d->last_name << endl;
    cout << "\n\t    Contact Number : " << d->contact_no << endl;
    cout << "\n\t    Email          : " << d->email << endl;
    cout << "\n\t    Address        : " << d->physical_address << endl;
    setcolor(0x07);

    cout << "\n   Please enter your updated contact number : "; // KB // updating contact information
    cin >> (d)->contact_no;
    cout << "\n";
    cout << "\n   Please enter your updated email address : "; // KB
    cin >> (d)->email;
    cout << "\n";
    cout << "\n   Please enter your updated physcial address : "; // KB
    cin >> (d)->physical_address;

    {
        ifstream  stream1("donor.csv");
        string line;
        ofstream stream2("copy.csv"); // cloning donor details into copy csv
        if (stream1 && stream2) {
            while (getline(stream1, line)) {
                stream2 << line << "\n";
            }
        }
        stream1.close();
        stream2.close();  // closing cloning
    }

    {
        ifstream  stream1("donor.csv"); // re-opening files
        string line;
        ofstream stream2("copy.csv");
        int lineNumber = 0;
        int line_to_replace = 4; //This will replace 5th line of the cloned // i tired to figure out how to use findstring / delete line

        while (getline(stream1, line))
        {
            if (lineNumber == line_to_replace)
            {
                stream2 << (d)->contact_no << ',' << (d)->email << ',' << (d)->physical_address << ',' << d->id << ',' << d->first_name << ',' << d->last_name << ',' << d->dob << ',' << d->nationality << ',' << d->ethnicity << ',' << d->gender << ',' << d->underlying_conditions << ',' << d->blood_group << ',' << d->username << ',' << d->password << ',' << endl;
            }
            else
                stream2 << line << endl;
                 lineNumber++;
        }

        stream1.close();
        stream2.close();

        setcolor(0x0C);
        cout << "\n\n\tThank you for updating your details\n\tReturning to main screen\n\n";
        setcolor(0x07);
        return;
    }
} // update details closed // you can find updated details in copy.csv line 5 only


void booking(string first_name, string last_name, string dob, string underlying_conditions){// KB
    ofstream myfile;
    myfile.open("booking.csv", ios::app);// KB

    cout << "\n";// KB
    cout << "\n\t   Choose the Day for Appointment\n";
    cout << "\n\t   ------------------------------\n\n";
    cout << "\n";
    cout << "\n\t   1. Monday 9:00am - 4:00pm \n";
    cout << "\n\t   2. Tuesday 9:00am - 4:00pm \n";
    cout << "\n\t   3. Wednesday 9:00am - 4:00pm \n";
    cout << "\n\t   4. Thursday 9:00am - 4:00pm \n";
    cout << "\n\t   5. Friday 9:00am - 4:00pm \n";
    cout << "\n";
    setcolor(0x0C);
    cout << "\n\t           6. BACK\n";
    setcolor(0x07);
    int choice;// KB

    cout << "\n\n\t  Select your option : (1-5) ";// KB
    cin >> choice;// KB


    switch (choice)// KB
    {
    case 1: {// KB
        setcolor(0x0A);
        cout << "\n\n\t  Booking confirmed for :\n";
        setcolor(0x07);
        string mes = "Monday 9:00am - 4:00pm"; 
        cout <<"\n    "<< first_name << " "<< last_name<<" at "<<mes<< endl;
        myfile << first_name <<","<< last_name<< "," << dob<< "," << underlying_conditions << "," << mes << endl;
        myfile.close();
        cout << "\n\n\t";
        system("PAUSE");
        break;// KB
    }
    case 2: {// KB
        setcolor(0x0A);
        cout << "\n\n\t  Booking confirmed for :\n";
        setcolor(0x07);
        string mes = "Tuesday 9:00am - 4:00pm";
        cout << "\n    " << first_name << " " << last_name << " at " << mes << endl;
        myfile << first_name << "," << last_name << "," << dob << "," << underlying_conditions << "," << mes << endl;
        myfile.close();
        cout << "\n\n\t";
        system("PAUSE");
        break;
    }
    case 3: {// KB
        setcolor(0x0A);
        cout << "\n\n\t  Booking confirmed for :\n";
        setcolor(0x07);
        string mes = "Wednesday 9:00am - 4:00pm";
        cout << "\n    " << first_name << " " << last_name << " at " << mes << endl;
        myfile << first_name << "," << last_name << "," << dob << "," << underlying_conditions << "," << mes << endl;
        myfile.close();
        cout << "\n\n\t";
        system("PAUSE");
        break;// KB
    }
    case 4: {// KB
        setcolor(0x0A);
        cout << "\n\n\t  Booking confirmed for :\n";
        setcolor(0x07);
        string mes = "Thursday 9:00am - 4:00pm";
        cout << "\n    " << first_name << " " << last_name << " at " << mes << endl;
        myfile << first_name << "," << last_name << "," << dob << "," << underlying_conditions << "," << mes << endl;
        myfile.close();
        cout << "\n\n\t";
        system("PAUSE");
        break;// KB
    }
    case 5: {// KB
        setcolor(0x0A);
        cout << "\n\n\t  Booking confirmed for :\n";
        setcolor(0x07);
        string mes = "Friday 9:00am - 4:00pm";
        cout << "\n    " << first_name << " " << last_name << " at " << mes << endl;
        myfile << first_name << "," << last_name << "," << dob << "," << underlying_conditions << "," << mes << endl;
        myfile.close();
        cout << "\n\n\t";
        system("PAUSE");
        break;// KB
    }
    case 6: { // KB
        return; // KB
    }

    }
    return; 
}

void admin_update() { //IR
    char x;
    cout << "\n\t\t     UPDATE DONOR BLOOD TEST RESULTS   ";
    cout << "\n\t\t     -------------------------------\n\n";
    struct Blood_test a;
    struct Blood_test* ptr = &a;
    input_data(ptr);

    setcolor(0x0C);
    cout << "\n\n Update Complete, Enter 'b' to return : ";
    setcolor(0x07);
    cin >> x;
    while (x != 'b') {
        setcolor(0x0C);
        cout << "\n\n Invalid input, Please enter 'b' to return : ";
        setcolor(0x07);
        cin >> x;
    }
    if (x == 'b') {
        return;
    }
}

void recipient_report() { //IR

    char x;
    int i;

    cout << "\n\t\tAdmin Recipient Search Menu\n";

    ifstream myfile;
    myfile.open("recipient.csv", ios::in);

    struct Recipient s[10]; //RECIPIENT
    Recipient r; //RECIPIENT

    string vine;
    int ind = 0;

    while (getline(myfile, vine)) { //RECIPIENT
        istringstream linestream(vine);
        string box;
        getline(linestream, box, ',');
        stringstream pp(box);
        pp >> r.id;
        getline(linestream, box, ',');
        r.hospital_name = box;
        getline(linestream, box, ',');
        r.blood_bank_name = box;
        getline(linestream, box, ',');
        r.patient_name = box;
        getline(linestream, box, ',');
        stringstream ss(box);
        ss >> r.contact_no;
        getline(linestream, box, ',');
        r.email = box;
        getline(linestream, box, ',');
        r.physical_address = box;
        getline(linestream, box, ',');
        r.username = box;
        getline(linestream, box, ',');
        r.password = box;
        s[ind] = r;
        ind++;
    };

    for (int i = 0; i < ind; i++) {
        cout << "\n\t RECIPIENT " << s[i].id << ", " << s[i].hospital_name << ", " << s[i].patient_name << " RECIPIENT REPORT";
        cout << "\n==================================";
        cout << "\n+ Identification   : " << s[i].id;
        cout << "\n+ Hospital Name    : " << s[i].hospital_name;
        cout << "\n+ Blood Bank Name  : " << s[i].blood_bank_name;
        cout << "\n+ Patient Name     : " << s[i].patient_name;
        cout << "\n+ Contact Number   : " << s[i].contact_no;
        cout << "\n+ Email            : " << s[i].email;
        cout << "\n+ Physical Address : " << s[i].physical_address;
        cout << "\n+ User Name        : " << s[i].username;
        cout << "\n+ Password         : " << s[i].password;
        cout << "\n==================================";
    }
        cout << "\n\n\t\t Enter 'a' to go back : ";
        cin >> x;
        if (x == 'a') {
            return;
        }
           while (x != 'a') {
               setcolor(0x0C);
                cout << "\n\n\t\tInvalid input, Please try again : ";
                setcolor(0x07);
                cin >> x;
            }
}

void donor_report() { //IR
    int i;
    char x;
    string blood_type, location;

    cout << "\n\t\tAdmin Donor Search Menu\n";
    cout << "\n\n\t\ta. SEARCH BY BLOOD GROUP\n\n";
    cout << "\t\tb. SEARCH BY LOCATION\n\n";
    cout << "\t\tc. DISPLAY ALL\n\n";
    setcolor(0x0C);
    cout << "\t\td. BACK\n";
    setcolor(0x07);
    cout << "\n\n\t\tEnter your option : ";
    cin >> x;

    struct Donor u[10]; //DONOR
    Donor d; //DONOR

    ifstream myfile;
    myfile.open("donor.csv", ios::in); // IR

    string line;
    int ind = 0;

    while (getline(myfile, line)) { //DONOR
        //cout << line;
        istringstream linestream(line);
        string item;
        getline(linestream, item, ',');
        stringstream pp(item);
        pp >> d.id;
        getline(linestream, item, ',');
        d.first_name = item;
        getline(linestream, item, ',');
        d.last_name = item;
        getline(linestream, item, ',');
        d.dob = item;
        getline(linestream, item, ',');
        d.nationality = item;
        getline(linestream, item, ',');
        d.ethnicity = item;
        getline(linestream, item, ',');
        d.gender = item;
        getline(linestream, item, ',');
        d.underlying_conditions = item;
        getline(linestream, item, ',');
        d.blood_group = item;
        getline(linestream, item, ',');
        stringstream ss(item);
        ss >> d.contact_no;
        getline(linestream, item, ',');
        d.email = item;
        getline(linestream, item, ',');
        d.physical_address = item;
        getline(linestream, item, ',');
        d.username = item;
        getline(linestream, item, ',');
        d.password = item;
        u[ind] = d;
        ind++;
    };


    if (x == 'a') {
        cout << "\n\n\t\tEnter the blood type group : ";
        cin >> blood_type;
        for (int i = 0; i < ind; i++) {
            if (blood_type == u[i].blood_group) {
                cout << "\n\tDONOR " << u[i].id << ", " << u[i].first_name << " " << u[i].last_name << " DONOR REPORT";
                cout << "\n==================================";
                cout << "\n+ Identification : " << u[i].id;
                cout << "\n+ First Name     : " << u[i].first_name;
                cout << "\n+ Last Name      : " << u[i].last_name;
                cout << "\n+ Date Of Birth  : " << u[i].dob;
                cout << "\n+ Nationality    : " << u[i].nationality;
                cout << "\n+ Ethnicity      : " << u[i].ethnicity;
                cout << "\n+ Gender         : " << u[i].gender;
                cout << "\n+ Underlying     : " << u[i].underlying_conditions;
                cout << "\n  Conditions";
                cout << "\n+ Blood Group    : " << u[i].blood_group;
                cout << "\n+ Contact Number : " << u[i].contact_no;
                cout << "\n+ Email          : " << u[i].email;
                cout << "\n+ Physical       : " << u[i].physical_address;
                cout << "\n  Adress";
                cout << "\n+ User Name      : " << u[i].username;
                cout << "\n+ Password       : " << u[i].password;
                cout << "\n==================================";
            }
        }
                cout << "\n\n\t\ta. CONITNUE SEARCHING\n\n";
                cout << "\t\tb. EXIT";
                cout << "\n\n\t\t Enter your option : ";
                cin >> x;
                while (x != 'a' && x != 'b') {
                    setcolor(0x0C);
                    cout << "\n\n\t\tInvalid input, Please try again : ";
                    setcolor(0x07);
                    cin >> x;
                }
                if (x == 'a') {
                    system("CLS");
                    donor_report();
                }
                if (x == 'b') {
                    return;
                }
    }
    if (x == 'b') {
        cout << "\n\n\t\tEnter the location : ";
        cin.ignore();
        getline(cin, location);
        for (int i = 0; i < ind; i++) {
            if (location == u[i].physical_address) {
                cout << "\n\tDONOR " << u[i].id << ", " << u[i].first_name << " " << u[i].last_name << " DONOR REPORT";
                cout << "\n==================================";
                cout << "\n+ Identification : " << u[i].id;
                cout << "\n+ First Name     : " << u[i].first_name;
                cout << "\n+ Last Name      : " << u[i].last_name;
                cout << "\n+ Date Of Birth  : " << u[i].dob;
                cout << "\n+ Nationality    : " << u[i].nationality;
                cout << "\n+ Ethnicity      : " << u[i].ethnicity;
                cout << "\n+ Gender         : " << u[i].gender;
                cout << "\n+ Underlying     : " << u[i].underlying_conditions;
                cout << "\n  Conditions";
                cout << "\n+ Blood Group    : " << u[i].blood_group;
                cout << "\n+ Contact Number : " << u[i].contact_no;
                cout << "\n+ Email          : " << u[i].email;
                cout << "\n+ Physical       : " << u[i].physical_address;
                cout << "\n  Adress";
                cout << "\n+ User Name      : " << u[i].username;
                cout << "\n+ Password       : " << u[i].password;
                cout << "\n==================================";
            }
        }
                cout << "\n\n\t\ta. CONTINUE SEARCHING\n\n";
                cout << "\t\tb. EXIT";
                cin >> x;
                while (x != 'a' && x != 'b') {
                    setcolor(0x0C);
                    cout << "\n\n\t\tInvalid input, Please try again : ";
                    setcolor(0x07);
                    cin >> x;
                }
                if (x == 'a') {
                    system("CLS");
                    donor_report();
                }
                if (x == 'b') {
                    return;
                }
            
        
    }
    if (x == 'c') {
        for (int i = 0; i < ind; i++) {
            cout << "\n\tDONOR " << u[i].id << ", " << u[i].first_name << " " << u[i].last_name << " DONOR REPORT";
            cout << "\n==================================";
            cout << "\n+ Identification : " << u[i].id;
            cout << "\n+ First Name     : " << u[i].first_name;
            cout << "\n+ Last Name      : " << u[i].last_name;
            cout << "\n+ Date Of Birth  : " << u[i].dob;
            cout << "\n+ Nationality    : " << u[i].nationality;
            cout << "\n+ Ethnicity      : " << u[i].ethnicity;
            cout << "\n+ Gender         : " << u[i].gender;
            cout << "\n+ Underlying     : " << u[i].underlying_conditions;
            cout << "\n  Conditions";
            cout << "\n+ Blood Group    : " << u[i].blood_group;
            cout << "\n+ Contact Number : " << u[i].contact_no;
            cout << "\n+ Email          : " << u[i].email;
            cout << "\n+ Physical       : " << u[i].physical_address;
            cout << "\n  Adress";
            cout << "\n+ User Name      : " << u[i].username;
            cout << "\n+ Password       : " << u[i].password;
            cout << "\n==================================";
        }
            cout << "\n\n\t\ta. CONTINUE SEARCHING\n\n";
            cout << "\t\tb. EXIT";
            cin >> x;
            while (x != 'a' && x != 'b') {
                setcolor(0x0C);
                cout << "\n\n\t\tInvalid input, Please try again : ";
                setcolor(0x07);
                cin >> x;
            }
            if (x == 'a') {
                system("CLS");
                donor_report();
            }
            if (x == 'b') {
                return;
            }
        
    }
    if (x == 'd') {
        return;
    }


}

void admin_screen() { //IR
    char x;
    cout << "\n\t\t     ADMIN PAGE\n\n\n";
    cout << "\t\ta. DONOR REPORTS\n\n";
    cout << "\t\tb. RECIPIENT REPORTS\n\n";
    cout << "\t\tc. UPDATE DONOR BLOOD TEST RESULTS\n\n";
    setcolor(0x0C);
    cout << "\t\t     d. BACK\n";
    setcolor(0x07);
    cout << "\n";
    cout << "\t\tEnter your option : ";
    cin >> x;// KB

    if (x == 'a') {
        system("CLS");
        donor_report();
        system("CLS");
        admin_screen();
    }
    if (x == 'b') {
        system("CLS");
        recipient_report();
        system("CLS");
        admin_screen();
    }
    if (x == 'c') {
        system("CLS");
        admin_update();
        system("CLS");
        admin_screen();
    }
    if (x == 'd') {
        return;
    }
    while (x != 'a' && x != 'b' && x != 'c' && x != 'd') {
        setcolor(0x0C);
        cout << "\n\t      Invalid input, Please try again : ";
        setcolor(0x07);
        cin >> x;
    }
}


void admin_login() { //IR
    char x;
    string admin_username, admin_userpassword;
    string username = "admin";
    string password = "password";

    cout << "\n\t\t      ADMIN LOGIN\n\n";
    cout << "\t\ta. LOGIN\n\n";
    setcolor(0x0C);
    cout << "\t\tb. BACK\n\n\n";
    setcolor(0x07);
    cout << "\t\tEnter your option : ";
    cin >> x; // KB

    int i;
    int Login_Attempt = 0;


    if (x == 'a') {

        cout << "\n\t\tEnter the Admin Username : ";
        cin >> admin_username;
        cout << "\n\t\tEnter the Admin Password : ";
        cin >> admin_userpassword;

        while (admin_username == username && admin_userpassword == password) {
            system("CLS");
            admin_screen();
            break;
        }
        while (admin_username != username || admin_userpassword != password) {
            while (Login_Attempt < 2) {
                Login_Attempt++;
                cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                cout << "\n\t\tAdmin Username : ";
                cin >> admin_username;
                cout << "\n\t\tAdmin Password : ";
                cin >> admin_userpassword;
                if (admin_username == username && admin_userpassword == password) {
                    system("CLS");
                    admin_screen();
                    break;
                }
            }
            while (Login_Attempt >= 2) {
                cout << "\n\t\tSorry, you have entered the incorrect password 3 times";
                cout << "\n\t\t======================================================\n";
                cout << "\n\t\tPlease press b to return to the menu : ";
                cin >> x;
                if (x == 'b') {
                    return;
                    while (x != 'b') {
                        setcolor(0x0C);
                        cout << "\n\t\tInvalid input, Please try again!";
                        setcolor(0x07);
                        cout << "\n\t\tPlease press b to return to the menu : ";
                        cin >> x;
                    }
                }
            }
        }
    }
    if (x == 'b') {
        return;
    }
}


void line(int n) { // decalring int n creating a line to underscore the title. // KB
    for (int i = 0; i < n; i++) { //i <66 // KB
        cout << "*"; //output - till 66 // KB
    }
}

void secondline(int n) { // decalring int n creating a line to underscore the title. // KB
    for (int i = 0; i < n; i++) { //i <66 // KB
        cout << "*"; //output - till 66 // KB
    } // KB
} // KB


void donor_search() { //IR
    char x;
    int y, i;
    string blood_type;
    string location;
    cout << "\n\t\t     Donor Search Menu\n";
    cout << "\n\n\t\ta. SEARCH BY BLOOD GROUP\n";
    cout << "\n";
    cout << "\t\tb. SEARCH BY LOCATION\n\n";
    setcolor(0x0C);
    cout << "\t\tc. BACK\n\n\n";
    setcolor(0x07);
    cout << "\t\tEnter your option : ";
    cin >> x;

    struct Donor u[10];
   
    Donor d; 

    ifstream myfile;
    myfile.open("donor.csv", ios::in); // IR

    string line;
    int ind=0;

    while (getline(myfile, line)) { //DONOR
        istringstream linestream(line);
        string item;
        getline(linestream, item, ',');
        stringstream pp(item);
        pp >> d.id;
        getline(linestream, item, ',');
        d.first_name = item;
        getline(linestream, item, ',');
        d.last_name = item;
        getline(linestream, item, ',');
        d.dob = item;
        getline(linestream, item, ',');
        d.nationality = item;
        getline(linestream, item, ',');
        d.ethnicity = item;
        getline(linestream, item, ',');
        d.gender = item;
        getline(linestream, item, ',');
        d.underlying_conditions = item;
        getline(linestream, item, ',');
        d.blood_group = item;
        getline(linestream, item, ',');
        stringstream ss(item);
        ss >> d.contact_no;
        getline(linestream, item, ',');
        d.email = item;
        getline(linestream, item, ',');
        d.physical_address = item;
        getline(linestream, item, ',');
        d.username = item;
        getline(linestream, item, ',');
        d.password = item;
        u[ind]= d;
        ind++;
    };
    
    while (x != 'a' && x != 'b' && x != 'c') {
        setcolor(0x0C);
        cout << "Invalid input, Please try again : ";
        setcolor(0x07);
        cin >> x;
    }
    if (x == 'a') {
        cout << "\n\n\t\tEnter the blood type group : ";
        cin >> blood_type;
        for (int i = 0; i <= ind; i++) {
            if (blood_type == u[i].blood_group) {
                setcolor(0x0A);
                cout << "\n\t\tID : " << u[i].id << "\n\t\tFirst Name : " << u[i].first_name << "\n\t\tLast Name : " << u[i].last_name << "\n\t\tBlood Group : " << u[i].blood_group << "\n\t\tPhysical Address : " << u[i].physical_address << endl;
                setcolor(0x07);
            }
                cout << "\n\n\t\t Enter 'a' to continue searching";
                cout << "\n\n\t\t Enter 'b' to go back";
                cout << "\n\n\n\t\t Enter your option : ";
                cin >> x;
                if (x == 'a') {
                    system("CLS");
                    donor_search();
                }
                if (x == 'b') {
                    return;
                }
                else {
                    while (x != 'a' && x != 'b') {
                        setcolor(0x0C);
                        cout << "\n\t      Invalid input, Please try again : "; // KB
                        setcolor(0x07);
                        cin >> x;
                    }
                }
            }  
        

    }
    if (x == 'b') {
        cout << "\n\n\t\tEnter the location : ";
        cin.ignore();
        getline(cin,location);
        for (int i = 0; i <= ind; i++) {
            if (location == u[i].physical_address) {
                setcolor(0x0A);
                cout << "\n\t\tID : " << u[i].id << "\n\t\tFirst Name : " << u[i].first_name << "\n\t\tLast Name : " << u[i].last_name << "\n\t\tBlood Group : " << u[i].blood_group << "\n\t\tPhysical Address : " << u[i].physical_address << endl;
                setcolor(0x07);
            }
                cout << "\n\n\t\t Enter 'a' to continue searching";
                cout << "\n\n\t\t Enter 'b' to go back";
                cout << "\n\n\n\t\t Enter your option : ";
                cin >> x;
                if (x == 'a') {
                    system("CLS");
                    donor_search();
                }
                if (x == 'b') {
                    return;
                }
                else {
                    while (x != 'a' && x != 'b') {
                        setcolor(0x0C);
                        cout << "\n\t      Invalid input, Please try again : ";
                        setcolor(0x07);
                        cin >> x;
                    }
                }
        }
    }
    if (x == 'c') {
        return;
    }
}


void donor_screen(struct Donor* d) {// KB
    char x;// KB
    cout << "\n\t\t     DONOR PAGE\n\n";
    cout << "\n\t    WHAT TO EXPECT WHEN YOU ARRIVE\n";
    cout << "\n   A blood donation can take up to 60 minutes (includes\n   registration, donation and recovery).\n   The blood is collected in a sterile bag, and time on\n   the bed can take about 5 to 10 minutes.\n   A unit of blood (around 470 ml) will be collected.\n   The needle is then removed and a bandage is applied.\n"; // KB
    cout << "\n   It's rare for a patient to require all of the blood \n   components at one time, so a blood donation is usually\n   separated into three parts for transfusion : red blood \n   cells, platelets and plasma. This means patients can be\n   transfused with only what they need, and your single\n   blooddonation can help save more than one patient."; // KB
    cout << "\n\n\n\t\t        MENU\n";
    cout << "\t\ta. UPDATE CONTACT DETAILS\n";
    cout << "\t\tb. BOOK A BLOOD DONATION\n\n";
    setcolor(0x0C);
    cout << "\t\tc. BACK\n";
    setcolor(0x07);
    cout << "\n";
    cout << "\t\tEnter your option : ";
    cin >> x;// KB
    if (x == 'a') {// KB
        system("CLS");
        update_contact_details(d);
        system("PAUSE");
        system("CLS");
        donor_screen(d);
    }
    if (x == 'b') {// KB
        system("CLS");
        booking(d->first_name, d->last_name, d->dob, d->underlying_conditions);
        system("CLS");
        donor_screen(d);
    }
    if (x == 'c') {// KB

        return;// KB

    }
    else { // KB
        while (x != 'a' && x != 'b' && x != 'c') {
            setcolor(0x0C);
            cout << "\n\t\tInvalid input, Please try again : ";
            setcolor(0x07);
            cin >> x;
        } // KB
    } // KB

}


void recipient_update_contact_details(struct Recipient* r) { //KB
    system("CLS");
    cout << "\n\n\t     UPDATE CONTACT DETAILS   \n" << "\n\t   ------------------------------";

    cout << "\n\n\t    Your current details are : ";  // shows current details
    setcolor(0x0A);
    cout << "\n\n\t    Patient Name   : " << r->patient_name << endl;
    cout << "\n\t    Hospital Name  : " << r->hospital_name << endl;
    cout << "\n\t    Contact Number : " << r->contact_no << endl;
    cout << "\n\t    Email          : " << r->email << endl;
    cout << "\n\t    Address        : " << r->physical_address << endl;
    setcolor(0x07);

    cout << "\n   Please enter your updated contact number : "; // KB // updating contact information
    cin >> (r)->contact_no;
    cout << "\n";
    cout << "\n   Please enter your updated email address : "; // KB
    cin >> (r)->email;
    cout << "\n";
    cout << "\n   Please enter your updated physcial address : "; // KB
    cin >> (r)->physical_address;

    {
        ifstream  stream3("recipient.csv");
        string line;
        ofstream stream4("recipientcopy.csv"); // cloning donor details into copy csv
        if (stream3 && stream4) {
            while (getline(stream3, line)) {
                stream4 << line << "\n";
            }
        }
        stream3.close();
        stream4.close();  // closing cloning
    }

    {
        ifstream  stream3("recipient.csv"); // re-opening files
        string line;
        ofstream stream4("recipientcopy.csv");
        int lineNumber = 0;
        int line_to_replace = 4; //This will replace 5th line of the cloned // i tired to figure out how to use findstring / delete line

        while (getline(stream3, line))
        {
            if (lineNumber == line_to_replace)
            {
                stream4 << (r)->contact_no << ',' << (r)->email << ',' << (r)->physical_address << ',' << r->id << ',' << r->hospital_name << ',' << r->blood_bank_name << ',' << r->patient_name << ',' << r->username << ',' << r->password << ',' << endl;
            }
            else
                stream4 << line << endl;
            lineNumber++;
        }

        stream3.close();
        stream4.close();

        setcolor(0x0C);
        cout << "\n\n\tThank you for updating your details\n\tReturning to main screen\n\n";
        setcolor(0x07);
        return;
    }
} // update details closed // you can find updated details in copy.csv line 5 only


void recipient_screen(struct Recipient* r) { //IR
    char x;
    cout << "\n\t\t      RECIPIENT SCREEN\n\n";
    cout << "\t\ta. CONTACT DETAILS/UPDATE\n"; 
    cout << "\t\tb. DONOR SEARCH MENU\n";
    setcolor(0x0C);
    cout << "\t\tc. BACK\n\n";
    setcolor(0x07);
    cout << "\t\tEnter your option : ";
    cin >> x;
    while ( x!= 'a' && x!= 'b' && x!= 'c') {
        setcolor(0x0C);
        cout << "\n\t\tInvalid input, Please try again : ";
        setcolor(0x07);
        cin >> x;
    }
    if (x == 'a'){
        system("CLS");
        recipient_update_contact_details(r);
        system("PAUSE");
        system("CLS");
        recipient_screen(r);
    }
    if (x == 'b') {
        system("CLS");
        donor_search();
        system("CLS");
        recipient_screen(r);
    }
    if (x == 'c') {
        return;
    }
}


void login_function() { //IR KB

    // KB
    char x;
    string user_name, user_password;

    cout << "\n\t\t      LOGIN\n\n"; // KB
    cout << "\t\ta. DONOR LOGIN\n\n";
    cout << "\t\tb. RECIPIENT LOGIN\n\n";// IR
    setcolor(0x0C);
    cout << "\t\tc. BACK\n\n"; // KB
    setcolor(0x07);
    cout << "\t\tEnter your option : ";
    cin >> x; // KB

    int i;
    int Login_Attempt = 0;

    while (x != 'a' && x != 'b' && x != 'c') {
        setcolor(0x0C);
        cout << "\n\t\tInvalid input, Please try again : "; // KB
        setcolor(0x07);
        cin >> x;
    }

    if (x == 'a') { // IR
        ifstream myfile;
        myfile.open("donor.csv", ios::in); // IR

        struct Donor u[10]; //DONOR
        Donor d; //DONOR

        string line;
        int ind = 0;

        while (getline(myfile, line)) { //DONOR
            istringstream linestream(line);
            string item;
            getline(linestream, item, ',');
            stringstream pp(item);
            pp >> d.id;
            getline(linestream, item, ',');
            d.first_name = item;
            getline(linestream, item, ',');
            d.last_name = item;
            getline(linestream, item, ',');
            d.dob = item;
            getline(linestream, item, ',');
            d.nationality = item;
            getline(linestream, item, ',');
            d.ethnicity = item;
            getline(linestream, item, ',');
            d.gender = item;
            getline(linestream, item, ',');
            d.underlying_conditions = item;
            getline(linestream, item, ',');
            d.blood_group = item;
            getline(linestream, item, ',');
            stringstream ss(item);
            ss >> d.contact_no;
            getline(linestream, item, ',');
            d.email = item;
            getline(linestream, item, ',');
            d.physical_address = item;
            getline(linestream, item, ',');
            d.username = item;
            getline(linestream, item, ',');
            d.password = item;
            u[ind] = d;
            ind++;
        };

        cout << "\n\t\tEnter your Username : ";
        cin >> user_name;
        cout << "\n\t\tEnter your Password : ";
        cin >> user_password;

        for (i = 0; i < ind; i++) {
            if (user_name == u[i].username && user_password == u[i].password) {
                system("CLS");
                donor_screen(u);
                system("CLS");
                login_function();
            }
            else if (user_name != u[i].username || user_password != u[i].password) {
                while (Login_Attempt < 2) {
                    Login_Attempt++;
                    cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                    cout << "\n\t\tUsername : ";
                    cin >> user_name;
                    cout << "\n\t\tPassword : ";
                    cin >> user_password;
                    if (user_name == u[i].username && user_password == u[i].password) {
                        system("CLS");
                        donor_screen(u);
                        system("CLS");
                        login_function();
                    }
                }
                while (Login_Attempt >= 2) {
                    cout << "\n\t\tSorry, you have entered the incorrect password 3 times";
                    cout << "\n\t\t======================================================\n";
                    cout << "\n\t\tPlease press b to return to the menu : ";
                    cin >> x;
                    if (x == 'b') {
                        return;
                        while (x != 'b') {
                            setcolor(0x0C);
                            cout << "\n\t\tInvalid input, Please try again!";
                            setcolor(0x07);
                            cout << "\n\t\tPlease press b to return to the menu : ";
                            cin >> x;
                        }
                    }
                }
            }
        } 
        myfile.close();
    }

    if (x == 'b') {
        ifstream myfile;
        myfile.open("recipient.csv", ios::in);

        struct Recipient s[10]; //RECIPIENT
        Recipient r; //RECIPIENT

        string vine;
        int ind = 0;

        while (getline(myfile, vine)) { //RECIPIENT
            istringstream linestream(vine);
            string box;
            getline(linestream, box, ',');
            stringstream pp(box);
            pp >> r.id;
            getline(linestream, box, ',');
            r.hospital_name = box;
            getline(linestream, box, ',');
            r.blood_bank_name = box;
            getline(linestream, box, ',');
            r.patient_name = box;
            getline(linestream, box, ',');
            stringstream ss(box);
            ss >> r.contact_no;
            getline(linestream, box, ',');
            r.email = box;
            getline(linestream, box, ',');
            r.physical_address = box;
            getline(linestream, box, ',');
            r.username = box;
            getline(linestream, box, ',');
            r.password = box;
            s[ind] = r;
            ind++;
        };

        cout << "\n\t\tEnter your Username : ";
        cin >> user_name;
        cout << "\n\t\tEnter your Password : ";
        cin >> user_password;

        for (i = 0; i < ind; i++) {
            if (user_name == s[i].username && user_password == s[i].password) {
                system("CLS");
                recipient_screen(s);
                system("CLS");
                login_function();
            }
            else if (user_name != s[i].username || user_password != s[i].password) {
                while (Login_Attempt < 2) {
                    Login_Attempt++;
                    cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                    cout << "\n\t\tUsername : ";
                    cin >> user_name;
                    cout << "\n\t\tPassword : ";
                    cin >> user_password;
                    if (user_name == s[i].username && user_password == s[i].password) {
                        system("CLS");
                        recipient_screen(s);
                        system("CLS");
                        login_function();
                    }
                }
                while (Login_Attempt >= 2) {
                    cout << "\n\t\tSorry, you have entered the incorrect password 3 times";
                    cout << "\n\t\t======================================================\n";
                    cout << "\n\t\tPlease press b to return to the menu : ";
                    cin >> x;
                    if (x == 'b') {
                        return;
                        while (x != 'b') {
                            setcolor(0x0C);
                            cout << "\n\t\tInvalid input, Please try again!";
                            setcolor(0x07);
                            cout << "\n\t\tPlease press b to return to the menu : ";
                            cin >> x;
                        }
                    }
                }
            }
        }
        myfile.close();
    }

    if (x == 'c') {
        return;
    }
}


void register_function() {// KB
    char x;
    cout << "\n\t\t     REGISTER\n"; // KB
    cout << "\n"; // KB
    cout << "\n"; // KB
    cout << "\t\ta. REGISTER AS A DONOR\n"; // KB          
    cout << "\n"; // KB
    cout << "\t\tb. REGISTER AS A RECIPIENT\n"; // KB
    setcolor(0x0C); // KB
    cout << "\n"; // KB
    cout << "\t\tc. BACK\n"; // KB
    setcolor(0x07); // KB
    cout << "\n"; // KB
    cout << "\t\tEnter your option : ";  // KB
    cin >> x; // KB

    while (x != 'a' && x != 'b' && x != 'c') {
        setcolor(0x0C);
        cout << "\n\t\tInvalid input try again : "; // KB
        setcolor(0x07);
        cin >> x;
    }

    if (x == 'a') { // KB
        struct Donor u;
        struct Donor* ptr = &u;
        input_data(ptr);
        cout << "\n";
        cout << "\n";
        setcolor(0x0C);
        cout << " Donor registration complete return to main menu (c) : ";
        setcolor(0x07);
        cin >> x;// KB
    }

    if (x == 'b') {// KB
        struct Recipient s;
        struct Recipient* ptr = &s;
        input_data(ptr);
        cout << "\n";
        cout << "\n";
        setcolor(0x0C);
        cout << " Recipient registration complete return to main menu (c) : ";
        setcolor(0x07);
        cin >> x;
    }// KB

    if (x == 'c') {// KB
        return;
    }
}


void about_function() {// KB
    char x;
    cout << "\n";
    cout << "\n\t\t       ABOUT\n";// KB
    cout << "\n";// KB
    cout << "\n\t\t Whats in your blood?";
    cout << "\n";
    cout << "\n   Blood is made up of four main components : red blood\n   cells, white blood cells, plateletsand, the protein\n   : rich liquid that suspends them all, plasma."; // KB
    cout << "\n";
    cout << "\n   It's rare for a patient to require all of the blood \n   components at one time, so a blood donation is usually\n   separated into three parts for transfusion : red blood \n   cells, platelets and plasma. This means patients can be\n   transfused with only what they need, and your single\n   blooddonation can help save more than one patient."; // KB
    cout << "\n";
    cout << "\n   Because there's no substitute for these lifesaving \n   components, patients around the country rely on blood\n   donors to help save their lives."; // KB

    cout << "\n";// KB
    cout << "\n";
    setcolor(0x0C);
    cout << "\t\t     b. BACK\n";// KB
    setcolor(0x07);
    cout << "\n";
    cout << "\t\tEnter your option : ";// KB
    cin >> x;
    if (x == 'b') {
        return; // re-calls menu function // KB
    }
    else {

        cout << "\n";
        cout << "\n";
        setcolor(0x0C);
        cout << "\t\t     b. BACK\n";
        setcolor(0x07);
        cout << "\n";
        cout << "\t\tEnter your option : ";
        cin >> x;
        if (x == 'b') {
            return; // re-calls menu function // KB
        }
        else {
            while (x != 'b') { // while x doesnt equal the character b it will loop // KB
                cout << "\n\t      Invalid input, Please try again : ";
                cin >> x;
            }
        }
    }
}



int menu() { // KB
    int option; // KB
    char x; // KB
    setcolor(0x07);  // Initial color for program // KB
    //struct Donor data_from_file; // read data from file
    //struct Donor* file_data = data_from_file; //passing data from file into pointer (file data)
    while (true) { // KB
        system("CLS"); // KB
        cout << "\n"; // KB
        cout << "   Application made by Kallum Best and Izzy Robertson \n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        setcolor(0x0C); // KB
        cout << "\t\t       NEW ZEALAND\n"; // KB
        cout << "    ____  _                 _ ____              _ \n"; // KB
        cout << "   |  _ \\\| |               | |  _ \\\            | | \n"; // KB
        cout << "   | |_) | | ___   ___   __| | |_) | __ _ _ __ | | __ \n"; // KB
        cout << "   |  _ <| |/ _  \\\/ _ \\\ / _` |  _ < / _` | '_ \\\| |/ / \n"; // KB
        cout << "   | |_) | | (_) | (_) | (_| | |_) | (_| | | | |   < \n"; // KB
        cout << "   |____/|_|\\\___ /\\\___/ \\\__,_|____/ \\\__,_|_| |_|_|\\\_\\\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        setcolor(0x07); // KB
        cout << "\t\t       0800 448 325\n"; // KB
        cout << "\t\tcontact@nzbloodbank.co.nz\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     1. ABOUT \n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     2. REGISTER\n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     3. LOGIN\n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     4. ADMIN LOGIN \n";
        cout << "\n"; // KB
        setcolor(0x0C);
        cout << "\t\t     5. EXIT \n";
        setcolor(0x07);
        cout << "\n";
        cout << "\n";
        cout << "\t\t  Enter your option : ";


        cin >> option; // KB

        system("CLS"); // KB


        switch (option) // KB
        {

        case 1: { // KB
            about_function();
            break;
        } // KB
        case 2: {
                      register_function();
                          break;
                  }



        case 3: { // KB
            login_function();
            break;
        } // KB






        case 4: { // KB
            admin_login();
            break;


        } // KB


        case 5: { // KB
            cout << "\n\n"; // KB
            setcolor(0x0C); // KB
            cout << "\n\t\t   GOODBYE"; // KB
            setcolor(0x07); // KB
            cout << "\n\n\n\n"; // KB
            return 0; // KB
        } // KB //case5


              } // KB

        } // KB
    } // KB



int main() // KB
{ // KB


    menu(); // KB

    return 0;
     
} // KB
