#include <iostream>// ��ó���� main�������� �̸� ����Ǵ� ���̺귯��
#include "Player.h"

using namespace std;// ������ std::cout �̷������� ����ϴµ� �������ϱ� ������������ standard(std)���� ã�ƶ� ��¶�

//entry point �����ϴ� ��
int main()
{
	FPlayer* Player = new FPlayer();

	cout << Player << endl;

	delete Player;
	return 0;
}

