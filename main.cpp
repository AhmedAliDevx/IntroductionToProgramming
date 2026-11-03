#include<iostream>
using namespace std;
int main()
{
  int serviceCode; 
  int userChoice;
  int number_of_pages = 0;
  int total_num_pages;
  int pagePrice = 0;
  int rate_per_page = 0;
  int totalAmount = 0;
  int pageDiscount = 0;
  int finalAmount;
  do{
    cout<<"Service Code\t"<<"Service Name\t"<<"Rate per page\n";
    cout<<"1\t"<<"Black and White Photocopy\t"<<"Rs. 5\n";
    cout<<"2\t"<<"Color Photocopy\t"<<"\t\tRs. 20\n";
    cout<<"3\t"<<"Black and White Print\t"<<"\tRs. 10\n";
    cout<<"4\t"<<"Color Print\t"<<"\t\tRs. 30\n";
    cout<<"Enter service code (0 to stop): "<<endl;
    cin>>userChoice;
    serviceCode = userChoice;
    switch(userChoice){
      case 1 : cout<<"Enter number of pages:"<<endl;
              pagePrice = 5;
              cin>>number_of_pages;
              rate_per_page = number_of_pages * pagePrice;
              totalAmount += rate_per_page;
              total_num_pages += number_of_pages;
              break;
      case 2 : cout<<"Enter number of pages:"<<endl;
              pagePrice = 20;
              cin>>number_of_pages;
              rate_per_page = number_of_pages * pagePrice;
              totalAmount += rate_per_page;
              total_num_pages += number_of_pages;
              break;
      case 3 : cout<<"Enter number of pages:"<<endl;
              pagePrice = 10;
              cin>>number_of_pages;
              rate_per_page = number_of_pages * pagePrice;
              totalAmount += rate_per_page;
              total_num_pages += number_of_pages;
              break;
      case 4 : cout<<"Enter number of pages:"<<endl;
              pagePrice = 30;
              cin>>number_of_pages;
              rate_per_page = number_of_pages * pagePrice;
              totalAmount += rate_per_page;
              total_num_pages += number_of_pages;
              break; 
      default: cout<<"Invalid Service Code.";
      break;

    }
    if(serviceCode > 4){
      cout<<"Invalid Service Code.";
    }
  }while(serviceCode != 0);
  if(total_num_pages >= 20){
    pageDiscount = totalAmount * 0.10;
  }
  //Fixed Service Charge 
   finalAmount = totalAmount + 25;

   cout<<"\n------"<<"LIBRARY PHOTOCOPY BILL"<<"------\n"
    <<"Total Pages\t:"<<number_of_pages<<endl
    <<"Total Amount\t:"<<"Rs. "<<totalAmount<<endl
    <<"Discount (10%)\t:"<<"Rs. "<<pageDiscount<<endl
    <<"Service Charge\t:"<<"Rs. "<<25<<endl
    <<"-------------------------------------------------\n"
    <<"Final Payable\t:"<<"Rs. "<<finalAmount<<endl;

}
