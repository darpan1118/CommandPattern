#pragma once
#include "ICommand.h"
#include <iostream>

class Jump : public ICommand
{

public:
	~Jump() {};
	void Execute() const override
	{
		std::cout << "Player will jump now.\n";
	}

};
class Run : public ICommand
{

public:
	~Run() {};
	void Execute() const override
	{
		std::cout << "Player will run now.\n";
	}

};
class Crouch : public ICommand
{

public:
	~Crouch() {};
	void Execute() const override
	{
		std::cout << "Player will Crouch now.\n";
	}

};