#include "Home.h"
#include "SignIn.h"
#include "Profile.h"
#include "Global.h"
#include "SignUp.h"
#include "ShowRestaurants.h"
#include "OrderFood.h"
#include "AdminForm.h"
#include "AdminFormLogIn.h"
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
	GlobalClass::showRestaurant = gcnew Otlob::ShowRestaurants;
	GlobalClass::order = gcnew Otlob::OrderFood;
	GlobalClass::AdminFormLogIn = gcnew Otlob::AdminFormLogIn;
	GlobalClass::AdminForm = gcnew Otlob::AdminForm;
	Application::Run(gcnew Otlob::Home);
    
}
