#include <string>
#include <stdexcept>
#include <exception>
#ifndef calculation_h
#define calculation_h
static int dummyint = NULL;
int a = dummyint;
int b = dummyint;
std::string c;
std::string modulus = "modulus";
std::string multiplication = "multiplication";
std::string division = "division";
std::string addition = "addition";
std::string subtraction = "subtraction";
std::string yes = "yes";
std::string no = "no";
std::string answer;
bool lifecycle = true;
int divisionbyzero(int a){
	if(a == 0)
		throw std::logic_error("Divisoin by zero not permitted");
	return a;
}
void stringverification(std::string dummystring){
	if((dummystring.compare("addition") || dummystring.compare("modulus") || dummystring.compare("multiplication") || dummystring.compare("division")) != true)
		throw std::invalid_argument("operation not supported");
}
void calculator(int &a,int b, std::string c){
		try{
			stringverification(c);
			if(c == modulus){
				std::cout << "Answer = ";
				std::cout << a % b << std::endl;
				a %= b;
			}if(c == multiplication){
				std::cout << "Answer = ";
				std::cout << a * b << std::endl;
				a *= b;
			}if(c == division){
				try{
					if(a == 0){
						std::cout << divisionbyzero(a)/ b << std::endl;
					}else if(b == 0){
						std::cout << a / divisionbyzero(b) << std::endl;
					}else if(!(a == 0) && !(b == 0)){
						std::cout << "Answer = ";
						std::cout << a / b << std::endl;
						a /=  b;
					}
				}catch(std::logic_error le){
					std::cout << "Logic error: " << le.what() << std::endl;
					a = dummyint;
				}
			}if(c == addition){
				std::cout << "Answer = ";
				std::cout << a + b << std::endl;
				a += b;
			}if(c == subtraction){
				std::cout << "Answer = ";
				std::cout << a - b << std::endl;
				a -= b;
			}
		}catch(std::invalid_argument ia){
			std::cout << "Invalid argument: " << ia.what() << std::endl;
			a = dummyint;
		}
	do{
		if(a == dummyint)
			break;
		else if(a != dummyint)
			std::cout << "Would like to continue current operation?(yes/no)" << std::endl;
		std::cin >> answer;
		if(answer == no){
			std::cout << "Would you like to do a new operation?(yes/no)" << std::endl;
			std::cin >> answer;
			if(answer == yes){
				a = dummyint;
				break;
			}else if(answer == no){
				lifecycle = false;
				break;
			}
		}else if(answer == yes)
			break;
	}while(1);
}
#endif