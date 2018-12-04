#include "OpenState.h"
#include <iostream>
using namespace std;
static InterFace constst;
void OpenState::open()
{
	cout<<"OpenState open....."<<endl;
}

void OpenState::close()
{
	InterFace::SetCurrentState(constst.close_state);
	InterFace::GetCurrentState()->close();
}

void OpenState::run()
{
	return ;
}

void OpenState::stop()
{
	return ;
}
