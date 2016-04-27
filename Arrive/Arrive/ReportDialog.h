#pragma once

namespace ArriveClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReportDialog
	/// </summary>
	public ref class ReportDialog : public System::Windows::Forms::Form
	{
	public:
		ReportDialog(void)
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
		~ReportDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  previewButton;
	protected:
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReportDialog::typeid));
			this->previewButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->SuspendLayout();
			// 
			// previewButton
			// 
			this->previewButton->Location = System::Drawing::Point(212, 459);
			this->previewButton->Name = L"previewButton";
			this->previewButton->Size = System::Drawing::Size(75, 23);
			this->previewButton->TabIndex = 0;
			this->previewButton->Text = L"Preview";
			this->previewButton->UseVisualStyleBackColor = true;
			this->previewButton->Click += gcnew System::EventHandler(this, &ReportDialog::previewButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(293, 459);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 1;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			//this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// ReportDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 494);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->previewButton);
			this->Name = L"ReportDialog";
			this->Text = L"ReportDialog";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void previewButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->printPreviewDialog1->Show();
	}
	};
}
