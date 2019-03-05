// PracticeDay02CommandLines.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Implement a program where command line arguments passed to program are read via GetCommandLine
and converted to argv style by CommandLineToArgvW.
*/

#include "pch.h"
#include <iostream>
#include<Windows.h>

int main()
{
	LPWSTR *ArgList;
	int ArgCount;
	ArgList = CommandLineToArgvW(GetCommandLineW(), &ArgCount);
	if (NULL == ArgList)
	{
		printf("\nPROGRAM TERMINATED WITH ERROR(%d)", GetLastError());
	}
	else
	{
		printf("\nCOMMAND LINES");
		for (int q = 0; q < ArgCount; ++q)
			printf("\nCommand %d : %S", q, ArgList[q]);
	}
	LocalFree(ArgList);
}