#include<iostream>

using namespace std;

enum type{COREA, COREB};

class SingleCore{
public:
	virtual void show() = 0;
};

class SingleCoreA:public SingleCore{
public:
	void show(){cout<<"SingleCoreA"<<endl;}
};

class SingleCoreB:public SingleCore{
public:
	void show(){cout<<"SingleCoreB"<<endl;}
};

class Factory{
public:
	SingleCore* CreateSingleCore(enum type ctype){
		if(ctype == COREA){
			return new SingleCoreA();
		}
		else if(ctype == COREB){
			return new SingleCoreB();
		}
		else
			return NULL;
	}
};

int main(){
	system("pause");
	return 0;
}