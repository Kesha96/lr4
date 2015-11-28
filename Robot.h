#pragma once
#include <iostream>
#include "Print.h"



class  Element
{
public:
	 Element();
	~ Element();
	Flower *element;
	Element *next;
	Element(Flower *a, Element *n)
	{
		element = a;
		next = n;
	}
private:

};

 Element:: Element()
{
}

 Element::~ Element()
{
}


class Robot
{
protected:
	Element *head;
public:
	Robot()
	{
		head = NULL;
	};
	void add(Flower* p)
	{
		if (head == NULL)
					{
						head = new Element(p, NULL);
					}
					else
					{
						head = new Element(p, head);			
					}
		
	}
	void show()
	{
		auto e = head;
		
				while (e != NULL) {
					e->element->print();
					e = e->next;
				}
			}
	};
