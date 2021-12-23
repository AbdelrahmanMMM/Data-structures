#include "XmlForm.h"

using namespace System;
using namespace System::Windows::Forms;



	[STAThread]

int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Application::Run(gcnew XmlEditor::XmlForm);
	XmlEditor::XmlForm form;
	Application::Run(%form);


}




