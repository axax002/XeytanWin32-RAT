#include "Application.h"
#include "models/CommandLineArguments.h"
#include <iostream>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Rpcrt4.lib")

void testany()
{
	std::wstring result;
	std::vector<std::wstring> fsHistory;
	fsHistory.push_back(L"C:\\");
	fsHistory.push_back(L"workspace");
	fsHistory.push_back(L"cpp\\3party");

	for (const auto& pathStr : fsHistory)
		result.append(pathStr + L"\\");

	std::wcout << result;
}


// int APIENTRY wWinMain(_In_ HINSTANCE hInstance,_In_opt_ HINSTANCE hPrevInstance,_In_ LPWSTR lpCmdLine,_In_ int nCmdShow)


int main()
{
	testany();
	const CommandLineArguments cmd;
	Application app(cmd);
	app.run();
	return 0;
}
