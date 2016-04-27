#include "SplashScreen.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ args)
{
	//ShowWindow(GetConsoleWindow(), SW_HIDE);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ArriveClient::SplashScreen form;
	Application::Run(%form);
}
