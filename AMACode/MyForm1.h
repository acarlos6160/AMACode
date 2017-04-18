#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
//#include <windows.h>	// Needed for MessageBoxes. add a MessageBox wherever there is a 'popup'

namespace AMACode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Project object ###
	struct Project {
		std::string department; // Science, Math, Literature, Humanities
		std::string prompt;     // If you want a prompt, leave this here
		std::string name;
		int difficulty;
		int prideReward;
		int prideCost;
		int cost;
	};
	

	// Department object ###
	struct Department {
		std::string name;	// Humanities, Literature, Math, Science
		int level = 1;
		int cost;
		int numProfs = 2;
		int numPostDoc = 4;
		int numGradStu = 12;
	};

	// ###
	std::vector<Project> projects;
	std::vector<Department> departments;
	Department humanities;
	Department literature;
	Department math;
	Department science;
	//Ends here

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: // ### Fields
		bool projectReady;
		int year, success, tragedy, eProf, ePostDoc, eGrad;	// e = enrollment rate
		int funds, pride, projProfNum, projPDNum, projGSNum, listBoxCur; // Ends here

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  enrollRateLbl;

	private: System::Windows::Forms::TextBox^  gradStuERate;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button6;


	private: System::Windows::Forms::Label^  humLvl;
	private: System::Windows::Forms::Label^  sciLvl;
	private: System::Windows::Forms::Label^  mathLvl;
	private: System::Windows::Forms::Label^  litLvl;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  fundsLbl;

	private: System::Windows::Forms::Label^  humGSLbl;


	private: System::Windows::Forms::Label^  humProfLbl;
	private: System::Windows::Forms::Label^  humPDLbl;


	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  litPDLbl;

	private: System::Windows::Forms::Label^  litProfLbl;
	private: System::Windows::Forms::Label^  litGSLbl;


	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  mathPDLbl;

	private: System::Windows::Forms::Label^  mathProfLbl;
	private: System::Windows::Forms::Label^  mathGSLbl;


	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  sciPDLbl;

	private: System::Windows::Forms::Label^  sciProfLbl;
	private: System::Windows::Forms::Label^  sciGSLbl;


	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::ListBox^  Projects;

	private: System::Windows::Forms::Label^  prideLbl;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  tragedyLbl;
	private: System::Diagnostics::EventLog^  eventLog1;
	private: System::Windows::Forms::Label^  successRate;

	private: System::Windows::Forms::Label^  label17;


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  projProf;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  projGS;

	private: System::Windows::Forms::Label^  projPD;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  yearLbl;
	public:


	public:

	public:
		// ###
		MyForm1(void)
		{
			departments.push_back(humanities);
			departments.push_back(literature);
			departments.push_back(math);
			departments.push_back(science);
			humanities.name = "Humanities";
			literature.name = "Literature";
			math.name = "Math";
			science.name = "Science";
			funds = 1000000;
			tragedy = 10;
			year = 1;
			pride = 50;
			eProf = 50;
			ePostDoc = 50;
			eGrad = 50;
			projProfNum = 0;
			projPDNum = 0;
			projGSNum = 0;
			success = 0;
			projectReady = false;
			InitializeComponent();
			// Ends here
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  endTurnBtn;
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
			this->endTurnBtn = (gcnew System::Windows::Forms::Button());
			this->yearLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->enrollRateLbl = (gcnew System::Windows::Forms::Label());
			this->gradStuERate = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->humLvl = (gcnew System::Windows::Forms::Label());
			this->sciLvl = (gcnew System::Windows::Forms::Label());
			this->mathLvl = (gcnew System::Windows::Forms::Label());
			this->litLvl = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->fundsLbl = (gcnew System::Windows::Forms::Label());
			this->humGSLbl = (gcnew System::Windows::Forms::Label());
			this->humProfLbl = (gcnew System::Windows::Forms::Label());
			this->humPDLbl = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->litPDLbl = (gcnew System::Windows::Forms::Label());
			this->litProfLbl = (gcnew System::Windows::Forms::Label());
			this->litGSLbl = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->mathPDLbl = (gcnew System::Windows::Forms::Label());
			this->mathProfLbl = (gcnew System::Windows::Forms::Label());
			this->mathGSLbl = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->sciPDLbl = (gcnew System::Windows::Forms::Label());
			this->sciProfLbl = (gcnew System::Windows::Forms::Label());
			this->sciGSLbl = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->Projects = (gcnew System::Windows::Forms::ListBox());
			this->prideLbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tragedyLbl = (gcnew System::Windows::Forms::Label());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->projProf = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->successRate = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->projPD = (gcnew System::Windows::Forms::Label());
			this->projGS = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// endTurnBtn
			// 
			this->endTurnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->endTurnBtn->Location = System::Drawing::Point(58, 430);
			this->endTurnBtn->Margin = System::Windows::Forms::Padding(4);
			this->endTurnBtn->Name = L"endTurnBtn";
			this->endTurnBtn->Size = System::Drawing::Size(200, 58);
			this->endTurnBtn->TabIndex = 0;
			this->endTurnBtn->Text = L"End Turn";
			this->endTurnBtn->UseVisualStyleBackColor = true;
			this->endTurnBtn->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// yearLbl
			// 
			this->yearLbl->AutoSize = true;
			this->yearLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearLbl->Location = System::Drawing::Point(17, 11);
			this->yearLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->yearLbl->Name = L"yearLbl";
			this->yearLbl->Size = System::Drawing::Size(116, 37);
			this->yearLbl->TabIndex = 1;
			this->yearLbl->Text = L"Year 1";
			this->yearLbl->Click += gcnew System::EventHandler(this, &MyForm1::semesterLbl_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(570, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(557, 53);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Alma Mater Armageddon";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1237, 373);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 42);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Complete Project";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// enrollRateLbl
			// 
			this->enrollRateLbl->AutoSize = true;
			this->enrollRateLbl->Location = System::Drawing::Point(13, 136);
			this->enrollRateLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->enrollRateLbl->Name = L"enrollRateLbl";
			this->enrollRateLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->enrollRateLbl->Size = System::Drawing::Size(223, 31);
			this->enrollRateLbl->TabIndex = 4;
			this->enrollRateLbl->Text = L"Enrollment Rate";
			// 
			// gradStuERate
			// 
			this->gradStuERate->Location = System::Drawing::Point(243, 132);
			this->gradStuERate->Name = L"gradStuERate";
			this->gradStuERate->Size = System::Drawing::Size(57, 38);
			this->gradStuERate->TabIndex = 9;
			this->gradStuERate->Text = L"50";
			this->gradStuERate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(94, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 46);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(797, 326);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 31);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Science";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(380, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 31);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Math";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm1::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(797, 132);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 31);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Literature";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm1::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(380, 132);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 31);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Humanities";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm1::label11_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(687, 128);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 39);
			this->button5->TabIndex = 21;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1083, 322);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 39);
			this->button3->TabIndex = 22;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(687, 322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 39);
			this->button4->TabIndex = 23;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1083, 128);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 39);
			this->button6->TabIndex = 24;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// humLvl
			// 
			this->humLvl->AutoSize = true;
			this->humLvl->Location = System::Drawing::Point(603, 132);
			this->humLvl->Name = L"humLvl";
			this->humLvl->Size = System::Drawing::Size(30, 31);
			this->humLvl->TabIndex = 27;
			this->humLvl->Text = L"1";
			// 
			// sciLvl
			// 
			this->sciLvl->AutoSize = true;
			this->sciLvl->Location = System::Drawing::Point(999, 326);
			this->sciLvl->Name = L"sciLvl";
			this->sciLvl->Size = System::Drawing::Size(30, 31);
			this->sciLvl->TabIndex = 28;
			this->sciLvl->Text = L"1";
			// 
			// mathLvl
			// 
			this->mathLvl->AutoSize = true;
			this->mathLvl->Location = System::Drawing::Point(603, 326);
			this->mathLvl->Name = L"mathLvl";
			this->mathLvl->Size = System::Drawing::Size(30, 31);
			this->mathLvl->TabIndex = 29;
			this->mathLvl->Text = L"1";
			// 
			// litLvl
			// 
			this->litLvl->AutoSize = true;
			this->litLvl->Location = System::Drawing::Point(999, 132);
			this->litLvl->Name = L"litLvl";
			this->litLvl->Size = System::Drawing::Size(30, 31);
			this->litLvl->TabIndex = 30;
			this->litLvl->Text = L"1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(402, 270);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(211, 26);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Graduate Students";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(402, 232);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(121, 26);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Post Docs";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(402, 194);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 26);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Professors";
			// 
			// fundsLbl
			// 
			this->fundsLbl->AutoSize = true;
			this->fundsLbl->Location = System::Drawing::Point(307, 64);
			this->fundsLbl->Name = L"fundsLbl";
			this->fundsLbl->Size = System::Drawing::Size(142, 31);
			this->fundsLbl->TabIndex = 34;
			this->fundsLbl->Text = L"$1000000";
			this->fundsLbl->Click += gcnew System::EventHandler(this, &MyForm1::fundsLbl_Click);
			// 
			// humGSLbl
			// 
			this->humGSLbl->AutoSize = true;
			this->humGSLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->humGSLbl->Location = System::Drawing::Point(697, 270);
			this->humGSLbl->Name = L"humGSLbl";
			this->humGSLbl->Size = System::Drawing::Size(38, 26);
			this->humGSLbl->TabIndex = 36;
			this->humGSLbl->Text = L"12";
			// 
			// humProfLbl
			// 
			this->humProfLbl->AutoSize = true;
			this->humProfLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->humProfLbl->Location = System::Drawing::Point(703, 194);
			this->humProfLbl->Name = L"humProfLbl";
			this->humProfLbl->Size = System::Drawing::Size(25, 26);
			this->humProfLbl->TabIndex = 37;
			this->humProfLbl->Text = L"2";
			// 
			// humPDLbl
			// 
			this->humPDLbl->AutoSize = true;
			this->humPDLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->humPDLbl->Location = System::Drawing::Point(703, 232);
			this->humPDLbl->Name = L"humPDLbl";
			this->humPDLbl->Size = System::Drawing::Size(25, 26);
			this->humPDLbl->TabIndex = 38;
			this->humPDLbl->Text = L"4";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(206, 64);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 31);
			this->label22->TabIndex = 39;
			this->label22->Text = L"Funds";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm1::label22_Click);
			// 
			// litPDLbl
			// 
			this->litPDLbl->AutoSize = true;
			this->litPDLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->litPDLbl->Location = System::Drawing::Point(1116, 232);
			this->litPDLbl->Name = L"litPDLbl";
			this->litPDLbl->Size = System::Drawing::Size(25, 26);
			this->litPDLbl->TabIndex = 45;
			this->litPDLbl->Text = L"4";
			// 
			// litProfLbl
			// 
			this->litProfLbl->AutoSize = true;
			this->litProfLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->litProfLbl->Location = System::Drawing::Point(1116, 194);
			this->litProfLbl->Name = L"litProfLbl";
			this->litProfLbl->Size = System::Drawing::Size(25, 26);
			this->litProfLbl->TabIndex = 44;
			this->litProfLbl->Text = L"2";
			// 
			// litGSLbl
			// 
			this->litGSLbl->AutoSize = true;
			this->litGSLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->litGSLbl->Location = System::Drawing::Point(1110, 270);
			this->litGSLbl->Name = L"litGSLbl";
			this->litGSLbl->Size = System::Drawing::Size(38, 26);
			this->litGSLbl->TabIndex = 43;
			this->litGSLbl->Text = L"12";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(815, 194);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(126, 26);
			this->label24->TabIndex = 42;
			this->label24->Text = L"Professors";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(815, 232);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(121, 26);
			this->label25->TabIndex = 41;
			this->label25->Text = L"Post Docs";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(815, 270);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(211, 26);
			this->label26->TabIndex = 40;
			this->label26->Text = L"Graduate Students";
			// 
			// mathPDLbl
			// 
			this->mathPDLbl->AutoSize = true;
			this->mathPDLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mathPDLbl->Location = System::Drawing::Point(703, 420);
			this->mathPDLbl->Name = L"mathPDLbl";
			this->mathPDLbl->Size = System::Drawing::Size(25, 26);
			this->mathPDLbl->TabIndex = 51;
			this->mathPDLbl->Text = L"4";
			// 
			// mathProfLbl
			// 
			this->mathProfLbl->AutoSize = true;
			this->mathProfLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mathProfLbl->Location = System::Drawing::Point(703, 382);
			this->mathProfLbl->Name = L"mathProfLbl";
			this->mathProfLbl->Size = System::Drawing::Size(25, 26);
			this->mathProfLbl->TabIndex = 50;
			this->mathProfLbl->Text = L"2";
			// 
			// mathGSLbl
			// 
			this->mathGSLbl->AutoSize = true;
			this->mathGSLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mathGSLbl->Location = System::Drawing::Point(697, 458);
			this->mathGSLbl->Name = L"mathGSLbl";
			this->mathGSLbl->Size = System::Drawing::Size(38, 26);
			this->mathGSLbl->TabIndex = 49;
			this->mathGSLbl->Text = L"12";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(402, 382);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(126, 26);
			this->label30->TabIndex = 48;
			this->label30->Text = L"Professors";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(402, 420);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(121, 26);
			this->label31->TabIndex = 47;
			this->label31->Text = L"Post Docs";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(402, 458);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(211, 26);
			this->label32->TabIndex = 46;
			this->label32->Text = L"Graduate Students";
			// 
			// sciPDLbl
			// 
			this->sciPDLbl->AutoSize = true;
			this->sciPDLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sciPDLbl->Location = System::Drawing::Point(1099, 420);
			this->sciPDLbl->Name = L"sciPDLbl";
			this->sciPDLbl->Size = System::Drawing::Size(25, 26);
			this->sciPDLbl->TabIndex = 57;
			this->sciPDLbl->Text = L"4";
			// 
			// sciProfLbl
			// 
			this->sciProfLbl->AutoSize = true;
			this->sciProfLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sciProfLbl->Location = System::Drawing::Point(1099, 382);
			this->sciProfLbl->Name = L"sciProfLbl";
			this->sciProfLbl->Size = System::Drawing::Size(25, 26);
			this->sciProfLbl->TabIndex = 56;
			this->sciProfLbl->Text = L"2";
			// 
			// sciGSLbl
			// 
			this->sciGSLbl->AutoSize = true;
			this->sciGSLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sciGSLbl->Location = System::Drawing::Point(1093, 458);
			this->sciGSLbl->Name = L"sciGSLbl";
			this->sciGSLbl->Size = System::Drawing::Size(38, 26);
			this->sciGSLbl->TabIndex = 55;
			this->sciGSLbl->Text = L"12";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(798, 382);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(126, 26);
			this->label35->TabIndex = 54;
			this->label35->Text = L"Professors";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(798, 420);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(121, 26);
			this->label36->TabIndex = 53;
			this->label36->Text = L"Post Docs";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(798, 458);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(211, 26);
			this->label37->TabIndex = 52;
			this->label37->Text = L"Graduate Students";
			// 
			// Projects
			// 
			this->Projects->FormattingEnabled = true;
			this->Projects->ItemHeight = 31;
			this->Projects->Location = System::Drawing::Point(1237, 128);
			this->Projects->Name = L"Projects";
			this->Projects->Size = System::Drawing::Size(274, 35);
			this->Projects->TabIndex = 58;
			this->Projects->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::Projects_SelectedIndexChanged);
			// 
			// prideLbl
			// 
			this->prideLbl->AutoSize = true;
			this->prideLbl->Location = System::Drawing::Point(223, 296);
			this->prideLbl->Name = L"prideLbl";
			this->prideLbl->Size = System::Drawing::Size(46, 31);
			this->prideLbl->TabIndex = 59;
			this->prideLbl->Text = L"50";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 31);
			this->label3->TabIndex = 60;
			this->label3->Text = L"School Pride";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 336);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 31);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Tragedy";
			// 
			// tragedyLbl
			// 
			this->tragedyLbl->AutoSize = true;
			this->tragedyLbl->Location = System::Drawing::Point(223, 336);
			this->tragedyLbl->Name = L"tragedyLbl";
			this->tragedyLbl->Size = System::Drawing::Size(71, 31);
			this->tragedyLbl->TabIndex = 62;
			this->tragedyLbl->Text = L"10%";
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// projProf
			// 
			this->projProf->AutoSize = true;
			this->projProf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->projProf->Location = System::Drawing::Point(1457, 199);
			this->projProf->Name = L"projProf";
			this->projProf->Size = System::Drawing::Size(25, 26);
			this->projProf->TabIndex = 68;
			this->projProf->Text = L"0";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1504, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 36);
			this->button7->TabIndex = 69;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1231, 322);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(125, 31);
			this->label17->TabIndex = 72;
			this->label17->Text = L"Success";
			// 
			// successRate
			// 
			this->successRate->AutoSize = true;
			this->successRate->Location = System::Drawing::Point(1452, 326);
			this->successRate->Name = L"successRate";
			this->successRate->Size = System::Drawing::Size(30, 31);
			this->successRate->TabIndex = 73;
			this->successRate->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1232, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 26);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Post Docs";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1232, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 26);
			this->label6->TabIndex = 74;
			this->label6->Text = L"Graduate Students";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1232, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 26);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Professors";
			// 
			// projPD
			// 
			this->projPD->AutoSize = true;
			this->projPD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->projPD->Location = System::Drawing::Point(1457, 237);
			this->projPD->Name = L"projPD";
			this->projPD->Size = System::Drawing::Size(25, 26);
			this->projPD->TabIndex = 77;
			this->projPD->Text = L"0";
			// 
			// projGS
			// 
			this->projGS->AutoSize = true;
			this->projGS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->projGS->Location = System::Drawing::Point(1457, 275);
			this->projGS->Name = L"projGS";
			this->projGS->Size = System::Drawing::Size(25, 26);
			this->projGS->TabIndex = 78;
			this->projGS->Text = L"0";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1504, 271);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 36);
			this->button8->TabIndex = 79;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1504, 194);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 36);
			this->button9->TabIndex = 80;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1631, 593);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->projGS);
			this->Controls->Add(this->projPD);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->successRate);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->projProf);
			this->Controls->Add(this->tragedyLbl);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->prideLbl);
			this->Controls->Add(this->Projects);
			this->Controls->Add(this->sciPDLbl);
			this->Controls->Add(this->sciProfLbl);
			this->Controls->Add(this->sciGSLbl);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->mathPDLbl);
			this->Controls->Add(this->mathProfLbl);
			this->Controls->Add(this->mathGSLbl);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->litPDLbl);
			this->Controls->Add(this->litProfLbl);
			this->Controls->Add(this->litGSLbl);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->humPDLbl);
			this->Controls->Add(this->humProfLbl);
			this->Controls->Add(this->humGSLbl);
			this->Controls->Add(this->fundsLbl);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->litLvl);
			this->Controls->Add(this->mathLvl);
			this->Controls->Add(this->sciLvl);
			this->Controls->Add(this->humLvl);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->gradStuERate);
			this->Controls->Add(this->enrollRateLbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->yearLbl);
			this->Controls->Add(this->endTurnBtn);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// ###
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		getFileInfo();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//getFileInfo();
		getFaculty();

		if (pride == 0) { // ***
			tragedy = 50; // ***
			updateTragedy();
		} else {
			tragedy = 10; // ***
			updateTragedy();
		}
		int tragedyValue = generateNum(tragedy, 1);
		if (tragedyValue == 0) {
			//MessageBoxA(0, "A tragedy occurred! The university has lost $100,000 in funds!", "Tragedy", MB_OK);
			funds -= 100000; // ***
			updateFunds();
		}

		++year;
		yearLbl->Text = L"Year " + year;
		upkeep();
		updateFunds();

		if (funds < 0) {
			// Popup School went bankrupt. Game over
		}
	}

	void upkeep() { // *** price to maintain the departments. Change the numbers if you want
		for (int i = 0; i < 4; ++i) {
			funds -= ((departments[i].numProfs * 9000) + (departments[i].numPostDoc * 6000) + (departments[i].numGradStu * 3000));
		}
	}
	// Load projects from text file
	void getFileInfo() {
		// Read the projects file at the beginning of each turn.
		bool change = false;
		std::fstream file;
		file.open("C:\\Users\\frpere\\Documents\\Visual Studio 2017\\Projects\\AMACode\\Projects.txt"); // *** Replace this with the absolute directory of your Projects.txt file

		std::string category, name; // Add 'prompt' variale here
		int difficulty;

		while (!file.eof()) {
			file >> name >> category >> difficulty; // include prompt in this list: ex. name >> prompt >> category >> difficulty, organize variables according to text file format
			file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			Project newProj;
			newProj.name = name;
			// newProj.prompt = prompt; // Take out this comment '//' so that the project object takes in the prompt from the text file
			newProj.department = category;
			newProj.difficulty = difficulty;

			/* PROMPT here's the tricky part. My code reads a text file line by line. Every time there is a space, it assumes that
			 there is a new column: ex. Name1 Prompt1 Humanities 75
			 That example is perfect. But: ex. This is the Project Name This is the Project Prompt Humanities 75
			 That example will fail because my code thinks there are 12 columns in that line. Figure out how to code it properly and the
			 prompt, plus a project name with multiple words, will work */

			projects.push_back(newProj);
			change = true;
		}

		populateList();

		// Set the cost and pride reward for each project
		for (int i = 0; i < projects.size(); ++i) {
			if (difficulty == 75) {
				projects[i].cost = 25000;			// ***
				projects[i].prideReward = 10;		// ***
				projects[i].prideCost = 2;			// ***
			} else if (difficulty == 50) {
				projects[i].cost = 50000;			// ***
				projects[i].prideReward = 20;		// ***
				projects[i].prideCost = 4;			// ***
			} else if (difficulty == 25) {
				projects[i].cost = 100000;			// ***
				projects[i].prideReward = 30;		// ***
				projects[i].prideCost = 8;			// ***
			} else {}
		}

		/*if (change == true) {
			cleanFile();
		}*/
	}

	// Add faculty members at the end of each turn
	void getFaculty() {
		int cap, newFaculty;	// Professor formula here
		for (int i = 0; i < departments.size(); ++i) {
			newFaculty = (10 - (eGrad / 10)) + (pride / 5); // ***
			newFaculty = generateNum(newFaculty, 2);
			cap = 2 * departments[i].level;
			if (cap >= newFaculty) {
				departments[i].numProfs += newFaculty;
			} else if (cap < newFaculty) {
				departments[i].numProfs += cap;
			} else {}

			newFaculty = ((ePostDoc / 43) * 3); // Post Doctorate formula here ***
			newFaculty = generateNum(newFaculty, 3);
			cap = (departments[i].numProfs * 2) - departments[i].numPostDoc; // Professors hold 2 post doctorates
			if (cap >= newFaculty) {
				departments[i].numPostDoc += newFaculty; // Enough cap space (per professor) for the post docs.
			} else if (cap < newFaculty) {
				departments[i].numPostDoc += cap; // Not enough professors (cap space) for the post docs. Add any post doc we can fit.
			} else {}

			newFaculty = eGrad; // Graduate Student formula here
			newFaculty = generateNum(newFaculty, 4);
			cap = (departments[i].numProfs * 6) - departments[i].numGradStu; // Professors hold 10 grad students
			if (cap >= newFaculty) {
				departments[i].numGradStu += newFaculty; // Enough cap space (per professor) for the grad students.
			} else if (cap < newFaculty) {
				departments[i].numGradStu += cap; // Not enough professors (cap space) for the grad students. Add any grads we can fit.
			} else {}
		}
		updateFaculty();
	}

	void updateFaculty() {
		humProfLbl->Text = L"" + departments[0].numProfs;
		humPDLbl->Text = L"" + departments[0].numPostDoc;
		humGSLbl->Text = L"" + departments[0].numGradStu;

		litProfLbl->Text = L"" + departments[1].numProfs;
		litPDLbl->Text = L"" + departments[1].numPostDoc;
		litGSLbl->Text = L"" + departments[1].numGradStu;

		mathProfLbl->Text = L"" + departments[2].numProfs;
		mathPDLbl->Text = L"" + departments[2].numPostDoc;
		mathGSLbl->Text = L"" + departments[2].numGradStu;

		sciProfLbl->Text = L"" + departments[3].numProfs;
		sciPDLbl->Text = L"" + departments[3].numPostDoc;
		sciGSLbl->Text = L"" + departments[3].numGradStu;
	}

	void updateFunds() {
		fundsLbl->Text = L"$" + funds;
	}

	void updatePride() {
		prideLbl->Text = L"" + pride;
	}

	void updateTragedy() {
		tragedyLbl->Text = L"" + tragedy +"%";
	}

	void updateSuccess() {
		successRate->Text = L"" + success;
	}

	void resetProjLabels() {
		success = 0;
		projProfNum = 0;
		projPDNum = 0;
		projGSNum = 0;
		projProf->Text = L"" + projProfNum;
		projPD->Text = L"" + projPDNum;
		projGS->Text = L"" + projGSNum;
	}

	// Random number generator
	int generateNum(int percentage, int type) {
		int value, numFaculty = 0;
		if (type == 1) {	// Tragedy
			value = rand() % 100;
			if (value < tragedy) {	// Tragedy occurred
				return 0;
			} else {
				return -1;
			}
		} else if (type == 2) {
			value = rand() % 100;
			if (value < percentage) {
				++numFaculty;
				return numFaculty;	// Professor joined the school.
			} else {
				return 0;
			}
		} else if (type == 3) {
			for (int i = 0; i < 2; ++i) {
				value = rand() % 100;
				if (value < percentage) {
					++numFaculty;	// Post Doctorate student joined the school
				}
			}
			return numFaculty;
		} else if (type == 4) {
			for (int i = 0; i < 6; ++i) {
				value = rand() % 100;
				if (value < percentage) {
					++numFaculty;	// Graduate student joined the school
				}
			}
			return numFaculty;
		} else {
			return -1;	// Should never get here
		}
	}

	// Copy contents of the original text file to a new file and delete contents of the old file.
	/*void cleanFile() {

		// Transfer old file to new file
		std::ifstream oldFile("C:\\Users\\frpere\\Documents\\Visual Studio 2017\\Projects\\AMACode\\Projects.txt"); // ***
		std::ofstream newFile("C:\\Users\\frpere\\Documents\\Visual Studio 2017\\Projects\\AMACode\\Projects.txt"); // ***
		newFile << oldFile.rdbuf();

		// Delete contents of old file
		std::ofstream ofs;
		ofs.open("C:\\Users\\frpere\\Documents\\Visual Studio 2017\\Projects\\AMACode\\Projects.txt", std::ofstream::out | std::ofstream::trunc); // *** Replace this with the absolute directory of your Projects.txt file
		ofs.close();
	}*/ // Ends here

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
// ###
	void completeProject(Project project) {
		if (funds > project.cost) {
			funds -= project.cost;				// Pay the cost of starting the project
		} else {
			// Popup, not enough funds
			return;
		}
		int index = Projects->SelectedIndex;

		if (projects[index].department == "Humanities") {
			if (departments[0].numProfs - projProfNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough professors
				return;
			}
			if (departments[0].numPostDoc - projPDNum < 0) {
				resetProjLabels();
				updateSuccess();
				return;
			}
			if (departments[0].numGradStu - projGSNum < 0) {
				resetProjLabels();
				updateSuccess();
				return;
			}
			departments[0].numProfs -= projProfNum;
			departments[0].numPostDoc -= projPDNum;
			departments[0].numGradStu -= projGSNum;
		} else if (projects[index].department == "Literature") {
			if (departments[1].numProfs - projProfNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough professors
				return;
			}
			if (departments[1].numPostDoc - projPDNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough post docs
				return;
			}
			if (departments[1].numGradStu - projGSNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough graduate students
				return;
			}
			departments[1].numProfs -= projProfNum;
			departments[1].numPostDoc -= projPDNum;
			departments[1].numGradStu -= projGSNum;
		} else if (projects[index].department == "Math") {
			if (departments[2].numProfs - projProfNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough professors
				return;
			}
			if (departments[2].numPostDoc - projPDNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough post docs
				return;
			}
			if (departments[2].numGradStu - projGSNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough graduate students
				return;
			}
			departments[2].numProfs -= projProfNum;
			departments[2].numPostDoc -= projPDNum;
			departments[2].numGradStu -= projGSNum;
		} else {
			if (departments[3].numProfs - projProfNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough professors
				return;
			}
			if (departments[3].numPostDoc - projPDNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough post docs
				return;
			}
			if (departments[3].numGradStu - projGSNum < 0) {
				resetProjLabels();
				updateSuccess();
				// Popup You do not have enough grad students
				return;
			}
			departments[3].numProfs -= projProfNum;
			departments[3].numPostDoc -= projPDNum;
			departments[3].numGradStu -= projGSNum;
		}

		if (rand() % 100 < success) {	// Project succeeded
			funds += (project.cost * 4);
			pride += project.prideReward;
			if (pride > 100) {
				pride = 100;
			}
			// Popup: Tell the user the project was a Success
		}
		else {
			pride -= project.prideCost;
			// Project failed, no reward generated
			// Popup: Tell the user the project was a Failure
		}
		
		//projects.erase(projects.begin() + index);
		//Projects->Items->Remove(Projects->SelectedIndex);			// THIS DOES NOT WORK FOR SOME REASON. If you can get the listBox to delete a completed/failed project, please do so and then uncomment the line of code above.
		resetProjLabels();
		updateSuccess();
		updateFaculty();
		updateFunds();
		updatePride();
	}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	listBoxCur = this->Projects->SelectedIndex;
	if (listBoxCur < 0) {
		// Popup Please select a project from the list
		return;
	}
	completeProject(projects[listBoxCur]);
}//Ends here
private: System::Void semesterLbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {	
}
// Set the new enrollment rates ###
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	eGrad = int::Parse(gradStuERate->Text);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (funds > humanities.cost) {
		funds -= humanities.cost;
		humanities.cost *= 2; // *** Doubles the cost of each department level upgrade
		++humanities.level;
		humanities.numProfs += 2; // *** Add 2 professors when the department has been increased
		humLvl->Text = L"" + humanities.level;
		humProfLbl->Text = L"" + humanities.numProfs;
	} else {
		//MessageBoxA(0, "You require " + humanities.cost + " funds to upgrade this facility.", "Sorry!", MB_OK);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (funds > literature.cost) {
		funds -= literature.cost;
		literature.cost *= 2; // ***
		++literature.level;
		literature.numProfs += 2; // ***
		litLvl->Text = L"" + literature.level;
		litProfLbl->Text = L"" + literature.numProfs;
	} else {
		//Popup You do not have enough money
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (funds > math.cost) {
		funds -= math.cost;
		math.cost *= 2; // ***
		++math.level;
		math.numProfs += 2; // ***
		mathLvl->Text = L"" + math.level;
		mathProfLbl->Text = L"" + math.numProfs;
	} else {
		//Popup;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (funds > science.cost) {
		funds -= science.cost;
		science.cost *= 2; // ***
		++science.level;
		science.numProfs += 2; // ***
		sciLvl->Text = L"" + science.level;
		sciProfLbl->Text = L"" + science.numProfs;
	} else {
		//Popup;
	} // Ends here
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Projects_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	resetProjLabels();
}

// ###
void populateList() {
	for (int i = 0; i < projects.size(); ++i) {
		std::string str = projects[i].name;
		this->Projects->Items->Add(gcnew String(str.c_str()));
	}
}

void calcSuccess(int faculty) {
	
	if (faculty == 0) {
		++projProfNum;
		success += 100;
	} else if (faculty == 1) {
		++projPDNum;
		success += 50;
	} else if (faculty == 2) {
		++projGSNum;
		success += 25;
	} else {}
	
	if (success > 95) {
		success = 95;
	}

	updateSuccess();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	calcSuccess(0); // Professor was added to project
	projProf->Text = L"" + projProfNum;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	calcSuccess(1); // Post Doctorate was added to project
	projPD->Text = L"" + projPDNum;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	calcSuccess(2); // Graduate Student was added to project
	projGS->Text = L"" + projGSNum;
} // End Here
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void fundsLbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}