// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
#define time_sleep 200
#define time_sleep1 100
#define time 400
#define time1 200
#define L cout
int main()
{
	int i;
	while (1)
	{
		L << "Ready? Let's Play!\n \n E Standard 3/4 \n \n";
		Sleep(1000);
		L << "High E String Practice 001 \n \n";
			Sleep(1000);
			L << "x2 \n";
		for (i = 0; i<2;i++)
		{
			L << "C5: High E String, 8th Fret \n";
			Beep(523, time);
			Sleep(time_sleep);
			L << "B4: High E String, 7th Fret \n";
			Beep(494, time);
			Sleep(time_sleep);
			L << "A4: High E String, 5th Fret \n";
			Beep(440, time);
			Sleep(time_sleep);
			L << "\n";
		}
		L << "Fingers-Move\n\n";
		for (i = 0; i<1;i++)
		{
			L << "C5: High E String, 8th Fret \n";
			Beep(523, time);
			Sleep(time_sleep);
			L << "D5: High E String, 10th Fret \n";
			Beep(587, time);
			Sleep(time_sleep);
			L << "E5: High E String, 12th Fret \n";
			Beep(659, time);
			Sleep(time_sleep);
			L << "D5: High E String, 10th Fret \n";
			Beep(587, time);
			Sleep(time_sleep);
			L << "C5: High E String, 8th Fret \n";
			Beep(523, time);
			Sleep(time_sleep);
			L << "C5: High E String, 8th Fret \n";
			Beep(523, time);
			Sleep(time_sleep);
			L << "\n";
		}
		L << "Fingers-Move\n\n";
		for (i = 0; i<1;i++)
		{
			L << "D5: High E String, 10th Fret \n";
			Beep(587, time);
			Sleep(time_sleep);
			L << "D5: High E String, 10th Fret \n";
			Beep(587, time);
			Sleep(time_sleep);
			L << "E5: High E String, 12th Fret \n";
			Beep(659, time);
			Sleep(time_sleep);
			L << "F5: High E String, 13th Fret \n";
			Beep(698, time);
			Sleep(time_sleep);
			L << "E5: High E String, 12th Fret \n";
			Beep(659, time);
			Sleep(time_sleep);
			L << "D5: High E String, 10th Fret \n";
			Beep(587, time);
			Sleep(time_sleep);
			L << "\n";
		}
		L << "Fingers-Move\n \n x2 \n";
		for (i = 0; i<2;i++)
		{
			L << "E5: High E String, 12th Fret \n";
			Beep(659, time);
			Sleep(time_sleep);
			L << "E5: High E String, 12th Fret \n";
			Beep(698, time);
			Sleep(time_sleep);
			L << "F5: High E String, 13th Fret \n";
			Beep(698, time);
			Sleep(time_sleep);
			L << "\n";
		}
		L << "Fingers-Move\n \n";
		for (i = 0; i<1;i++)
		{
			L << "G5: High E String, 15th Fret \n";
			Beep(784, time);
			Sleep(time_sleep);
			L << "A5: High E String, 17th Fret \n";
			Beep(880, time);
			Sleep(time_sleep);
			L << "G5: High E String, 15th Fret \n";
			Beep(784, time);
			Sleep(time_sleep);
			L << "\n";
		}
		L << "Fingers-Move \n \n";
		for (i = 0; i<2;i++)
		{
			L << "F5:High E String, 13th Fret \n";
			Beep(698, time);
			Sleep(time_sleep);
			L << "G5:High E String, 15th Fret \n";
			Beep(784, time);
			Sleep(time_sleep);
			L << "F5:High E String, 13th Fret \n";
			Beep(698, time1);
			Sleep(time_sleep1);
			if (i == 0)
			{
				L << "E5:High E String, 12th Fret \n";
				Beep(659, time1);
				Sleep(time_sleep1);
			}
			else
			{
				L << "D5:High E String, 10th Fret \n";
				Beep(587, time1);
				Sleep(time_sleep1);
			}
		}
		L << "\n Fingers-Move \n\n x2 \n";
		for (i = 0; i<2;i++)
		{
			L << "B4: High E String, 7th Fret \n";
			Beep(494, time);
			Sleep(time_sleep);
			L << "B4: High E String, 7th Fret \n";
			Beep(494, time);
			Sleep(time_sleep);
			L << "C5: High E String, 8th Fret \n";
			Beep(523, time);
			Sleep(time_sleep);
		}
		L << "\n One More Time? \n\n\n";
		Sleep(2000);
	}
}