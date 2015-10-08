#include<iostream.h>
#include<conio.h>
#include<dos.h>

int printtime(long a[],int i){
	gotoxy(i*15+1,13);
	long msec=a[i];
	long sec=msec/100;
	long min=sec/60;
	cout<<i+1<<": "<<min<<":"<<sec%60<<"."<<msec%100<<"  ";
	cout<<"\n";
	return 0;
}

void main(){
	clrscr();
	int end=0,i=0,n;
	char ch;
	cout<<"Enter no. of players: ";
	cin>>n;
	clrscr();
	cout<<"Press any key to start";
	getch();
	clrscr();
	long time[4]={0,0,0,0};
	do{
		time[i]++;
		delay(10);
		printtime(time,i);
		if(kbhit())
			ch=getch();
		if(ch==' ')
			i=(i+1)>n-1?0:i+1;
		if(ch=='x')
			end=1;
		if(ch=='p')
			getch();
		ch=0;
	}while(!end);
}



