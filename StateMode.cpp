#include <iostream>
#include "InterFace.h"
using namespace std;
int main()
{
	class InterFace * test_info = new InterFace;
	//初始状态 停止状态
	test_info->SetCurrentState(InterFace::stop_state);
	test_info->open();
	test_info->close();
	test_info->run();
	test_info->stop();
	
	cout << "Hello Wolrd!" << endl;
	return 0;
}