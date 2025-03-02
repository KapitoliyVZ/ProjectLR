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
		LinkLabel^ linkLabel1; // Добавляем LinkLabel

		void InitializeComponent(void) {
			this->textBox1 = gcnew TextBox();
			this->linkLabel1 = gcnew LinkLabel(); // Создаем LinkLabel
			this->SuspendLayout();

			// Настройка TextBox
			this->textBox1->Location = System::Drawing::Point(10, 10);
			this->textBox1->Multiline = true;
			this->textBox1->ReadOnly = true; // Только для чтения
			this->textBox1->Size = System::Drawing::Size(300, 50);
            this->textBox1->Text =
            L"Версия программы: 1.0\r\n"
            L"Дата выпуска: 02.02.2025\r\n";

			// Настройка LinkLabel
			this->linkLabel1->Location = System::Drawing::Point(10, 70); // Позиция под TextBox
			this->linkLabel1->Text = L"https://github.com/KapitoliyVZ/ProjectLR.git"; // Текст ссылки
			this->linkLabel1->AutoSize = true; // Автоматический размер
			this->linkLabel1->LinkClicked += gcnew LinkLabelLinkClickedEventHandler(this, &VersionForm::linkLabel1_LinkClicked); // Обработчик клика

			// Настройка формы
			this->ClientSize = System::Drawing::Size(320, 120);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->linkLabel1); // Добавляем LinkLabel на форму
			this->Text = L"Версия программы";
			this->ResumeLayout(false);
			this->PerformLayout();
		}

	private:
		// Обработчик для клика по ссылке
		System::Void linkLabel1_LinkClicked(System::Object^ sender, LinkLabelLinkClickedEventArgs^ e) {
			// Открываем ссылку в браузере
			System::Diagnostics::Process::Start("https://github.com/KapitoliyVZ/ProjectLR.git");
		}
	};
}