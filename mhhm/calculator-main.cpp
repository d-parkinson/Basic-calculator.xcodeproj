/*Practice this program was created by me to do basic aritmetic calculation*/
#include <iostream>
#include "calculation.h"

int main(void){
	do{
		std::cout << "Basic operations supported: addition subtraction, modulus, division" << std::endl;
		if(a == dummyint){
			std::cout << "Enter the first value: " << std::endl;
			std::cin >> a;
		}else
			std::cout << "Current value: " << a << std::endl;
			std::cout << "Enter the second value: " << std::endl;
			std::cin >> b;
			std::cout << "What kind of operation would like to occur?" << std::endl;
			std::cin >> c;
		calculator(a, b, c);
	}while(lifecycle);
	return 0;
}
