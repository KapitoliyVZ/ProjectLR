#include "VersionLinkGit.h"
#pragma once


namespace ProjectLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Button^ button_Open_Text;












	protected:


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->button_Open_Text = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1072, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������������ToolStripMenuItem,
					this->���������������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->��������������ToolStripMenuItem->Text = L"������������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->���������������ToolStripMenuItem->Text = L"������ ���������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// button_Open_Text
			// 
			this->button_Open_Text->Location = System::Drawing::Point(61, 100);
			this->button_Open_Text->Name = L"button_Open_Text";
			this->button_Open_Text->Size = System::Drawing::Size(175, 51);
			this->button_Open_Text->TabIndex = 1;
			this->button_Open_Text->Text = L"������� � ������� ���� ������";
			this->button_Open_Text->UseVisualStyleBackColor = true;
			this->button_Open_Text->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 579);
			this->Controls->Add(this->button_Open_Text);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Application";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		// ����������� ����������� ���� � �������������� ������
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			L"�� �������, ��� ������ �����?", // ����� ���������
			L"���������� ������",			 // ��������� ����
			MessageBoxButtons::YesNo,        // ������ "��" � "���"
			MessageBoxIcon::Question         // ������ �������
		);

		// ���� ������������ ����� "��", ��������� ����������
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}

	}

	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ����� ��� ����������� ���������� � �������������  
		System::Windows::Forms::Form^ infoForm = gcnew System::Windows::Forms::Form();
		infoForm->Text = L"� �������������";
		infoForm->Size = System::Drawing::Size(600, 300);

		// �������� ���������� ���� ��� ����������� ����������� �����  
		System::Windows::Forms::TextBox^ textBox = gcnew System::Windows::Forms::TextBox();
		textBox->Multiline = true;
		textBox->Dock = System::Windows::Forms::DockStyle::Fill;
		textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

		// ������ ����������� ����� � ����� ��� � ��������� ����  
		try {
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("people.txt");
			textBox->Text = sr->ReadToEnd();
			sr->Close();
		}
		catch (System::IO::FileNotFoundException^) {
			textBox->Text = L"���� people.txt �� ������.";
		}
		catch (System::Exception^ ex) {
			textBox->Text = L"������ ��� ������ �����: " + ex->Message;
		}

		infoForm->Controls->Add(textBox);
		infoForm->ShowDialog();
	};

	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� � ���������� ����� � ����������� � ������
		VersionForm^ versionForm = gcnew VersionForm();
		versionForm->ShowDialog(); // ��������� ����� ��� ���������� ����
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// ������� ���������� ���� ��� ������ �����
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "��������� �����|*.txt|��� �����|*.*";
		openFileDialog->Title = "�������� ���� ��� ��������";
		// ���� ������������ ������ ���� � ����� "��"
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// ��������� ���� ��� ������
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog->FileName);
			// ������ ���� ���� � ������� ��� � ��������� ����
			MessageBox::Show(sr->ReadToEnd(), "���������� �����");
			sr->Close();
		}
	}
	};
}