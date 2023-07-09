#include <iostream>
using namespace std ;

class mybank{
    private:
    int atmpin,balance;
    public:
    string bname,IFSC;
    int accnum;
    
    void input(){
        atmpin=1234;
        balance=9999;
        bname="paytm";
        IFSC="pay123456";
        accnum=98765;
    }
    void output (){
        cout<<"My bank detail"<<endl;
        cout<<atmpin<<endl;
         cout<<balance<<endl;
          cout<<bname<<endl;
           cout<<IFSC<<endl;
            cout<<accnum<<endl;
            
     
    }
   
};

int main() {
 
 mybank m;
 m.input();
 m.output();
 
 cout<<"Raj trying to acess to account"<<endl;
  cout<<" bank detail"<<endl;
        cout<<m.atmpin<<endl; //not allowed
         cout<<m.balance<<endl; // not allowed
          cout<<m.bname<<endl;
           cout<<m.IFSC<<endl;
            cout<<m.accnum<<endl;
    return 0;
}