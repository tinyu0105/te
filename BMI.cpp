#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	double h,w;
	cout<<"�п�J��ӼƦr���O������(m)���魫(kg)"<<endl;
	cin>>h>>w;
	double BMI;
	BMI=w/(h*h);
	if(BMI<18.5)
	cout<<BMI<<" �魫�L��"<<endl;
	else if(BMI>=18.5&&BMI<24)
	cout<<BMI<<" �魫�з�"<<endl;
	else
	cout<<BMI<<" �魫�L��"<<endl; 
	system("pause");
	return 0;
}
