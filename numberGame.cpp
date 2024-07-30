#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int randomNumber;
    int guss;
    srand(time(0));
    cout<<"****************NUMMBER GUSSING GAME**************"<<endl;
    cout<<"                 Instructions                "<<endl;
    cout<<"you have to guss a number between 1 to 50"<<endl;
    randomNumber = (rand()%(50-1))+1;
    cout<<randomNumber<<endl;

    do{
        cout<<"enter your guss between 1 and 50"<<endl;
        cin>>guss;

        if(guss<randomNumber){
            cout<<"the guss is low"<<endl;

        }

        else if(guss>randomNumber){
            cout<<"the guss is high"<<endl;

        }

        else{
            cout<<"AMAZING! You got a right guess"<<endl;
        }


    }while(guss!=randomNumber);
    return 0;



}