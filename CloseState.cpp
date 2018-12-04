#include "CloseState.h"
#include <iostream>
using namespace std;
static InterFace constst;
void CloseState::open()
{
	InterFace::SetCurrentState(constst.open_state);
	InterFace::GetCurrentState()->open();
}

void CloseState::close()
{
	cout<<"CloseState close...."<<endl;
}

void CloseState::run()
{
	InterFace::SetCurrentState(constst.run_state);
	InterFace::GetCurrentState()->run();
}

void CloseState::stop()
{
	InterFace::SetCurrentState(constst.stop_state);
	InterFace::GetCurrentState()->stop();
}
