#include "InputManager.h"


int main()
{
	InputManager* manager = new InputManager();

	bool exit = false;
	int ans = 0;
	while (!exit)
	{
		std::cout << "1 to jump, \n2 to run, \n3 to crouch,\nAny other key to exit\n";
		std::cin >> ans;
		if (ans > 3)
			exit = true;
		std::cout << "\n\n-------";
		ICommand* result = manager->HandleInput(ans);
		if (result)
			result->Execute();
		else
			exit = true;

		std::cout << "\n\n*************************************************************\n";

	}

	delete manager;
	getchar();
	return EXIT_SUCCESS;
}