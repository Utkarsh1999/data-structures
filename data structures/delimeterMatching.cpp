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
		//for(int i = 0;i<10;i++)
		while(true)
		{
			cin>>input;
			//if(input == '(' || input == ')' || input == '{' || input == '}' || input == '[' || input == ']')
			if(input == '(' || input == '{' || input == '[')
			{
				stack1.push(input);

			}
			else if(input == ')' || input == '}' || input == ']')
			{
				//char el = stack1.pop();
				char varA = stack1.pop();
					if(varA == '(' && input== ')')
					{
						cout<<"delimeter ( ) matched"<<endl;
					}
					else if(varA == '{' && input== '}')
					{
						cout<<"delimeter { } matched"<<endl;	
					}
					else if(varA == '[' && input== ']')
					{
						cout<<"delimeter [ ] matched"<<endl;
					}
					else{
						//error
						cout<<"invalid input/expression"<<endl;
						break;
					}		
			}
			else{
					//cout<<"not a bracket \n"<<endl;
					continue;
				}
			}
			
			return 0;		 

		}

