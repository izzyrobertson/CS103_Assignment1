// bloodBank.cpp : This file contains the 'main' function. Program execution begins and ends there.

#pragma once
#ifndef NOMINMAX // KB
#define NOMINMAX // KB
#endif // KB
#include <iostream> // KB
#include <windows.h> // KB
#include<stdlib.h> // KB
#include <string> //KB
#include <fstream>
#include <sstream>//KB

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
    // add id
    //constructor
   /*Donor(string f = "", ) {
        first_name = f;
    }*/
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

}; // KB



void setcolor(unsigned char color) // KB
{ // KB
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // KB
} // KB


//
void update_contact_details(struct Donor* d) {
    cout << d->email;
    system("PAUSE");

        system("CLS");
        cout << "\n\n\t     UPDATE CONTACT DETAILS   \n" << "\n\t   ------------------------------\n\n";
        cout << "\n\n\t    Your details are as follows : \n";
        setcolor(0x0A);
       /* cout << "\n\t\t    " << first_name << " " << last_name << "\n\t\t    " << contact_no << "\n\t\t    " << email << "\n\t\t    " << physical_address << endl;*/
        setcolor(0x07);
        cout << "\n\n\t    1. Update contact details\n";
        setcolor(0x0C);
        cout << "\n\n\t            2. BACK\n";
        setcolor(0x07);
        int choice;// KB
        cin >> choice;
        switch (choice)// KB
        {
        case 1: {
                 ofstream myfile;
                 fstream mymyfile;
                 //myfile.open("donor.csv", ios::in|ios::out);// KB // testing
                 myfile.open("donor.csv", ios::in);// KB
                 mymyfile.open("temp.csv", ios::out);//write
                 string line;
            /*     while (getline(cin, line)) {
                     if ()*/
                     string update_email, update_address;
                     int update_no;
                     cout << "\n   Please update your email : "; // KB
                     cin >> update_email;
                     d->email = update_email;
                     cout << "\n   Please update your contact number : "; // KB
                     cin >> update_no;
                     d->contact_no = update_no;
                     cout << "\n   Please update your address : "; // KB
                     cin >> update_address;
                     d->physical_address = update_address;
                 //}
                 //if statement to confirm
                 myfile << (d)->first_name << ',' << (d)->last_name << ',' << (d)->dob << ',' << (d)->nationality << ',' << (d)->ethnicity << ',' << (d)->gender << ',' << (d)->underlying_conditions << ',' << (d)->blood_group << ',' << (d)->contact_no << ',' << (d)->email << ',' << (d)->physical_address << ',' << (d)->username << ',' << (d)->password << ',' << endl;
                 system("PAUSE");
                 myfile.close();
            break;
        }
        case 2: {
            break;
        }
        }
        
        
}





void booking(string first_name, string last_name, string dob, string underlying_conditions){// KB
    ofstream myfile;
    myfile.open("booking.csv", ios::app);// KB

    system("CLS");// KB

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



//struct Date { // KB
//    string monday, tuesday, wednesday, thursday, friday; // KB
//};
//
//
//
//struct Donor { // KB
//    string first_name; // KB
//    string last_name; // KB
//    string dob; // KB
//    string nationality; // KB
//    string ethnicity; // KB
//    string gender; // KB
//    string underlying_conditions; // KB
//    string blood_group; // KB
//    int contact_no; // KB
//    string email; // KB
//    string physical_address; // KB
//    string username; // KB
//    string password;  // KB
//    // add id
//    //constructor
//   /*Donor(string f = "", ) {
//        first_name = f;
//    }*/
//}; // KB

struct Donor* input_data(struct Donor* u) { // KB
    ofstream myfile("donor.csv", ios::app); //KB
    //for (int i = 0; i < n; i++) {  // KB
    cin.ignore(); // KB
    cout << "\n   Please enter your first name : "; // KB
    getline(cin, (u)->first_name); // KB
    /*cout << (u)->first_name;*/
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
    myfile << (u)->first_name << ',' << (u)->last_name << ',' << (u)->dob << ',' << (u)->nationality << ',' << (u)->ethnicity << ',' << (u)->gender << ',' << (u)->underlying_conditions << ',' << (u)->blood_group << ',' << (u)->contact_no << ',' << (u)->email << ',' << (u)->physical_address << ',' << (u)->username << ',' << (u)->password << ',' << endl;
    myfile.close();


    return(u); // KB

} // KB



//struct Recipient { // KB
//    string hospital_name; // KB
//    string blood_bank_name; // KB
//    string patient_name; // KB  
//    int contact_no; // KB
//    string email; // KB
//    string physical_address; // KB
//    string username; // KB
//    string password;  // KB
//
//}; // KB

struct Recipient* input_data(struct Recipient* s) { // KB
    ofstream myfile("recipient.csv", ios::app); //KB
    //for (int i = 0; i < n; i++) {  // KB
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
    myfile << (s)->hospital_name << ',' << (s)->blood_bank_name << ',' << (s)->patient_name << ',' << (s)->contact_no << ',' << (s)->email << ',' << (s)->physical_address << ',' << (s)->username << ',' << (s)->password << ',' << endl;
    myfile.close();


    return(s); // KB

} // KB




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
                cout << "\n";
                cout << "\t      Invalid input try again";
                cout << "\n";
                cin >> x;
            }
        }
    }
}



void register_function() {// KB
    char x;
    cout << "\n\t\t     REGISTER\n"; // KB
    cout << "\n"; // KB
    cout << "\n"; // KB
    cout << "\t       a. REGISTER AS A DONOR\n"; // KB          
    cout << "\n"; // KB
    cout << "\n"; // KB
    cout << "\t     b. REGISTER AS A RECIPIENT\n"; // KB
    setcolor(0x0C); // KB
    cout << "\n"; // KB
    cout << "\n"; // KB
    cout << "\t\t     c. BACK\n"; // KB
    setcolor(0x07); // KB
    cout << "\n"; // KB
    cout << "\t\tEnter your option : ";  // KB
    cin >> x; // KB

    while (x != 'a' && x != 'b' && x != 'c') {
        cout << "\n";
        cout << "\t      Invalid input try again"; // KB
        cout << "\n";
        cin >> x;
    }
    /// <summary>
    /// 
    /// </summary>

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

    else if (x == 'b') {// KB
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


    else if (x == 'c') {// KB
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
    cout << "\t      a. UPDATE CONTACT DETAILS\n";
    cout << "\t      b. BOOK A BLOOD DONATION\n\n";
    setcolor(0x0C);
    cout << "\t\t     c. BACK\n";
    setcolor(0x07);
    cout << "\n";
    cout << "\t\tEnter your option : ";
    cin >> x;// KB
    if (x == 'a') {// KB
        cout << d->first_name;
        update_contact_details(d);
        system("PAUSE");

    }
    if (x == 'b') {// KB
        booking(d->first_name,d->last_name,d->dob,d->underlying_conditions);
    } 
    if (x == 'c') {// KB

        return;// KB

    }
    else { // KB
        while (x != 'a' && x != 'b' && x != 'c') {
            cout << "\n";
            cout << "\t      Invalid input try again"; // KB
            cout << "\n";
            cin >> x;
        } // KB
    } // KB

}



    void login_function() {

    // KB
    string user_name, user_password; // IR
    int Login_Attempt = 0; //IR
    char x;
    cout << "\n\t\t      LOGIN\n\n"; // KB
    cout << "\t\ta. DONOR LOGIN\n\n";
    cout << "\t\tb. RECIPIENT LOGIN\n\n";// IR
    setcolor(0x0C);
    cout << "\t\tc. BACK\n\n"; // KB

    setcolor(0x07);
    cout << "\t\tEnter your option : ";

    cin >> x; // KB

    struct Donor u; //DONOR
    Donor* d = &u; //DONOR

    struct Recipient s; //RECIPIENT
    Recipient* r = &s; //RECIPIENT



    if (x == 'a') { // IR
        ifstream myfile;
        myfile.open("donor.csv", ios::in); // IR

        string line;

        while (getline(myfile, line)) { //DONOR
            //cout << line;
            istringstream linestream(line);
            string item;
            getline(linestream, item, ',');
            d->first_name = item;
            getline(linestream, item, ',');
            d->last_name = item;
            getline(linestream, item, ',');
            d->dob = item;
            getline(linestream, item, ',');
            d->nationality = item;
            getline(linestream, item, ',');
            d->ethnicity = item;
            getline(linestream, item, ',');
            d->gender = item;
            getline(linestream, item, ',');
            d->underlying_conditions = item;
            getline(linestream, item, ',');
            d->blood_group = item;
            getline(linestream, item, ',');
            stringstream ss(item);
            ss >> d->contact_no;
            getline(linestream, item, ',');
            d->email = item;
            getline(linestream, item, ',');
            d->physical_address = item;
            getline(linestream, item, ',');
            d->username = item;
            getline(linestream, item, ',');
            d->password = item;
        };








        //cout << r->username << endl;
        //cout << r->password << endl;

        cout << "\n\t\tEnter your Username : ";
        cin >> user_name;
        cout << "\n\t\tEnter your Password : ";
        cin >> user_password;

        if (user_name == d->username && user_password == d->password) {
            system("CLS");
            donor_screen(d);
        }
        else if (user_name != d->username || user_password != d->password) {
            while (Login_Attempt < 2) {
                Login_Attempt++;
                cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                cout << "\n\t\tUsername : ";
                cin >> user_name;
                cout << "\n\t\tPassword : ";
                cin >> user_password;
                if (user_name == d->username && user_password == d->password) {
                    system("CLS");
                    donor_screen(d);
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
                        cout << "\n\t\tInvalid input, Please try again!";
                        cout << "\n\t\tPlease press b to return to the menu : ";
                        cin >> x;
                    }
                }
            }
        }

    }

    if (x == 'b') {
        cout << "not working yet";
        cin >> x;
    }
    if (x == 'c') {
        return;
    }

}






void admin_login() {

    cout << "Hello stinky";

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

//<<<<<<< HEAD
void donor_search() {
    char x;
    int y, i;
    string blood_type;
    string location;
    cout << "\n\t\tDonor Search Menu\n";
    cout << "\n\n\t\ta. SEARCH BY BLOOD GROUP\n";
    cout << "\n";
    cout << "\t\tb. SEARCH BY LOCATION\n";
    cout << "\n";
    cout << "\t\tc. BACK\n";
    cout << "\n";
    cout << "\n";
    cout << "\t\tEnter your option : ";
    cin >> x;

    struct Donor u[10]; //DONOR
    //struct Donor don[10];
   
    //struct Donor* ptr = &u; //DONOR
    Donor d; //DONOR

    ifstream myfile;
    myfile.open("donor.csv", ios::in); // IR
    //myfile.open("recipient.csv", ios::in);

    string line;
    int ind=0;

    while (getline(myfile, line)) { //DONOR
        //cout << line;
        istringstream linestream(line);
        string item;
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
    
    /*if (x != 'a' && x != 'b' && x != 'c') {
        cout << "\t\n\n\n      Invalid input try again";
        cout << "\n";
        cin >> x;
    }*/
    if (x == 'a') {
        cout << "\n\n\t\tEnter the blood type group : ";
        cin >> blood_type;
        for (int i = 0; i < 4; i++) {
            if (blood_type == u[i].blood_group) {
                cout << "\n First Name : " << u[i].first_name << "\n Last Name : " << u[i].last_name << "\n Blood Group : " << u[i].blood_group << "\n Physical Address : " << u[i].physical_address << endl;
                cout << "\n\n\t\t Enter 'a' to search again, else to exit to menu : ";
                cin >> x;
                if (x == 'a') {
                    system("CLS");
                    donor_search();
                }
            }  
        }

    }
    if (x == 'b') {
        cout << "\n\n\t\tEnter the location : ";
        cin.ignore();
        getline(cin,location);
        for (int i = 0; i < 4; i++) {
            if (location == u[i].physical_address) {
                cout << "\n First Name : " << u[i].first_name << "\n Last Name : " << u[i].last_name << "\n Blood Group : " << u[i].blood_group << "\n Physical Address : " << u[i].physical_address << endl;
                cout << "\n\n\t\t Enter 'a' to search again, , else to exit to menu : ";
                cin >> x;
                if (x == 'a') {
                    system("CLS");
                    donor_search();
                    while (x != 'a') {
                        cout << "\n\n\t\tInvalid input, please try again : ";
                        cin >> x;
                    }
                }
            }
        }
    }
    if (x == 'c') {
        system("CLS");
        return;
    }
}

void donor_screen() {
    char x;
    cout << "\n\t\tDONOR SCREEN\n";
    cout << "\n\n\t\ta. CONTACT DETAILS/UPDATE\n";
    cout << "\n"; 
    cout << "\t\tb. BOOK A DONATION\n";
    cout << "\n";
    cout << "\t\tc. BACK\n";
    cout << "\n";
    cout << "\n";
    cout << "\t\t  Enter your option : ";
    cin >> x;
    if (x == 'a') {
        system("CLS");
        cout << "contact detail";
        cin >> x;
    }
    if (x == 'b') {
        system("CLS");
        cout << "book donation";
        cin >> x;
    }
    if (x == 'c') {
        system("CLS");
        return;
    }
    else if (x != 'a' && x != 'b' && x != 'c') {
        cout << "\n\n\t      Invalid input try again";
        cout << "\n";
        cin >> x;
    }
}
//=======



//>>>>>>> 1faf7e833d4703e82e36acd0d536a39aaa39c21c



void recipient_screen() {
    char x;
    cout << "\n\t\tRECIPIENT SCREEN\n";
    cout << "\n\n\t\ta. CONTACT DETAILS/UPDATE\n";
    cout << "\n"; 
    cout << "\t\tb. DONOR SEARCH MENU\n";
    cout << "\n";
    cout << "\t\tc. back\n";
    cout << "\n";
    cout << "\n";
    cout << "\t\t  Enter your option : ";
    cin >> x;
    if (x == 'a'){
        system("CLS");
        cout << "contact detail";
        cin >> x;
    }
    if (x == 'b') {
        system("CLS");
        donor_search();
    }
    if (x == 'c') {
        system("CLS");
        return;
    }
    else if ( x!= 'a' && x!= 'b' && x!= 'c') {
        cout << "\n\n\t      Invalid input try again";
        cout << "\n";
        cin >> x;
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
        cout << "\t\t     2. LOGIN\n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     3. REGISTER\n"; // KB
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



<<<<<<< HEAD
        case 2: { // KB

            cout << "\n\t\t      LOGIN\n\n"; // KB
            cout << "\t\ta. DONOR LOGIN\n\n";
            cout << "\t\tb. RECIPIENT LOGIN\n\n";// IR
            setcolor(0x0C);
            cout << "\t\tb. BACK\n\n"; // KB
            setcolor(0x07);
            cout << "\t\tEnter your option : ";
            cin >> x; // KB

            struct Donor u; //DONOR
            //struct Donor* ptr = &u; //DONOR
            Donor *d=&u; //DONOR

            struct Recipient s; //RECIPIENT
            //struct Recipient* ptr = &s; //RECIPIENT
            Recipient *r=&s; //RECIPIENT

            int i;
            int Login_Attempt = 0;

            if (x == 'a') { // IR
                ifstream myfile;
                myfile.open("donor.csv", ios::in); // IR
                //myfile.open("recipient.csv", ios::in);
               
                string line;

                while (getline(myfile, line)) { //DONOR
                    //cout << line;
                    istringstream linestream(line);
                    string item;
                    getline(linestream, item, ',');
                    d->first_name = item;
                    getline(linestream, item, ',');
                    d->last_name = item;
                    getline(linestream, item, ',');
                    d->dob = item;
                    getline(linestream, item, ',');
                    d->nationality = item;
                    getline(linestream, item, ',');
                    d->ethnicity = item;
                    getline(linestream, item, ',');
                    d->gender = item;
                    getline(linestream, item, ',');
                    d->underlying_conditions = item;
                    getline(linestream, item, ',');
                    d->blood_group = item;
                    getline(linestream, item, ',');
                    stringstream ss(item);
                    ss >> d->contact_no;
                    getline(linestream, item, ',');
                    d->email = item;
                    getline(linestream, item, ',');
                    d->physical_address = item;
                    getline(linestream, item, ',');
                    d->username = item;
                    getline(linestream, item, ',');
                    d->password = item;
                };

                /*while (getline(myfile, vine)) { //RECIPIENT
                    //cout << line;
                    istringstream linestream(vine);
                    string box;
                    getline(linestream, box, ',');
                    r->hospital_name= box;
                    getline(linestream, box, ',');
                    r->blood_bank_name = box;
                    getline(linestream, box, ',');
                    r->patient_name = box;
                    getline(linestream, box, ',');
                    stringstream ss(box);
                    ss >> r->contact_no;
                    getline(linestream, box, ',');
                    r->email = box;
                    getline(linestream, box, ',');
                    r->physical_address = box;
                    getline(linestream, box, ',');
                    r->username = box;
                    getline(linestream, box, ',');
                    r->password = box;
                }; */
             
                    cout << d->username << endl;
                    cout << d->password << endl;

                    //cout << r->username << endl;
                    //cout << r->password << endl;
              
             cout << "\n\t\tEnter your Username : ";
             cin >> user_name;
             cout << "\n\t\tEnter your Password : ";
             cin >> user_password;

             if (user_name == d->username && user_password == d->password) {
                 system("CLS");
                 donor_screen();
             }
             else if (user_name != d->username || user_password != d->password) {
                 while (Login_Attempt < 2) {
                     Login_Attempt++;
                     cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                     cout << "\n\t\tUsername : ";
                     cin >> user_name;
                     cout << "\n\t\tPassword : ";
                     cin >> user_password;
                     if (user_name == d->username && user_password == d->password) {
                         system("CLS");
                         donor_screen();
                     }
                 }
                 while (Login_Attempt >= 2) {
                     cout << "\n\t\tSorry, you have entered the incorrect password 3 times";
                     cout << "\n\t\t======================================================\n";
                     cout << "\n\t\tPlease press b to return to the menu : ";
                     cin >> x;
                     if (x == 'b') {
                         menu();
                         while (x != 'b') {
                             cout << "\n\t\tInvalid input, Please try again!";
                             cout << "\n\t\tPlease press b to return to the menu : ";
                             cin >> x;
                         }
                     }
                 }
             } 
             //myfile.close();
            } // case close IR
            //break;
            if (x == 'b') {
                ifstream myfile;
                myfile.open("recipient.csv", ios::in);

                string vine;

                while (getline(myfile, vine)) { //RECIPIENT
                    //cout << line;
                    istringstream linestream(vine);
                    string box;
                    getline(linestream, box, ',');
                    r->hospital_name = box;
                    getline(linestream, box, ',');
                    r->blood_bank_name = box;
                    getline(linestream, box, ',');
                    r->patient_name = box;
                    getline(linestream, box, ',');
                    stringstream ss(box);
                    ss >> r->contact_no;
                    getline(linestream, box, ',');
                    r->email = box;
                    getline(linestream, box, ',');
                    r->physical_address = box;
                    getline(linestream, box, ',');
                    r->username = box;
                    getline(linestream, box, ',');
                    r->password = box;
                }; 

                cout << r->username << endl;
                cout << r->password << endl;

                cout << "\n\t\tEnter your Username : ";
                cin >> user_name;
                cout << "\n\t\tEnter your Password : ";
                cin >> user_password;

                if (user_name == r->username && user_password == r->password) {
                    system("CLS");
                    recipient_screen();
                }
                else if (user_name != r->username || user_password != r->password) {
                    while (Login_Attempt < 2) {
                        Login_Attempt++;
                        cout << "\n\t\tSorry, you have entered the incorrect Username or Password, Please try again!\n";
                        cout << "\n\t\tUsername : ";
                        cin >> user_name;
                        cout << "\n\t\tPassword : ";
                        cin >> user_password;
                        if (user_name == r->username && user_password == r->password) {
                            system("CLS");
                            donor_screen();
                        }
                    }
                    while (Login_Attempt >= 2) {
                        cout << "\n\t\tSorry, you have entered the incorrect password 3 times";
                        cout << "\n\t\t======================================================\n";
                        cout << "\n\t\tPlease press b to return to the menu : ";
                        cin >> x;
                        if (x == 'b') {
                            menu();
                            while (x != 'b') {
                                cout << "\n\t\tInvalid input, Please try again!";
                                cout << "\n\t\tPlease press b to return to the menu : ";
                                cin >> x;
                            }
                        }
                    }
                }
            }
=======
        case 2: {
            login_function();
>>>>>>> 1faf7e833d4703e82e36acd0d536a39aaa39c21c
            break;
        }
           
        
       
        case 3: { // KB
            register_function();
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
     
    //Izzy's comment
} // KB
