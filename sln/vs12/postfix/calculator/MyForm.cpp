#include "MyForm.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
 
[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    calculator::MyForm form;
    Application::Run(%form);
}