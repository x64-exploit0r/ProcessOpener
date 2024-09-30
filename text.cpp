#include<Windows.h>
#include<iostream>
using namespace std;

int main(void) {
	STARTUPINFO start;
	PROCESS_INFORMATION info;

	CreateProcessW(L"C:\\Windows\\System32\\notepad.exe", NULL, NULL, NULL, FALSE, BELOW_NORMAL_PRIORITY_CLASS, NULL, NULL, &start, &info);
	return EXIT_FAILURE;
}

