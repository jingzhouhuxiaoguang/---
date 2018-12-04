#include "RuningState.h"
#include <iostream>
using namespace std;
static InterFace constst;
void RuningState::open()
{
	return ;  
}

void RuningState::close()
{
	return ;
}

void RuningState::run()
{
	//动作的执行
	cout<<"RuningState runing "<<endl;
}

void RuningState::stop()
{
	//切换状态
	InterFace::SetCurrentState(constst.stop_state);
	InterFace::GetCurrentState()->stop();
}
