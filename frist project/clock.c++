#include <iostream>
#include <windows.h>
using namespace std;

int main(){
 //*TODO vriables of the clock //
    int Hour=0;
    int min=0;
    int sec=0;
 //*! end of the vriables //
 
   //*?data of clock//
    cout<<"enter hour :";
    cin>>Hour;

    cout<<"enter min :";
    cin>>min;

    cout<<"enter sec :";
    cin>>sec;

    //**clock on//
    while(true){
        system("cls");
        if(sec>59){
            min++;
            sec=0;
        }
        else if(min>59){
            Hour++;
            min=0;
        }
        else if(Hour>23){
            Hour=0;
        }
        cout<<Hour<<":"<<min<<":"<<sec;
        sec++;
        Sleep(900);
    }
    return 0;
}