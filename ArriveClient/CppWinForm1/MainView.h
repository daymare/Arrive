#pragma once

#include "RecordViewControl.h"
#include "ReportDialog.h"

namespace ArriveClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainView
	/// </summary>
	public ref class MainView : public System::Windows::Forms::Form
	{
	public:
		MainView(Form ^parent)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->parent = parent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  updateButton;
	protected:

	private: System::Windows::Forms::Button^  logoutButton;
	private: System::Windows::Forms::Button^  accountButton;
	protected:


	private: System::Windows::Forms::Button^  helpButton;
	private: System::Windows::Forms::Panel^  viewPanel;


	private: System::Windows::Forms::Form^ parent;
	private: System::Windows::Forms::Button^  reportButton;

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
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->accountButton = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->viewPanel = (gcnew System::Windows::Forms::Panel());
			this->reportButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(12, 12);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(75, 23);
			this->updateButton->TabIndex = 0;
			this->updateButton->Text = L"Update";
			this->updateButton->UseVisualStyleBackColor = true;
			// 
			// logoutButton
			// 
			this->logoutButton->Location = System::Drawing::Point(806, 12);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(75, 23);
			this->logoutButton->TabIndex = 1;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &MainView::logoutButton_Click);
			// 
			// accountButton
			// 
			this->accountButton->Location = System::Drawing::Point(725, 12);
			this->accountButton->Name = L"accountButton";
			this->accountButton->Size = System::Drawing::Size(75, 23);
			this->accountButton->TabIndex = 2;
			this->accountButton->Text = L"Account";
			this->accountButton->UseVisualStyleBackColor = true;
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(644, 12);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 3;
			this->helpButton->Text = L"Help";
			this->helpButton->UseVisualStyleBackColor = true;
			// 
			// viewPanel
			// 
			this->viewPanel->Location = System::Drawing::Point(12, 41);
			this->viewPanel->Name = L"viewPanel";
			this->viewPanel->Size = System::Drawing::Size(869, 430);
			this->viewPanel->TabIndex = 4;
			// 
			// reportButton
			// 
			this->reportButton->Location = System::Drawing::Point(265, 12);
			this->reportButton->Name = L"reportButton";
			this->reportButton->Size = System::Drawing::Size(262, 23);
			this->reportButton->TabIndex = 5;
			this->reportButton->Text = L"Generate Report";
			this->reportButton->UseVisualStyleBackColor = true;
			this->reportButton->Click += gcnew System::EventHandler(this, &MainView::reportButton_Click);
			// 
			// MainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 483);
			this->Controls->Add(this->reportButton);
			this->Controls->Add(this->viewPanel);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->accountButton);
			this->Controls->Add(this->logoutButton);
			this->Controls->Add(this->updateButton);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"MainView";
			this->Text = L"ARRIVE";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainView::MainView_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainView::MainView_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MainView_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		this->parent->Show();
	}
	private: System::Void logoutButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void MainView_Load(System::Object^  sender, System::EventArgs^  e) {
		this->viewPanel->Controls->Add(gcnew RecordViewControl());
	}
	private: System::Void reportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		ReportDialog^ rd = gcnew ReportDialog();

		rd->Show();
	}
};
}
