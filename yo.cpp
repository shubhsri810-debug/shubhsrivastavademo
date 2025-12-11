
#include<iostream>
using  namespace std;

class Date{
   int day;
   int month;
   int year;
   public:
   void set_date(){
    cout<<"Enter the day,month,year in order"<<endl;
    cin>>day>>month>>year;
   }
   void get_date(){
    int flag=0;
    if (year>2025 && month>12 &&day>31  || year%4==0 && month==2 && day>29){
      
       flag=1;
    }
    for (int i =4; i<13;i+=2){
        if((month==i && day>30) || (month==2 && day>28)){
            
            flag=1;
        }
   }
  if(flag==0){
    cout<<day<<month<<year<<endl;
  }
  if(flag==1){
    cout<<"invalid date"<<endl;
  }
   }
};

int main(){
    Date to;
    to.set_date();
    to.get_date();
    return 0;
}