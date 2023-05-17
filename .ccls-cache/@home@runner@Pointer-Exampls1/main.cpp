#include <iostream>
using namespace std;

int main(){
  int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<a<<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
  
  /*  int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;*/

/*Example Array*/
  /*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
*/
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */
}
