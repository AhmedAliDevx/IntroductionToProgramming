#include<iostream>
using namespace std;

int main()
{  
    //Step 1
    //Entering the Pin
    int StdntRollNo = 23900;
    int LastTwoDigit = StdntRollNo % 100;
    int CorrectPin = LastTwoDigit * 100 + LastTwoDigit;
    int Pin;
     int attempts = 0;
    do {
        cout << "Enter Your Pin (4 - digit): ";
        cin >> Pin;
        if (Pin == CorrectPin) {
            cout << "Welcome!" << endl;
            break;
        } else {
            cout << "Invalid Pin, Please try again!" << endl;
        }
        ++attempts;
        if (attempts > 2){
            cout<<"Account Locked"<<endl;
            return 0;
        }
    } while (attempts <= 3);
    //Step 2
    int choice;
    int price;
    int quantity;
    int totalItems = 0;
    int totalBill = 0;
    do {  
        //Showing Menu
        cout<<"Please Choose What You Want To Eat"<<endl;
        cout<<"1 - Zinger Burger - 450PKR "<<endl;
        cout<<"2 - Loaded Fries - 250PKR "<<endl;
        cout<<"3 - Cold Drink - 100PKR "<<endl;
        cout<<"4 - Exit and Generate Bill"<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"You Choose a Zinger Burger - 450PKR"<<endl;
                    price = 450;
                    //Step 3
                    cout<<"Choose the Quantity: ";
                    cin>>quantity;
                    while(quantity < 1){
                        cout<<"Invalid Quantity."<<endl;
                          cout<<"Choose the Quantity: ";
                     cin>>quantity;
                    }
                    totalItems += quantity;
                    totalBill = totalBill + price * quantity;
            break;
            case 2: cout<<"Loaded Fries - 250PKR "<<endl;
                    price = 250;     
                    //Step 3
                    cout<<"Choose the Quantity: ";
                     cin>>quantity;
                    while(quantity < 1){
                        cout<<"Invalid Quantity."<<endl;
                          cout<<"Choose the Quantity: ";
                     cin>>quantity;
                    }
                    totalItems += quantity;
                    totalBill = totalBill + price * quantity;
            break;
            case 3: cout<<"Cold Drink - 100PKR "<<endl;
                    price = 100;    
                    //Step 3
                    cout<<"Choose the Quantity: ";
                     cin>>quantity;
                    while(quantity < 1){
                        cout<<"Invalid Quantity."<<endl;
                          cout<<"Choose the Quantity: ";
                     cin>>quantity;
                    }
                    totalItems += quantity;
                    totalBill = totalBill + price * quantity;
            break; 
            case 4: cout<<"Exit and Generate Bill"<<endl;
            break;
            default: cout<<"Invalid choice, please select 1-4"<<endl;
            break;

        }

    }while(choice != 4); 
    //Step - 4 
    //The Receipt
    cout << "\n================================\n"
         << "      CAMPUS SMART CAFE\n"
         << "           RECEIPT"
         << "\n================================\n"
         << "Total Items Ordered : "<<totalItems<<endl
         << "Total Bill : "<<totalBill<<endl
         << "\n================================\n"
         << "Thank you for Visiting!"<<endl
         << "Make sure to rate our Café"<<endl;
         for(int row = 0; row <= 5; row++){
            for(int col = 0; col < row; col++){
                cout<<"*";
            }
            cout<<endl;
         }


    return 0; 
    
}

