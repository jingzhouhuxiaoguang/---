#ifndef __OPENSTATE_H_
#define __OPENSTATE_H_
#include "State.h"
#include "InterFace.h"
class OpenState: public StateBase
{
public:
    virtual void open()  ;   // =0  必须函数 ; 
	virtual void close() ;   // =0  必须函数 ; 
	virtual void run() 	 ;   // =0  必须函数 ; 
	virtual void stop()  ;   // =0  必须函数 ; 
};
#endif /* __OPENSTATE_H_ */
