#include<iostream>

using namespace std;

class SingleCore{
public:
	virtual void show() = 0;
};

class SingleCoreA:public SingleCore{
public:
	void show(){cout<<"SingleCoreA"<<endl;};
};

class SingleCoreB:public SingleCore{
public:
	void show(){cout<<"SingleCoreB"<<endl;};
};

class Factory{
public:
	virtual SingleCore* CreateSingleCore() = 0;
};

class FactoryA: public Factory{
public:
	SingleCore* CreateSingleCore(){return new SingleCoreA();}
};

class FactoryB:public Factory{
public:
	SingleCore* CreateSingleCore(){return new SingleCoreB();}
};