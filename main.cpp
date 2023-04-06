#include <iostream>// 전처리기 main들어가기전에 미리 실행되는 라이브러리
#include "Player.h"

using namespace std;// 원래는 std::cout 이런식으로 써야하는데 귀찮으니까 안적어줬으면 standard(std)에서 찾아라 라는뜻

//entry point 시작하는 점
int main()
{
	FPlayer* Player = new FPlayer();

	cout << Player << endl;

	delete Player;
	return 0;
}

