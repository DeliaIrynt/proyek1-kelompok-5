#include <iostream>
using namespace std;

#define max 10
string n[max], nip[max], u[max], jk[max], s[max], pend[max], pk[max], tt[max], gol[max], g[max], loop;
int pos=0;


void display(){
	system("cls");
	if(pos>0){
		cout<<"Data Tersimpan"<<endl;
		for(int a=0; a<pos; a++){
			cout<<"Data PNS ke- "<<a+1<<endl;
			for(int q=0; q<pos; q++){
			cout<<q+1<<".  Nama : "<<n[q]<<endl;
			cout<<a+2<<".  NIP : "<<nip[a]<<endl;
			cout<<a+3<<".  Usia : "<<u[a]<<endl;
			cout<<a+4<<".  Jenis Kelamin : "<<jk[a]<<endl;
			cout<<a+5<<".  Status : "<<s[a]<<endl;
			cout<<a+6<<".  Pendidikan : "<<pend[a]<<endl;
			cout<<a+7<<".  Pekerjaan : "<<pk[a]<<endl;
			cout<<a+8<<".  Tempat Tugas : "<<tt[a]<<endl;
			cout<<a+9<<".  Golongan : "<<gol[a]<<endl;
			cout<<a+10<<".  Gaji : "<<g[a]<<endl;
			cout<<"       "<<endl;
			}
	}
	else{
		cout<<"Data Kosong"<<endl;
	}
}
}
void add(){
	display(); 
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
			display();
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
void edit(){
	int y, k;
	do{
		display();
		cout << "Edit Data ke : ";
		cin>>y;
		cout<<"Edit Nomor : ";
		cin>>k;
		cin.ignore();
		if(k==1){
		cout<<"Edit Nama : ";
		getline(cin, n[y-1]);
		}else if(k==2){
		cout<<"Edit NIP : ";
		getline(cin, nip[y-1]);
		}else if(k==3){
		cout<<"Edit Umur : ";
		getline(cin, u[y-1]);
		}else if(k==4){
		cout<<"Edit Jenis Kelamin : ";
		getline(cin, jk[y-1]);
		}else if(k==5){
		cout<<"Edit Status : ";
		getline(cin, s[y-1]);
		}else if(k==6){
		cout<<"Edit Pendidikan : ";
		getline(cin, pend[y-1]);
		}else if(k==7){
		cout<<"Edit Pekerjaan : ";
		getline(cin, pk[y-1]);
		}else if(k==8){
		cout<<"Edit Tempat Tugas : ";
		getline(cin, tt[y-1]);
		}else if(k==9){
		cout<<"Edit Golongan : ";
		getline(cin, gol[y-1]);
		}else if(k==10){
		cout<<"Edit Gaji : ";
		getline(cin, g[y-1]);
		}else{
			cout<<"selesai";
		}
		cout<<"Edit menjadi : ";
		display();	
		cout << "ubah lagi (y/t) : ";
		cin >> loop;
	} while (loop == "y");
}

void del(){
	int x;
	do{
		display();
		if(pos>0){
			cout<<"hapus data ke : ";
			cin>>x;
			for(int i=x; i<pos; i++){
				n[i-1]=n[1];
			}
			pos--;
			display();
			cout<<"hapus lagi(y/t) : ";
			cin>>loop;
		}else {
			cout<<"isi t : ";
			cin>>loop;
		}
		
	}while(loop=="y");
}

int main(){
	int pil;
	do{
		system("cls");
		cout<<"1. Tambahkan Data\n";
		cout<<"2. Tampilkan Data\n";
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 1:
			add();
			break;
		case 2:
			do{
			display();
			cout<<"kembali (y) : ";
			cin>>loop;
		}while(loop !="y");
			break;
		case 3:
			edit();
			break;
		case 4:
			del();
			break;
		case 5:
			cout<<"....."<<endl;
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}

