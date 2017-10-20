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
	cout<<"jumblah box parket\t: "<<jmlhbox<<endl;
	biayapar=jmlhbox*500;
	cout<<"biaya parket (Rp)\t: "<<biayapar<<endl;
	biayapas=luasrumah*20;
	cout<<"biaya pasang (Rp)\t: "<<biayapas<<endl;
	totalbilgn=biayapar+biayapas;
	cout<<"total biaya (Rp)\t: "<<totalbilgn<<endl;
}
