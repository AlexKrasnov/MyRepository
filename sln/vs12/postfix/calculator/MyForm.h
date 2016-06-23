#pragma once
#include "postfix.h"
#include <sstream>

namespace calculator {

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
		string *s;
		MyForm(void)
		{
			InitializeComponent();
			s = new string;
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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(21, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(68, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(115, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 44);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(21, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 44);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(68, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 44);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(115, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 44);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(21, 65);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 44);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(68, 65);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 44);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(115, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 44);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(21, 215);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 44);
			this->button10->TabIndex = 12;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(68, 215);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 44);
			this->button11->TabIndex = 13;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(162, 115);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 94);
			this->button12->TabIndex = 14;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(162, 65);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 44);
			this->button13->TabIndex = 15;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(209, 65);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 44);
			this->button14->TabIndex = 16;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(256, 65);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 44);
			this->button15->TabIndex = 17;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(303, 65);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(41, 44);
			this->button16->TabIndex = 18;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(21, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(365, 29);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->Location = System::Drawing::Point(115, 239);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(271, 20);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(350, 65);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(41, 44);
			this->button17->TabIndex = 22;
			this->button17->Text = L"^";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(209, 115);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(41, 44);
			this->button18->TabIndex = 23;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(209, 165);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(41, 44);
			this->button19->TabIndex = 24;
			this->button19->Text = L"←";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Location = System::Drawing::Point(115, 215);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(271, 20);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(417, 281);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('1');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
				 //pictureBox1->Refresh();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('2');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('3');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('4');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('5');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('6');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('7');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('8');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('9');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (*s=="0")
				 {
					 *s="";
					 pictureBox1->Refresh();
				 }
				 s->push_back('0');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 s->push_back('.');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 Graphics^ g = pictureBox1->CreateGraphics();
					 Graphics^ p = pictureBox2->CreateGraphics();
					 Graphics^ q = pictureBox3->CreateGraphics();
					 System::Drawing::Font^ f1 = gcnew System::Drawing::Font("Arial",17);	
					 System::Drawing::Font^ f2 = gcnew System::Drawing::Font("Arial",15);
					 Postfix Convertor(*s);
					 string polish = Convertor.ConvertToPolish();
					 String ^str1 = gcnew String(polish.c_str());
					 String ^str2 = gcnew String(s->c_str());
					 pictureBox2->Refresh();
					 p->DrawString(str2, f2, Brushes::Black, 0, 0);
					 pictureBox3->Refresh();
					 q->DrawString(str1, f2, Brushes::Black, 0, 0);
					 double Rez = Convertor.Result();
					 s->clear();
					 stringstream stream;
					 stream << Rez;
					 getline(stream,*s);
					 String ^str3 = gcnew String(s->c_str());
					 pictureBox1->Refresh();
					 g->DrawString(str3, f1, Brushes::Black, 0, 0);
				 }
				 catch(const char* error)
				 {
					 Graphics^ g = pictureBox1->CreateGraphics();
					 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",15);
					 String ^str = gcnew String(error);
					 pictureBox1->Refresh();
					 g->DrawString(str, f, Brushes::Black, 0, 0);
				 }
			 }
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);				 
				 s->push_back('+');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);				 
				 s->push_back('-');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);				 
				 s->push_back('*');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);				 
				 s->push_back('/');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);				 
				 s->push_back('^');
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);	
				 if (!s->empty())
					 s->pop_back();
				 if (*s=="") 
					 *s="0";
				 pictureBox1->Refresh();
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Graphics^ g = pictureBox1->CreateGraphics();
				 System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial",17);
				 *s="0";
				 pictureBox1->Refresh();
				 String ^str = gcnew String(s->c_str());
				 g->DrawString(str, f, Brushes::Black, 0, 0);
			 }
	};
}
