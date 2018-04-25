#pragma once

namespace Globals
{
	using namespace System;
	using namespace System::Windows::Forms;
	public ref class GlobalClass {
	public: static bool LogIn;
	public: static String^ username;
	public: static Form^ home;
	public: static Form^ signin;
	public: static Form^ signup;
	public: static Form ^profile;
	};
}

