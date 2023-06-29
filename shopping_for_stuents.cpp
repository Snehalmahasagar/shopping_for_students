#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class customer
{
public:
    string firstName;
    string middleName;
    string surname;
    

    int data()
{
    namelevel:
    cout << "Enter the first name: ";
    cin >> firstName;
    cout << "Enter the middle name: ";
    cin >> middleName;
    cout << "Enter the surname: ";
    cin >> surname;

    // Check if the names contain any numbers
    for (char c : firstName + middleName + surname) {
        switch(c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                cout << "Names should only contain characters. Please try again." << endl;
                goto namelevel; // Restart the input process
        }
    }

    
}

    void display(ofstream &outputfile)
    {
        outputfile << "Full Name   : " << firstName << " " << middleName << " " << surname << endl;
        
    }
};


float onlineshopping(ofstream &outputfile);
int main()
{
    customer c1;
    c1.data();
    ofstream outputfile("file.txt", ios::app);
    outputfile << "\n!!!!!!!!!!!WELCOME!!!!!!!!!!!\n"
               << "CUSTOMER NAME : " << c1.firstName << " "
               << " " << c1.middleName << " " << c1.surname << endl;
    char startvalue;
    char choiceagain;
    double TotalBill = 0;
    float onlineshopping(ofstream & outputfile);
    float ParticulatBillAmt = 0;

startlevel:
    cout << "!!!!!!!!!!!!Please Enter S to start shopping!!!!!!!!!!!!!" << endl;
start:

    cin >> startvalue;
    if (startvalue == 's' || startvalue == 'S')
    {
        ParticulatBillAmt = onlineshopping(outputfile);
        TotalBill += ParticulatBillAmt;
        cout << "..................................................." << endl;
        cout << "Currunt bill amount is : " << ParticulatBillAmt << " Rs" << endl;
        cout << "..................................................." << endl;
    againshopping:
        cout << "----------------------------------------------" << endl;
        cout << "Do you want shopping again, Y or N" << endl;
        cout << "-----------------------------------------------" << endl;
        cin >> choiceagain;
        if (choiceagain == 'Y' || choiceagain == 'y')
        {
            goto startlevel;
        }
        else if (choiceagain == 'N' || choiceagain == 'n')
        {
            outputfile << "********THE CUSTOMER DATA*********" << endl;
            c1.display(outputfile);
            outputfile << "\n YOUR TOTAL BILLAMOUNT IS :  " << TotalBill << "Rs" << endl;
            outputfile << "****THANKS FOR BUYING PRODUCTS****" << endl;

            cout << "\n          Total BILLAMOUNT IS :   " << TotalBill << "Rs" << endl;

            cout << " !|!|!|!|!||!|!|!|!!|!|!|!|!||!|!|!|!!|!|!|!|!" << endl;
            cout << "************Thanks for visiting us************ " << endl;
            cout << "***********Hope you will come again************" << endl;
            cout << "!|!|!|!|!||!|!|!|!!|!|!|!|!||!|!|!|!!|!|!|!|! " << endl;
        }
        else
        {
            cout << ">>>>>>>>>You have entered the wrong option<<<<<<<" << endl;
            goto againshopping;
        }
    }
    else
    {
        cout << "---------------|||You have entered wrong option|||----------------" << endl
             << "                        ^^^^^Please S^^^^^                          " << endl;
        goto start;
    }
}

float onlineshopping(ofstream &outputfile)
{
    char choice;
    char item;
    int quantity;
    float billamount = 0;
    int total = 0;
welcomelevel:

    cout << "************Welcome to online shopping**************" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "-----------Please follow the instructions-------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "->>> 1.Please enter the B for the bags     <<<-" << endl;
    cout << "->>> 2.Please enter the k for the keyboards<<<-" << endl;
    cout << "->>> 3.Please enter the m for the Mouse    <<<-" << endl;
    cout << "->>> 4.Please enter the l for the laptops  <<<-" << endl;
    cout << "->>> 5.Please enter the h for the Headphone<<<-" << endl;
    cout << "->>> 6.Please enter the s for the Spects   <<<-" << endl;

    cin >> choice;
    switch (choice)
    {
    bagslevel:
    case 'b':
    case 'B':
        cout << ":::::::::::::::::::::::Welcome to the Bag section::::::::::::::::::::::::" << endl;
        cout << "                          ..|Bags details|..                                 " << endl;
        cout << "(1) Skybags=> price        : 1700 Rs" << endl;
        cout << "(2) Laptop bags=> price    : 1900 Rs" << endl;
        cout << "(3) Travelling bags=> price: 3000 Rs" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << " o - o - o - o - o - o - o - o-- Please enter your choice-- o - o - o - o - o - o - o - " << endl;
        cin >> item;
        cout << "                                  Choose the item number(1-3)                              " << endl;
        if (item == '1')
        {
        quantity_level_1:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_1;
            }
            billamount = quantity * 1700;
            outputfile << "YOUR SKYBAGS BILLAMOUNT IS     :  " << billamount << "Rs" << endl;
        }

        else if (item == '2')
        {

        quantity_level_2:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_2;
            }
            billamount = quantity * 1900;
            outputfile << "YOUR LAPTOP BAGS BILLAMOUNT IS   :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_3:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_3;
            }
            billamount = quantity * 3000;
            outputfile << "YOUR TRAVELLING BAGS BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }

        else
        {
            cout << "You have entered wrong option,please type again" << endl;
            goto bagslevel;
        }
        break;
    case 'k':
    case 'K':

    keyboardlevel:
        cout << ":::::::::::::::::::::::Welcome to the Keyboard section::::::::::::::::::::::::" << endl;
        cout << "                             |keyboard details|                                " << endl;

        cout << "->>>(1) Wireless=> price           : 1500 Rs<<<-" << endl;
        cout << "->>>(2) Ergonomic keyboard=> price : 2000 Rs<<<-" << endl;
        cout << "->>>(3) Membrane keyboard=> price  : 2500 Rs<<<-" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << " o - o - o - o - o - o - o - o-- Please enter your choice-- o - o - o - o - o - o - o - o " << endl;
        cin >> item;
        cout << "                                  Choose the item number(1-3)                              " << endl;
        if (item == '1')
        {
        quantity_level_5:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_5;
            }
            billamount = quantity * 1500;
            outputfile << "YOUR WIRELESS KEYBOARD BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        else if (item == '2')
        {
        quantity_level_6:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_6;
            }
            billamount = quantity * 2000;
            outputfile << "YOUR ERGONOMIC KEYBOARD BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_7:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_7;
            }
            billamount = quantity * 2500;
            outputfile << "YOUR MEMBRANE KEYBOARD BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }

        else
        {
            cout << "You have entered wrong option,please type again" << endl;
            goto keyboardlevel;
        }
        break;
    case 'M':
    case 'm':
    mouselevel:
        cout << ":::::::::::::::::::::::welcome to the mouse section::::::::::::::::::::::::" << endl;
        cout << "                           | Mouse details|                                " << endl;

        cout << "->>> 1. Wireless mouse=> price : 1190 Rs<<<-" << endl;
        cout << "->>> 2. Ergonomic mouse=> price: 800 Rs<<<-" << endl;
        cout << "->>> 3. Membrane mouse=> price : 850 Rs<<<-" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << "o-o-o-o-o-o-o-o--Please enter your choice--o-o-o-o-o-o-o-o" << endl;
        cin >> item;
        cout << "                    Choose the item number(1-3)              " << endl;
        if (item == '1')
        {
        quantity_level_9:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_9;
            }
            billamount = quantity * 1190;
            outputfile << "YOUR WiIRELESS MOUSE BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        else if (item == '2')
        {
        quantity_level_10:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_10;
            }
            billamount = quantity * 800;
            outputfile << "YOUR ERGONOMIC MOUSE BILLAMOUNT IS  :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_11:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_11;
            }
            billamount = quantity * 850;
            outputfile << "YOUR MEMBRANE MOUSE BILLAMOUNT IS   :  " << billamount << "Rs" << endl;
        }

        else
        {
            cout << "You have entered wrong option,please type again" << endl;
            goto mouselevel;
        }

        break;
    case 'l':
    case 'L':
    laptops:
        cout << ":::::::::::::::::::::::welcome to the laptops section::::::::::::::::::::::::" << endl;
        cout << "                            |laptops details|                                " << endl;

        cout << "choose your favorite brand from the given list" << endl;
        cout << " 1. HP laptop=> price     : 65,000 Rs" << endl;
        cout << " 2. Lenovo laptop=> price : 60,000 Rs" << endl;
        cout << " 3. ASUS laptop=> price   : 67,500 Rs" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << "o-o-o-o-o-o-o-o--please enter your choice--o-o-o-o-o-o-o-" << endl;
        cin >> item;
        cout << "                    Choose the item number(1-3)               " << endl;
        if (item == '1')
        {
        quantity_level_13:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_13;
            }
            billamount = quantity * 65000;
            outputfile << "YOUR HP LAPTOP BILLAMOUNT IS   :  " << billamount << "Rs" << endl;
        }
        else if (item == '2')
        {
        quantity_level_14:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_14;
            }
            billamount = quantity * 60000;
            outputfile << "YOUR LENEVO LAPTOP BILLAMOUNT IS  :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_15:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_15;
            }
            billamount = quantity * 67500;
            outputfile << "YOUR ASUS LAPTOP BILLAMOUNT IS     :  " << billamount << "Rs" << endl;
        }

        else
        {
            cout << "You have entered wrong option,please type again" << endl;
            goto laptops;
        }
        break;
    case 'h':
    case 'H':
    headphones:
        cout << ":::::::::::::::::::::::welcome to the Headphones section::::::::::::::::::::::::" << endl;
        cout << "                             |Headphones details|                                " << endl;

        cout << "choose your favorite brand from the given list" << endl;
        cout << " 1. Boat headphones=> price    :    1,200 Rs" << endl;
        cout << " 2. Wired headphones=> price   :    800 Rs" << endl;
        cout << " 3. Wireless headphones=> price:    1100 Rs" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;
        cout << "o-o-o-o-o-o-o-o--Please enter your choice--o-o-o-o-o-o-o-" << endl;
        cin >> item;
        cout << "                    Choose the item number(1-3)               " << endl;

        if (item == '1')
        {
        quantity_level_16:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "Enter the quantity in the numbers, Please" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_16;
            }
            billamount = quantity * 65000;
            outputfile << "YOUR BOAT HEADPHONES BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        else if (item == '2')
        {
        quantity_level_17:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "..............Enter the quantity in the numbers, Please............." << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_17;
            }
            billamount = quantity * 60000;
            outputfile << "YOUR WIRED HEADPHONES BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_18:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << ".............Enter the quantity in the numbers, Please..............." << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_18;
            }
            billamount = quantity * 67500;
            outputfile << "YOUR WIRELESS HEADPHONES BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }

        else
        {
            cout << "You have entered wrong option,please type again" << endl;
            goto headphones;
        }
        break;
    case 's':
    case 'S':
    spectslevel:
        cout << ":::::::::::::::::::::::Welcome to the Spects section::::::::::::::::::::::::" << endl;
        cout << "                          ..|spects details|..                                 " << endl;
        cout << "(1) Computer Spects     => price    : 1700 Rs" << endl;
        cout << "(2) Full-frame Spects   => price    : 1900 Rs" << endl;
        cout << "(3) Semi-rimless Spects => price    : 3000 Rs" << endl;
        cout << "                                                                             " << endl;
        cout << "                                                                             " << endl;

        cout << " o - o - o - o - o - o - o - o-- Please enter your choice-- o - o - o - o - o - o - o - " << endl;
        cin >> item;
        cout << "                                   Choose the item number(1-3)                              " << endl;
        if (item == '1')
        {
        quantity_level_19:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << ".............Enter the quantity in the numbers, Please..............." << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_19;
            }
            billamount = quantity * 1700;
            outputfile << "YOUR COMPUTER SPECTS BILLAMOUNT IS     :  " << billamount << "Rs" << endl;
        }

        else if (item == '2')
        {

        quantity_level_20:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "..............Enter the quantity in the numbers, Please.............." << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_20;
            }
            billamount = quantity * 1900;
            outputfile << "YOUR FULL-FRAME SPECTS BILLAMOUNT IS  :  " << billamount << "Rs" << endl;
        }
        else if (item == '3')
        {
        quantity_level_21:
            cout << "~Please enter the quantity of the product you have ordered~~" << endl;
            cin >> quantity;
            cout << "...........Enter the quantity in the numbers, Please................" << endl;
            if (quantity <= 0)
            {
                cout << "You have entered the wrong quantity" << endl;
                goto quantity_level_21;
            }
            billamount = quantity * 3000;
            outputfile << "YOUR SEMI-RIMLESS SPECTS BILLAMOUNT IS :  " << billamount << "Rs" << endl;
        }
        break;

    default:
        cout << "You have entered the wrong option please enter the initials of the product" << endl;
        goto welcomelevel;
        break;
    }

    return billamount;
}