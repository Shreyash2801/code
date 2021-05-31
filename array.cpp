#include <iostream>

using namespace std;

int main()
{   float arr[5];
   cout<<"Enter Elements:";
   for (int i = 0 ; i<5 ; ++i) {
   	
   	cin>>*(arr+i) ;
   }
   cout<<"Your Elements:" <<endl;
    for (int i=0; i<5; ++i) {
   	
   	cout<<*(arr+i) << endl;
   }
   return 0;
}
