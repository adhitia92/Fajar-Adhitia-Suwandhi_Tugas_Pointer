// Nama  : Fajar Adhitia Suwandhi 
// NPM   : G1A021086
// Kelas : Informatika B
// Tugas : Pointer_2

#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	int *p1, *p2, *p3;
	
	a = 10;
	cout<<"\na = 10"<<endl;
	cout <<"a = " <<a<< endl;
	b = 15;
	cout<<"\nb = 15"<<endl;
	cout <<"b = " <<b<< endl;
	p1 = &b;
	cout<<"\np1 = &b"<<endl;
	cout<<"&b = "<<&b<< endl;
	cout<<"p1 = "<<p1<< endl;
	p2 = p1;
	cout<<"\np2 = p1"<<endl;
	cout<<"p1 = "<<p1<< endl;
	cout<<"p2 = "<<p2<< endl;
	c = 27;
	cout<<"\nc = 27"<<endl;
	cout <<"c = " <<c<< endl;
	p1 = &c;
	cout<<"\np1 = &c"<<endl;
	cout <<"&c = " <<&c<< endl;
	cout <<"p1 = " <<p1<< endl;
	a = *p1;
	cout<<"\na = *p1"<< endl;
	cout<<"*p1 = "<<*p1<< endl;
	cout<<"a = "<<a<< endl;
	p3 = &b;
	cout<<"\np3 = &b"<<endl;
	cout <<"b = " <<b<< endl;
	cout <<"p3 = " <<p3<< endl;
	*p2 = 8;
	cout<<"\n*p2 = 8"<<endl;
	cout <<"*p2 = " <<*p2<< endl;
    
return 0;
}