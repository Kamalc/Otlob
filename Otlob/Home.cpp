#include "Home.h"
#include "Restaurant.h"
#include "MainMeal.h"
#include "SignIn.h"
#include "Profile.h"
#include "Global.h"
#include "SignUp.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Globals;


[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GlobalClass::LogIn = false;
	GlobalClass::profile =  gcnew Otlob::Profile;
	GlobalClass::signin = gcnew Otlob::SignIn;
	GlobalClass::signup = gcnew Otlob::SignUp;
	Application::Run(gcnew Otlob::Home);
    
}
