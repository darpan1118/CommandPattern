#pragma once
#include "Commands.h"

class InputManager
{
public:
	InputManager() 
	{
		jump = new Jump();
		run = new Run();
		crouch = new Crouch();
	};
	~InputManager()
	{
		delete jump;
		delete run;
		delete crouch;
	};
	ICommand* HandleInput(int Input)
	{
		if (Input == 1)
			return jump;
		else if (Input == 2)
			return run;
		else if (Input == 3)
			return crouch;

		return NULL;
	};
private:
	Jump* jump;
	Run* run;
	Crouch* crouch;
};