#include<iostream>
#include<cstdlib>
#include
using namespace std;
main() {
   int maxi;
   maxi = 100; 
   srand(time(0)); //set the upper bound to generate the random number
   cout << "The random number is: "<<rand()%maxi;
}
