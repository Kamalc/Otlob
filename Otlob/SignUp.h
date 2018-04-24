#pragma once
#include "SignIn.h"
#include<iostream>
#include <fstream>      
#include "json.hpp"
#include <msclr\marshal_cppstd.h>
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using json = nlohmann::json;
    using namespace msclr::interop;
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
		SignUp(System::Windows::Forms::Form^ h)
		{
			InitializeComponent();
			this->dragging = false;
			home = h;
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
	private: System::Windows::Forms::Form^ home;
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Phone;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Textbox_Password;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Email;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_FirstName;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_LastName;





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
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AdminRoom;

	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SubmitSU;

	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Home;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Clear;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;

	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;



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
            this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button_Clear = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->button_SubmitSU = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox_Phone = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->Textbox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_Email = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_FirstName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_LastName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
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
            this->button_AdminRoom = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->button_Home = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
            this->panel3->Controls->Add(this->bunifuDatepicker1);
            this->panel3->Controls->Add(this->pictureBox8);
            this->panel3->Controls->Add(this->pictureBox7);
            this->panel3->Controls->Add(this->pictureBox6);
            this->panel3->Controls->Add(this->pictureBox5);
            this->panel3->Controls->Add(this->pictureBox4);
            this->panel3->Controls->Add(this->pictureBox10);
            this->panel3->Controls->Add(this->pictureBox9);
            this->panel3->Controls->Add(this->pictureBox3);
            this->panel3->Controls->Add(this->pictureBox2);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->checkBox_ShPass);
            this->panel3->Controls->Add(this->label9);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Controls->Add(this->label7);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Controls->Add(this->button_Clear);
            this->panel3->Controls->Add(this->button_SubmitSU);
            this->panel3->Controls->Add(this->label12);
            this->panel3->Controls->Add(this->label11);
            this->panel3->Controls->Add(this->label6);
            this->panel3->Controls->Add(this->textBox_Phone);
            this->panel3->Controls->Add(this->Textbox_Password);
            this->panel3->Controls->Add(this->textBox_Email);
            this->panel3->Controls->Add(this->textBox_FirstName);
            this->panel3->Controls->Add(this->bunifuMaterialTextbox1);
            this->panel3->Controls->Add(this->textBox_LastName);
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
            // bunifuDatepicker1
            // 
            this->bunifuDatepicker1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuDatepicker1->BorderRadius = 0;
            this->bunifuDatepicker1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
            this->bunifuDatepicker1->FormatCustom = nullptr;
            this->bunifuDatepicker1->Location = System::Drawing::Point(338, 399);
            this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
            this->bunifuDatepicker1->Size = System::Drawing::Size(370, 44);
            this->bunifuDatepicker1->TabIndex = 24;
            this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 20, 15, 37, 7, 630);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(95, 1);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(103, 77);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 23;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(809, 353);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(33, 25);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 22;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(148, 478);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(33, 25);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 22;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(148, 354);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(33, 25);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 22;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(148, 287);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(33, 25);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 22;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(148, 414);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(33, 25);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 22;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(148, 225);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(33, 25);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 22;
            this->pictureBox9->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(148, 162);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(33, 25);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 22;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(148, 94);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(33, 25);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 22;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &SignUp::pictureBox2_Click);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(708, 354);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(107, 17);
            this->label10->TabIndex = 21;
            this->label10->Text = L"Show Password";
            this->label10->Click += gcnew System::EventHandler(this, &SignUp::label10_Click);
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
            this->checkBox_ShPass->Location = System::Drawing::Point(688, 354);
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
            this->label9->Location = System::Drawing::Point(193, 479);
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
            this->label8->Location = System::Drawing::Point(193, 355);
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
            this->label7->Location = System::Drawing::Point(193, 288);
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
            this->label1->Location = System::Drawing::Point(193, 95);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(86, 20);
            this->label1->TabIndex = 19;
            this->label1->Text = L"First Name";
            // 
            // button_Clear
            // 
            this->button_Clear->Activecolor = System::Drawing::Color::Maroon;
            this->button_Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_Clear->BorderRadius = 0;
            this->button_Clear->ButtonText = L"Clear";
            this->button_Clear->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_Clear->DisabledColor = System::Drawing::Color::Transparent;
            this->button_Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Clear->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->button_Clear->Iconcolor = System::Drawing::Color::Transparent;
            this->button_Clear->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Clear.Iconimage")));
            this->button_Clear->Iconimage_right = nullptr;
            this->button_Clear->Iconimage_right_Selected = nullptr;
            this->button_Clear->Iconimage_Selected = nullptr;
            this->button_Clear->IconMarginLeft = 0;
            this->button_Clear->IconMarginRight = 0;
            this->button_Clear->IconRightVisible = true;
            this->button_Clear->IconRightZoom = 0;
            this->button_Clear->IconVisible = true;
            this->button_Clear->IconZoom = 80;
            this->button_Clear->IsTab = false;
            this->button_Clear->Location = System::Drawing::Point(338, 528);
            this->button_Clear->Margin = System::Windows::Forms::Padding(6);
            this->button_Clear->Name = L"button_Clear";
            this->button_Clear->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Clear->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_Clear->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_Clear->selected = false;
            this->button_Clear->Size = System::Drawing::Size(156, 39);
            this->button_Clear->TabIndex = 11;
            this->button_Clear->Text = L"Clear";
            this->button_Clear->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_Clear->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Clear->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->button_Clear->Click += gcnew System::EventHandler(this, &SignUp::button_Clear_Click);
            // 
            // button_SubmitSU
            // 
            this->button_SubmitSU->Activecolor = System::Drawing::Color::Maroon;
            this->button_SubmitSU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SubmitSU->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_SubmitSU->BorderRadius = 0;
            this->button_SubmitSU->ButtonText = L"Sign Up";
            this->button_SubmitSU->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_SubmitSU->DisabledColor = System::Drawing::Color::Transparent;
            this->button_SubmitSU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_SubmitSU->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->button_SubmitSU->Iconcolor = System::Drawing::Color::Transparent;
            this->button_SubmitSU->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SubmitSU.Iconimage")));
            this->button_SubmitSU->Iconimage_right = nullptr;
            this->button_SubmitSU->Iconimage_right_Selected = nullptr;
            this->button_SubmitSU->Iconimage_Selected = nullptr;
            this->button_SubmitSU->IconMarginLeft = 0;
            this->button_SubmitSU->IconMarginRight = 0;
            this->button_SubmitSU->IconRightVisible = true;
            this->button_SubmitSU->IconRightZoom = 0;
            this->button_SubmitSU->IconVisible = true;
            this->button_SubmitSU->IconZoom = 80;
            this->button_SubmitSU->IsTab = false;
            this->button_SubmitSU->Location = System::Drawing::Point(552, 528);
            this->button_SubmitSU->Margin = System::Windows::Forms::Padding(6);
            this->button_SubmitSU->Name = L"button_SubmitSU";
            this->button_SubmitSU->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SubmitSU->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_SubmitSU->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_SubmitSU->selected = false;
            this->button_SubmitSU->Size = System::Drawing::Size(156, 39);
            this->button_SubmitSU->TabIndex = 11;
            this->button_SubmitSU->Text = L"Sign Up";
            this->button_SubmitSU->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_SubmitSU->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_SubmitSU->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->button_SubmitSU->Click += gcnew System::EventHandler(this, &SignUp::button_SubmitSU_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(193, 415);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(99, 20);
            this->label12->TabIndex = 19;
            this->label12->Text = L"Date of Birth";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(193, 226);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(83, 20);
            this->label11->TabIndex = 19;
            this->label11->Text = L"Username";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(193, 163);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(86, 20);
            this->label6->TabIndex = 19;
            this->label6->Text = L"Last Name";
            // 
            // textBox_Phone
            // 
            this->textBox_Phone->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_Phone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->textBox_Phone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->textBox_Phone->HintForeColor = System::Drawing::Color::Empty;
            this->textBox_Phone->HintText = L"Enter Your number";
            this->textBox_Phone->isPassword = false;
            this->textBox_Phone->LineFocusedColor = System::Drawing::Color::Maroon;
            this->textBox_Phone->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_Phone->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->textBox_Phone->LineThickness = 3;
            this->textBox_Phone->Location = System::Drawing::Point(338, 459);
            this->textBox_Phone->Margin = System::Windows::Forms::Padding(4);
            this->textBox_Phone->Name = L"textBox_Phone";
            this->textBox_Phone->Size = System::Drawing::Size(370, 44);
            this->textBox_Phone->TabIndex = 18;
            this->textBox_Phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->textBox_Phone->OnValueChanged += gcnew System::EventHandler(this, &SignUp::bunifuMaterialTextbox4_OnValueChanged);
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
            this->Textbox_Password->Location = System::Drawing::Point(338, 335);
            this->Textbox_Password->Margin = System::Windows::Forms::Padding(4);
            this->Textbox_Password->Name = L"Textbox_Password";
            this->Textbox_Password->Size = System::Drawing::Size(370, 44);
            this->Textbox_Password->TabIndex = 18;
            this->Textbox_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->Textbox_Password->OnValueChanged += gcnew System::EventHandler(this, &SignUp::Textbox_Password_OnValueChanged);
            this->Textbox_Password->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignUp::Textbox_Password_Paint);
            // 
            // textBox_Email
            // 
            this->textBox_Email->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->textBox_Email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->textBox_Email->HintForeColor = System::Drawing::Color::Empty;
            this->textBox_Email->HintText = L"ex: Email1992@gmail.com";
            this->textBox_Email->isPassword = false;
            this->textBox_Email->LineFocusedColor = System::Drawing::Color::Maroon;
            this->textBox_Email->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_Email->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->textBox_Email->LineThickness = 3;
            this->textBox_Email->Location = System::Drawing::Point(338, 268);
            this->textBox_Email->Margin = System::Windows::Forms::Padding(4);
            this->textBox_Email->Name = L"textBox_Email";
            this->textBox_Email->Size = System::Drawing::Size(370, 44);
            this->textBox_Email->TabIndex = 18;
            this->textBox_Email->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // textBox_FirstName
            // 
            this->textBox_FirstName->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->textBox_FirstName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->textBox_FirstName->HintForeColor = System::Drawing::Color::Empty;
            this->textBox_FirstName->HintText = L"";
            this->textBox_FirstName->isPassword = false;
            this->textBox_FirstName->LineFocusedColor = System::Drawing::Color::Maroon;
            this->textBox_FirstName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_FirstName->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->textBox_FirstName->LineThickness = 3;
            this->textBox_FirstName->Location = System::Drawing::Point(338, 75);
            this->textBox_FirstName->Margin = System::Windows::Forms::Padding(4);
            this->textBox_FirstName->Name = L"textBox_FirstName";
            this->textBox_FirstName->Size = System::Drawing::Size(370, 44);
            this->textBox_FirstName->TabIndex = 18;
            this->textBox_FirstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox1
            // 
            this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox1->HintText = L"Choose something unique";
            this->bunifuMaterialTextbox1->isPassword = false;
            this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineThickness = 3;
            this->bunifuMaterialTextbox1->Location = System::Drawing::Point(338, 206);
            this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox1->TabIndex = 18;
            this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->bunifuMaterialTextbox1->OnValueChanged += gcnew System::EventHandler(this, &SignUp::bunifuMaterialTextbox1_OnValueChanged);
            // 
            // textBox_LastName
            // 
            this->textBox_LastName->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->textBox_LastName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->textBox_LastName->HintForeColor = System::Drawing::Color::Empty;
            this->textBox_LastName->HintText = L"";
            this->textBox_LastName->isPassword = false;
            this->textBox_LastName->LineFocusedColor = System::Drawing::Color::Maroon;
            this->textBox_LastName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_LastName->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->textBox_LastName->LineThickness = 3;
            this->textBox_LastName->Location = System::Drawing::Point(338, 143);
            this->textBox_LastName->Margin = System::Windows::Forms::Padding(4);
            this->textBox_LastName->Name = L"textBox_LastName";
            this->textBox_LastName->Size = System::Drawing::Size(370, 44);
            this->textBox_LastName->TabIndex = 18;
            this->textBox_LastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label_SignUp
            // 
            this->label_SignUp->AutoSize = true;
            this->label_SignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_SignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label_SignUp->Location = System::Drawing::Point(201, 14);
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
            this->button_SignIn->IconZoom = 90;
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
            this->button_SignIn->Click += gcnew System::EventHandler(this, &SignUp::button_SignIn_Click);
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
            this->Button_SignUp->Enabled = false;
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
            this->Button_SignUp->IconZoom = 90;
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
            this->panel2->Controls->Add(this->button_AdminRoom);
            this->panel2->Controls->Add(this->button_Home);
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
            // button_AdminRoom
            // 
            this->button_AdminRoom->Activecolor = System::Drawing::Color::Maroon;
            this->button_AdminRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_AdminRoom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_AdminRoom->BorderRadius = 0;
            this->button_AdminRoom->ButtonText = L"Admin Room";
            this->button_AdminRoom->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_AdminRoom->DisabledColor = System::Drawing::Color::Transparent;
            this->button_AdminRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_AdminRoom->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->button_AdminRoom->Iconcolor = System::Drawing::Color::Transparent;
            this->button_AdminRoom->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage")));
            this->button_AdminRoom->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage_right")));
            this->button_AdminRoom->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage_right_Selected")));
            this->button_AdminRoom->Iconimage_Selected = nullptr;
            this->button_AdminRoom->IconMarginLeft = 0;
            this->button_AdminRoom->IconMarginRight = 0;
            this->button_AdminRoom->IconRightVisible = true;
            this->button_AdminRoom->IconRightZoom = 0;
            this->button_AdminRoom->IconVisible = true;
            this->button_AdminRoom->IconZoom = 100;
            this->button_AdminRoom->IsTab = false;
            this->button_AdminRoom->Location = System::Drawing::Point(0, 601);
            this->button_AdminRoom->Margin = System::Windows::Forms::Padding(6);
            this->button_AdminRoom->Name = L"button_AdminRoom";
            this->button_AdminRoom->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_AdminRoom->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_AdminRoom->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_AdminRoom->selected = false;
            this->button_AdminRoom->Size = System::Drawing::Size(248, 70);
            this->button_AdminRoom->TabIndex = 11;
            this->button_AdminRoom->Text = L"Admin Room";
            this->button_AdminRoom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_AdminRoom->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_AdminRoom->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // button_Home
            // 
            this->button_Home->Activecolor = System::Drawing::Color::Maroon;
            this->button_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_Home->BorderRadius = 0;
            this->button_Home->ButtonText = L"Home";
            this->button_Home->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_Home->DisabledColor = System::Drawing::Color::Transparent;
            this->button_Home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Home->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->button_Home->Iconcolor = System::Drawing::Color::Transparent;
            this->button_Home->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Home.Iconimage")));
            this->button_Home->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Home.Iconimage_right")));
            this->button_Home->Iconimage_right_Selected = nullptr;
            this->button_Home->Iconimage_Selected = nullptr;
            this->button_Home->IconMarginLeft = 0;
            this->button_Home->IconMarginRight = 0;
            this->button_Home->IconRightVisible = false;
            this->button_Home->IconRightZoom = 0;
            this->button_Home->IconVisible = true;
            this->button_Home->IconZoom = 100;
            this->button_Home->IsTab = false;
            this->button_Home->Location = System::Drawing::Point(0, 218);
            this->button_Home->Margin = System::Windows::Forms::Padding(6);
            this->button_Home->Name = L"button_Home";
            this->button_Home->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Home->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_Home->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_Home->selected = false;
            this->button_Home->Size = System::Drawing::Size(248, 70);
            this->button_Home->TabIndex = 11;
            this->button_Home->Text = L"Home";
            this->button_Home->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_Home->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Home->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->button_Home->Click += gcnew System::EventHandler(this, &SignUp::button_Home_Click);
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
            this->bunifuFlatButton1->IconZoom = 100;
            this->bunifuFlatButton1->IsTab = false;
            this->bunifuFlatButton1->Location = System::Drawing::Point(0, 514);
            this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
            this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
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
            this->bunifuFlatButton4->IconZoom = 100;
            this->bunifuFlatButton4->IsTab = false;
            this->bunifuFlatButton4->Location = System::Drawing::Point(0, 440);
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
            this->bunifuFlatButton3->IconZoom = 100;
            this->bunifuFlatButton3->IsTab = false;
            this->bunifuFlatButton3->Location = System::Drawing::Point(0, 366);
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
            this->bunifuFlatButton2->IconZoom = 100;
            this->bunifuFlatButton2->IsTab = false;
            this->bunifuFlatButton2->Location = System::Drawing::Point(0, 292);
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
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"SignUp";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"SignUp";
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	private: System::Void bunifuFlatButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bunifuMaterialTextbox4_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox_FirstName->Text = "";
				 textBox_LastName->Text = "";
				 textBox_Email->Text = "";
				 textBox_Phone->Text = "";
				 Textbox_Password->Text = "";
		 }
	private: System::Void button_Home_Click(System::Object^  sender, System::EventArgs^  e) {
				home->Show();
				this->Hide();
			 }
	private: System::Void button_SignIn_Click(System::Object^  sender, System::EventArgs^  e) {
				 SignIn^ sn = gcnew SignIn(this);
				 sn->Show();
				 this->Hide();
		 }
private: System::Void button_SubmitSU_Click(System::Object^  sender, System::EventArgs^  e) {

    String^FirstName_input = textBox_FirstName->Text;
    String^LastName_input = textBox_LastName->Text;
    String^Username_input = bunifuMaterialTextbox1->Text;
    String^Email_input = textBox_Email->Text;
    String^Password_input = Textbox_Password->Text;
    String^Phone_input = textBox_Phone->Text;
    String^Day_input =Convert::ToString(bunifuDatepicker1->Value.Day);
    String^Month_input = Convert::ToString(bunifuDatepicker1->Value.Month);
    String^Year_input = Convert::ToString(bunifuDatepicker1->Value.Year);

    // std::string 
    std::string FirstName = marshal_as<std::string>(FirstName_input);
    std::string LastName = marshal_as<std::string>(LastName_input);
    std::string Username = marshal_as<std::string>(Username_input);
    std::string Email = marshal_as<std::string>(Email_input);
    std::string Password = marshal_as<std::string>(Password_input);
    std::string Phone = marshal_as<std::string>(Phone_input);
    std::string Day = marshal_as<std::string>(Day_input);
    std::string Month = marshal_as<std::string>(Month_input);
    std::string Year = marshal_as<std::string>(Year_input);

    std::ifstream i("Users.json");
       json j;
       i >> j;
       j[Username]["Name"]["First"] = FirstName;
       j[Username]["Name"]["Last"] = LastName;
       j[Username]["Email"]= Email;
       j[Username]["Password"] = Password;
       j[Username]["Date Birth"]["Day"] = Day;
       j[Username]["Date Birth"]["Month"] = Month;
       j[Username]["Date Birth"]["Year"]= Year;
       j[Username]["Phone"] = Phone;

       std::ofstream o("Users.json");
       o << std::setw(4) << j << std::endl;
    button_SubmitSU->Enabled = (!(j.find(marshal_as<std::string>(Username_input)) != j.end()));

}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuMaterialTextbox1_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {

    std::ifstream i("Users.json");
    json j;
    i >> j;
    String^Username_input = bunifuMaterialTextbox1->Text;
    button_SubmitSU->Enabled = (!(j.find(marshal_as<std::string>(Username_input)) != j.end()));
}
};
}