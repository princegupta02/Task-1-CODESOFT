#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string name;
    char input;
    int inputuser;
    int score;
    cout<<"Enter Your Name  ";
    getline(cin,name);
    cout<<endl;
    do{
        srand(0);
        int variable=rand()%5+1;
        cout<<"Enter any number between 1 to 5  ";
        cin>>inputuser;
        if(inputuser==variable){
            cout<<"CONGRATULATIONS! You Gussed Correct Number"<<endl;
            score++;
        }else{
            cout<<"SORRY! You Gussed Wrong Number";
        }
        cout<<"Would You Play Again Y/N  ";
        cin>>input;
        cout<<endl;
    }while(input!='N');
    cout<<"Your score is "<<score<<endl;    cout<<"GAME OVER!"<<endl;
}