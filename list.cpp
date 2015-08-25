# listexercise1
Linked List Exercise for Algorithms Lab Week 1


#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for (Node *p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if (tail == 0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	//TO DO!

	Node *tmp = new Node(el);
	if (isEmpty()) {
		head = tmp;
		tail = tmp;
	}
	else {

		tail->next = tmp;
		tail = tmp;
	}

	


}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if (head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;

	//////cout << el;

	return el;
}
char List::popTail()
{
	/*char ell = head->data;

		Node *tmp = head;


		while (head != tail)
		{
			head = head->next;
			

		}
		head = head->next;
	

		tail->next = tmp;
		tail = tmp;


		cout << tmp->data;

		

		delete tmp;



	return ell;
*/



	char el = tail->data;
		Node *tmp=head;
//		int num;
		if (isEmpty()) {
			cout << "No data"<<endl;
		}
		else {
			if (head == tail) {
				head = 0;
				delete tail;
			}
			else {

			delete tail;

			}
		}
		return el;
	


}
bool List::search(char el)
{
	//TO DO! (Function to return True or False depending if a character is in the list.

	Node *s = tail;

	while (s != 0) {
		if (s->data == el) {

			s = s->next;

			return true;
		}
		else
		{
			return false;
		}
	}
	

	
}
void List::reverse()
{
	// TO DO! (Function is to reverse the order of elements in the list.

	char el = head->data;
	Node *tmp = head;
	int num;

	while (tmp != 0) {
		if (tmp != 0) {
			break;
		}
		tmp = head->next;
		head = head->next;
		tail = tmp;
		pushToTail(head);
	}


	
	delete tmp;

}
void List::print()
{
	if (head == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while (tmp != tail)
		{
	
				cout << tmp->data;
				tmp = tmp->next;  
		}

			cout << tmp->data;
	

	}
}
