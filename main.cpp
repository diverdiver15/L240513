#include <iostream>

using namespace std;//std::안쓰기위해 
/*
int main()
{
	cout << "hahahah" << endl;

	return 0;
}

#include <iostream>// 전처리기 다른 사람이 쓴 표준을 쓴다.

int main()//메인 함수
{
	int Gold= 10;//정수형 선언 10을 메모리에 사용해달라는 말

	std::cin >> Gold; //키보드로 부터 입력 >>
	std::cout << Gold;//메모리에 있는 gold를 출력 <<

	return 0;
}
*///자료형(Primitive Datatype)
//int 정수형 
//float 실수형 소수점 연산자  
// + - / * % 연산자 (산술 Operator)
//<< std::endl;줄바꿈 
//입력한 숫자 사칙연산
int main()
{
	int Data = 0;
	int Data2 = 0;

	std::cin >> Data;
	std::cin >> Data2;

	std::cout << Data + Data2 << std::endl;
	std::cout << Data - Data2 << std::endl;
	std::cout << Data * Data2 << std::endl;
	std::cout << Data / Data2 << std::endl;
	return 0;
}
