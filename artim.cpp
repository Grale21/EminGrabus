#include<iostream>
using namespace std;
int main()
{
    int n=3, i;
    float arr[50], sum=0, armean;
    cout<<"unesi 3 broja ? ";
  
    cout<<"\nUnesi: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
      armean = sum/n;
      double zaokruzi = (int )(armean*100.0)/100.0;
	  
      
    cout<<"\nArtimeticka sredina je = "<<zaokruzi;
    cout<<endl;
    return 0;
}

