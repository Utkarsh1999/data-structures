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



	int main()
	{
		Stack <char>stack1;
		char input;
		for(int i = 0;i<10;i++)
		{
			cin>>input;
			//if(input == '(' || input == ')' || input == '{' || input == '}' || input == '[' || input == ']')
			if(input == '(' || input == '{' || input == '[')
			{
				stack1.push(input);

			}
			else if(input == ')' || input == '}' || input == ']')
			{
				char el = stack1.pop();
				if(el == '(' && input == ')')
				{
					
				}
				else if(el == '{' && input == '}')
				{

				}
				else if(el == '[' && input == ']')
				{
					
				}
				else{
					//error
					return 0;
				}
			}
			else{
				if(stack1.isEmpty())
				{
				
					stack1.push(input);		
				}
				else{
					char varA = stack1.pop();
					if(varA == '(' && input== ')')
					{
						
					}
					else if(varA == '(' && input== ')')
					{
						
					}
					else if(varA == '(' && input== ')')
					{
						
					}
					else{
						//error
					}		
				}
			}
			
			 

		}
		
	}



