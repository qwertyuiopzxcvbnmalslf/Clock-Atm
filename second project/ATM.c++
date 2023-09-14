#include <iostream>

using namespace std;

//*********! variables *********//
double balance = 1000;
int deposit = 0;
int withDraw = 0;
int passWord = 0000;
int choice=0;
//****** end of variables *****//

//********TODO Menue of ATM *********//
void show_Menu(){
    cout << "****** Memu ******\n";
    cout << "1:balance\n";
    cout << "2:withDraw\n";
    cout << "3:deposit\n";
    cout << "4:Exit   \n";
    cout << "****** Memu ******\n";
}
//****** end the Menu of ATM ******//

//******? programming of ATM ******//
void process(){
    cout << "enter your passWord :";
    cin >> passWord;

 do{
    
    if(passWord==0000){
        cout<<"enter your choice :";
        cin>>choice;

        switch(choice){
            case 1:
              cout<<"your balance is :"<<balance<<endl;
              break;
            
            case 2:
              cout<<"NOTE:your balance is :"<<balance<<endl;
              cout<<"enter the amount :";
              cin>>withDraw;
              if(withDraw>balance){

                cout<<"sorry your balance lessthan withDraw"<<endl;

              }
              else{
              balance-=withDraw;
              cout<<"your new balance is :"<<balance<<endl;
              }
              break;
            case 3:
              cout<<"your balance is :"<<balance<<endl;
              cout<<"enter the amount :";
              cin>>deposit;
              balance+=deposit;
              cout<<"your new balance is :"<<balance<<endl;
              break;
            case 4:
              cout<<"thank you \n";
              break;
        }
        
    }
   else{
   char option='o';
   cout<<"your passWord not correct if you want try agin enter [Y] for Yes if you dont try agin enter [N] for No \n";
   cin>>option;
   if(option=='Y'||option=='y'){
    cout<<"enter your passWord :";
    cin>>passWord;
   }
   else if(option=='N'||option=='n'){
    cout<<"thank you ";
    choice=4;
   }
   }
 }while(choice<4);
}
int main()
{
    show_Menu();
    process();
    return 0;
}