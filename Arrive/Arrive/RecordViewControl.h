#pragma once
#include "RecordCollection.hpp"
#include "StudentRecord.hpp"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using System::Convert;


using std::string;
using msclr::interop::marshal_as;
using System::String;
using System::Runtime::InteropServices::SEHException;
using std::cout;
using std::endl;


#define MAX_PACKET_SIZE 1021
#define SCHEMA_NAME "test_schema"
#define DATABASE_ADDR "arrivedatabase.cvqftzv8ankt.us-west-2.rds.amazonaws.com"
#define USER_NAME "Arrive_Admin"
#define PASSWORD "Arrive_MDS16"


namespace ArriveClient {

	/// <summary>
	/// Summary for RecordViewControl
	/// </summary>
	public ref class RecordViewControl : public System::Windows::Forms::UserControl
	{
	public:
		RecordViewControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			recordCollection = new RecordCollection();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RecordViewControl()
		{
			if (components)
			{
				delete components;
			}
			if (recordCollection)
			{
				delete recordCollection;
			}
		}

	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;



	private: RecordCollection* recordCollection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  user_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  wsu_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  absence_date;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->user_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wsu_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->absence_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->user_name,
					this->wsu_id, this->absence_date
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(797, 393);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RecordViewControl::dataGridView1_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox1->Location = System::Drawing::Point(292, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(524, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RecordViewControl::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(275, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(11, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L":";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Name", L"Absence #", L"Date of Absence" });
			this->comboBox1->Location = System::Drawing::Point(109, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RecordViewControl::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Filter by";
			// 
			// user_name
			// 
			this->user_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->user_name->HeaderText = L"Name";
			this->user_name->Name = L"user_name";
			this->user_name->ReadOnly = true;
			// 
			// wsu_id
			// 
			this->wsu_id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->wsu_id->HeaderText = L"ID";
			this->wsu_id->Name = L"wsu_id";
			this->wsu_id->ReadOnly = true;
			// 
			// absence_date
			// 
			this->absence_date->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->absence_date->HeaderText = L"Absence Date";
			this->absence_date->Name = L"absence_date";
			this->absence_date->ReadOnly = true;
			// 
			// RecordViewControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"RecordViewControl";
			this->Size = System::Drawing::Size(831, 442);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}

	public: void update()
	{
		this->recordCollection->clear();
		try {
			sql::mysql::MySQL_Driver *driver;
			sql::Connection *con;
			sql::Statement *stmt;
			sql::ResultSet *res;
			sql::ConnectOptionsMap map;

			driver = sql::mysql::get_mysql_driver_instance();

			System::String^ ip = "tcp://" + DATABASE_ADDR + ":3306";

			sql::SQLString usr("Arrive_Admin");

			con = driver->connect(marshal_as<string>(ip).c_str(), usr, "ArriveMDS16");
			con->setSchema(SCHEMA_NAME);
			stmt = con->createStatement();
			//stmt->execute("USE " EXAMPLE_DB);
			bool success = false;
			res = stmt->executeQuery("CALL get_all_absences();");
			while (res->next()) {
				StudentRecord sr(res->getString("name").c_str(), res->getInt("wsu_id"), res->getString("date").c_str());
				recordCollection->addRecord(sr);
			}

			delete stmt;
			delete con;
			delete res;

		}
		catch (sql::SQLException &e) {
			/*
			MySQL Connector/C++ throws three different exceptions:

			- sql::MethodNotImplementedException (derived from sql::SQLException)
			- sql::InvalidArgumentException (derived from sql::SQLException)
			- sql::SQLException (derived from std::runtime_error)
			*/
			cout << "# ERR: SQLException in " << __FILE__;
			cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
			/* what() (derived from std::runtime_error) fetches error message */
			cout << "# ERR: " << e.what();
			cout << " (MySQL error code: " << e.getErrorCode() << " )" << endl;
		}
		catch (System::Runtime::InteropServices::SEHException^ ex)
		{
			cout << marshal_as<string>(ex->Message) << endl;
			cout << "Error Code: " << ex->ErrorCode << endl;
			cout << marshal_as<string>(ex->StackTrace);
		}
		showRecs();
	}

	private: void showRecs()
	{
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Refresh();
		for (StudentRecord sr : recordCollection->getRecords())
		{
			DataGridViewRow^ new_row = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ name_cell = gcnew DataGridViewTextBoxCell();

			name_cell->Value = gcnew String(sr.getName().c_str());

			DataGridViewTextBoxCell^ id_cell = gcnew DataGridViewTextBoxCell();

			id_cell->Value = gcnew String(Convert::ToString(sr.getIDNum()));

			DataGridViewTextBoxCell^ date_cell = gcnew DataGridViewTextBoxCell();

			date_cell->Value = gcnew String(sr.getDate().c_str());

			new_row->Cells->Add(name_cell);
			new_row->Cells->Add(id_cell);
			new_row->Cells->Add(date_cell);


			this->dataGridView1->Rows->Add(new_row);
		}
	}
};
}
