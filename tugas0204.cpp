#include <iostream>
using namespace std;

int main(){
	
	double luasrumah,par=1.87596,jumblah,biayapar,biayapas,jmlhbox,totalbilgn,x,y;
	
	cout<<"luas rumah\t\t: ";
	cin>>luasrumah;
	cout<<"jumblah box Parket\t\t: ";cin>>jumblah;
	cout<<"-------------------------------------------------"<<endl;
	x=par*jumblah;
	y=luasrumah/x;
	jmlhbox=y*234.495;
}
