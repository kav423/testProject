#pragma once

namespace TestProjectC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
		{
			InitializeComponent();
			this->radioButton1->Visible = true;
			this->radioButton2->Visible = true;
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = false;
			this->button4->Visible = false;
			this->button5->Visible = false;
			this->button6->Visible = false;
			this->label1->Visible = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(307, 363);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(78, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"♠";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mistral", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(183, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Test::button1_Click);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 427);
			this->splitter1->TabIndex = 2;
			this->splitter1->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(136, 270);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(56, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Мышь";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(267, 264);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Клавиатура (wsda)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(428, -8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(22, 445);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(80, -18);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 445);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button2";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(239, 314);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(22, 123);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button2";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(239, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(22, 123);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button2";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(239, -18);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(22, 69);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button2";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 427);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Test";
			this->Text = L"Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
			Label^ label;
			Button^ button;
			bool hasPassed = false;
			bool hasTurned = false;

			void OnMouseMove(Object^ sender, MouseEventArgs^ e)
			{
				Rectangle labelBounds = label->Bounds;
				Rectangle buttonBounds = button->Bounds;

				if (labelBounds.IntersectsWith(buttonBounds))
				{
					MessageBox::Show("Вы нарушили сплошную!");
				}

				if (labelBounds.IntersectsWith(buttonBounds))
				{
					hasPassed = true;
				}
				else if (hasPassed && !hasTurned && label->Left < button->Left && label->Top < button->Top)
				{
					hasTurned = true;
					MessageBox::Show("Вы успешно перестроились!");
				}
				else if (hasPassed && hasTurned && label->Left > button->Left && label->Top < button->Top)
				{
					MessageBox::Show("Вы выехали на встречку!");
				}
			}

		private:
			Label^ labell;
			int rotationAngle = 0;

			void OnKeyDown(Object^ sender, KeyEventArgs^ e)
			{
				int moveStep = 10;
				int rotationStep = 10;

				if (e->KeyCode == Keys::W)
				{
					label1->Top -= moveStep;
				}
				else if (e->KeyCode == Keys::S)
				{
					label1->Top += moveStep;
				}
				else if (e->KeyCode == Keys::D)
				{
					rotationAngle += rotationStep;
					RotateLabel(rotationAngle);
				}
				else if (e->KeyCode == Keys::A)
				{
					rotationAngle += rotationStep;
					RotateLabel(rotationAngle);
				}
			}

			void RotateLabel(int angle)
			{
				Bitmap^ bmp = gcnew Bitmap(label1->Width, label1->Height);
				Graphics^ gfx = Graphics::FromImage(bmp);

				gfx->Clear(Color::White);
				gfx->TranslateTransform(label1->Width / 2, label1->Height / 2);
				gfx->RotateTransform(angle);
				gfx->TranslateTransform(-label1->Width / 2, -label1->Height / 2);
				gfx->DrawString(label1->Text, label1->Font, Brushes::Black, Point(0, 0));

				label1->Image = bmp;
			}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->radioButton1->Checked == true) || (this->radioButton2->Checked == true)) {
			this->radioButton1->Visible = false;
			this->radioButton2->Visible = false;
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->button5->Visible = true;
			this->button6->Visible = true;
			this->label1->Visible = true;
		}
		if (this->radioButton1->Checked == true) {
			this->MouseMove += gcnew MouseEventHandler(this, &Test::OnMouseMove);

			this->Controls->Add(label1);
		}
		if (this->radioButton2->Checked == true) {
			this->KeyDown += gcnew KeyEventHandler(this, &Test::OnKeyDown);

			this->Controls->Add(label);
		}
		
	}
};
}
