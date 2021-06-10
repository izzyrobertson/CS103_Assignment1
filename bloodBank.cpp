// bloodBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#ifndef NOMINMAX // KB
#define NOMINMAX // KB
#endif // KB
#include <iostream> // KB
#include <windows.h> // KB
#include<stdlib.h> // KB
#include <string> //KB
#include <fstream> //KB

using namespace std; // KB

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
    ofstream myfile("emp.csv", ios::out); //KB
    //for (int i = 0; i < n; i++) {  // KB
        cin.ignore(); // KB
        cout << "\nPlease enter your first name : "; // KB
        getline(cin, (u)->first_name); // KB
        /*cout << (u)->first_name;*/
        cout << "\nPlease enter your last name : "; // KB
        getline(cin, (u)->last_name);  // KB
        cout << "\nPlease enter your date of birth (xx/xx/xx) : "; // KB
        getline(cin, (u)->dob); // KB
        cout << "\nPlease enter your nationality : "; // KB
        getline(cin, (u)->nationality); // KB
        cout << "\nPlease enter your ethnicity : "; // KB
        getline(cin, (u)->ethnicity); // KB
        cout << "\nPlease enter your biological gender (male / female) : "; // KB
        getline(cin, (u)->gender); // KB
        cout << "\nPlease enter (if any) underlying conditions : "; // KB
        getline(cin, (u)->underlying_conditions); // KB
        cout << "\nPlease enter your blood group : "; // KB
        getline(cin, (u)->blood_group); // KB
        cout << "\nPlease enter your contact number : "; // KB
        cin >> (u)->contact_no; // KB
        cin.ignore(); // KB
        cout << "\nPlease enter your email : "; // KB
        getline(cin, (u)->email); // KB
        cout << "\nPlease enter your physical address : "; // KB
        getline(cin, (u)->physical_address); // KB
        cout << "\nPlease enter your username : "; // KB
        getline(cin, (u)->username); // KB
        cout << "\nPlease enter your password : "; // KB
        getline(cin, (u)->password); // KB
        myfile << (u)->first_name << ',' << (u)->last_name << ',' << (u)->dob << ',' << (u)->nationality << ',' << (u)->ethnicity << ',' << (u)->gender << ',' << (u)->underlying_conditions << ',' << (u)->blood_group << ',' << (u)->contact_no << ',' << (u)->email << ',' << (u)->physical_address << ',' << (u)->username << ',' << (u)->password << ',' << endl;

        

  
    myfile.close();
    return(u); // KB

} // KB

void setcolor(unsigned char color) // KB
{ // KB
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // KB
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



int menu() { // KB
    int option; // KB
    char x; // KB
    string Username, Password; // IR
    int Login_Attempt = 0; //IR
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
        cout << "\t\t     4. ADMIN LOGIN \n"; // KB
        cout << "\n"; // KB
        cout << "\t\t     5. EXIT \n"; // KB
        cout << "\n"; // KB
        cout << "\n"; // KB
        cout << "\t\t  Enter your option : "; // KB
      
        
        cin >> option; // KB
        
        system("CLS"); // KB
         
        switch (option) // KB
        { // KB
             
        case 1: { // KB
            cout << "\n"; // KB
            cout << "\n\t\t       ABOUT\n"; // KB
            cout << "\n"; // KB
            cout << "\n\t\t Whats in your blood?"; // KB
            cout << "\n"; // KB
            cout << "\n   Blood is made up of four main components : red blood\n   cells, white blood cells, plateletsand, the protein\n   : rich liquid that suspends them all, plasma."; // KB
            cout << "\n"; // KB
            cout << "\n   It's rare for a patient to require all of the blood \n   components at one time, so a blood donation is usually\n   separated into three parts for transfusion : red blood \n   cells, platelets and plasma. This means patients can be\n   transfused with only what they need, and your single\n   blooddonation can help save more than one patient."; // KB
            cout << "\n"; // KB
            cout << "\n   Because there's no substitute for these lifesaving \n   components, patients around the country rely on blood\n   donors to help save their lives."; // KB
            cout << "\n"; // KB
            cout << "\n"; // KB
            setcolor(0x0C); // KB
            cout << "\t\t     b. BACK\n"; // KB
            setcolor(0x07); // KB
            cout << "\n"; // KB
            cout << "\t\tEnter your option : ";  // KB
            cin >> x ; // KB
            if (x == 'b'){ // KB
                menu(); // re-calls menu function // KB
            } // KB
            else { // KB
                while (x != 'b') { // while x doesnt equal the character b it will loop // KB
                    cout << "\nInvalid input try again"; // KB
                    cout << "\n"; // KB
                    cin >> x; // KB
                } // KB
            } // KB
            break; // KB
        } // KB



        case 2: { // KB
            
            cout << "\nLOGIN"; // KB
            cout << "\t\ta. Login" << endl; // IR
            cout << "\t\tb. BACK\n"; // KB
            cout << "\n"; // KB
            cout << "\t\t Enter your option : "; // KB
            cout << "\n"; // KB
            cin >> x; // KB

            struct Donor u;
            struct Donor* ptr = &u;

            if (x == 'a') { // IR
                ifstream myfile("emp.csv", ios::in); // IR
                myfile.open("emp.csv");
                myfile >> (ptr)->username;
                cout << "\nPlease Enter your Username and Password" << endl; // IR
                cout << "---------------------------------------" << endl; // IR
                cout << (ptr)->username << endl;
                cout << "Username : "; // IR
                cin >> Username; // IR
                cout << "Password : "; // IR
                cin >> Password; // IR
                if (Username == "(getline(myfile, u->username[1][12]))" && Password == "(getline(myfile, u->password[1][13]))") { // IR
                    system("CLS"); // IR
                    cout << "\nDONOR SCREEN" << endl; // IR
                } // IR
                if (Username != "(getline(myfile, ptr->username[1][12]))" || Password != "(getline(myfile, ptr->password[1][13]))") { // IR
                    while (Login_Attempt < 3) { // IR
                        Login_Attempt++; // IR
                        cout << "Incorrect Username or Password, Please Try Again" << endl; // IR
                        cout << "\nUsername :"; // IR
                        cin >> Username; // IR
                        cout << "Password : "; // IR
                        cin >> Password; // IR
                    } // IR
                    while (Login_Attempt == 3) { // IR
                        cout << "Sorry, you have entered the incorrect Username or Password more than 3 times" << endl; // IR
                        cout << "============================================================================" << endl; // IR
                        cout << "\nPlease press b to return to menu : "; // IR
                        cin >> x; // IR
                        if (x == 'b') { // IR
                            menu(); // IR
                        } // IR
                        else { // IR
                            if (x != 'b') {
                                cout << "\nInvalid input try again"; // KB // IR
                                cout << "\n"; // IR
                                cin >> x; // IR
                            }
                        } // IR
                    } // IR
                    myfile.close(); // IR
                } // IR
                break; // IR
            } // IR
        } // IR
              



        case 3: { // KB

            cout << "REGISTER"; // KB
            cout << "\n"; // KB
            cout << "\t\t A. Register as a Donor : "; // KB
            cout << "\n"; // KB
            cout << "\t\tB. BACK\n"; // KB
            cout << "\n"; // KB
            cout << "\t\t Enter your option : "; // KB
            cout << "\n"; // KB
            cin >> x; // KB
            
            if (x == 'a') { // KB
                struct Donor u; 
                struct Donor* ptr =&u;
                input_data(ptr);
                cout << " Registration complete return to main menu (b)"; 
                cin >> x;
                if (x == 'b') {
                    menu(); // re-calls menu function // KB
                } // KB
                else { // KB
                    while (x != 'b') { // while x doesnt equal the character b it will loop // KB
                        cout << "\nInvalid input try again"; // KB
                        cout << "\n"; 
                        cin >> x;
                    }
                } // KB
                break; // KB
            } // KB

     
        } // KB
            


        case 4: { // KB


            cout << "ADMIN LOGIN"; // KB
            cout << "\t\tb. BACK\n"; // KB
            cout << "\n"; // KB
            cout << "\t\t Enter your option : "; // KB
            cout << "\n"; // KB
            cin >> x; // KB
            if (x == 'b') { // KB
                menu(); // re-calls menu function // KB
            } // KB
            else { // KB
                while (x != 'b') { // while x doesnt equal the character b it will loop // KB
                    cout << "\nInvalid input try again"; // KB
                    cout << "\n"; // KB
                    cin >> x; // KB
                } // KB
            } // KB
            break; // KB
        } // KB
                

        case 5: { // KB


            cout << "GOODBYE"; // KB
            cout << "\n"; // KB
            system("PAUSE"); // KB
            return 0; // KB
        } // KB



           

      
        } // KB
       
    } // KB
} // KB




int main() // KB
{ // KB
    menu(); // KB
    return 0;
     
    //Izzy's comment
} // KB