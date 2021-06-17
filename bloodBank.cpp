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

using namespace std; // KB

void setcolor(unsigned char color) // KB
{ // KB
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // KB
} // KB



struct Date {
    string monday, tuesday, wednesday, thursday, friday;
};

struct Date* input_data(struct Date* b) {
    ofstream myfile;
    myfile.open("booking.csv", ios::app);

    system("CLS");
    cout << "\n";
    cout << "\n\t   Choose the Day for Appointment\n";
    cout << "\n\t   ------------------------------\n\n";
    cout << "\n";

    cout << "\n\t   1. Monday 12:00am - 2:00pm \n";
    cout << "\n\t   2. Tuesday 12:00am - 2:00pm \n";
    cout << "\n\t   3. Wednesday 12:00am - 2:00pm \n";
    cout << "\n\t   4. Thursday 12:00am - 2:00pm \n";
    cout << "\n\t   5. Friday 12:00am - 2:00pm \n";
    cout << "\n";
    setcolor(0x0C);
    cout << "\n\t           6. back\n";
    setcolor(0x07);
    int choice;

    cout << "\n\n\t  Select your option : (1-5) ";
    cin >> choice;
   

    switch (choice)
    {
    case 1: { 
        setcolor(0x0A);
        cout << "\n\n\t  Monday booking confirmed\n\n";
        setcolor(0x07);
        string mes = "Monday 12:00am - 2 : 00pm"; //phase 2 line would read if file already has booking cout<<"Booking already taken" if free it will write to file.
        myfile << mes << endl;
        cout << "\t";
        system("PAUSE");
        break;
    }
    case 2: {
        setcolor(0x0A);
        cout << "\n\n\t  Tuesday booking confirmed\n\n";
        setcolor(0x07);
        string mes = "Tuesday 12:00am - 2 : 00pm";
        myfile << mes << endl;
        cout << "\t";
        system("PAUSE");
        break;
    }
    case 3: {
        setcolor(0x0A);
        cout << "\n\n\t  Wednesday booking confirmed\n\n";
        setcolor(0x07);
        string mes = "Wednesday 12:00am - 2 : 00pm";
        myfile << mes << endl;
        cout << "\t";
        system("PAUSE");
        break;
    }
    case 4: {
        setcolor(0x0A);
        cout << "\n\n\t  Thursday booking confirmed\n\n";
        setcolor(0x07);
        string mes = "Thursday 12:00am - 2 : 00pm";
        myfile << mes << endl;
        cout << "\t";
        system("PAUSE");
        break;
    }
    case 5: {
        setcolor(0x0A);
        cout << "\n\n\t  Friday booking confirmed\n\n";
        setcolor(0x07);
        string mes = "Friday 12:00am - 2 : 00pm";
        myfile << mes << endl;
        cout << "\t";
        system("PAUSE");
        break;
    }
    case 6: {
        /*void donor_screen()*/
    }
          // myfile << (b)->monday << ',' << (b)->tuesday << ',' << (b)->wednesday << ',' << (b)->thursday << ',' << (b)->friday << endl;
          myfile.close();
    }
    return(b);
}

struct Donor { // KB
    string first_name; // KB
    string last_name; // KB
    string dob; // KB
    string nationality; // KB
    string ethnicity; // KB
    string gender; // KB
    string underlying_conditions; // KB
    string blood_group; // KB
    int contact_no; // KB
    string email; // KB
    string physical_address; // KB
    string username; // KB
    string password;  // KB

    //constructor
   /*Donor(string f = "", ) {
        first_name = f;
    }*/
}; // KB

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








int main_screen() { // KB
    int option; // KB
    char x; // KB
    setcolor(0x07);  // Initial color for program // KB
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
        cout << "\t\t     5. EXIT \n"; 
        cout << "\n"; 
        cout << "\n"; 
        cout << "\t\t  Enter your option : "; 
      
        
        cin >> option; // KB
        
        system("CLS"); // KB
        
    
        switch (option) // KB
        { 
             
        case 1: { // KB
            cout << "\n"; 
            cout << "\n\t\t       ABOUT\n"; 
            cout << "\n"; 
            cout << "\n\t\t Whats in your blood?"; 
            cout << "\n"; 
            cout << "\n   Blood is made up of four main components : red blood\n   cells, white blood cells, plateletsand, the protein\n   : rich liquid that suspends them all, plasma."; // KB
            cout << "\n"; 
            cout << "\n   It's rare for a patient to require all of the blood \n   components at one time, so a blood donation is usually\n   separated into three parts for transfusion : red blood \n   cells, platelets and plasma. This means patients can be\n   transfused with only what they need, and your single\n   blooddonation can help save more than one patient."; // KB
            cout << "\n"; 
            cout << "\n   Because there's no substitute for these lifesaving \n   components, patients around the country rely on blood\n   donors to help save their lives."; // KB
            cout << "\n"; 
            cout << "\n"; 
            setcolor(0x0C); 
            cout << "\t\t     b. BACK\n"; 
            setcolor(0x07); 
            cout << "\n"; 
            cout << "\t\tEnter your option : ";  
            cin >> x ; 
            if (x == 'b'){ 
                main_screen(); // re-calls menu function // KB
            } 
            else { 
                while (x != 'b') { // while x doesnt equal the character b it will loop // KB
                    cout << "\n";
                    cout << "\t      Invalid input try again"; 
                    cout << "\n";
                    cin >> x; 
                } 
            } 
            break;
        } // KB



        case 2: { // KB
            
            cout << "\n\t\t      LOGIN\n\n\n\n";
            cout << "\n";
            cout << "\n";
            cout << "\n"; 
            cout << "\t     a. DONOR PAGE\n\n";
            cout << "\t     b. BOOK BLOOD DONATION TIME\n\n";
            setcolor(0x0C);
            cout << "\t\t     c. BACK\n";
            setcolor(0x07);
            cout << "\n";
            cout << "\t\tEnter your option : ";
            cin >> x;
            if (x == 'a') {
                cout << "nothing yet";
            }
            if (x == 'b') {
                struct Date b;
                struct Date* ptr = &b;
                input_data(ptr);
            }
            if (x == 'c') {
                main_screen();
            }
            else { 
                while (x != 'a' && x != 'b') {
                    cout << "\n";
                    cout << "\t      Invalid input try again"; 
                    cout << "\n";
                    cin >> x;
             
                } 
            } 
            break; 
        } //KB
              



        case 3: { // KB

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
         

            if (x == 'a') { // KB
                struct Donor u;
                struct Donor* ptr = &u;
                input_data(ptr);
                cout << "\n";
                cout << "\n";
                setcolor(0x0C);
                cout << " Donor registration complete return to main menu (c) : ";
                setcolor(0x07);
                cin >> x;
            }

            else if (x == 'b') {
                struct Recipient s;
                struct Recipient* ptr = &s;
                input_data(ptr);
                cout << "\n";
                cout << "\n";
                setcolor(0x0C);
                cout << " Recipient registration complete return to main menu (c) : ";
                setcolor(0x07);
                cin >> x;
            }

            else if (x =='c') {
                main_screen();
        
            }
            
           
            
                break; // KB
            } // KB

     
     
            


        case 4: { // KB


            cout << "\n\t\t   ADMIN LOGIN\n"; // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            cout << "\t\t    a. LOGIN\n"; // KB
            cout << "\n"; // KB
            setcolor(0x0C); // KB
            cout << "\t\t     b. BACK\n"; // KB
            setcolor(0x07); // KB
            cout << "\n"; // KB
            cout << "\t\tEnter your option : ";  // KB
            cin >> x; // KB
            if (x == 'b') { // KB
                main_screen(); // re-calls menu function // KB
            } // KB
            else { // KB
                while (x != 'a' && x != 'b') {
                    cout << "\n";
                    cout << "\t      Invalid input try again"; // KB
                    cout << "\n";
                    cin >> x;
               
                } // KB
            } // KB
            break; // KB
        } // KB
                

        case 5: { // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            setcolor(0x0C); // KB
            cout << "\n\t\t   GOODBYE"; // KB
            setcolor(0x07); // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            return 0; // KB
        } // KB



           

      
        } // KB
       
    } // KB
} // KB




int main() // KB
{ // KB
    main_screen(); // KB
    return 0;
     
} // KB