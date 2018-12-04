#include "StopState.h"
#include "InterFace.h"
#include <iostream>
using namespace std;
static class InterFace constst;
void StopState::open()
{
	InterFace::SetCurrentState(constst.open_state);
	InterFace::GetCurrentState()->open();
}

void StopState::close()
{
	InterFace::SetCurrentState(constst.close_state);
	InterFace::GetCurrentState()->close();
}

void StopState::run()
{
	InterFace::SetCurrentState(constst.run_state);
	InterFace::GetCurrentState()->run();
}

void StopState::stop()
{
	cout<<"StopState::stop......"<<endl;
}
