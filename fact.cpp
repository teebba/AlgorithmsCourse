#include <iostream>
int fact(int n) {

		int f = 1;
		for (int i = 1; i <= n; i++) {
			f*= i;
		}
		return f;

	}
int main()
{
	int facte;
	std::cout << "Enter a positive integer: ";
	std::cin >> facte;
	if(facte <0){
	std::cout << "there is no fact to the negative palease Enter a positive integer ";
	std::cin >> facte;}
	int c = fact(facte); 
	  std::cout << "The factorial of " << facte << " is " << c ;
	}
