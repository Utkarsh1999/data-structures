#include <iostream>
#include <iomanip>

using namespace std;


class SLLNode 
{
	int info;
	SLLNode *next;
	
	SLLNode()
	{
		info = 0;
		next = NULL;	
	}

}



class SLL
{
	SLLNode *head , *tail;
	
	SLL()
	{
		head = NULL;
		tail = NULL;
	}
	
	void addAtTail(int info)
	{
		if(head == NULL)
		{
			SLLNode node1 = new SLLNode();
			node1.info = info;
			node1.next = NULL;
		}
		else{
			SLLNode node2 = new SLLNode();
			node2.info = info;
			node2.next = NULL;
			tail -> next = &node2;
			tail = &node2;
		}
	}

}
