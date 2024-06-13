#include<iostream>
using namespace std;
struct  date
    {
     int mm;
       int dd; 
       int yy;
    };
int main(){
     struct date t, b,age;
     int dcout=0;
  //input current date  
   cout<<"enter current date Format(DD MM YY)"<<endl;
   cout<<"------------------"<<endl;
   //input for day
   do{
    dcout++;
    if(dcout>1){ 
    cout<<" \"invalid day\" retry enter day: "<<endl;
    }
   cin>>t.dd;
   }
   while(!(t.dd<=31));
//input for month
   dcout=0;
do{ 
  dcout++;
  if(dcout>1){
   cout<<"\"invalid month\" retry enter month: ";
  }
   cin>>t.mm;
}while(!(t.mm<=12));
//input for year
dcout=0;
  do{
   dcout++;
   if(dcout>1){
    cout<<"\"invalid year\" retry enter year: ";
    }
   cin>>t.yy;
  }while(!(t.yy>=1900&&t.yy<2099));
  //enter brith
  cout<<"------------------"<<endl;
  cout<<"enter your brith Format(DD MM YY)"<<endl;
  cout<<"------------------"<<endl;
  //input day
   dcout=0;
   do{
    dcout++;
    if(dcout>1){
    cout<<"\"invalid day\" retry enter day: "<<endl;
    }
   cin>>b.dd;
   }
   while(!(b.dd<=31));
   //input month
   dcout=0;
do{ 
  dcout++;
  if(dcout>1){
   cout<<"\"invalid month\" retry enter month: "<<endl;
  }
   cin>>b.mm;
}while(!(b.mm<=12));
dcout=0;
//input year brith
dcout=0;
  do{
   dcout++;
   if(dcout>1){
    cout<<"\"invalid year\" retry enterenter year: "<<endl;
    }
   cin>>b.yy;
  }while(!(b.yy>=1900&&b.yy<2099));
  

//day sortring recording month and ading
   if(t.dd<b.dd)
   {
    if(((t.mm>=1)%2!=0)&& (t.mm<=7)){
    t.dd=t.dd+31;
    t.mm=t.mm-1;
    }
     else if((t.mm>=8)&&((t.mm<=12)%2==0)){
       t.dd=t.dd+31;
    t.mm=t.mm-1;
     }
     else if((t.mm>2)&&((t.mm<=6)%2==0)){
       t.dd=t.dd+30;
    t.mm=t.mm-1;
     }
     else if((t.mm>=9)&&((t.mm<=11)%2!=0))
     {
      t.dd=t.dd+30;
    t.mm=t.mm-1;
     }
     else if((t.mm==2)&&(t.yy%4==0)){
       t.dd=t.dd+29;
    t.mm=t.mm-1;
     }
      else if((t.mm==2)&&(t.yy%4!=0)){
         t.dd=t.dd+28;
    t.mm=t.mm-1;
      }
   }

//month sorting  accronding birth month
   if(t.mm<b.mm){
    t.mm=t.mm+12;
    t.yy=t.yy-1;
   } 
   //calculate age

   age.dd=t.dd-b.dd;
   age.mm=t.mm-b.mm;
   if(t.yy>b.mm)
    {
    age.yy=t.yy-b.yy;
    cout<<"------------------"<<endl;
   cout<<"your total age:"<<endl;
   cout<<"=============="<<endl;
   cout<<"years: "<<age.yy<<" months: "<<age.mm<<" days: "<<age.dd<<endl;
      }
      else
      {
         cout<<"brith date is not small than current date";

      }
   cout<<"the end program"<<endl;
   cout<<"            CODE BY SKM CODER";
   cout<<"                              <<------"; 
   return 0;
}