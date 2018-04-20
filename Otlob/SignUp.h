#pragma once

namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
		{
			InitializeComponent();
			this->dragging = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected: 
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Textbox_Password;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox5;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton6;
	private: System::Windows::Forms::Label^  label_SignUp;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_Username;
	private: System::Windows::Forms::Label^  label_UsernameN;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;


	protected: 
























	protected: 






































	protected: 





















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUp::typeid));
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->Textbox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label_SignUp = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label_Username = (gcnew System::Windows::Forms::Label());
            this->label_UsernameN = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->Button_SignUp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->Panel_Header = (gcnew System::Windows::Forms::Panel());
            this->button_Close = (gcnew System::Windows::Forms::Button());
            this->button_Minimize = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel3->SuspendLayout();
            this->panel1->SuspendLayout();
            this->Panel_Header->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->checkBox_ShPass);
            this->panel3->Controls->Add(this->label9);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Controls->Add(this->label7);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Controls->Add(this->label6);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox4);
            this->panel3->Controls->Add(this->Textbox_Password);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox2);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox5);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox1);
            this->panel3->Controls->Add(this->bunifuFlatButton6);
            this->panel3->Controls->Add(this->label_SignUp);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel3->Location = System::Drawing::Point(247, 101);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(960, 570);
            this->panel3->TabIndex = 14;
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignUp::panel3_Paint);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(745, 343);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(107, 17);
            this->label10->TabIndex = 21;
            this->label10->Text = L"Show Password";
            // 
            // checkBox_ShPass
            // 
            this->checkBox_ShPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->checkBox_ShPass->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->checkBox_ShPass->Checked = false;
            this->checkBox_ShPass->CheckedOnColor = System::Drawing::Color::Maroon;
            this->checkBox_ShPass->ForeColor = System::Drawing::Color::White;
            this->checkBox_ShPass->Location = System::Drawing::Point(727, 343);
            this->checkBox_ShPass->Margin = System::Windows::Forms::Padding(6);
            this->checkBox_ShPass->Name = L"checkBox_ShPass";
            this->checkBox_ShPass->Size = System::Drawing::Size(20, 20);
            this->checkBox_ShPass->TabIndex = 20;
            this->checkBox_ShPass->OnChange += gcnew System::EventHandler(this, &SignUp::checkBox_ShPass_OnChange);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(191, 406);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(55, 20);
            this->label9->TabIndex = 19;
            this->label9->Text = L"Phone";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(191, 338);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(78, 20);
            this->label8->TabIndex = 19;
            this->label8->Text = L"Password";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(191, 270);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(48, 20);
            this->label7->TabIndex = 19;
            this->label7->Text = L"Email";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(191, 134);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(86, 20);
            this->label1->TabIndex = 19;
            this->label1->Text = L"First Name";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(191, 202);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(86, 20);
            this->label6->TabIndex = 19;
            this->label6->Text = L"Last Name";
            // 
            // bunifuMaterialTextbox4
            // 
            this->bunifuMaterialTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox4->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox4->HintText = L"Enter Your number";
            this->bunifuMaterialTextbox4->isPassword = false;
            this->bunifuMaterialTextbox4->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox4->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox4->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox4->LineThickness = 3;
            this->bunifuMaterialTextbox4->Location = System::Drawing::Point(336, 387);
            this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
            this->bunifuMaterialTextbox4->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox4->TabIndex = 18;
            this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // Textbox_Password
            // 
            this->Textbox_Password->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->Textbox_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->Textbox_Password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Textbox_Password->HintForeColor = System::Drawing::Color::Empty;
            this->Textbox_Password->HintText = L"Password";
            this->Textbox_Password->isPassword = true;
            this->Textbox_Password->LineFocusedColor = System::Drawing::Color::Maroon;
            this->Textbox_Password->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Textbox_Password->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->Textbox_Password->LineThickness = 3;
            this->Textbox_Password->Location = System::Drawing::Point(336, 319);
            this->Textbox_Password->Margin = System::Windows::Forms::Padding(4);
            this->Textbox_Password->Name = L"Textbox_Password";
            this->Textbox_Password->Size = System::Drawing::Size(370, 44);
            this->Textbox_Password->TabIndex = 18;
            this->Textbox_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->Textbox_Password->OnValueChanged += gcnew System::EventHandler(this, &SignUp::Textbox_Password_OnValueChanged);
            this->Textbox_Password->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignUp::Textbox_Password_Paint);
            // 
            // bunifuMaterialTextbox2
            // 
            this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox2->HintText = L"ex: Email1992@gmail.com";
            this->bunifuMaterialTextbox2->isPassword = false;
            this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox2->LineThickness = 3;
            this->bunifuMaterialTextbox2->Location = System::Drawing::Point(336, 251);
            this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
            this->bunifuMaterialTextbox2->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox2->TabIndex = 18;
            this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox5
            // 
            this->bunifuMaterialTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox5->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox5->HintText = L"";
            this->bunifuMaterialTextbox5->isPassword = false;
            this->bunifuMaterialTextbox5->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox5->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox5->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox5->LineThickness = 3;
            this->bunifuMaterialTextbox5->Location = System::Drawing::Point(336, 115);
            this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
            this->bunifuMaterialTextbox5->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox5->TabIndex = 18;
            this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox1
            // 
            this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox1->HintText = L"";
            this->bunifuMaterialTextbox1->isPassword = false;
            this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineThickness = 3;
            this->bunifuMaterialTextbox1->Location = System::Drawing::Point(336, 183);
            this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox1->TabIndex = 18;
            this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuFlatButton6
            // 
            this->bunifuFlatButton6->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
            this->bunifuFlatButton6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton6->BorderRadius = 0;
            this->bunifuFlatButton6->ButtonText = L"Submit";
            this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
            this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
            this->bunifuFlatButton6->Iconimage_right = nullptr;
            this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton6->Iconimage_Selected = nullptr;
            this->bunifuFlatButton6->IconMarginLeft = 0;
            this->bunifuFlatButton6->IconMarginRight = 0;
            this->bunifuFlatButton6->IconRightVisible = true;
            this->bunifuFlatButton6->IconRightZoom = 0;
            this->bunifuFlatButton6->IconVisible = true;
            this->bunifuFlatButton6->IconZoom = 90;
            this->bunifuFlatButton6->IsTab = false;
            this->bunifuFlatButton6->Location = System::Drawing::Point(476, 458);
            this->bunifuFlatButton6->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
            this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
            this->bunifuFlatButton6->selected = false;
            this->bunifuFlatButton6->Size = System::Drawing::Size(230, 59);
            this->bunifuFlatButton6->TabIndex = 17;
            this->bunifuFlatButton6->Text = L"Submit";
            this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton6->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // label_SignUp
            // 
            this->label_SignUp->AutoSize = true;
            this->label_SignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_SignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label_SignUp->Location = System::Drawing::Point(199, 39);
            this->label_SignUp->Name = L"label_SignUp";
            this->label_SignUp->Size = System::Drawing::Size(147, 40);
            this->label_SignUp->TabIndex = 16;
            this->label_SignUp->Text = L"Sign Up";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel1->Controls->Add(this->label_Username);
            this->panel1->Controls->Add(this->label_UsernameN);
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->button_SignIn);
            this->panel1->Controls->Add(this->Button_SignUp);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel1->Location = System::Drawing::Point(247, 45);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(960, 56);
            this->panel1->TabIndex = 13;
            // 
            // label_Username
            // 
            this->label_Username->AutoSize = true;
            this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label_Username->Location = System::Drawing::Point(812, 18);
            this->label_Username->Name = L"label_Username";
            this->label_Username->Size = System::Drawing::Size(0, 20);
            this->label_Username->TabIndex = 0;
            // 
            // label_UsernameN
            // 
            this->label_UsernameN->AutoSize = true;
            this->label_UsernameN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label_UsernameN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_UsernameN.Image")));
            this->label_UsernameN->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label_UsernameN->Location = System::Drawing::Point(709, 18);
            this->label_UsernameN->Name = L"label_UsernameN";
            this->label_UsernameN->Size = System::Drawing::Size(88, 20);
            this->label_UsernameN->TabIndex = 0;
            this->label_UsernameN->Text = L"username :";
            this->label_UsernameN->Visible = false;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label5->Location = System::Drawing::Point(203, 18);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(43, 20);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Main";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label4->Location = System::Drawing::Point(141, 18);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(43, 20);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Main";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label3->Location = System::Drawing::Point(70, 18);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 20);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Main";
            // 
            // button_SignIn
            // 
            this->button_SignIn->Activecolor = System::Drawing::Color::Maroon;
            this->button_SignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SignIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_SignIn->BorderRadius = 0;
            this->button_SignIn->ButtonText = L"Sign In";
            this->button_SignIn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_SignIn->DisabledColor = System::Drawing::Color::Transparent;
            this->button_SignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_SignIn->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->button_SignIn->Iconcolor = System::Drawing::Color::Transparent;
            this->button_SignIn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignIn.Iconimage")));
            this->button_SignIn->Iconimage_right = nullptr;
            this->button_SignIn->Iconimage_right_Selected = nullptr;
            this->button_SignIn->Iconimage_Selected = nullptr;
            this->button_SignIn->IconMarginLeft = 0;
            this->button_SignIn->IconMarginRight = 0;
            this->button_SignIn->IconRightVisible = true;
            this->button_SignIn->IconRightZoom = 0;
            this->button_SignIn->IconVisible = true;
            this->button_SignIn->IconZoom = 50;
            this->button_SignIn->IsTab = false;
            this->button_SignIn->Location = System::Drawing::Point(718, -1);
            this->button_SignIn->Margin = System::Windows::Forms::Padding(6);
            this->button_SignIn->Name = L"button_SignIn";
            this->button_SignIn->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SignIn->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_SignIn->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_SignIn->selected = false;
            this->button_SignIn->Size = System::Drawing::Size(156, 58);
            this->button_SignIn->TabIndex = 11;
            this->button_SignIn->Text = L"Sign In";
            this->button_SignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_SignIn->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_SignIn->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // Button_SignUp
            // 
            this->Button_SignUp->Activecolor = System::Drawing::Color::Maroon;
            this->Button_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_SignUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Button_SignUp->BorderRadius = 0;
            this->Button_SignUp->ButtonText = L"Sign Up";
            this->Button_SignUp->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Button_SignUp->DisabledColor = System::Drawing::Color::Transparent;
            this->Button_SignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Button_SignUp->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->Button_SignUp->Iconcolor = System::Drawing::Color::Transparent;
            this->Button_SignUp->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_SignUp.Iconimage")));
            this->Button_SignUp->Iconimage_right = nullptr;
            this->Button_SignUp->Iconimage_right_Selected = nullptr;
            this->Button_SignUp->Iconimage_Selected = nullptr;
            this->Button_SignUp->IconMarginLeft = 0;
            this->Button_SignUp->IconMarginRight = 0;
            this->Button_SignUp->IconRightVisible = true;
            this->Button_SignUp->IconRightZoom = 0;
            this->Button_SignUp->IconVisible = true;
            this->Button_SignUp->IconZoom = 50;
            this->Button_SignUp->IsTab = false;
            this->Button_SignUp->Location = System::Drawing::Point(550, -1);
            this->Button_SignUp->Margin = System::Windows::Forms::Padding(6);
            this->Button_SignUp->Name = L"Button_SignUp";
            this->Button_SignUp->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_SignUp->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->Button_SignUp->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->Button_SignUp->selected = false;
            this->Button_SignUp->Size = System::Drawing::Size(156, 58);
            this->Button_SignUp->TabIndex = 11;
            this->Button_SignUp->Text = L"Sign Up";
            this->Button_SignUp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->Button_SignUp->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Button_SignUp->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // Panel_Header
            // 
            this->Panel_Header->BackColor = System::Drawing::Color::Maroon;
            this->Panel_Header->Controls->Add(this->button_Close);
            this->Panel_Header->Controls->Add(this->button_Minimize);
            this->Panel_Header->Dock = System::Windows::Forms::DockStyle::Top;
            this->Panel_Header->Location = System::Drawing::Point(247, 0);
            this->Panel_Header->Name = L"Panel_Header";
            this->Panel_Header->Size = System::Drawing::Size(960, 45);
            this->Panel_Header->TabIndex = 12;
            this->Panel_Header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SignUp::Panel_Header_MouseDown);
            this->Panel_Header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SignUp::Panel_Header_MouseMove);
            this->Panel_Header->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SignUp::Panel_Header_MouseUp);
            // 
            // button_Close
            // 
            this->button_Close->BackColor = System::Drawing::Color::Maroon;
            this->button_Close->FlatAppearance->BorderSize = 0;
            this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Close->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Close->Location = System::Drawing::Point(914, 5);
            this->button_Close->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button_Close->Name = L"button_Close";
            this->button_Close->Size = System::Drawing::Size(42, 35);
            this->button_Close->TabIndex = 2;
            this->button_Close->Text = L"X";
            this->button_Close->UseVisualStyleBackColor = false;
            this->button_Close->Click += gcnew System::EventHandler(this, &SignUp::button_Close_Click);
            // 
            // button_Minimize
            // 
            this->button_Minimize->BackColor = System::Drawing::Color::Maroon;
            this->button_Minimize->FlatAppearance->BorderSize = 0;
            this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_Minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Minimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Minimize->Location = System::Drawing::Point(864, 5);
            this->button_Minimize->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button_Minimize->Name = L"button_Minimize";
            this->button_Minimize->Size = System::Drawing::Size(42, 35);
            this->button_Minimize->TabIndex = 2;
            this->button_Minimize->Text = L"_";
            this->button_Minimize->UseVisualStyleBackColor = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Maroon;
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->bunifuFlatButton5);
            this->panel2->Controls->Add(this->bunifuFlatButton1);
            this->panel2->Controls->Add(this->bunifuFlatButton4);
            this->panel2->Controls->Add(this->bunifuFlatButton3);
            this->panel2->Controls->Add(this->bunifuFlatButton2);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(247, 671);
            this->panel2->TabIndex = 11;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(57, 116);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(135, 65);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 12;
            this->pictureBox1->TabStop = false;
            // 
            // bunifuFlatButton5
            // 
            this->bunifuFlatButton5->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton5->BorderRadius = 0;
            this->bunifuFlatButton5->ButtonText = L"Admin Room";
            this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton5->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
            this->bunifuFlatButton5->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage_right")));
            this->bunifuFlatButton5->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage_right_Selected")));
            this->bunifuFlatButton5->Iconimage_Selected = nullptr;
            this->bunifuFlatButton5->IconMarginLeft = 0;
            this->bunifuFlatButton5->IconMarginRight = 0;
            this->bunifuFlatButton5->IconRightVisible = true;
            this->bunifuFlatButton5->IconRightZoom = 0;
            this->bunifuFlatButton5->IconVisible = true;
            this->bunifuFlatButton5->IconZoom = 80;
            this->bunifuFlatButton5->IsTab = false;
            this->bunifuFlatButton5->Location = System::Drawing::Point(0, 576);
            this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
            this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton5->selected = false;
            this->bunifuFlatButton5->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton5->TabIndex = 11;
            this->bunifuFlatButton5->Text = L"Admin Room";
            this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton5->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton1
            // 
            this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton1->BorderRadius = 0;
            this->bunifuFlatButton1->ButtonText = L"My Bills";
            this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
            this->bunifuFlatButton1->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage_right")));
            this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton1->Iconimage_Selected = nullptr;
            this->bunifuFlatButton1->IconMarginLeft = 0;
            this->bunifuFlatButton1->IconMarginRight = 0;
            this->bunifuFlatButton1->IconRightVisible = true;
            this->bunifuFlatButton1->IconRightZoom = 0;
            this->bunifuFlatButton1->IconVisible = true;
            this->bunifuFlatButton1->IconZoom = 80;
            this->bunifuFlatButton1->IsTab = false;
            this->bunifuFlatButton1->Location = System::Drawing::Point(0, 439);
            this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
            this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton1->selected = false;
            this->bunifuFlatButton1->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton1->TabIndex = 11;
            this->bunifuFlatButton1->Text = L"My Bills";
            this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton1->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton4
            // 
            this->bunifuFlatButton4->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton4->BorderRadius = 0;
            this->bunifuFlatButton4->ButtonText = L"All Offers";
            this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton4->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
            this->bunifuFlatButton4->Iconimage_right = nullptr;
            this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton4->Iconimage_Selected = nullptr;
            this->bunifuFlatButton4->IconMarginLeft = 0;
            this->bunifuFlatButton4->IconMarginRight = 0;
            this->bunifuFlatButton4->IconRightVisible = true;
            this->bunifuFlatButton4->IconRightZoom = 0;
            this->bunifuFlatButton4->IconVisible = true;
            this->bunifuFlatButton4->IconZoom = 80;
            this->bunifuFlatButton4->IsTab = false;
            this->bunifuFlatButton4->Location = System::Drawing::Point(0, 366);
            this->bunifuFlatButton4->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
            this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton4->selected = false;
            this->bunifuFlatButton4->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton4->TabIndex = 11;
            this->bunifuFlatButton4->Text = L"All Offers";
            this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton4->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton3
            // 
            this->bunifuFlatButton3->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton3->BorderRadius = 0;
            this->bunifuFlatButton3->ButtonText = L"Foods";
            this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
            this->bunifuFlatButton3->Iconimage_right = nullptr;
            this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton3->Iconimage_Selected = nullptr;
            this->bunifuFlatButton3->IconMarginLeft = 0;
            this->bunifuFlatButton3->IconMarginRight = 0;
            this->bunifuFlatButton3->IconRightVisible = true;
            this->bunifuFlatButton3->IconRightZoom = 0;
            this->bunifuFlatButton3->IconVisible = true;
            this->bunifuFlatButton3->IconZoom = 80;
            this->bunifuFlatButton3->IsTab = false;
            this->bunifuFlatButton3->Location = System::Drawing::Point(0, 291);
            this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
            this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton3->selected = false;
            this->bunifuFlatButton3->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton3->TabIndex = 11;
            this->bunifuFlatButton3->Text = L"Foods";
            this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton3->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton2
            // 
            this->bunifuFlatButton2->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton2->BorderRadius = 0;
            this->bunifuFlatButton2->ButtonText = L"All Restaurants";
            this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
            this->bunifuFlatButton2->Iconimage_right = nullptr;
            this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton2->Iconimage_Selected = nullptr;
            this->bunifuFlatButton2->IconMarginLeft = 0;
            this->bunifuFlatButton2->IconMarginRight = 0;
            this->bunifuFlatButton2->IconRightVisible = true;
            this->bunifuFlatButton2->IconRightZoom = 0;
            this->bunifuFlatButton2->IconVisible = true;
            this->bunifuFlatButton2->IconZoom = 80;
            this->bunifuFlatButton2->IsTab = false;
            this->bunifuFlatButton2->Location = System::Drawing::Point(0, 216);
            this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
            this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton2->selected = false;
            this->bunifuFlatButton2->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton2->TabIndex = 11;
            this->bunifuFlatButton2->Text = L"All Restaurants";
            this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton2->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 52.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label2->Location = System::Drawing::Point(26, 23);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(155, 83);
            this->label2->TabIndex = 10;
            this->label2->Text = L"OTlob";
            // 
            // SignUp
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1207, 671);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->Panel_Header);
            this->Controls->Add(this->panel2);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"SignUp";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"SignUp";
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->Panel_Header->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button_Close_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void Panel_Header_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = true;
				 this->offset = Point(e->X, e->Y);
			 }
	private: System::Void Panel_Header_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if(this->dragging)
				 {
					 Point currentScreenPos = PointToScreen(e->Location);
					 Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
				 }
			 }
	private: System::Void Panel_Header_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = false;
			 }
	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
							 Application::Exit();

		 }
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 }
		 private: System::Void Textbox_Password_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}
private: System::Void Textbox_Password_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
    Textbox_Password->isPassword = (!checkBox_ShPass->Checked);
}
private: System::Void checkBox_ShPass_OnChange(System::Object^  sender, System::EventArgs^  e) {
    Textbox_Password->isPassword = (!checkBox_ShPass->Checked);
}
};
}
