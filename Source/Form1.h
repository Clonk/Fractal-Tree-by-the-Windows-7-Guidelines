#include <stdlib.h>
#include <ctime>
#include <vector>
#include <math.h>


#pragma once

using namespace std;

namespace fract {

	struct coord
	{
		int x1,y1,angl,fl;
	};
		
	int ugol = 30;
	int ver = 30;
	int vetv = 5;
	int gl = 3;
	int listok = 2;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;

	private: System::Windows::Forms::Label^  label1;







	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public: 
	private: 
	public: 
	protected: 

	protected: 

	protected: 

	protected: 

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(410, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить";
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown1->Location = System::Drawing::Point(14, 42);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {170, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(67, 29);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {30, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numericUpDown3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown3->Location = System::Drawing::Point(137, 42);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(67, 29);
			this->numericUpDown3->TabIndex = 4;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(11, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Угол";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(372, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 81);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Настройки построения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(133, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Глубина";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click_1);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numericUpDown4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown4->Location = System::Drawing::Point(15, 94);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(67, 29);
			this->numericUpDown4->TabIndex = 5;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(96, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 40);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Вероятность \nветвления";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown2->Location = System::Drawing::Point(15, 27);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(67, 29);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {60, 0, 0, 0});
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(99, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 40);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Количество \nветок";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->numericUpDown5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->numericUpDown5->Location = System::Drawing::Point(15, 153);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(67, 29);
			this->numericUpDown5->TabIndex = 10;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(101, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 40);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Толщина \nлистьев";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Location = System::Drawing::Point(372, 89);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 203);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(6, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 341);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(7, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(359, 366);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Tag = L"";
			this->groupBox3->Text = L"Графическая область";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(606, 380);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->MinimumSize = System::Drawing::Size(622, 418);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Строитель фрактального дерево";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void draw(coord t1, int l, int n, double listok)
		{
			if(n <= gl+1)
			{
				int x2 = t1.x1 + l * cos((t1.angl)*3.14/180);
				int y2 = t1.y1 + l * sin((t1.angl)*3.14/180);
				Graphics^ g = pictureBox1->CreateGraphics();
				Pen^ vpen;
				if(n < gl+1/2)
				{
					vpen = gcnew Pen(Color::FromArgb(139,87,66));
					vpen->Width = 8/n;
				}
				else
					if(n < (gl)/4*3)
					{
						vpen = gcnew Pen(Color::FromArgb(238,197,145));	
						vpen->Width = 8/n;
					}
					else
					{
						if(n != gl+1)
						{
							vpen = gcnew Pen(Color::FromArgb(152,251,152));	
							vpen->Width = 8/n;
						}
						else
						{
							vpen = gcnew Pen(Color::FromArgb(46,139,87));
							vpen->Width = listok/2;
						}
					}
				g->DrawLine(vpen, t1.x1, t1.y1, x2, y2);
				vector <coord> mas;
				coord t;
				int x;
				for(int i = 1; i <= vetv; i++)					
				{
					x = rand()%100+1;
					if(x <= ver)			
					{
						t.x1 = t1.x1 + (l / vetv * i) * cos((t1.angl)*3.14/180);
						t.y1 = t1.y1 + (l / vetv * i) * sin((t1.angl)*3.14/180);
						t.fl = rand()%2;
						if(t.fl == 1)
							t.angl = t1.angl + ugol;
						else
							t.angl = t1.angl - ugol;
						if((t.x1 + l * cos((t.angl)*3.14/180)) > 0 && (t.x1 + l * cos((t.angl)*3.14/180)) < pictureBox1->Width && (t.y1 + l * sin((t.angl)*3.14/180)) > 0 && (t.y1 + l * sin((t.angl)*3.14/180)) < pictureBox1->Height)
							mas.push_back(t);
					}
				}
				l *= 0.7;
				for(int i = 0; i < mas.size(); i++)
					draw(mas[i], l, n+1, listok);
			}
		}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
			 {

			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 			 
				 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 srand(time(NULL));

				 ugol = Convert::ToInt16(numericUpDown1->Value);
				 ver = Convert::ToInt16(numericUpDown2->Value);
				 gl = Convert::ToInt16(numericUpDown3->Value);
				 vetv = Convert::ToInt16(numericUpDown4->Value);
				 listok = Convert::ToInt16(numericUpDown5->Value);
				 Graphics^ g = pictureBox1->CreateGraphics();
				 g->Clear(pictureBox1->BackColor);			
				 coord t1;
				 t1.x1 = pictureBox1->Width / 2;
				 t1.y1 = pictureBox1->Height;
				 t1.angl = -90;
				 t1.fl = 1;
				 draw(t1, pictureBox1->Height / 3, 1, listok);		 
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

