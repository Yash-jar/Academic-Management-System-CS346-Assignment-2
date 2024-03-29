#pragma once
#include "Constants.h"
#include "StudentCourseReg.h"
#include "FourthYearCourseReg.h"
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentHome
	/// </summary>
	public ref class StudentHome : public System::Windows::Forms::Form
	{
		property System::String^ UserName;
		property System::String^ RollNumber;
		property System::String^ Semester;
	public:
		Panel^ OuterPanel;
		StudentHome(void){
			InitializeComponent();
		}
		StudentHome(String^ Username_1,String^ Roll_1,Panel^ obj, String^ Semester_1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UserName = Username_1;
			RollNumber = Roll_1;
			OuterPanel = obj;
			Semester = Semester_1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentHome()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Panel^  Panel1;
	protected: 
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::Button^  Button2;
	internal: System::Windows::Forms::DataGridView^  DataGridView2;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  DataGridViewTextBoxColumn4;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	internal: System::Windows::Forms::Panel^  Panel2;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::Label^  Label1;
	internal: System::Windows::Forms::DataGridView^  DataGridView1;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	internal: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	internal: System::Windows::Forms::Panel^  GradeReleasedPanel;
	internal: System::Windows::Forms::Label^  Label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	internal:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentHome::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->DataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->DataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Panel2 = (gcnew System::Windows::Forms::Panel());
			this->GradeReleasedPanel = (gcnew System::Windows::Forms::Panel());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView2))->BeginInit();
			this->Panel2->SuspendLayout();
			this->GradeReleasedPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::Transparent;
			this->Panel1->Controls->Add(this->Label5);
			this->Panel1->Controls->Add(this->Label3);
			this->Panel1->Location = System::Drawing::Point(178, 7);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(235, 198);
			this->Panel1->TabIndex = 11;
			// 
			// Label5
			// 
			this->Label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->Label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label5->Location = System::Drawing::Point(8, 65);
			this->Label5->Margin = System::Windows::Forms::Padding(0, 0, 4, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(222, 127);
			this->Label5->TabIndex = 9;
			this->Label5->Text = L"{Name}";
			// 
			// Label3
			// 
			this->Label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label3->ForeColor = System::Drawing::Color::SeaGreen;
			this->Label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label3->Location = System::Drawing::Point(8, 15);
			this->Label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(164, 55);
			this->Label3->TabIndex = 7;
			this->Label3->Text = L"Welcome";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Label2.Image")));
			this->Label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label2->Location = System::Drawing::Point(87, 222);
			this->Label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label2->Name = L"Label2";
			this->Label2->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label2->Size = System::Drawing::Size(252, 42);
			this->Label2->TabIndex = 12;
			this->Label2->Text = L"     Fee Details";
			this->Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Button2
			// 
			this->Button2->BackColor = System::Drawing::Color::LightPink;
			this->Button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button2->Location = System::Drawing::Point(109, 280);
			this->Button2->Margin = System::Windows::Forms::Padding(4);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(202, 41);
			this->Button2->TabIndex = 13;
			this->Button2->Text = L"Fee Payment closed";
			this->Button2->UseVisualStyleBackColor = false;
			this->Button2->Click += gcnew System::EventHandler(this, &StudentHome::Button2_Click);
			// 
			// DataGridView2
			// 
			this->DataGridView2->AllowUserToAddRows = false;
			this->DataGridView2->AllowUserToDeleteRows = false;
			this->DataGridView2->AllowUserToResizeColumns = false;
			this->DataGridView2->AllowUserToResizeRows = false;
			this->DataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DataGridView2->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->DataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->DataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridView2->ColumnHeadersHeight = 55;
			this->DataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->DataGridViewTextBoxColumn4,
					this->Column5, this->Column6
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DataGridView2->DefaultCellStyle = dataGridViewCellStyle3;
			this->DataGridView2->GridColor = System::Drawing::Color::DimGray;
			this->DataGridView2->Location = System::Drawing::Point(13, 343);
			this->DataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->DataGridView2->Name = L"DataGridView2";
			this->DataGridView2->ReadOnly = true;
			this->DataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DataGridView2->RowHeadersVisible = false;
			this->DataGridView2->RowHeadersWidth = 61;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Linen;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Linen;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->DataGridView2->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Linen;
			this->DataGridView2->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataGridView2->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DataGridView2->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Linen;
			this->DataGridView2->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView2->RowTemplate->DividerHeight = 1;
			this->DataGridView2->RowTemplate->Height = 30;
			this->DataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridView2->Size = System::Drawing::Size(400, 114);
			this->DataGridView2->TabIndex = 14;
			// 
			// DataGridViewTextBoxColumn4
			// 
			this->DataGridViewTextBoxColumn4->FillWeight = 64.84426F;
			this->DataGridViewTextBoxColumn4->HeaderText = L"Sem";
			this->DataGridViewTextBoxColumn4->Name = L"DataGridViewTextBoxColumn4";
			this->DataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Column5
			// 
			dataGridViewCellStyle2->Format = L"C0";
			dataGridViewCellStyle2->NullValue = L"1,10,000";
			this->Column5->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column5->FillWeight = 129.8477F;
			this->Column5->HeaderText = L"Fees";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->FillWeight = 66.22174F;
			this->Column6->HeaderText = L"Status";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Panel2
			// 
			this->Panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->Panel2->Controls->Add(this->label6);
			this->Panel2->Controls->Add(this->GradeReleasedPanel);
			this->Panel2->Controls->Add(this->Button3);
			this->Panel2->Controls->Add(this->Label1);
			this->Panel2->Controls->Add(this->DataGridView1);
			this->Panel2->Location = System::Drawing::Point(421, 4);
			this->Panel2->Margin = System::Windows::Forms::Padding(4);
			this->Panel2->Name = L"Panel2";
			this->Panel2->Size = System::Drawing::Size(582, 551);
			this->Panel2->TabIndex = 15;
			// 
			// GradeReleasedPanel
			// 
			this->GradeReleasedPanel->BackColor = System::Drawing::Color::OldLace;
			this->GradeReleasedPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->GradeReleasedPanel->Controls->Add(this->Label4);
			this->GradeReleasedPanel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GradeReleasedPanel->Location = System::Drawing::Point(105, 8);
			this->GradeReleasedPanel->Name = L"GradeReleasedPanel";
			this->GradeReleasedPanel->Size = System::Drawing::Size(394, 62);
			this->GradeReleasedPanel->TabIndex = 9;
			this->GradeReleasedPanel->Visible = false;
			// 
			// Label4
			// 
			this->Label4->BackColor = System::Drawing::Color::Transparent;
			this->Label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label4->ForeColor = System::Drawing::Color::Crimson;
			this->Label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Label4.Image")));
			this->Label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label4->Location = System::Drawing::Point(13, 6);
			this->Label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(372, 48);
			this->Label4->TabIndex = 9;
			this->Label4->Text = L"  Grades have been released !!";
			this->Label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Button3
			// 
			this->Button3->BackColor = System::Drawing::Color::LightPink;
			this->Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button3->Location = System::Drawing::Point(175, 61);
			this->Button3->Margin = System::Windows::Forms::Padding(4);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(243, 41);
			this->Button3->TabIndex = 7;
			this->Button3->Text = L"Course Registration closed";
			this->Button3->UseVisualStyleBackColor = false;
			this->Button3->Click += gcnew System::EventHandler(this, &StudentHome::Button3_Click);
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Label1.Image")));
			this->Label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label1->Location = System::Drawing::Point(99, 14);
			this->Label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label1->Name = L"Label1";
			this->Label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label1->Size = System::Drawing::Size(392, 42);
			this->Label1->TabIndex = 4;
			this->Label1->Text = L"     Registered Courses";
			this->Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGridView1
			// 
			this->DataGridView1->AllowUserToAddRows = false;
			this->DataGridView1->AllowUserToDeleteRows = false;
			this->DataGridView1->AllowUserToResizeColumns = false;
			this->DataGridView1->AllowUserToResizeRows = false;
			this->DataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DataGridView1->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->DataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->DataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->DataGridView1->ColumnHeadersHeight = 55;
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->DefaultCellStyle = dataGridViewCellStyle10;
			this->DataGridView1->GridColor = System::Drawing::Color::DimGray;
			this->DataGridView1->Location = System::Drawing::Point(5, 114);
			this->DataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DataGridView1->RowHeadersVisible = false;
			this->DataGridView1->RowHeadersWidth = 20;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle11;
			this->DataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DividerHeight = 1;
			this->DataGridView1->RowTemplate->Height = 30;
			this->DataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridView1->Size = System::Drawing::Size(574, 433);
			this->DataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column1->FillWeight = 62.34105F;
			this->Column1->HeaderText = L"Course Code";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column2->FillWeight = 215.3528F;
			this->Column2->HeaderText = L"Course Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle8;
			this->Column3->FillWeight = 61.39239F;
			this->Column3->HeaderText = L"Credits";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle9;
			this->Column4->FillWeight = 60.9137F;
			this->Column4->HeaderText = L"Grade";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(11, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"SPI - 0.00";
			this->label6->Visible = false;
			// 
			// StudentHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Panel2);
			this->Controls->Add(this->DataGridView2);
			this->Controls->Add(this->Button2);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->Panel1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentHome";
			this->Text = L"StudentHome";
			this->Load += gcnew System::EventHandler(this, &StudentHome::StudentHome_Load);
			this->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView2))->EndInit();
			this->Panel2->ResumeLayout(false);
			this->Panel2->PerformLayout();
			this->GradeReleasedPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
	// Map grades to points
	double MapGradeToPoints(String^ grade)
	{
				 if (grade == "AA" || grade == "AS")
					 return 10;
				 else if (grade == "AB")
					 return 9;
				 else if (grade == "BB")
					 return 8;
				 else if (grade == "BC")
					 return 7;
				 else if (grade == "CC")
					 return 6;
				 else if (grade == "CD")
					 return 5;
				 else if (grade == "DD")
					 return 4;
				 else if (grade == "F")
					 return 0;
				 return -1;
	}

	private: 
		// Calculate the Semester Point Index - returns -1 if some grades are '--'
		double CalcSPI(DataGridView^ dataGridView)
		{
			double totalCredits = 0;
			double totalWeightedPoints = 0;

			// Loop through each row in the DataGridView
			for (int i = 0; i < dataGridView->Rows->Count; i++)
			{
				// Extract values from DataGridView
				String^ ltpc = dataGridView->Rows[i]->Cells[2]->Value->ToString();
				String^ grade = dataGridView->Rows[i]->Cells[3]->Value->ToString();

				// Parse subjectCredits from the last element of LTPC
				int subjectCredits = Convert::ToInt32(ltpc->Split(' ')[ltpc->Split(' ')->Length - 1]);

				// Update totalCredits
				totalCredits += subjectCredits;

				// Map grade to points
				double gradePoints = MapGradeToPoints(grade);

				if (gradePoints == -1) // If some grades are not released, then grades are witheld
				{
					return -1;
				}

				// Update totalWeightedPoints based on the grade
				totalWeightedPoints += gradePoints * subjectCredits;
			}

			// Calculate SPI
			double spi = (totalWeightedPoints / totalCredits);

			return spi;
		}
	private: System::Void StudentHome_Load(System::Object^  sender, System::EventArgs^  e) {

				 // View DP
				 Constants::FetchAndDisplayImage(RollNumber, this->pictureBox1);
				 // Make this visible only when grades are released from acad section
				 Label5->Text = UserName;
				 GradeReleasedPanel->Visible = false;
				 this->label6->Visible = false;
				 
				 //Disable the FeePayment button and Course Registration button
				 Button3->Enabled = false;
				 Button2->Enabled = false;

				 bool isViewGrades = getisGradesViewing();
				 if (isViewGrades) 
				 {
					 // If grades can be viewed, show the Grade Released Panel Notification
					 this->DataGridView1->Location = System::Drawing::Point(4, 210);
					 this->DataGridView1->Size = System::Drawing::Size(574, 341);
					 this->Label1->Location = System::Drawing::Point(102, 94);
					 this->Button3->Location = System::Drawing::Point(193, 149);
					 this->label6->Location = System::Drawing::Point(17, 157);
					 this->GradeReleasedPanel->Location = System::Drawing::Point(105, 8);
					 GradeReleasedPanel->Visible = true;
					 this->label6->Visible = true;

				 }

				 try
				 {
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();
					 String^ query = "SELECT Courses.[course_ID], Courses.[course_name], Courses.[LTPC], " +
						 "(CASE WHEN (SELECT view_grades FROM Admin) = 0 THEN '--' ELSE [Courses Taken].[grades] END) AS grades " +
						 "FROM Courses " +
						 "INNER JOIN [Courses Taken] ON Courses.course_ID = [Courses Taken].course_ID " +
						 "WHERE [Courses Taken].roll_no = " + RollNumber;
					 // Create a SqlCommand
					 SqlCommand cmd(query, con);

					 // Create a DataTable
					 DataTable^ dataTable = gcnew DataTable();

					 // Create a SqlDataAdapter and fill the DataTable
					 SqlDataAdapter^ adapter = gcnew SqlDataAdapter(%cmd);
					 adapter->Fill(dataTable);

					 // Specify the Column Mappings from DataGridView to SQL Table
					 DataGridView1->AutoGenerateColumns = false;
					 DataGridView1->Columns[0]->DataPropertyName = "course_ID";
					 DataGridView1->Columns[1]->DataPropertyName = "course_name";
					 DataGridView1->Columns[2]->DataPropertyName = "LTPC";
					 DataGridView1->Columns[3]->DataPropertyName = "grades";

					 // use the 'dataTable' as data source
					 DataGridView1->DataSource = dataTable;

					 if (isViewGrades) // Calculate SPI also
					 {
						 // Call CalcSPI function
						 double semesterSPI = CalcSPI(DataGridView1);

						 // Update Label 6 based on the result
						 if (semesterSPI == -1)
						 {
							 // Some grades are '--', indicating result withheld
							 label6->Text = "SPI: NA";
							 label6->ForeColor = System::Drawing::Color::Red;
						 }
						 else
						 {
							 // Update Label 6 with rounded SPI value
							 label6->Text = "SPI: " + Math::Round(semesterSPI, 2);
						 }
					 }
					 con->Close();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }

				 try
				 {
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();
					 String^ query = "select year, fees, fees_paid from [Student Database] where roll_no = " + RollNumber;
					 // Create a SqlCommand
					 SqlCommand cmd(query, con);

					 // Create a DataTable
					 DataTable^ dataTable = gcnew DataTable();

					 // Create a SqlDataAdapter and fill the DataTable
					 SqlDataAdapter^ adapter = gcnew SqlDataAdapter(%cmd);
					 adapter->Fill(dataTable);

					 // IMPORTANT: Specify the Column Mappings from DataGridView to SQL Table
					 DataGridView2->AutoGenerateColumns = false;
					 DataGridView2->Columns[0]->DataPropertyName = "year";
					 DataGridView2->Columns[1]->DataPropertyName = "fees";
					 DataGridView2->Columns[2]->DataPropertyName = "payment_status";

					 dataTable->Columns->Add("payment_status", String::typeid);

					 // Iterate over the rows to calculate semester and update fees_paid status
					for each (DataRow ^row in dataTable->Rows)
					{
						int year = Convert::ToInt32(row["year"]);
						// Calculate the semester based on the year
						int semester = (2024 - year) * 2;
						row["year"] = semester;

						// Update fees_paid to "Paid" or "Not Paid"
						bool fees_paid = Convert::ToBoolean(row["fees_paid"]);
						row["payment_status"] = fees_paid ? "Paid" : "Not Paid";
					}

					 dataTable->Columns->Remove("fees_paid");

					 // use the 'dataTable' as data source
					 DataGridView2->DataSource = dataTable;
					 con->Close();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }

				  //Check if Admin has started Course Registration and change the button
				 if (getisCourseReg())
				 {
					 Button3->Text = "Course Registration Opened";
					 Button3->BackColor = System::Drawing::Color::LightGreen;
					 Button3->Enabled = true;
				 }

				 //Check if Admin has started Fee payment and change the button
				 if (getisFeePayment())
				 {
					 Button2->Text = "Fee Payment Started";
					 Button2->BackColor = System::Drawing::Color::LightGreen;
					 Button2->Enabled = true;
				 }
			
	}

	// To get if Fee payment is started by admin
	private: bool getisFeePayment()
	{
				 bool isFeePayment = false;
				 String^ queryString = "SELECT start_fee_payment FROM Admin";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 SqlCommand^ command = gcnew SqlCommand(queryString, con);

				 try
				 {
					 con->Open();

					 SqlDataReader^ reader = command->ExecuteReader();
					 if (reader->Read())
					 {
						 isFeePayment = reader->GetBoolean(0);
						 return isFeePayment;
					 }
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
				 return isFeePayment;
	}

	// To get if Course Registration is started by admin
	private: bool getisCourseReg()
	{
				bool isCourseReg = false;
				String^ queryString = "SELECT is_course_registration FROM Admin";
				String^ connString = Constants::getdbConnString();
				SqlConnection^ con = gcnew SqlConnection(connString);
				SqlCommand^ command = gcnew SqlCommand(queryString, con);

				try
				{
					con->Open();

					SqlDataReader^ reader = command->ExecuteReader();
					if (reader->Read())
					{
						isCourseReg = reader->GetBoolean(0);
						return isCourseReg;
					}
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
				finally
				{
					con->Close();
				}
				return isCourseReg;
	}

			 // To get if Grades viewing started by admin
	private: bool getisGradesViewing()
	{
				 bool isCourseReg = false;
				 String^ queryString = "SELECT view_grades FROM Admin";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 SqlCommand^ command = gcnew SqlCommand(queryString, con);

				 try
				 {
					 con->Open();

					 SqlDataReader^ reader = command->ExecuteReader();
					 if (reader->Read())
					 {
						 isCourseReg = reader->GetBoolean(0);
						 return isCourseReg;
					 }
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
				 return isCourseReg;
	}

			 // To get if Fee already paid by student
	private: bool getisFeesPaid()
	{
				 bool isFeesPaid = false;
				 String^ queryString = "SELECT fees_paid FROM [Student Database] where roll_no = "+RollNumber;
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 SqlCommand^ command = gcnew SqlCommand(queryString, con);

				 try
				 {
					 con->Open();

					 SqlDataReader^ reader = command->ExecuteReader();
					 if (reader->Read())
					 {
						 isFeesPaid = reader->GetBoolean(0);
						 return isFeesPaid;
					 }
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
				 return isFeesPaid;
	}


private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (getisFeesPaid())
			 {
				 if (Semester == "8")
				 {
					 FourthYearCourseReg^ InnerForm = gcnew FourthYearCourseReg(Convert::ToInt32(RollNumber));
					 Constants::subViewChildForm(OuterPanel, InnerForm);
				 }
				 else
				 {
					 StudentCourseReg^ InnerForm = gcnew StudentCourseReg(Convert::ToInt32(RollNumber), Semester);
					 Constants::subViewChildForm(OuterPanel, InnerForm);
				 }
			 }
			 else
			 {
				 MessageBox::Show("Fees not paid yet");
			 }
}
private: System::Void Button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (!getisFeesPaid())
			 {
				 MessageBox::Show("Fees Paid Successfully", "Fee Payment", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 try
				 {
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();
					 String^ query = "Update [Student Database] set fees_paid = " + 1 + " where roll_no =" + RollNumber;
					 // Create a SqlCommand
					 SqlCommand cmd(query, con);
					 int rowsAffected = cmd.ExecuteNonQuery();
					 String^ query2 = "SELECT fees FROM dbo.[Student Database] WHERE roll_no= " + RollNumber;
					 SqlCommand^ command2 = gcnew SqlCommand(query2, con);
					 int result = safe_cast<int>(command2->ExecuteScalar());
					 String^ query1 = "Update [Financial Records] set fees_paid = fees_paid + " + result + " where year =" + 2023;
					 // Create a SqlCommand
					 SqlCommand cmd1(query1, con);
					 rowsAffected = cmd1.ExecuteNonQuery();
					 con->Close();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
}
};
}
