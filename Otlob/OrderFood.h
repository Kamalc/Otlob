#pragma once
#include "Global.h"

namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using namespace std;

	/// <summary>
	/// Summary for OrderFood
	/// </summary>
	public ref class OrderFood : public System::Windows::Forms::Form
	{
	public:
		OrderFood(void)
		{
			InitializeComponent();
			if (GlobalClass::LogIn) {
				label_UsernameN->Visible = true;
				button_SignIn->Visible = false;
				Button_SignUp->Visible = false;
				label_Username->Text = GlobalClass::username;
				Button_Profile->Visible = true;
				button_SignOut->Visible = true;
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderFood()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel2;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_Username;
	private: System::Windows::Forms::Label^  label_UsernameN;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AdminRoom;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Home;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuRating^  bunifuRating1;
	private: System::Windows::Forms::Label^  label_RestaurantName;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton6;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignOut;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_Profile;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderFood::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuRating1 = (gcnew Bunifu::Framework::UI::BunifuRating());
			this->label_RestaurantName = (gcnew System::Windows::Forms::Label());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->Button_Profile = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
			this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignOut = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->bunifuGradientPanel3->SuspendLayout();
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
			this->panel3->Controls->Add(this->bunifuFlatButton6);
			this->panel3->Controls->Add(this->bunifuImageButton1);
			this->panel3->Controls->Add(this->bunifuFlatButton5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->tableLayoutPanel3);
			this->panel3->Controls->Add(this->tableLayoutPanel4);
			this->panel3->Controls->Add(this->tableLayoutPanel2);
			this->panel3->Controls->Add(this->tableLayoutPanel1);
			this->panel3->Controls->Add(this->flowLayoutPanel1);
			this->panel3->Controls->Add(this->bunifuGradientPanel3);
			this->panel3->Controls->Add(this->bunifuGradientPanel2);
			this->panel3->Controls->Add(this->bunifuGradientPanel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 22;
			// 
			// bunifuFlatButton6
			// 
			this->bunifuFlatButton6->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton6->BorderRadius = 0;
			this->bunifuFlatButton6->ButtonText = L"Clear";
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
			this->bunifuFlatButton6->Location = System::Drawing::Point(50, 514);
			this->bunifuFlatButton6->Margin = System::Windows::Forms::Padding(6);
			this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
			this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton6->selected = false;
			this->bunifuFlatButton6->Size = System::Drawing::Size(148, 50);
			this->bunifuFlatButton6->TabIndex = 7;
			this->bunifuFlatButton6->Text = L"Clear";
			this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton6->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(701, 514);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(71, 50);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 6;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"Order";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = nullptr;
			this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 90;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(352, 514);
			this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(6);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(339, 50);
			this->bunifuFlatButton5->TabIndex = 5;
			this->bunifuFlatButton5->Text = L"Order";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(271, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Main Meal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(571, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Main Meal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(571, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Main Meal";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(271, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Main Meal";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Main Meal";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Location = System::Drawing::Point(276, 319);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.10345F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 81.89655F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(243, 164);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Location = System::Drawing::Point(576, 319);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.10345F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 81.89655F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(243, 164);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(576, 117);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.10345F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 81.89655F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(243, 164);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(276, 117);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.10345F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 81.89655F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(243, 164);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->comboBox1);
			this->flowLayoutPanel1->Controls->Add(this->checkedListBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(10, 117);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(234, 366);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(3, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 33);
			this->comboBox1->TabIndex = 1;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(3, 42);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(211, 229);
			this->checkedListBox1->TabIndex = 0;
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->Controls->Add(this->bunifuRating1);
			this->bunifuGradientPanel3->Controls->Add(this->label_RestaurantName);
			this->bunifuGradientPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->Location = System::Drawing::Point(0, 27);
			this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
			this->bunifuGradientPanel3->Quality = 10;
			this->bunifuGradientPanel3->Size = System::Drawing::Size(872, 34);
			this->bunifuGradientPanel3->TabIndex = 1;
			// 
			// bunifuRating1
			// 
			this->bunifuRating1->AutoSize = true;
			this->bunifuRating1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuRating1->Dock = System::Windows::Forms::DockStyle::Right;
			this->bunifuRating1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuRating1->Location = System::Drawing::Point(621, 0);
			this->bunifuRating1->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->bunifuRating1->MaximumSize = System::Drawing::Size(251, 34);
			this->bunifuRating1->MinimumSize = System::Drawing::Size(251, 34);
			this->bunifuRating1->Name = L"bunifuRating1";
			this->bunifuRating1->Size = System::Drawing::Size(251, 34);
			this->bunifuRating1->TabIndex = 1;
			this->bunifuRating1->Value = 0;
			// 
			// label_RestaurantName
			// 
			this->label_RestaurantName->AutoSize = true;
			this->label_RestaurantName->ForeColor = System::Drawing::Color::Maroon;
			this->label_RestaurantName->Location = System::Drawing::Point(271, 3);
			this->label_RestaurantName->Name = L"label_RestaurantName";
			this->label_RestaurantName->Size = System::Drawing::Size(158, 25);
			this->label_RestaurantName->TabIndex = 0;
			this->label_RestaurantName->Text = L"RestaurantName";
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel2->Location = System::Drawing::Point(0, 0);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(872, 27);
			this->bunifuGradientPanel2->TabIndex = 1;
			// 
			// Button_Profile
			// 
			this->Button_Profile->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_Profile->BorderRadius = 0;
			this->Button_Profile->ButtonText = L"Profile";
			this->Button_Profile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_Profile->DisabledColor = System::Drawing::Color::Gray;
			this->Button_Profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Profile->ForeColor = System::Drawing::Color::Tan;
			this->Button_Profile->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_Profile->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Profile.Iconimage")));
			this->Button_Profile->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Profile.Iconimage_right")));
			this->Button_Profile->Iconimage_right_Selected = nullptr;
			this->Button_Profile->Iconimage_Selected = nullptr;
			this->Button_Profile->IconMarginLeft = 0;
			this->Button_Profile->IconMarginRight = 0;
			this->Button_Profile->IconRightVisible = false;
			this->Button_Profile->IconRightZoom = 0;
			this->Button_Profile->IconVisible = true;
			this->Button_Profile->IconZoom = 70;
			this->Button_Profile->IsTab = false;
			this->Button_Profile->Location = System::Drawing::Point(550, -1);
			this->Button_Profile->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_Profile->Name = L"Button_Profile";
			this->Button_Profile->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_Profile->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_Profile->selected = false;
			this->Button_Profile->Size = System::Drawing::Size(156, 58);
			this->Button_Profile->TabIndex = 10;
			this->Button_Profile->Text = L"Profile";
			this->Button_Profile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_Profile->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_Profile->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_Profile->Visible = false;
			this->Button_Profile->Click += gcnew System::EventHandler(this, &OrderFood::Button_Profile_Click);
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(872, 0);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(88, 570);
			this->bunifuGradientPanel1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->Button_Profile);
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->button_SignOut);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 21;
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_Username->Location = System::Drawing::Point(812, 18);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(0, 25);
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
			this->label_UsernameN->Size = System::Drawing::Size(110, 25);
			this->label_UsernameN->TabIndex = 0;
			this->label_UsernameN->Text = L"username :";
			this->label_UsernameN->Visible = false;
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
			this->button_SignIn->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->button_SignIn->Click += gcnew System::EventHandler(this, &OrderFood::button_SignIn_Click);
			// 
			// button_SignOut
			// 
			this->button_SignOut->Activecolor = System::Drawing::Color::Maroon;
			this->button_SignOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SignOut->BorderRadius = 0;
			this->button_SignOut->ButtonText = L"Sign Out";
			this->button_SignOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SignOut->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SignOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SignOut->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SignOut->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SignOut->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignOut.Iconimage")));
			this->button_SignOut->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignOut.Iconimage_right")));
			this->button_SignOut->Iconimage_right_Selected = nullptr;
			this->button_SignOut->Iconimage_Selected = nullptr;
			this->button_SignOut->IconMarginLeft = 0;
			this->button_SignOut->IconMarginRight = 0;
			this->button_SignOut->IconRightVisible = true;
			this->button_SignOut->IconRightZoom = 70;
			this->button_SignOut->IconVisible = true;
			this->button_SignOut->IconZoom = 90;
			this->button_SignOut->IsTab = false;
			this->button_SignOut->Location = System::Drawing::Point(35, -1);
			this->button_SignOut->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignOut->Name = L"button_SignOut";
			this->button_SignOut->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignOut->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignOut->selected = false;
			this->button_SignOut->Size = System::Drawing::Size(234, 58);
			this->button_SignOut->TabIndex = 11;
			this->button_SignOut->Text = L"Sign Out";
			this->button_SignOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignOut->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignOut->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignOut->Visible = false;
			this->button_SignOut->Click += gcnew System::EventHandler(this, &OrderFood::button_SignOut_Click);
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
			this->Button_SignUp->IconZoom = 90;
			this->Button_SignUp->IsTab = false;
			this->Button_SignUp->Location = System::Drawing::Point(550, -1);
			this->Button_SignUp->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &OrderFood::Button_SignUp_Click);
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
			this->Panel_Header->TabIndex = 20;
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
			this->button_Close->Click += gcnew System::EventHandler(this, &OrderFood::button_Close_Click);
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
			this->button_Minimize->Click += gcnew System::EventHandler(this, &OrderFood::button_Minimize_Click);
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
			this->panel2->TabIndex = 19;
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
			this->button_AdminRoom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->button_AdminRoom->Click += gcnew System::EventHandler(this, &OrderFood::button_AdminRoom_Click);
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
			this->button_Home->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->button_Home->Click += gcnew System::EventHandler(this, &OrderFood::button_Home_Click);
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
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->bunifuFlatButton4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
			this->label2->Size = System::Drawing::Size(197, 105);
			this->label2->TabIndex = 10;
			this->label2->Text = L"OTlob";
			// 
			// OrderFood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
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
			this->Name = L"OrderFood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OrderFood";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->bunifuGradientPanel3->ResumeLayout(false);
			this->bunifuGradientPanel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Panel_Header->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void button_Home_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void button_SignOut_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::LogIn = false;
	GlobalClass::username = "";
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
}
private: System::Void button_AdminRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AdminFormLogIn->Show();
	this->Hide();
}
private: System::Void Button_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::profile->Show();
	this->Hide();
}
private: System::Void button_SignIn_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::signin->Show();
	this->Hide();
}
private: System::Void Button_SignUp_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::signup->Show();
	this->Hide();
}
};
}
