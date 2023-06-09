#include<iostream>
#include<fstream>

#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
void menu();
class Intro
{

public:



    Intro()
    {
        label:
       system("color 0A"); //change terminal color
        int input;
        cout<<"\n\n\n\n\n\n\n\n\t_______________________________________________________";
        cout << "\n\n\n\t\t  WELCOME TO HOSTEL BOOKING PORTAL";
        cout<<"\n\n\t_______________________________________________________";
        cout<<"\n\n\npress 1 to start";
        cin >> input;
        if(input==1){
            system("CLS");
            menu(); //call to main function to load after executing the constructer
        }
        else
            system("cls");
            goto label;
    }


};
class Student
{
public:
    string  gender, address;
    int age,mob ;
    static int Adm;
    static string name;
    char inp[1000];

    void getDetails()
    {
        ofstream out("old-student.txt", ios::app); //open file using append mode to write customer details

            cout << "\nEnter admission number: ";
            cin >> Adm;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mob;
            cout << "Address: ";
            cin >> address;



        out << "\nadmission number: " << Adm << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mob<< "\nAddress: " << address << endl;
        out.close();
        cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << endl;
    }
    void show_students_record() //function to show old customer records
    {
        ifstream in("old-student.txt");
        {
            if(!in)
            {
                cout << "File Error!" << endl;
            }
            while(!(in.eof()))
            {
                in.getline(inp, 999);
                cout << inp<< endl;
            }
            in.close();
        }
    }

};
int Student::Adm;
string Student::name;
class Room{
public:
    static string room;
    static int fees;
    void details(){
        cout<<"\n\n\t\twe have a large variety of rooms that suits our students needs";
        cout<<"\n\t\tplease select appropriate choice for rooms";
        cout<<"\n\n\n\t\t\t1>2AC";
        cout<<"\n\n\n\t\t\t2>3AC";
        cout<<"\n\n\n\t\t\t3>4AC";
        cout<<"\n\n\n\t\t\t4>2NAC";
        cout<<"\n\n\n\t\t\t5>3NAC";
        cout<<"\n\n\n\t\t\t6>4NAC";
        int choice;
        cin>>choice;
        if (choice==1){
            room="2AC";
            fees=900000;
        }
        else if (choice==2){
            room="3AC";
            fees=800000;
        }
        else if (choice==3){
            room="4AC";
            fees=700000;
        }
        else if (choice==4){
            room="2NAC";
            fees=600000;
        }
        else if (choice==5){
            room="3NAC";
            fees=400000;
        }
        else if (choice==4){
            room="4NAC";
            fees=200000;
        }
        system("cls");
        cout<<"\n\tFees for your room will be"<<fees;
        cout<<"\n\n\t1>confirm booking\n\n\t2>back";
        int ch;
        cin>>ch;
        if (ch==2){
            system("cls");
            details();
        }
        else if(ch==1){
            system("cls");
            cout<<"\n\n\n\t\tcongratulation you have been alloted\n\n\n\n\tredirecting to main menue "<<room;
            Sleep(10);
            system("cls");
            menu();

        }

    }

};
string Room::room;
int Room::fees;

class catering
{
public:
    int choicecatering;
    static  string cat;
    int packChoice1;
    int gotoMenu;
    static float messCost;

    void caterings()
    {
        string hotelNo[] = {"CRCL", "FUSION", "PROODEL"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }

        cout << "\nCurrently we collaborated with above catering services!" << endl;

        cout << "Press any key to back or\n\nEnter Number of the hotel you want to book or see details: ";
        cin >> choicecatering;

        system("CLS");

        if(choicecatering == 1){
             cat="CRCL";
            cout << "-------WELCOME TO CRCL-------\n" << endl;

            cout << "Established in 1983, CRCL LLP is the largest domestically managed contractual food services company in India producing over 200,000 meals with"<<endl;
            cout<<"annual revenue of over INR 300 crores in FY23 and 3,000 employees on the payroll."<< endl;

            cout << "Packages offered by Avendra:\n" << endl;

            cout << "1. Special" << endl;
            cout << "\thas special dishes for both vegetarians and non vegetarians:  Rs 60000" << endl;
            cout << "2. Non-Veg" << endl;
            cout << "\tEnjoy Non veg delicecies: Rs.40000" << endl;
            cout << "3. Veg" << endl;
            cout << "\tEnjoy VEg delicecies : Rs.15000" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;
            system("cls");

            if (packChoice1 == 1){
                messCost = 60000.00;
                cout << "\nYou have successfully booked special mess at Crcl" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                messCost = 40000.00;
                cout << "\nYou have successfully booked non veg mess at Crcl" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                messCost = 15000.00;
                cout << "\nYou have successfully booked veg mess at Crcl" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(10);
                system("CLS");
                caterings();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(choicecatering == 2){
                cat="FUSION";
            cout << "-------WELCOME TO FUSION-------\n" << endl;
            cout<<"Fusion Foods and Catering Private Limited, is a well-established, preferred business partner for corporates and industries in South India.\n";


            cout << "Packages offered by FUSION:\n" << endl;

            cout << "1. Special" << endl;
            cout << "\thas special dishes for both vegetarians and non vegetarians:  Rs 60000" << endl;
            cout << "2. Non-Veg" << endl;
            cout << "\tEnjoy Non veg delicecies: Rs.40000" << endl;
            cout << "3. Veg" << endl;
            cout << "\tEnjoy VEg delicecies : Rs.15000" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;
            system("cls");

            if (packChoice1 == 1){
                messCost = 60000.00;
                cout << "\nYou have successfully booked special mess at FUSION" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                messCost = 40000.00;
                cout << "\nYou have successfully booked non veg mess at FUSION" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                messCost = 15000.00;
                cout << "\nYou have successfully booked veg mess at FUSION" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(10);
                system("CLS");
                caterings();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }

        else if(choicecatering == 3){
                cat="PROODLE";
            cout << "-------WELCOME TO PROODLE-------\n" << endl;

            cout << "Proodle Hospitality Services Private Limited provides you the best range of catering service,"<<endl;
            cout<<"hospitality services, food services & housekeeping services with effective & timely delivery." << endl;

            cout << "Packages offered by Proodle:\n" << endl;

            cout << "1. Special" << endl;
            cout << "\thas special dishes for both vegetarians and non vegetarians:  Rs 60000" << endl;
            cout << "2. Non-Veg" << endl;
            cout << "\tEnjoy Non veg delicecies: Rs.40000" << endl;
            cout << "3. Veg" << endl;
            cout << "\tEnjoy VEg delicecies : Rs.15000" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;
            system("cls");

            if (packChoice1 == 1){
                messCost = 60000.00;
                cout << "\nYou have successfully booked special mess at PROODLE" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                messCost = 40000.00;
                cout << "\nYou have successfully booked non veg mess at PROODLE" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                messCost = 15000.00;
                cout << "\nYou have successfully booked veg mess at PROODLE" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(10);
                system("CLS");
                caterings();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
    }

};


float catering::messCost;
string catering::cat;
class receipt : public Student, catering,Room //Multiple Inheritance of some other classes to receipt
{

public:

    void printreceipt()
    {
        ofstream outf("receipt.txt"); //receipt for bought items

            outf << "--------Vellore Institute of technology--------" << endl;
            outf << "-------------Receipt---------------------------" << endl;
            outf << "_______________________________________________" << endl;
            outf << "NAME:      "<<Student::name<<endl;
            outf << "Admission number:\t\t\t"<< Student::Adm << endl<<endl;

            outf << "Description\t\t\tTotal" << endl;
            outf<<"room type:\t\t\t"<<room<<endl;
            outf << "Room cost:\t\t\t" << Room::fees << endl;
            outf << "catering serrvice:\t\t\t"<<cat<<endl;
            outf<<"mess cost:\t\t\t"<<messCost<<endl;

            outf << "______________________________________________" << endl;
            outf << "Total Charge:\t\t\t"      << Room::fees+catering::messCost << endl;
            outf << "_______________________________________________" << endl;
            outf << "---------------------THANK  YOU----------------" << endl;

        outf.close();

    }

    void show_reciept()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(inp, 999);
                cout << inp << endl;
            }
        }
        inf.close();
    }
};
void menu() //menu function contain main menu
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t    * Vellore Institute of Technology *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tStudents personal   -> 1\t|" << endl;
    cout << "\t|\tRoom Management     -> 2\t|" << endl;
    cout << "\t|\tCatering Management -> 3\t|" << endl;
    cout << "\t|\tReceipt             -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    Student a2; //creating objects
    Room a3;
    catering a4;
    receipt a5;

    /*if(mainChoice == 0){

    }*/
    if(mainChoice == 1){
        cout << "------students------\n" << endl;
        cout << "1. Enter New student"<< endl;
        cout << "2. See Old students"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getDetails();
        }
        else if(inChoice == 2){
            a2.show_students_record();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
           // Sleep(10);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            system("cls");
            menu();
        }
        else{
            system("cls");
            menu();
        }
    }
    else if(mainChoice == 2){
        system("cls");
        a3.details();
    }
    else if(mainChoice == 3){
        system("cls");
        cout << "--> Book your favourite catering service <--\n" << endl;
        a4.caterings();
    }
    else if(mainChoice == 4){
        system("cls");
        cout << "-->Get your receipt<--\n" << endl;
        a5.printreceipt();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");
            a5.show_reciept();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 5){
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(10);
        system("CLS");
        Intro();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(10);
        system("CLS");
        menu();
    }
}

int main()
{
    Intro startobj;
    return 0;
}

















