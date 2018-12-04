#ifndef __STATE_H_
#define __STATE_H_

class StateBase 
{
//	virtual ~State() {};
public:
    virtual void open() = 0;   // =0  必须函数 ; 
	virtual void close()= 0;   // =0  必须函数 ; 
	virtual void run() 	= 0;   // =0  必须函数 ; 
	virtual void stop() = 0;   // =0  必须函数 ; 
};

#endif /* __STATE_H_ */
