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
//자료형(Primitive Datatype)
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


int main()
{
	 char Number1 = 74;
	 char Number2 = 'A';

	 cin >> Number1;
	 cin >> Number2;

	 cout << Number1 + Number2 << endl;
	 cout << Number1 - Number2 << endl;
	 cout << Number1 / Number2 << endl;
	 cout << Number1 * Number2 << endl;

	 return 0;
}
*/
/*
int main()
{
	int Number[5] = {0, };//배열 

	Number[0] = 10;
	Number[1] = 45;
	Number[2] = 14;
	Number[3] = 99;
	Number[4] = 68;
	return 0;

}


int main()
{
	int korean = 100;
	int Math = 70;
	int Eng = 80;

	int Total = korean + Math + Eng;
	float Average = (float)Total / 3.0f;

	

	return 0;
}
int main()
{
	int Number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i = i++)
	{
		cout << Number[i] << endl;
	}
		
}*/
//*****
//별을 다섯개 찍는다 
//별을 찍는다
//다섯번 


//3번
//입력3 일때 
/*
*
**
***/

//별을 한줄 찍는다 //다섯번

/*
int main()
{
	int N = 0;
	cin >> N;

	for (int Line = 1; Line <= N; Line = ++Line)
	{
		for (int Count = 1; Count <= Line; Count = ++Count)
		{
			cout << "*";


		}
		cout << endl;
	}
	return 0;
}
//   *
//  **
///***
//4입력시 한줄에 공백3개와 별 하나  
int main()
{
	int N = 0;
	cin >> N;

	for (int Line = 1; Line <= N; Line = ++Line)
	{
		for (int Count = 1; Count <= N - Line; Count = ++Count)
		{
			
			cout << " ";
		}
		for (int Count = 1; Count <= Line; Count = ++Count)
		{

			cout << "*";
		}
		cout << endl;
	}
	return 0;
}*/
#include<winsock.h>

int main()
{
	int Map[10][10] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	int PlayerX = 6;
	int PlayerY = 7;
	char Key = 0;

	for (;;)
	{
		cin >> Key; //wasd
		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}

		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "$";
				}
			}
			cout << endl;

		}
	}
	


	/*GameLoop
	for (;;)//Frame, 60FPS
	{
		//Input();
		//Process(); 언리얼에서는 Tick();
		//Render();
	}*/
	return 0;
}