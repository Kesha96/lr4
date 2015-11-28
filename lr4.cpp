#include "stdafx.h"
#include "Print.h"

#include "Robot.h"


void main()
{
	Rose MyRose;
	MyRose.SetColor("Red");
	MyRose.stalk.SetLength(10); 
	MyRose.stalk.SetThornsh(true);
	MyRose.Pack.SetMaterial("Plastick");
	
	Chrys MyChr;
	MyChr.SetColor("White");
	MyChr.stalk.SetLength(20);
	MyChr.stalk.SetThornsh(false);
	MyChr.Pack.SetMaterial("Cartbord");

	Rose MyRose1;
	MyRose1.SetColor("Red");
	MyRose1.stalk.SetLength(30); 
	MyRose1.stalk.SetThornsh(false);
	MyRose1.Pack.SetMaterial("Paper");
	
	
	cout << "00000000000000000000000000" << endl;

	Robot *R = new Robot;
	R->add(&MyChr);
	R->add(&MyRose);
	R->add(&MyRose1);
	cout << "00000000000000000000000000" << endl;
	//R->add(&MyChr);
	R->show();
	system("pause");
}

//class A {
//public: 
//	virtual void print() = 0;
//};
//
//class R : public A {
//public: 
//	virtual void print() {
//		cout << "R" << endl;
//	}
//};
//
//class C : public A {
//public:
//	virtual void print() {
//		cout << "C" << endl;
//	}
//};
//
//class ElementA {
//public:
//	ElementA(A* e, ElementA* n) {
//		element = e;
//		next = n;
//	}
//
//	A* element;
//	ElementA* next;
//};
//
//class ContainerA {
//private:
//	ElementA* head;
//public:
//	ContainerA() {
//		head = NULL;
//	}
//
//	void add(A* a) {
//		if (head == NULL)
//		{
//			head = new ElementA(a, NULL);
//		}
//		else
//		{
//			head = new ElementA(a, head);			
//		}
//	}
//
//	void show() {
//		auto e = head;
//
//		while (e != NULL) {
//			e->element->print();
//			e = e->next;
//		}
//	}
//};
//
//void main() {
//	auto r1 = new R();
//	auto r2 = new R();
//	auto c = new C();
//
//	A* a = new R();
//
//	auto list = new ContainerA();
//	list->add(r1);
//	list->add(c);
//	list->add(r2);
//
//	list->show();
//}
