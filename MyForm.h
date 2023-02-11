#pragma once

namespace Project23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	double otvet=0;
	double multiplier2, multiplier1=1, n = 0, otvet1,t=1;

	
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
	private: System::Windows::Forms::Label^ label1_multiplier1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1_multiplier2;
	private: System::Windows::Forms::TextBox^ textBox2_answer;
	private: System::Windows::Forms::Button^ button3_answer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3_multiplier2;
	private: System::Windows::Forms::Label^ label4_wrong_answer;
	private: System::Windows::Forms::Label^ label5_correct_answer;
	private: System::Windows::Forms::Label^ label6_сorrect_answer;
	private: System::Windows::Forms::Label^ label7_true;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::TextBox^ textBox3_multiplier1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1_multiplier1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1_multiplier2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_answer = (gcnew System::Windows::Forms::TextBox());
			this->button3_answer = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3_multiplier2 = (gcnew System::Windows::Forms::Label());
			this->label4_wrong_answer = (gcnew System::Windows::Forms::Label());
			this->label5_correct_answer = (gcnew System::Windows::Forms::Label());
			this->label6_сorrect_answer = (gcnew System::Windows::Forms::Label());
			this->label7_true = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox3_multiplier1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1_multiplier1
			// 
			this->label1_multiplier1->AutoSize = true;
			this->label1_multiplier1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_multiplier1->Location = System::Drawing::Point(6, 211);
			this->label1_multiplier1->Name = L"label1_multiplier1";
			this->label1_multiplier1->Size = System::Drawing::Size(26, 29);
			this->label1_multiplier1->TabIndex = 0;
			this->label1_multiplier1->Text = L"\?";
			this->label1_multiplier1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Тренування";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_training_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Тестування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_training_Click);
			// 
			// textBox1_multiplier2
			// 
			this->textBox1_multiplier2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox1_multiplier2->Location = System::Drawing::Point(181, 64);
			this->textBox1_multiplier2->Name = L"textBox1_multiplier2";
			this->textBox1_multiplier2->Size = System::Drawing::Size(42, 35);
			this->textBox1_multiplier2->TabIndex = 3;
			// 
			// textBox2_answer
			// 
			this->textBox2_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2_answer->Location = System::Drawing::Point(158, 209);
			this->textBox2_answer->Name = L"textBox2_answer";
			this->textBox2_answer->Size = System::Drawing::Size(46, 35);
			this->textBox2_answer->TabIndex = 4;
			this->textBox2_answer->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button3_answer
			// 
			this->button3_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3_answer->Location = System::Drawing::Point(204, 203);
			this->button3_answer->Name = L"button3_answer";
			this->button3_answer->Size = System::Drawing::Size(97, 48);
			this->button3_answer->TabIndex = 5;
			this->button3_answer->Text = L"Відповісти";
			this->button3_answer->UseVisualStyleBackColor = true;
			this->button3_answer->Click += gcnew System::EventHandler(this, &MyForm::button3_answer_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(51, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"*";
			// 
			// label3_multiplier2
			// 
			this->label3_multiplier2->AutoSize = true;
			this->label3_multiplier2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3_multiplier2->Location = System::Drawing::Point(91, 212);
			this->label3_multiplier2->Name = L"label3_multiplier2";
			this->label3_multiplier2->Size = System::Drawing::Size(26, 29);
			this->label3_multiplier2->TabIndex = 7;
			this->label3_multiplier2->Text = L"\?";
			this->label3_multiplier2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4_wrong_answer
			// 
			this->label4_wrong_answer->AutoSize = true;
			this->label4_wrong_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4_wrong_answer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4_wrong_answer->Location = System::Drawing::Point(100, 253);
			this->label4_wrong_answer->Name = L"label4_wrong_answer";
			this->label4_wrong_answer->Size = System::Drawing::Size(0, 33);
			this->label4_wrong_answer->TabIndex = 8;
			// 
			// label5_correct_answer
			// 
			this->label5_correct_answer->AutoSize = true;
			this->label5_correct_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5_correct_answer->Location = System::Drawing::Point(237, 294);
			this->label5_correct_answer->Name = L"label5_correct_answer";
			this->label5_correct_answer->Size = System::Drawing::Size(0, 20);
			this->label5_correct_answer->TabIndex = 9;
			// 
			// label6_сorrect_answer
			// 
			this->label6_сorrect_answer->AutoSize = true;
			this->label6_сorrect_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6_сorrect_answer->Location = System::Drawing::Point(31, 295);
			this->label6_сorrect_answer->Name = L"label6_сorrect_answer";
			this->label6_сorrect_answer->Size = System::Drawing::Size(0, 20);
			this->label6_сorrect_answer->TabIndex = 10;
			// 
			// label7_true
			// 
			this->label7_true->AutoSize = true;
			this->label7_true->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7_true->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label7_true->Location = System::Drawing::Point(103, 259);
			this->label7_true->Name = L"label7_true";
			this->label7_true->Size = System::Drawing::Size(0, 37);
			this->label7_true->TabIndex = 11;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->Location = System::Drawing::Point(12, 65);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(167, 32);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Введіть цифру на яку\r\nбуде тренування \r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(127, 212);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 29);
			this->label8->TabIndex = 13;
			this->label8->Text = L"=";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel2->LinkColor = System::Drawing::Color::MediumSeaGreen;
			this->linkLabel2->Location = System::Drawing::Point(12, 101);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(129, 48);
			this->linkLabel2->TabIndex = 14;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"До якого числа \r\nбуде проходити \r\nмноження";
			// 
			// textBox3_multiplier1
			// 
			this->textBox3_multiplier1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox3_multiplier1->Location = System::Drawing::Point(181, 109);
			this->textBox3_multiplier1->Name = L"textBox3_multiplier1";
			this->textBox3_multiplier1->Size = System::Drawing::Size(42, 35);
			this->textBox3_multiplier1->TabIndex = 15;
			this->textBox3_multiplier1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_multiplier1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 324);
			this->Controls->Add(this->textBox3_multiplier1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label7_true);
			this->Controls->Add(this->label6_сorrect_answer);
			this->Controls->Add(this->label5_correct_answer);
			this->Controls->Add(this->label4_wrong_answer);
			this->Controls->Add(this->label3_multiplier2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3_answer);
			this->Controls->Add(this->textBox2_answer);
			this->Controls->Add(this->textBox1_multiplier2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1_multiplier1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тренажер множення";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::button1_training_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   bool protect1() {
			   if ((textBox1_multiplier2->Text->Length ==0 || textBox3_multiplier1->Text->Length == 0) ) { return false; }
			   for (int i = 0; i < textBox1_multiplier2->Text->Length; i++) {
				   if ((textBox1_multiplier2->Text[i] >= '0') && (textBox1_multiplier2->Text[i] <= '9') ){}
				   else { return false; }
				 }
			   for (int i = 0; i < textBox3_multiplier1->Text->Length; i++) {
				   if ((textBox3_multiplier1->Text[i] >= '0') && (textBox3_multiplier1->Text[i] <= '9')) {}
				   else { return false; }
			   }
			  
			   return true;
		   }
		   bool protect2() {
			   if ((textBox2_answer->Text->Length == 0)) { return false; }
			 for (int i = 0; i < textBox2_answer->Text->Length; i++) {
				if ((textBox2_answer->Text[i] >= '0') && (textBox2_answer->Text[i] <= '9') ) {}
				   else { return false; }
			  }
			   return true;
	}
		   
private: System::Void button1_training_Click(System::Object^ sender, System::EventArgs^ e) {
			if (protect1()) {
				textBox2_answer->Enabled = true;
				button3_answer->Enabled = true;
				multiplier1 = 1;
				multiplier2 = System::Convert::ToDouble(textBox1_multiplier2->Text);
				label1_multiplier1->Text = multiplier2.ToString();
				label3_multiplier2->Text = multiplier1.ToString();
				textBox2_answer->Focus();
				
			}
		else{
			MessageBox::Show("Введіть ціфри", "Помилка");
			textBox1_multiplier2->Clear();
			textBox3_multiplier1->Clear();
			textBox1_multiplier2->Focus();
			button3_answer->Enabled = false;
		}
		label4_wrong_answer->Text = "";
		label5_correct_answer->Text = "";
		label6_сorrect_answer->Text = "";
		label7_true->Text = "";
		textBox2_answer->Clear();

}
private: System::Void button3_answer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (protect2()) {
			otvet = System::Convert::ToDouble(textBox2_answer->Text);
			otvet1 = multiplier2 * multiplier1;
			if (otvet != multiplier2 * multiplier1) {
				label7_true->Text = "";
				label4_wrong_answer->Text = "Невірно";
				label6_сorrect_answer->Text = "Правельна відповідь";
				label5_correct_answer->Text = otvet1.ToString();
			}
			else
			{
				label6_сorrect_answer->Text = "";
				label4_wrong_answer->Text = "";
				label7_true->Text = "Вірно";
				label5_correct_answer->Text = "";
			}
			multiplier1 += 1;
			label3_multiplier2->Text = multiplier1.ToString();
			if (multiplier1 == System::Convert::ToDouble(textBox3_multiplier1->Text)+1 ) {
				textBox2_answer->Enabled = false;
				button3_answer->Enabled = false;
				label1_multiplier1->Text = "?";
				label3_multiplier2->Text = "?";
				MessageBox::Show("Виберіть іншу цифру", "Закінчення");
			}
			textBox2_answer->Clear();
			textBox2_answer->Focus();
		}
		else {
			MessageBox::Show("Помилка введення", "Помилка");
			textBox2_answer->Clear();
			textBox2_answer->Focus();
		}
	
		
	}
private: System::Void button2_training_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ form = gcnew MyForm1;
	form->ShowDialog();//Виводить форму та блокує попередню. Форма буде заблокована поки не закриєця нова.
	textBox1_multiplier2->Clear();//Видаляє ведені символи
	textBox1_multiplier2->Focus();//показує вказівник в формі
	textBox2_answer->Clear();
	textBox3_multiplier1->Clear();
	label1_multiplier1->Text = "?";
	label3_multiplier2->Text = "?";
	label4_wrong_answer->Text = "";
	label5_correct_answer->Text = "";
	label6_сorrect_answer->Text = "";
	label7_true->Text = "";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox2_answer->Enabled=false;
	button3_answer->Enabled = false;
	textBox1_multiplier2->Focus();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_multiplier1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
