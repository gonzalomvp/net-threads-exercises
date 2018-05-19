#include "Task.h"
#include <iostream>

// *****************************************************************
// Constructor
// *****************************************************************
CTask::CTask(std::function<void(int)> func) : m_funcResult(func)
{

}

// *****************************************************************
// Constructor
// *****************************************************************
CTask::~CTask()
{
}

// *****************************************************************
// exec
// *****************************************************************
void CTask::exec()
{
	if (m_funcResult)
		m_funcResult(0);
}