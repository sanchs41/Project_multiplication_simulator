#include "MyForm1.h"
#include <initializer_list>
#include <cstdlib>
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project23::MyForm1 form;
	Application::Run(% form);
}
