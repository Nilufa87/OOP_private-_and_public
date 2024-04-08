#include<iostream>
using namespace std;

  class Family{
  private:
  	double income;
  	int name;
  public:
	int member;
	string leader;
	void setdata(double i,int m);
	void getdata(){
	cout<<"Enter the name:"<<name<<endl;
	cout<<"Enter the member:"<<member<<endl;
	cout<<"Enter the leader:"<<leader<<endl;
	cout<<"Enter the income:"<<income<<endl;
	}
  };
 void Family::setdata(double i,int m){
 income=i;
 name=m;
 }
int main(){
	Family First;
	First.setdata(1200.500,120);
	First.leader="father";
	First.member=5;
	First.getdata();
return 0;
}
