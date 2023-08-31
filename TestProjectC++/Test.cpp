#include "Test.h"
#include <conio.h>


using namespace System;
using namespace System::Windows::Forms;
using namespace TestProjectC;
using namespace std;
using namespace System::Drawing;


[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Test());

	return 0;

}
