#include <iostream>
#include <iomanip>

using namespace std;


class SLLNode 
{
	public: 
		int info;
		SLLNode *next;
	
		SLLNode()
		{
			info = 0;
			next = NULL;	
		}

};



class SLL
{
    public:
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
			SLLNode node1;
			node1.info = info;
			node1.next = NULL;
		}
		else{
			SLLNode node2;
			node2.info = info;
			node2.next = NULL;
			tail -> next = &node2;
			tail = &node2;
		}
	}

};
