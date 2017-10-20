#include <iostream>
using namespace std;

int main(){
	
	double luasrumah,par=1.87596,jumblah,biayapar,biayapas,jmlhbox,totalbilgn,x,y;
	
	cout<<"Luas Rumah\t\t: ";
	cin>>luasrumah;
	cout<<"Jumblah Box Parket\t\t: ";cin>>jumblah;
	cout<<"-------------------------------------------------"<<endl;
	x=par*jumblah;
	y=luasrumah/x;
	jmlhbox=y*234.495;
	cout<<"Jumblah Box parket\t: "<<jmlhbox<<endl;
	biayapar=jmlhbox*500;
	cout<<"Biaya Parket (Rp)\t: "<<biayapar<<endl;
	biayapas=luasrumah*20;
	cout<<"Biaya Pasang (Rp)\t: "<<biayapas<<endl;
	totalbilgn=biayapar+biayapas;
	cout<<"Total Biaya (Rp)\t: "<<totalbilgn<<endl;
}
