/*
 * DisabledState.h
 *
 *  Created on: Feb 21, 2015
 *      Author: user
 */

#ifndef SRC_DISABLEDSTATE_H_
#define SRC_DISABLEDSTATE_H_

#include "RobotState.h"

namespace WPS {

class DisabledState: public WPS::RobotState {
public:
	DisabledState();
	virtual ~DisabledState();

	virtual void Init(Robot& parts); //Called once at the started of RobotMain
	virtual void OnEnter(Robot& parts); //Called each time the state is entered.
	virtual void Update(Robot& parts); //Called once per robot update frame.
	virtual void OnExit(Robot& parts); //Called each time the state is exited.

};

} /* namespace WPS */

#endif /* SRC_DISABLEDSTATE_H_ */
