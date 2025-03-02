#pragma once

#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

namespace ProjectLR {
	public ref class VersionForm : public Form {
	public:
		VersionForm(void) {
			InitializeComponent();
		}

	protected:
		~VersionForm() {
			if (components) {
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		TextBox^ textBox1;
		LinkLabel^ linkLabel1; // ��������� LinkLabel

		void InitializeComponent(void) {
			this->textBox1 = gcnew TextBox();
			this->linkLabel1 = gcnew LinkLabel(); // ������� LinkLabel
			this->SuspendLayout();

			// ��������� TextBox
			this->textBox1->Location = System::Drawing::Point(10, 10);
			this->textBox1->Multiline = true;
			this->textBox1->ReadOnly = true; // ������ ��� ������
			this->textBox1->Size = System::Drawing::Size(300, 50);
            this->textBox1->Text =
            L"������ ���������: 1.0\r\n"
            L"���� �������: 02.02.2025\r\n";

			// ��������� LinkLabel
			this->linkLabel1->Location = System::Drawing::Point(10, 70); // ������� ��� TextBox
			this->linkLabel1->Text = L"https://github.com/KapitoliyVZ/ProjectLR.git"; // ����� ������
			this->linkLabel1->AutoSize = true; // �������������� ������
			this->linkLabel1->LinkClicked += gcnew LinkLabelLinkClickedEventHandler(this, &VersionForm::linkLabel1_LinkClicked); // ���������� �����

			// ��������� �����
			this->ClientSize = System::Drawing::Size(320, 120);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->linkLabel1); // ��������� LinkLabel �� �����
			this->Text = L"������ ���������";
			this->ResumeLayout(false);
			this->PerformLayout();
		}

	private:
		// ���������� ��� ����� �� ������
		System::Void linkLabel1_LinkClicked(System::Object^ sender, LinkLabelLinkClickedEventArgs^ e) {
			// ��������� ������ � ��������
			System::Diagnostics::Process::Start("https://github.com/KapitoliyVZ/ProjectLR.git");
		}
	};
}