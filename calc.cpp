#include <iostream> 
using namespace std ;

void Addition () {
 int a;
 int b;
 int Add;

    cout << "\t"  "So you choosed adiition! ,  right ? "<<endl ;
    cout << " "<< endl; 

 cout << "Enter The First Digit: ";
 cin >> a ;

                                             cout << " "<< endl; 
                                             
 cout << "Enter The Second Digit: ";
 cin >> b;

                                            cout << " "<< endl; 

 Add = a+b ;
 cout << "The Sum Of The Two Number Are: "<< Add <<endl;
 
}


void Substraction () {
 int a;
 int b;
 int Subs;

    cout << "\t" "So you choosed Substraction! , right?"<<endl;
    cout << " " << endl; 
    
 cout << "\t" "Enter The First Digit: ";
 cin >> a;

                                            cout << " "<< endl;

 cout << "\t" "Enter The Second Digit: ";
 cin >> b;

                                            cout << " "<< endl;

 Subs = a-b;
 cout << "The Substraction of two digits is: "<< Subs << endl;

}

void Multiplication(){
 int a;
 int b;
 int Multi;

    cout << "\t" "So you choosed Multiplication! , right?"<<endl;
    cout << " " << endl ;

 cout << "\t" "Enter The First Digit: ";
 cin >> a ;

                                            cout << " "<< endl;

 cout << "\t" "Enter The Second Digit: ";
 cin >> b;
                                            cout << " "<< endl;

 Multi = a*b;
 cout << "\t" "The Product Of The Two Number Is: "<< Multi <<endl;


}

void Division (){
int a; 
int b;
double Div;

    cout << "So you choosed Division! , right? "<<endl;
    cout << " "<< endl ;

 cout << "\t" "Enter The First Digit: ";
 cin >> a;

                                            cout << " "<< endl;

 cout << "\t" "Enter The Second Digit: ";
 cin >>  b; 

                                              cout << " "<< endl;

 Div = a/b;
 cout << "The Qoutient Of The Two Number Is: "<< Div <<endl;

}


int main () {
int o;

cout <<  "\t" "\t" "1. Addition ."<< endl;
cout <<  "\t" "\t" "2. Substraction ."<< endl;
cout <<  "\t" "\t" "3. Multiplication ."<< endl;
cout <<  "\t" "\t" "4. Divide ."<< endl;

cout << "\t" "CHOOSE THE OPERATION YOU WANT TO PERFORFM: ";

cin >> o;

                                            cout << " "<< endl;

if ( o==1 ){
    Addition();
}

else if ( o==2 ){
    Substraction();
}

else if ( o==3 ){
    Multiplication();
}

else if ( o==4 ){
    Division();
}
else  {
    cout << "ERROR!!! ''INVALID INPUT DETECTED !!!'' "<<endl;
}

cout << "Press Enter to exit...";
cin.ignore();
cin.get();
}