#include <iostream>
# define MAX 50

using namespace std;

class QueueArray
{
	int first,last;
	int storage[MAX];

	QueueArray()
	{
		first=-1;
		last=-1;
	}


	//enqueue
	void enQueue(int el)
	{
		if(!isFull())
		{
			if(last == (MAX-1))
			{
				last=0;
				// first = 0;
				// storage[last]=el;
			}
			else
			{
				last++;
				// storage[last]=el;
			}
			storage[last]=el;
		}
	}




	int deQueue()
	{
		if(!isEmpty())
		{
			return storage[first++];	
		}
		else{
			//return empty queue error
			return 0;
		}
	}


	bool isEmpty()
	{
		if(last == -1)
		{
			return true;
		}
		return false;
	}


	bool isFull()
	{
		if((first == 0 && last == MAX-1) || (first == last+1))
		{
			//queue is full
			return true;
		}
			return false;	
	}


	void display()
	{

	}






};
