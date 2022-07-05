#include <iostream>

using namespace std;



void UnosNiza(int niz[], int n ){
	int e;

	 
	for (int i = 0; i<n; i++){
		cout <<"Unesite "<<i+1<<". element niza: "; 
		 flag: 
		cin>>e; 
		if(e>0){
			cout <<"Broj treba da bude negativan!";
			goto flag; 
		}else {
		niz[i]= e; 	
		}
		
	}
}


void IspisNiza(int niz[],int n ){
	int e ; 
	for  (int i = 0; i < n ; i++){
		cout <<niz[i]<<" ,"; 
	}
}



void zamijeni(int niz[], int n){
	for (int i = 0; i<n ; i++){
		if (niz[i]%10==0){
			niz[i]=niz[i]-1; 
		}
	}
	IspisNiza(niz, n); 
	
}
bool isti (int niz1[],int niz2[],int n1, int n2){
	

    int b= 0 , k=0, cnt=0; 
	for(int i=0; i<n1; i++)
   {
      for(int j=0; j<n2; j++)
      {
         if(niz1[i]==niz2[j])
         {
            
            if(cnt==0)
            {
               
               k++;
            }
         }
      }
   }
   if(k==0)
      return false;
   else if(k==1)
   {
      return true;
      
   }
   else
   {
      return true; 
   }

	
}
void sortiraj(int niz[], int n ){
	int temp=0; 
	for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(niz[i]<niz[j])
			{
				temp  =niz[i];
				niz[i]=niz[j];
				niz[j]=temp;
			}
		}
	}
	IspisNiza(niz,n);
}

int main () {
	int a[123123],b,c,d[123123];
	cout <<"Unesite broj elemenata prvog niza!\n";
	cin>>b;
	UnosNiza(a,b);
	cout <<"Unesite broj elemenata drugog niza!\n"; 
	cin>>c; 
	UnosNiza(d,c); 
	cout <<"\n Clanovi prvog niza su: "; 
	IspisNiza(a,b); 
	cout <<"\n Clanovi drugog niza su: "; 
	IspisNiza(d,c); 
	cout<<"\n Niz 1 poslije zamijene: "; 
	zamijeni(a,b); 
	cout<<"\n Niz 2 poslije zamijene: "; 
	zamijeni(d,c); 
	cout<<"\n Niz 1 poslije sortiranja: "; 
	sortiraj(a,b); 
	cout<<"\n Niz 2 poslije sortiranja: "; 
	sortiraj(d,c); 
	isti(a,d,b,c);
	if( isti(a,d,b,c)){
		cout <<"\n U nizovima ima barem jedan isti element! "; 
	}else {
		cout<<"\n U nizovima nema niti jedan isti element"; 
	}
	
	
return 0;
}

