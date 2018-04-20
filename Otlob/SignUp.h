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
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	protected: 
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox5;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox4;
	private: System::Windows::Forms::Label^  label_SignUp;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;

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
            this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label_SignUp = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button_Minimize = (gcnew System::Windows::Forms::Button());
            this->button_Close = (gcnew System::Windows::Forms::Button());
            this->Panel_Header = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->Button_SignUp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3->SuspendLayout();
            this->panel1->SuspendLayout();
            this->Panel_Header->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
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
            this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::Gray;
            this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox1->LineThickness = 3;
            this->bunifuMaterialTextbox1->Location = System::Drawing::Point(278, 215);
            this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox1->TabIndex = 0;
            this->bunifuMaterialTextbox1->Text = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
            this->bunifuMaterialTextbox5->LineFocusedColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox5->LineIdleColor = System::Drawing::Color::Gray;
            this->bunifuMaterialTextbox5->LineMouseHoverColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox5->LineThickness = 3;
            this->bunifuMaterialTextbox5->Location = System::Drawing::Point(278, 144);
            this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
            this->bunifuMaterialTextbox5->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox5->TabIndex = 0;
            this->bunifuMaterialTextbox5->Text = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox2
            // 
            this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox2->HintText = L"";
            this->bunifuMaterialTextbox2->isPassword = false;
            this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::Gray;
            this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox2->LineThickness = 3;
            this->bunifuMaterialTextbox2->Location = System::Drawing::Point(278, 286);
            this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
            this->bunifuMaterialTextbox2->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox2->TabIndex = 0;
            this->bunifuMaterialTextbox2->Text = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox3
            // 
            this->bunifuMaterialTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox3->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox3->HintText = L"";
            this->bunifuMaterialTextbox3->isPassword = false;
            this->bunifuMaterialTextbox3->LineFocusedColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox3->LineIdleColor = System::Drawing::Color::Gray;
            this->bunifuMaterialTextbox3->LineMouseHoverColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox3->LineThickness = 3;
            this->bunifuMaterialTextbox3->Location = System::Drawing::Point(278, 357);
            this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
            this->bunifuMaterialTextbox3->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox3->TabIndex = 0;
            this->bunifuMaterialTextbox3->Text = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox4
            // 
            this->bunifuMaterialTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox4->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox4->HintText = L"";
            this->bunifuMaterialTextbox4->isPassword = false;
            this->bunifuMaterialTextbox4->LineFocusedColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox4->LineIdleColor = System::Drawing::Color::Gray;
            this->bunifuMaterialTextbox4->LineMouseHoverColor = System::Drawing::Color::Blue;
            this->bunifuMaterialTextbox4->LineThickness = 3;
            this->bunifuMaterialTextbox4->Location = System::Drawing::Point(278, 428);
            this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
            this->bunifuMaterialTextbox4->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox4->TabIndex = 0;
            this->bunifuMaterialTextbox4->Text = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label_SignUp
            // 
            this->label_SignUp->AutoSize = true;
            this->label_SignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_SignUp->ForeColor = System::Drawing::Color::DimGray;
            this->label_SignUp->Location = System::Drawing::Point(225, 47);
            this->label_SignUp->Name = L"label_SignUp";
            this->label_SignUp->Size = System::Drawing::Size(147, 40);
            this->label_SignUp->TabIndex = 1;
            this->label_SignUp->Text = L"Sign Up";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Tan;
            this->panel3->Controls->Add(this->label_SignUp);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox4);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox3);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox2);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox5);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox1);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(247, 127);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(960, 544);
            this->panel3->TabIndex = 14;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->ForeColor = System::Drawing::Color::Tan;
            this->label3->Location = System::Drawing::Point(60, 31);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 20);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Main";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->ForeColor = System::Drawing::Color::Tan;
            this->label4->Location = System::Drawing::Point(193, 31);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(43, 20);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Main";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->ForeColor = System::Drawing::Color::Tan;
            this->label5->Location = System::Drawing::Point(350, 31);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(43, 20);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Main";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->ForeColor = System::Drawing::Color::Tan;
            this->label6->Location = System::Drawing::Point(706, 31);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(88, 20);
            this->label6->TabIndex = 0;
            this->label6->Text = L"username :";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Gray;
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(247, 45);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(960, 82);
            this->panel1->TabIndex = 13;
            // 
            // button_Minimize
            // 
            this->button_Minimize->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->button_Minimize->FlatAppearance->BorderSize = 0;
            this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_Minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Minimize->ForeColor = System::Drawing::SystemColors::Info;
            this->button_Minimize->Location = System::Drawing::Point(864, 5);
            this->button_Minimize->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button_Minimize->Name = L"button_Minimize";
            this->button_Minimize->Size = System::Drawing::Size(42, 35);
            this->button_Minimize->TabIndex = 2;
            this->button_Minimize->Text = L"_";
            this->button_Minimize->UseVisualStyleBackColor = false;
            // 
            // button_Close
            // 
            this->button_Close->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->button_Close->FlatAppearance->BorderSize = 0;
            this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Close->ForeColor = System::Drawing::SystemColors::Info;
            this->button_Close->Location = System::Drawing::Point(914, 5);
            this->button_Close->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button_Close->Name = L"button_Close";
            this->button_Close->Size = System::Drawing::Size(42, 35);
            this->button_Close->TabIndex = 2;
            this->button_Close->Text = L"X";
            this->button_Close->UseVisualStyleBackColor = false;
            this->button_Close->Click += gcnew System::EventHandler(this, &SignUp::button_Close_Click);
            this->button_Close->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SignUp::button_Close_MouseClick);
            // 
            // Panel_Header
            // 
            this->Panel_Header->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->Panel_Header->Controls->Add(this->button_Close);
            this->Panel_Header->Controls->Add(this->button_Minimize);
            this->Panel_Header->Dock = System::Windows::Forms::DockStyle::Top;
            this->Panel_Header->Location = System::Drawing::Point(247, 0);
            this->Panel_Header->Name = L"Panel_Header";
            this->Panel_Header->Size = System::Drawing::Size(960, 45);
            this->Panel_Header->TabIndex = 12;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Tan;
            this->label2->Location = System::Drawing::Point(35, 32);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(145, 76);
            this->label2->TabIndex = 10;
            this->label2->Text = L"OTlob";
            // 
            // button_SignIn
            // 
            this->button_SignIn->Activecolor = System::Drawing::Color::Gray;
            this->button_SignIn->BackColor = System::Drawing::Color::Gray;
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
            this->button_SignIn->IconZoom = 80;
            this->button_SignIn->IsTab = false;
            this->button_SignIn->Location = System::Drawing::Point(2, 192);
            this->button_SignIn->Margin = System::Windows::Forms::Padding(6);
            this->button_SignIn->Name = L"button_SignIn";
            this->button_SignIn->Normalcolor = System::Drawing::Color::Gray;
            this->button_SignIn->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_SignIn->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_SignIn->selected = false;
            this->button_SignIn->Size = System::Drawing::Size(243, 70);
            this->button_SignIn->TabIndex = 11;
            this->button_SignIn->Text = L"Sign In";
            this->button_SignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_SignIn->Textcolor = System::Drawing::Color::Tan;
            this->button_SignIn->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // Button_SignUp
            // 
            this->Button_SignUp->Activecolor = System::Drawing::Color::Gray;
            this->Button_SignUp->BackColor = System::Drawing::Color::Gray;
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
            this->Button_SignUp->IconZoom = 80;
            this->Button_SignUp->IsTab = false;
            this->Button_SignUp->Location = System::Drawing::Point(2, 267);
            this->Button_SignUp->Margin = System::Windows::Forms::Padding(6);
            this->Button_SignUp->Name = L"Button_SignUp";
            this->Button_SignUp->Normalcolor = System::Drawing::Color::Gray;
            this->Button_SignUp->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->Button_SignUp->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->Button_SignUp->selected = false;
            this->Button_SignUp->Size = System::Drawing::Size(243, 70);
            this->Button_SignUp->TabIndex = 11;
            this->Button_SignUp->Text = L"Sign Up";
            this->Button_SignUp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->Button_SignUp->Textcolor = System::Drawing::Color::Tan;
            this->Button_SignUp->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton2
            // 
            this->bunifuFlatButton2->Activecolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton2->BackColor = System::Drawing::Color::Gray;
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
            this->bunifuFlatButton2->Location = System::Drawing::Point(2, 342);
            this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
            this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton2->selected = false;
            this->bunifuFlatButton2->Size = System::Drawing::Size(243, 70);
            this->bunifuFlatButton2->TabIndex = 11;
            this->bunifuFlatButton2->Text = L"All Restaurants";
            this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton2->Textcolor = System::Drawing::Color::Tan;
            this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton3
            // 
            this->bunifuFlatButton3->Activecolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton3->BackColor = System::Drawing::Color::Gray;
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
            this->bunifuFlatButton3->Location = System::Drawing::Point(2, 417);
            this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
            this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton3->selected = false;
            this->bunifuFlatButton3->Size = System::Drawing::Size(243, 70);
            this->bunifuFlatButton3->TabIndex = 11;
            this->bunifuFlatButton3->Text = L"Foods";
            this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton3->Textcolor = System::Drawing::Color::Tan;
            this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton4
            // 
            this->bunifuFlatButton4->Activecolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton4->BackColor = System::Drawing::Color::Gray;
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
            this->bunifuFlatButton4->Location = System::Drawing::Point(2, 492);
            this->bunifuFlatButton4->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
            this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton4->selected = false;
            this->bunifuFlatButton4->Size = System::Drawing::Size(243, 70);
            this->bunifuFlatButton4->TabIndex = 11;
            this->bunifuFlatButton4->Text = L"All Offers";
            this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton4->Textcolor = System::Drawing::Color::Tan;
            this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton1
            // 
            this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton1->BackColor = System::Drawing::Color::Gray;
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
            this->bunifuFlatButton1->Location = System::Drawing::Point(2, 565);
            this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
            this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Gray;
            this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton1->selected = false;
            this->bunifuFlatButton1->Size = System::Drawing::Size(243, 70);
            this->bunifuFlatButton1->TabIndex = 11;
            this->bunifuFlatButton1->Text = L"My Bills";
            this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton1->Textcolor = System::Drawing::Color::Tan;
            this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(55, 119);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(135, 65);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 12;
            this->pictureBox1->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->bunifuFlatButton1);
            this->panel2->Controls->Add(this->bunifuFlatButton4);
            this->panel2->Controls->Add(this->bunifuFlatButton3);
            this->panel2->Controls->Add(this->bunifuFlatButton2);
            this->panel2->Controls->Add(this->Button_SignUp);
            this->panel2->Controls->Add(this->button_SignIn);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(247, 671);
            this->panel2->TabIndex = 11;
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button_Close_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
