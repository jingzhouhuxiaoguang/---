#ifndef __INTERFACE_H_
#define __INTERFACE_H_
#include "State.h"
#include "OpenState.h"
#include "StopState.h"
#include "RuningState.h"
#include "CloseState.h"
class InterFace
{
public:
	InterFace();  // 这是构造函数
public:
	static class OpenState	* open_state ;
	static class StopState	* stop_state ;
	static class RuningState	* run_state  ;
	static class CloseState	* close_state  ;
	static class StateBase 	* Crrent_base_state;

public:
    static void open()  ;   // =0  必须函数 ; 
	static void close() ;   // =0  必须函数 ; 
	static void run() 	 ;   // =0  必须函数 ; 
	static void stop()  ;   // =0  必须函数 ;
	static StateBase *GetCurrentState()
	{
		return Crrent_base_state;
	}

	void static SetCurrentState(StateBase *Base_state) 
	{
		Crrent_base_state = Base_state;
	}
	
};
#endif /* __INTERFACE_H_ */
