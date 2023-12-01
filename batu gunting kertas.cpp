#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int function01(int score){
	cout<<"[";
	for(int x=1; x<=score; x++){
		cout<<"0";
	}
	cout<<"]"<<"\n";
}

int main(){
	int hp, bot_hp, move, botmove, n;
	string name;
	string pilih[6] = {"____________________________________________________________________",
	 "pilih serangan yang akan kamu gunakan", "1=batu", "2=gunting", "3=kertas", " "};
	
	cout<<"masukan nama:"<<"\n";
	getline(cin,name);
	cout<<"masukan Jumlah hit point:"<<"\n";
	cin>>hp;
	bot_hp=hp;
	if(hp>=1&&hp<=20){
		while(hp!=0&&bot_hp!=0){
		cout<<pilih[0]<<"\n";
		cout<<"HP     ";
		function01(hp);
		cout<<"bot HP ";
		function01(bot_hp);
			for(int x=0; x<6; x++){
				cout<<pilih[x]<<"\n";
			}
			cin>>move;
			
			srand(time(0));
	
			botmove=1+rand() % 3;
			
			if(move==1&&botmove==1){
				cout<<name<<" menggunakan batu, computer menggunakan batu "<<"\n"<<"[draw]"<<"\n";
			}else if(move==1&&botmove==2){
				cout<<name<<" menggunakan batu, computer menggunakan gunting "<<"\n"<<"[computer menerima 1 kerusakan]"<<"\n";
				n=bot_hp-1;
				bot_hp=n;
			}else if(move==1&&botmove==3){
				cout<<name<<" menggunakan batu, computer menggunakan kertas "<<"\n"<<"["<<name<<" menerima 1 kerusakan]"<<"\n";
				n=hp-1;
				hp=n;
			}else if(move==2&&botmove==2){
				cout<<name<<" menggunakan gunting, computer menggunakan gunting "<<"\n"<<"[draw]"<<"\n";
			}else if(move==2&&botmove==3){
				cout<<name<<" menggunakan gunting, computer menggunakan kertas "<<"\n"<<"[computer menerima 1 kerusakan]"<<"\n";
				n=bot_hp-1;
				bot_hp=n;
			}else if(move==2&&botmove==1){
				cout<<name<<" menggunakan gunting, computer menggunakan batu "<<"\n"<<"["<<name<<" menerima 1 kerusakan]"<<"\n";
				n=hp-1;
				hp=n;
			}else if(move==3&&botmove==3){
				cout<<name<<" menggunakan kertas, computer menggunakan kertas "<<"\n"<<"[draw]"<<"\n";
			}else if(move==3&&botmove==1){
				cout<<name<<" menggunakan kertas, computer menggunakan batu "<<"\n"<<"[computer menerima 1 kerusakan]"<<"\n";
				n=bot_hp-1;
				bot_hp=n;
			}else if(move==3&&botmove==2){
				cout<<name<<" menggunakan kertas, computer menggunakan gunting "<<"\n"<<"["<<name<<" menerima 1 kerusakan]"<<"\n";
				n=hp-1;
				hp=n;
			}else{
				cout<<"input salah"<<"\n";
			}
			
		}
		cout<<pilih[0]<<"\n";
		if(hp<=0&&bot_hp>=1){
			cout<<"computer menang";
		}else if(hp>=1&&bot_hp<=0){
			cout<<name<<" menang";
		}
		
	}else if(hp>=21){
		cout<<"jumlah terlalu banyak";
	}else{cout<<"input salah";
	}
	
	return 0;
}
