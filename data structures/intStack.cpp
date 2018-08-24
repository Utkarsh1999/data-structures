#include <iostream>
#include <iomanip>
#define MAX 50

using namespace std;




	 class Stack{
		public:		
		int tos;
		int stackArray[MAX];
		
		Stack()
		{
			tos = 0 ;
		}
		

		bool isFull()
		{
			if(tos==MAX)
				return true;
			else
				return false;
		}

		bool isEmpty()
		{
			if(tos==0)
				return true;
			else
				return false;
		}

		//push()            
		void push(int el)
		{
			if(!isFull())	
			{		
				stackArray[tos]=el;
				tos++;
				
			}
			else{
				//error message	
			}
		}             
		

		int pop()
		{
			if(!isEmpty())	
			{	--tos;	
				int popElement = stackArray[tos];
				
				return popElement;		
			}
			else{
				//error message
				return 0;	
			}
			
		}

		
	};


