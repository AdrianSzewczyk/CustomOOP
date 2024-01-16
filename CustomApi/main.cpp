#include <iostream>
#include <locale.h>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <iomanip>

using namespace std;
int ConversionNumbertoDec(int x,int y){
int result,power,result2;
int singledigit;
int i=0;
while(x>0){

    singledigit=x%10;
    power=pow(y,i);
    result2=power*singledigit;
    result=result+result2;
    i++;
    x=x/10;
}
return result;
}
int Procedure(int decision){
    int score;
    int number;
    int scorepoints=0;
            string answer;
            string playagain;
            do{
            cout<<"Enter the number you want to convert"<<endl;
            cin>>number;
            cout<<"When you are ready, type ready"<<endl;
            cin>>answer;
            while(answer!="ready"){
               cout<<"When you are ready, type ready"<<endl;
               cin>>answer;
            }
            cout<<"Enter your score "<<endl;
            cin>>score;
            Sleep(1000);
            if(score==ConversionNumbertoDec(number,decision)){
                cout<<"Congratulations, you calculated the result correctly!!!"<<endl;
                scorepoints++;
                cout<<"Do you want to try yourself again?"<<endl;
                cin>>playagain;
                if(playagain=="no"){
                    break;
                }

            }
            else if(score!=ConversionNumbertoDec(number,decision)){
                cout<<"Unfortunately, you didn't win"<<endl;
                cout<<"Do you want to try yourself again?"<<endl;
                cin>>playagain;
                if(playagain=="no"){
                    break;
                }
            }
            }while(true);
            Sleep(2000);

            cout<<"Your score is: "<<scorepoints<<endl;
            if(scorepoints>10){
                cout<<"I think you are ready";
            }
            else{
                cout<<"I think you should train more times";
            }
}



int main()
{

    int scorepoints=0;
    int decision;
    int number;
    cout << "Hello in test before basics of computer science lesson" << endl;
    Sleep(1000);
    cout<<"Enter the number system from which you want to convert"<<endl;
    Sleep(1000);
    cout<<"Choices 2 to 9 are possible"<<endl;
    cin>>decision;
    switch(decision){
        case 2:{
            Procedure(decision);

            break;
        }
        case 3:{
            Procedure(decision);
            break;
        }
        case 4:{
            Procedure(decision);
            break;
        }
        case 5:{
            Procedure(decision);
            break;
        }
        case 6:{
            Procedure(decision);
            break;
        }
        case 7:{
            Procedure(decision);
            break;
        }
        case 8:{
            Procedure(decision);
            break;
        }
        case 9:{
            Procedure(decision);
            break;
        }






    }


    return 0;
}
