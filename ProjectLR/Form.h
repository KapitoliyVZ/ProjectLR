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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оРазработчикахToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ версияПрограммыToolStripMenuItem;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Button^ button_Open_Text;












	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оРазработчикахToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->версияПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->button_Open_Text = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1072, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сведенияToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сведенияToolStripMenuItem
			// 
			this->сведенияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оРазработчикахToolStripMenuItem,
					this->версияПрограммыToolStripMenuItem
			});
			this->сведенияToolStripMenuItem->Name = L"сведенияToolStripMenuItem";
			this->сведенияToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->сведенияToolStripMenuItem->Text = L"Сведения";
			// 
			// оРазработчикахToolStripMenuItem
			// 
			this->оРазработчикахToolStripMenuItem->Name = L"оРазработчикахToolStripMenuItem";
			this->оРазработчикахToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->оРазработчикахToolStripMenuItem->Text = L"Разработчики";
			this->оРазработчикахToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оРазработчикахToolStripMenuItem_Click);
			// 
			// версияПрограммыToolStripMenuItem
			// 
			this->версияПрограммыToolStripMenuItem->Name = L"версияПрограммыToolStripMenuItem";
			this->версияПрограммыToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->версияПрограммыToolStripMenuItem->Text = L"Версия программы";
			this->версияПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::версияПрограммыToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// button_Open_Text
			// 
			this->button_Open_Text->Location = System::Drawing::Point(61, 100);
			this->button_Open_Text->Name = L"button_Open_Text";
			this->button_Open_Text->Size = System::Drawing::Size(175, 51);
			this->button_Open_Text->TabIndex = 1;
			this->button_Open_Text->Text = L"Выбрать и открыть файл текста";
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

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		// Отображение диалогового окна с подтверждением выхода
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			L"Вы уверены, что хотите выйти?", // Текст сообщения
			L"Завершение работы",			 // Заголовок окна
			MessageBoxButtons::YesNo,        // Кнопки "Да" и "Нет"
			MessageBoxIcon::Question         // Иконка вопроса
		);

		// Если пользователь нажал "Да", закрываем приложение
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}

	}

	private: System::Void оРазработчикахToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создание формы для отображения информации о разработчиках  
		System::Windows::Forms::Form^ infoForm = gcnew System::Windows::Forms::Form();
		infoForm->Text = L"О разработчиках";
		infoForm->Size = System::Drawing::Size(600, 300);

		// Создание текстового поля для отображения содержимого файла  
		System::Windows::Forms::TextBox^ textBox = gcnew System::Windows::Forms::TextBox();
		textBox->Multiline = true;
		textBox->Dock = System::Windows::Forms::DockStyle::Fill;
		textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

		// Чтение содержимого файла и вывод его в текстовое поле  
		try {
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("people.txt");
			textBox->Text = sr->ReadToEnd();
			sr->Close();
		}
		catch (System::IO::FileNotFoundException^) {
			textBox->Text = L"Файл people.txt не найден.";
		}
		catch (System::Exception^ ex) {
			textBox->Text = L"Ошибка при чтении файла: " + ex->Message;
		}

		infoForm->Controls->Add(textBox);
		infoForm->ShowDialog();
	};

	private: System::Void версияПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создаем и отображаем форму с информацией о версии
		VersionForm^ versionForm = gcnew VersionForm();
		versionForm->ShowDialog(); // Открываем форму как диалоговое окно
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Создаем диалоговое окно для выбора файла
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Текстовые файлы|*.txt|Все файлы|*.*";
		openFileDialog->Title = "Выберите файл для открытия";
		// Если пользователь выбрал файл и нажал "ОК"
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Открываем файл для чтения
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog->FileName);
			// Читаем весь файл и выводим его в текстовое поле
			MessageBox::Show(sr->ReadToEnd(), "Содержимое файла");
			sr->Close();
		}
	}
	};
}