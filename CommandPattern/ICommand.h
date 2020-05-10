#pragma once
class ICommand
{
public:
	~ICommand() {};
	virtual void Execute() const = 0;
};