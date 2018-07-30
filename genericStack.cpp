#include <iostream>
#include <iomanip>
#define MAX 50

using namespace std;


template <typename T>

	 class Stack{
		public:		
		int tos;
		T stackArray[MAX];
		
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
		void push(T el)
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
		

		T pop()
		{
			if(!isEmpty())	
			{	--tos;	
				T popElement = stackArray[tos];
				
				return popElement;		
			}
			else{
				//error message
				return 0;	
			}
			
		}

		
	};


