#include "Home.h"
#include "Restaurant.h"
#include "MainMeal.h"
#include "SignIn.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Otlob::Home h;
	Application::Run(%h);
	//Application::Run(gcnew Otlob::Home());	
}
