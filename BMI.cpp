#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	double h,w;
	cout<<"請輸入兩個數字分別為身高(m)及體重(kg)"<<endl;
	cin>>h>>w;
	double BMI;
	BMI=w/(h*h);
	if(BMI<18.5)
	cout<<BMI<<" 體重過輕"<<endl;
	else if(BMI>=18.5&&BMI<24)
	cout<<BMI<<" 體重標準"<<endl;
	else
	cout<<BMI<<" 體重過重"<<endl; 
	system("pause");
	return 0;
}
