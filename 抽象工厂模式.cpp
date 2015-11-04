#include<iostream>

using namespace std;

class singleCore{
public:
	virtual void show() = 0;
};

class singleCoreA: public singleCore
{
public:
	void show(){ cout<<"SingleCoreA"<<endl;}
};

class singleCoreB: public singleCore
{
public:
	void show(){ cout<<"SingleCoreB"<<endl;}
};

class multiCore{
public:
	virtual void show() = 0;
};

class multiCoreA:public multiCore{
public:
	void show(){cout<<"multiCoreA"<<endl;}
};

class multiCoreB:public multiCore{
public:
	void show(){cout<<"multiCoreB"<<endl;}
};


class Factory{
public:
	virtual singleCore* CreateSingleCore() = 0;
	virtual multiCore* CreateMultiCore() = 0;
};

class FactoryA:public Factory{
public:
	singleCoreA* CreateSingleCore(){return new singleCoreA;}
	multiCoreA* CreateMultiCore(){return new multiCoreA;}
};

class FactoryB:public Factory{
public:
	singleCoreB* CreateSingleCore(){return new singleCoreB;}
	multiCoreB* CreateMultiCore(){return new multiCoreB;}
};

int main(){
	system("pause");
	return 0;
}