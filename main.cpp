#include <iostream>

using namespace std;//std::�Ⱦ������� 
/*
int main()
{
	cout << "hahahah" << endl;

	return 0;
}

#include <iostream>// ��ó���� �ٸ� ����� �� ǥ���� ����.

int main()//���� �Լ�
{
	int Gold= 10;//������ ���� 10�� �޸𸮿� ����ش޶�� ��

	std::cin >> Gold; //Ű����� ���� �Է� >>
	std::cout << Gold;//�޸𸮿� �ִ� gold�� ��� <<

	return 0;
}
//�ڷ���(Primitive Datatype)
//int ������ 
//float �Ǽ��� �Ҽ��� ������  
// + - / * % ������ (��� Operator)
//<< std::endl;�ٹٲ� 
//�Է��� ���� ��Ģ����
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
	int Number[5] = {0, };//�迭 

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
//���� �ټ��� ��´� 
//���� ��´�
//�ټ��� 


//3��
//�Է�3 �϶� 
/*
*
**
***/

//���� ���� ��´� //�ټ���

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
//4�Է½� ���ٿ� ����3���� �� �ϳ�  
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
		//Process(); �𸮾󿡼��� Tick();
		//Render();
	}*/
	return 0;
}