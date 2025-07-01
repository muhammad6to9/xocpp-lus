#include "librarys.h"

using namespace std;

int aimax,aimini,aidraw;
string xoplace;
char aixo;


void board(char a,char b,char c,char d,char e, char f, char g,char h,char i){
    
    cout<<a<<"||"<<b<<"||"<<c;
    cout<<"\n"<<d<<"||"<<e<<"||"<<f;
    cout<<"\n"<<g<<"||"<<h<<"||"<<i;
    cout<<"\n";
    
    }

int maxi(vector<int> busy1){
   
    aimax=10;
    aimini=-10;
    aidraw=0;
    int xx2;
    
    
    
    
    }




int main(){
 
 vector<char> busy;
 aimax=10;
 aimini=-10;
 aidraw=0;
 int vaild=0;
 int x=0;
 int player,ai;
 int size1=0;
 player=0; ai=0;
 cout<<"played counter "<<x<<"\n";
 cout<<"you "<<player<<" ai "<<ai;   
    
 cout<<"\n\nx or o: ";
 ag1:
 string xo;
 cin>>xo;
 
 
  if(!(xo[0]=='x'||xo[0]=='X'||xo[0]=='o'||xo[0]=='O')){
  cout<<"invalid insert, try again\nx or o: ";
  goto ag1;}
  
  
  vector<char> xo2{'x','o','X','O'};
  
  if(xo[0]=='x'){aixo='o';}
  else if(xo[0]=='o'){aixo='x';}
  else if(xo[0]=='X'){aixo='O';}
  else if(xo[0]=='O'){aixo='X';}
 
 int counter=0;
 
  vector<char> brdnum {'1','2','3','4','5','6','7','8','9'}; 
 cout<<"\n";
 board(brdnum[0],brdnum[1],brdnum[2],brdnum[3],brdnum[4],brdnum[5],brdnum[6],brdnum[7],brdnum[8]);
 int try2;
 int ind3=0;
 int t3=0;
 int ind2=0;
 do{
 cout<<"\nenter your number 1-9: ";
 ag2:
 cin>>xoplace;
 
 //intostring7(try2,xoplace);
 if(xoplace.size()>1){cout<<"invaild insert, try again\n";goto ag2;}
 if(xoplace[0]>58||xoplace[0]<49){cout<<"invaild insert, try again\n";goto ag2;}
 //do{if(xoplace[]>9||xoplace<1){cout<<xoplace<<" is invaild, try again\n";goto ag2;}}while(xoplace<1||xoplace>9);
 //while(ind2<busy.size()){if(busy[ind2]==xoplace){cout<<"invaild insert, try again\n";goto ag2;}}
 
 busy.push_back(xoplace[0]);
 ind3=0;
 while(ind3<busy.size()){cout<<busy[ind3]<<"\n";ind3++;}
 
 
 brdnum[xoplace[0]-1]=xo[0];
 
 board(brdnum[0],brdnum[1],brdnum[2],brdnum[3],brdnum[4],brdnum[5],brdnum[6],brdnum[7],brdnum[8]);
 cout<<xoplace[0];
 
 //busy.push_back(xoplace[0]);
 //while(ind3<busy.size()){cout<<"\n"<<busy[ind3];ind3++;}
 }while(1);
/* int xx=0;
 brdnum[xoplace-1]=xo[0];
 cout<<"\n";
 board(brdnum[0],brdnum[1],brdnum[2],brdnum[3],brdnum[4],brdnum[5],brdnum[6],brdnum[7],brdnum[8]);
 */
 
 
 
 
 
 }
