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
			SLLNode *node1 = new SLLNode();
			node1->info = info;
			node1->next = NULL;
			head = node1;
			tail = node1;
			
		}
		else{
			SLLNode *node2 = new SLLNode();
			node2->info = info;
			node2->next = NULL;
			
			tail -> next = node2;
			tail = node2;
			
		}
	}

	void visit(SLLNode *p)
	{
		cout<<p->info<<endl;	
	}

	void traverse()
	{
		SLLNode *p = new SLLNode();
		p = head;
		
		
		while(p!= NULL)
		{
			
			//visit(p);
			cout<<p->info<<endl;			
			p = p->next;
		}
	}


	bool search(int el)
	{
		SLLNode *p = head;
		while(p != NULL)
		{
			if(p->info == el)
			{
				return true;			
			}
			p = p->next;
		}
		return false;
	}


	void addAtHead(int info)
	{
		
		if(head == NULL)
		{
			SLLNode *node1 = new SLLNode();
			node1->info = info;
			node1->next = NULL;
			head = node1;
			tail = node1;
			
		}
		else{
			SLLNode *tempNode = new SLLNode(); 
			tempNode->info = info;
			tempNode->next = NULL;
			
			tempNode->next = head;
			head = tempNode;
			
		}
	}


	int deleteFromHead()
	{
		
		if(head == NULL)
		{
			//linkedlist is empty
			return 0;
			
		}
		else{
			 
			int info = head->info;			
			head = head->next;
			return info;
		}	
	}

	int deleteFromTail()
	{
				
		SLLNode *p = head;
		if(head == NULL)
		{
			//return error		
		}
		else if(head->next == NULL)
		{
			head = NULL;
			tail = NULL;
		}
		else{
			while(p->next->next == NULL)
			{
				p = p->next;
			}
			p->next = NULL;
			tail = p;
		}

	}


	


	/*int deleteBeforePos(int pos)
	{
				
		SLLNode *p = head;
		if(head == NULL)
		{
			//return error		
		}
		else if(head->next == NULL && pos==1)
		{
			head = NULL;
			tail = NULL;
		}
		else{
			for(int counter = 1;counter<=pos;counter++)
			{
				p = p->next;
			}
			p->next = p->next->next;
			
		}

	}*/


	void addAfterPos(int pos)
	{
		
	}


	//concate two different lists
	
	SLL concatinate(SLL list2)
	{
		
	}



};

	int main()
	{
		SLL list;
		
			

		return 0;
	}







