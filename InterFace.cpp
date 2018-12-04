#include "InterFace.h"
#include <iostream>
using namespace std;
class OpenState	* InterFace::open_state = NULL;
class StopState	* InterFace::stop_state = NULL;
class RuningState * InterFace::run_state = NULL;
class CloseState * InterFace::close_state = NULL;
class StateBase * InterFace::Crrent_base_state = NULL;
InterFace::InterFace() // 这是构造函数
{
	open_state = new OpenState;
	stop_state = new StopState;
	run_state  =  new RuningState;
	close_state = new  CloseState;
}

void InterFace::open()
{
	Crrent_base_state->open();
}

void InterFace::close() 
{
	Crrent_base_state->close();
}

void InterFace::run()
{
	Crrent_base_state->run();
} 

void InterFace::stop()
{
	Crrent_base_state->stop();
}
	