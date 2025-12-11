#include<iostream>
using namespace std;

class maths{
  int*ptr1;
  int*ptr2;
  public:
  void assign_and_print_arrays(){
    int n;
    cout <<"enter value of length of the array"<<endl;
    cin>>n;
    int* ptr1= new int[n];
    int *ptr2= new int[n];
    for (int i =0; i<n;i++){
        int a,b;
        cout<<"assign value for arrays 1st and 2nd respectively"<<endl;
        cin>>a>>b;
      ptr1[i] =a;
      ptr2[i]=b;
     
    }
    cout<<"array 1 = ";
    for (int i =0; i<n;i++){
        cout<<ptr1[i]<<" ";
    }
    
    cout<<endl<<"array 2 = ";
    for (int i =0; i<n;i++){
        cout<<ptr2[i]<<" ";
    }
    delete[]  ptr1,ptr2;
  }
};

int main(){
    maths *qwerty;
    qwerty-> assign_and_print_arrays();
    return 0;
}