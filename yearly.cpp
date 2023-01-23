#include<iostream>
#include<stdlib.h>
using namespace std;

void calendar(){
	string names[12]={"January","February","March","April","May","June","July","August","September","Octotober","November","December"};
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year, month, firstJan, i, sum, firstMon, startDay, j, k;
	cout<<"Enter the year(Should be between 1900 and 2100): "; cin>>year;system("CLS");
	cout<<"*********************Calendar for "<<year<<"****************\n";
	if(year%4==0)days[1]=29;
	firstJan=(5*((year-1)%4)+4*((year-1)%100)+6*((year-1)%400))%7;
	sum = firstJan;
	for(month=1;month<=12;month++){
	for(i=month-2;i>=0;i--){sum+=days[i];}
	firstMon = sum%7;
	startDay = firstMon;
	cout<<"-----------------------"<<names[month-1]<<"-------------------------\n";
	cout<<"Mo\tTu\tWe\tTh\tFr\tSa\tSu\n";
	for(j=1;j<=startDay;j++){cout<<"\t";}
	for(k=1;k<=days[month-1];k++){
		if((startDay+1+k)%7==1){
			cout<<k<<"\t"<<"\n";
		}
		else{
			cout<<k<<"\t";
		}
	}
	cout<<"\n\n";
	sum=firstJan;
}
}
int main(){
	calendar();
}
