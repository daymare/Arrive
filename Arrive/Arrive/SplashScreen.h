#pragma once

#include "MainView.h"
#include "TestDialog.h"

namespace ArriveClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class SplashScreen : public System::Windows::Forms::Form
	{
	public:
		SplashScreen(void)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SplashScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  userNameTextBox;
	protected:

	private: System::Windows::Forms::TextBox^  passwordTextBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  testButton;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ARRIVE";
			// 
			// userNameTextBox
			// 
			this->userNameTextBox->Location = System::Drawing::Point(143, 119);
			this->userNameTextBox->Name = L"userNameTextBox";
			this->userNameTextBox->Size = System::Drawing::Size(190, 20);
			this->userNameTextBox->TabIndex = 1;
			this->userNameTextBox->TextChanged += gcnew System::EventHandler(this, &SplashScreen::textBox1_TextChanged);
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(143, 194);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(190, 20);
			this->passwordTextBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(208, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"User Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(212, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SplashScreen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"About";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(396, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Sign Up";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// testButton
			// 
			this->testButton->Location = System::Drawing::Point(396, 286);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(75, 23);
			this->testButton->TabIndex = 8;
			this->testButton->Text = L"Test";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &SplashScreen::testButton_Click);
			// 
			// SplashScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 321);
			this->Controls->Add(this->testButton);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->userNameTextBox);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"SplashScreen";
			this->Text = L"ARRIVE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MainView ^mainView = gcnew MainView(this);
		mainView->StartPosition = FormStartPosition::CenterScreen;
		mainView->Show();
		this->Hide();
	}
	private: System::Void testButton_Click(System::Object^  sender, System::EventArgs^  e) {
		TestDialog ^dialog = gcnew TestDialog();
		dialog->StartPosition = FormStartPosition::CenterScreen;
		dialog->Show();
	}
	};
}
