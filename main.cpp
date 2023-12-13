#include<iostream>
using namespace std;
void menu();
void bankstatement();
void taxinfo();
void card_end();


int main() {

    //ATM Pin is 0000

    string card, pin,start, check_remaining_balance;
    int action;
    int rem_sm;
    float menu_opt;
    float remaining_balance;
    int withdrawl_amount; 
    int bank_select;
    int iban_no;
    float send_money;
    double bal[] = { 98765432.987 };
    string bank_names[20][20] = { {"1. ABC Bank",", 2. XYZ Bank",", 3. LLL Bank"},
                                  {", 4. CCC Bank",",5 .UMN Bank",", 6. WEW Bank"},
                                  {", 7. CTO Bank",", 8. LOL Bank",", 9. PPP Bank"} };

    
    
    cout << "***Welcome to The PF ATM Machine***\n";
    cout << R"(
     _______________________________________
    |  _                                 _  |
    | | \                               / | |
    | |  \                             /  | |
    | |   >                           <   | |
    | |  /                             \  | |
    | | /_______________________________\ | |
    | |/_______________________________\| |
    | |   ___ ___ ___   ___  _ ___ ___   | |
    | |  | . | . | . | | . || | -_|  _|  | |
    | |  |___|___|___| |___||_|___|_|    | |
    | |   ___ ___ _   _ ___ ___  ___     | |
    | |  |_ -| -_| | | | . |   || -_|    | |
    | |  |___|___|\___/|___|_|_||___|    | |
    | |                                 | |
    | |_________________________________| |
    |_____________________________________|

)" << endl;
    start1:
    cout << "Enter Your Card Type (Debit/Credit): ";
    cin >> card;

    if (card == "debit" || card == "Debit") {
        cout << R"(
   ___________________________________________
  /                                           \
 |  ________________________                   |
 | |                        | |""""""""""|      |
 | |       PF - Bank         | |........|.|      |
 | |                        | |________|.|      |
 | |   Debit Card            | |""""""""""|      |
 | |                        | |........|.|      |
 | |   Card Number:        | |________|.|      |
 | |   **** **** **** 1234 | |""""""""""|      |
 | |   Expiry Date:        | |........|.|      |
 | |   12/24               | |________|.|      |
 | |________________________|__________|      |
 |___________________________________________|
    )" << endl;
    }
    else if (card == "credit" || card == "Credit") {
        cout << R"(
   ___________________________________________
  /                                           \
 |  ________________________                   |
 | |                        | |""""""""""|      |
 | |       PF - Bank         | |........|.|      |
 | |                        | |________|.|      |
 | |   Credit Card           | |""""""""""|      |
 | |                        | |........|.|      |
 | |   Card Number:        | |________|.|      |
 | |   **** **** **** 1234 | |""""""""""|      |
 | |   Expiry Date:        | |........|.|      |
 | |   12/24               | |________|.|      |
 | |________________________|__________|      |
 |___________________________________________|
    )" << endl;
    }
    else {
        cout << "Enter Valid Identity"<<endl;
        goto start1;

    }
start2:
    cout << "Enter Pin: ";
    cin >> pin;
    
        if (pin == "0000") {
            cout << endl;
            cout << "***Welcome Ali*** "<<endl;
            cout << endl;
            cout << "Which Action do you Want to Perform?\n: ";
            cout << endl;
            menu_again:
            menu();
            cout << "Enter Number to Perform Task: ";
            cin >> menu_opt;
            if (menu_opt == 1) {
                cout << endl;
                cout << "You have selected ***Cash Withdrawl***";
                cout << endl;
                withdaw_again:
                cout << "Put Amount to Withdrawl: $ ";
                cin >> withdrawl_amount;
                if (withdrawl_amount >= 98765432.987) {
                    cout << "Your account has not much money :( "<<endl;
                }
                else if (withdrawl_amount >= 500 && withdrawl_amount <= 20000) {
                    cout << "Take your Cash: "<< withdrawl_amount<<endl;
                }
                else if (withdrawl_amount > 20000) {
                    cout << "You can only withraw between $500 to $20000" << endl;
                    goto withdaw_again;
                }
                else if (withdrawl_amount < 500) {
                    cout << "You can only withraw between $500 to $20000"<<endl;
                    goto withdaw_again;
                }
                else {
                    cout << "Invalid Input: "<<endl;
                    goto withdaw_again;
                }
                cout << "You have Withdrawl: $ "<< withdrawl_amount <<endl;
                cout << endl;
                cout << "do you want to check remaining balance?: Y/N"<<endl;
                cin >> check_remaining_balance;
                if (check_remaining_balance == "Y" || check_remaining_balance == "y") {
                    remaining_balance = bal[0] - withdrawl_amount;
                    cout << "remaining_balance:"<<remaining_balance;
                    cout << endl;
                    cout << "***TAKE YOUR CARD***";
                    card_end();
                }
                else {
                    cout << "\a***Take Your Card***"<<endl;
                    cout << endl;
                    card_end();
                }


                


            }
            else if (menu_opt == 2) {
                cout << "***You have selected Account Statement***" << endl;
                cout << endl;
                bankstatement();
                cout << endl;
                cout << "\aTake Your Card";
                card_end();

            }
            else if (menu_opt == 3) {
                cout << "***You have selected Show Balance***" << endl;
                cout << endl;
                cout << bal[0];
                cout << ""<<endl;
                cout << "\aTake Your Card";
                card_end();



            }
            else if (menu_opt == 4) {
                cout << "***You have selected Tax Info***" << endl;
                cout << endl;
                taxinfo();
                cout << endl;
                cout << "\aTake Your Card";
                card_end();


            }
            else if (menu_opt == 5) {
                cout << "***You have selected Send Money***" << endl;
                cout << endl; 
                cout << endl;
               // cout << " 1. ABC Bank, \n 2. XYZ Bank,  \n 3. LLL Bank  \n 4. CCC Bank \n 5. UMN Bank \n 6. WEW Bank \n 7. CTO Bank \n 8. LOL Bank \n 9. PPP Bank"<<endl;
                for (char row = 0; row <= 19; row++) {
                    for (char col = 0; col <= 19; col++) {
                        cout << bank_names[row][col];                       
                    }       
                 }
                
                cout << endl;
                cout << "Enter the Bank Number:  ";
                cin >> bank_select;

                switch (bank_select) {
                case 1:
                    cout<<"You have Selected ABC Bank: "<<endl;
                    cout << endl;
                    cout <<"Enter IBAN: "<< endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 2:
                    cout << "You have Selected XYZ Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    
                    break;
                case 3:
                    cout << "You have Selected LLL Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 4:
                    cout << "You have Selected  CCC Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 5:
                    cout << "You have Selected   UMN Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 6:
                    cout << "You have Selected WEW Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 7:
                    cout << "You have Selected CTO Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                    break;
                case 8:
                    cout << "You have Selected LOL Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";

                    break;
                case 9:
                    cout << "You have Selected PPP Bank: " << endl;
                    cout << endl;
                    cout << "Enter IBAN: " << endl;
                    cin >> iban_no;
                    cout << "Reciever Name Is AYUB";
                   
                }
     
            }
            else if (menu_opt == 6) {
                cout << "***Take Your Card \a\a***" << endl;
                cout << endl;
                
            }
            else {
            cout << "Please Enter Valid Input :"<<endl;
            goto menu_again;
}
        }
       

        else if(pin!="0000"){
            cout << "Invalid Pin"<<endl;
            cout << " ";
            cout << "Do you want to try again Y/N"<<endl;
            cin >> start;
            if (start == "y" || start == "Y") {
                goto start2;
            }

            else if (start == "N" || start == "n") {
                cout << "Take your card"<<endl;
                
            }
        }

    

    
}

void card_end() {
    cout << R"(
   ___________________________________________
  /                                           \
 |  ________________________                   |
 | |                        | |""""""""""|      |
 | |       PF - Bank         | |........|.|      |
 | |                        | |________|.|      |
 | |                        | |""""""""""|      |
 | |                        | |........|.|      |
 | |   Card Number:        | |________|.|      |
 | |   **** **** **** 1234 | |""""""""""|      |
 | |   Expiry Date:        | |........|.|      |
 | |   12/24               | |________|.|      |
 | |________________________|__________|      |
 |___________________________________________|
    )" << endl;
}









void menu() {
    cout << R"(
============================================
|               PF  Bank ATM               |
============================================
|               MENU OPTIONS               |
============================================
|   1. Cash Withdrawal                     |
|   2. Account Statement                   |
|   3. Show Account Balance                |
|   4. Tax Info                            |
|   5. Send Money                          |
|   6. Exit                                |
============================================

)";
}
void bankstatement() {

    std::cout << "*************************************************************" << std::endl;
    std::cout << "*                          BANK STATEMENT                   *" << std::endl;
    std::cout << "*************************************************************" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "* Account Holder:        AYUB                                *" << std::endl;
    std::cout << "* Account Number:        1234567890                         *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "*  Date         |  Description           |   Amount          *" << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "*  2023-05-25   |  Rent Payment          |    -$500          *" << std::endl;
    std::cout << "*  2023-05-26   |  Salary                |    $2000          *" << std::endl;
    std::cout << "*  2023-05-26   |  Grocery Shopping      |    -$100          *" << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "* Available Balance:                $2400                    *" << std::endl;
    std::cout << "*                                                           *" << std::endl;
    std::cout << "*************************************************************" << std::endl;
}
void taxinfo() {

    std::cout << "******************************************************" << std::endl;
    std::cout << "*                   TAX INFORMATION                  *" << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "* Taxpayer Name:          AYUB                        *" << std::endl;
    std::cout << "* Taxpayer ID:            1234567890                  *" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "*----------------------------------------------------*" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "* Income:                $50,000                      *" << std::endl;
    std::cout << "* Expenses:              $10,000                      *" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "*----------------------------------------------------*" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "* Taxable Income:        $40,000                      *" << std::endl;
    std::cout << "* Tax Rate:              25%                          *" << std::endl;
    std::cout << "* Tax Payable:           $10,000                      *" << std::endl;
    std::cout << "*                                                    *" << std::endl;
    std::cout << "******************************************************" << std::endl;
}



