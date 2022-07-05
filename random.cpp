#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int generisi(int randombr){
	
	srand (time(NULL));

  
  randombr= rand() %184 +60;
  return randombr;
	}
bool prostBroj (int n ){
	if (n <=1 ){
		return false; 
	}
	for ( int i =2; i<n ; i++){
		if( n%i == 0){
			return false; 
		}else {
			return true; 
		}
	}
}
int main () {
	
  int rr= generisi(rr);
  cout <<"Generisani broj je: "<<rr;
  prostBroj(rr); 
  if (prostBroj(rr)){
  	cout<<"\nBroj: "<<rr<<" je prost broj!"; 
  }else {
  	cout <<"\nBroj: "<<rr<<" nije prost broj!"; 
  }
return 0;
}

