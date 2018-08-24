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

		void display()
		{
			cout<<"\ntos = "<<tos<<endl;
			for(int i = tos ; i>=0;i--)
			{
				cout<<"\n\nStack element are : ";
				cout<<stackArray[i]<<endl;
			}
		}

		
	};


	int checkPrecedence(char el)
	{
		int precedenceScore = 0;
		if(el == '+' || el == '-')
		{
			precedenceScore = 1;
		}
		else if(el == '*' || el == '/')
		{
			precedenceScore = 2;
		}
		return precedenceScore;

	}





	int main()
	{
		Stack <char>stack1 ;
		char input ;
		string expression;
		int pos =0 ;
		while(true)
		{
				cin>>input;
			if(input == '+' || input == '-' || input == '/' || input == '*')
			{
				char popedEl = stack1.pop();
				if(checkPrecedence(input) <= checkPrecedence(popedEl))
				{
						expression += popedEl;
						stack1.push(input);
						cout<<"\n expression : "<<expression<<endl;

				}
				else{
					stack1.push(input);
				}
			}
			else if(input == '=')
			{
				stack1.display();
					break;
			}
			else{
				expression += input;
				cout<<"\n expression : "<<expression<<endl;
			}

		}
		expression += stack1.pop();
		cout<<"\nleft over Stack : "<<expression<<endl;
		return 0;


}
