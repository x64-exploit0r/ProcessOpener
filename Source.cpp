#include<iostream>
#include<Windows.h>
using namespace std;

int main() {

	STARTUPINFO START_INFO = { 0 };
	PROCESS_INFORMATION PROCESS_INFO = { 0 };

	wchar_t pathToProgram[] = L"C:\\Windows\\System32\\notepad.exe";
	if (!CreateProcessW(NULL, pathToProgram, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &START_INFO, &PROCESS_INFO)) {
		cout << "ERROR:" << GetLastError();
		return EXIT_FAILURE;
	}

	CloseHandle(PROCESS_INFO.hProcess);
	CloseHandle(PROCESS_INFO.hThread);
	return EXIT_SUCCESS;
}