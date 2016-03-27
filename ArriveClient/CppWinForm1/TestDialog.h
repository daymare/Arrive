#pragma once

#include <boost\asio.hpp>
#include <string>
#include <msclr\marshal_cppstd.h>

using std::string;
using msclr::interop::marshal_as;
using System::String;
//using boost::asio::ip::udp;

namespace ArriveClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestDialog
	/// </summary>
	public ref class TestDialog : public System::Windows::Forms::Form
	{
	public:
		TestDialog(void)
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
		~TestDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  sendButton;
	protected:
	private: System::Windows::Forms::TextBox^  ipBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  messageBox;
	private: System::Windows::Forms::Label^  receiptLabel;

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
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->ipBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->messageBox = (gcnew System::Windows::Forms::TextBox());
			this->receiptLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// sendButton
			// 
			this->sendButton->Location = System::Drawing::Point(150, 88);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(113, 29);
			this->sendButton->TabIndex = 0;
			this->sendButton->Text = L"Send";
			this->sendButton->UseVisualStyleBackColor = true;
			this->sendButton->Click += gcnew System::EventHandler(this, &TestDialog::sendButton_Click);
			// 
			// ipBox
			// 
			this->ipBox->Location = System::Drawing::Point(90, 36);
			this->ipBox->Name = L"ipBox";
			this->ipBox->Size = System::Drawing::Size(258, 20);
			this->ipBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"IP:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Message:";
			// 
			// messageBox
			// 
			this->messageBox->Location = System::Drawing::Point(90, 62);
			this->messageBox->Name = L"messageBox";
			this->messageBox->Size = System::Drawing::Size(258, 20);
			this->messageBox->TabIndex = 4;
			// 
			// receiptLabel
			// 
			this->receiptLabel->AutoSize = true;
			this->receiptLabel->Location = System::Drawing::Point(12, 148);
			this->receiptLabel->Name = L"receiptLabel";
			this->receiptLabel->Size = System::Drawing::Size(52, 13);
			this->receiptLabel->TabIndex = 5;
			this->receiptLabel->Text = L"Waiting...";
			// 
			// TestDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 235);
			this->Controls->Add(this->receiptLabel);
			this->Controls->Add(this->messageBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ipBox);
			this->Controls->Add(this->sendButton);
			this->Name = L"TestDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sendButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//boost::asio::io_service io_service;
		//const int max_length = 1021;

		//msclr::interop::marshal_context^ context = gcnew msclr::interop::marshal_context();

		//udp::socket s(io_service, udp::endpoint(udp::v4(), 1776));

		//udp::resolver resolver(io_service);
		//array<System::String^> ^ioDatas = this->ipBox->Text->Split(L':');
		//udp::endpoint endpoint = *resolver.resolve({ udp::v4(), context->marshal_as<string>(ioDatas[0]), context->marshal_as<string>(ioDatas[1])});

		//const char * request = context->marshal_as<string>(this->messageBox->Text).c_str();
		//size_t request_length = std::strlen(request);
		//s.send_to(boost::asio::buffer(request, request_length), endpoint);

		//char reply[max_length];
		//udp::endpoint sender_endpoint;
		//size_t reply_length = s.receive_from(
		//	boost::asio::buffer(reply, max_length), sender_endpoint);


		//this->receiptLabel->Text = gcnew System::String(reply);
	}
};
}
