#include "MyForm1.h"
#include "MyForm.h"
#include <Windows.h>
#include <initializer_list>
#include <cstdlib>


using namespace Project23;
[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}



