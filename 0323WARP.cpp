#include <iostream>



int main()
{
	/*int : 정수 4바이트
	float : 실수 4바이트 
	double : 실수(좀 더 큰 실수) 4바이트
	bool : True False 두가지 값을 갖는 자료형 
	char : 문자 한개를 담는 자료형 1바이트
	short : 정수(좀 짧은)  바이트*/

	int age = 24;
	double bmi = 11.1;
	short height = 120;
	std::cout << sizeof(height) << std::endl;

}