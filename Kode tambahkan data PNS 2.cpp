#include <iostream>
using namespace std;

#define max 10
string n[max], nip[max], u[max], jk[max], s[max], pend[max], pk[max], tt[max], gol[max], g[max], loop;
int pos=0;

void add(){

	do{
		if(pos<max){
			cin.ignore();
			cout<<"Nama : ";
			getline(cin, n[pos]);
			cout<<"NIP : ";
			getline(cin, nip[pos]);
			cout<<"Usia : ";
			getline(cin, u[pos]);
			cout<<"Jenis Kelamin : ";
			getline(cin, jk[pos]);
			cout<<"Status : ";
			getline(cin, s[pos]);
			cout<<"Pendidikan : ";
			getline(cin, pend[pos]);
			cout<<"Pekerjaan : ";
			getline(cin, pk[pos]);
			cout<<"Tempat Tugas : ";
			getline(cin, tt[pos]);
			cout<<"Golongan : ";
			getline(cin, gol[pos]);
			cout<<"Gaji : ";
			getline(cin, g[pos]);
			pos++;
			cout<<"ulangi (y/t) : ";
			cin>>loop;
		}else{
			cout<<"memori penuh"<<endl;
			cout<<"isi t untuk kembali";
			cin>>loop;
		}
	
	}while(loop=="y");
	cout<<"Tambahkan Data"<<endl;
}

int main(){
	int pil;
	do{
		system("cls");
		cout<<"1. Tambahkan Data\n";
		
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 1:
			add();
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}

