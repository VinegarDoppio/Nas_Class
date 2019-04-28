#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include "Pr.h"
#include <windows.h>
#include <iostream.h>
#include <conio.h>

 int _tmain(int argc, _TCHAR* argv[])
{SetConsoleOutputCP (1251);
SetConsoleCP (1251);
Pr KZ(2,3,5,2,4,2,0,6);
int V_V = KZ.V();
float S_S = KZ.S();
cout << "Объём параллелепипеда: " << V_V << " метров кубических" << endl;
cout << "Площадь полной поверхности параллелепипеда: " << S_S << " метров квадратных" << endl;
	getch();
	return 0;
}
