#include <iostream>

int main(){
	int number1{0};
	int number2{0};
	int sum{0};

	std::cout<<"Enter First Integer: ";
	std::cin>>number1;

	std::cout<<"Enter Second Integer: ";
	std::cin>>number2;

	sum = number1 + number2;

	std::cout<<"Sum is "<<sum<<std::endl;
}
