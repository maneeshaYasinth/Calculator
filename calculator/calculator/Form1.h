#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::Button^ btnC;

	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnPlusMinus;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;




	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;




	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;




	private: System::Windows::Forms::Button^ btnDiv;

	private: System::Windows::Forms::Button^ btnEq;

	private: System::Windows::Forms::Button^ btnPoint;

	private: System::Windows::Forms::Button^ btn0;





















	protected:





















	protected:

	protected:

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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(81, 27);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtDisplay->Size = System::Drawing::Size(467, 72);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			// 
			// btnBack
			// 
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(72, 119);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(89, 59);
			this->btnBack->TabIndex = 1;
			this->btnBack->Text = L"";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Form1::btnBack_Click);
			// 
			// btnC
			// 
			this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(206, 119);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(89, 59);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &Form1::btnC_Click);
			// 
			// btnCE
			// 
			this->btnCE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(350, 119);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(89, 59);
			this->btnCE->TabIndex = 3;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMinus->Location = System::Drawing::Point(476, 119);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(89, 59);
			this->btnPlusMinus->TabIndex = 4;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &Form1::btnPlusMinus_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(476, 201);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(89, 59);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btn9
			// 
			this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(350, 201);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(89, 59);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn8
			// 
			this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(206, 201);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(89, 59);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn7
			// 
			this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(72, 201);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(89, 59);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btnSub
			// 
			this->btnSub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(476, 284);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(89, 59);
			this->btnSub->TabIndex = 12;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btn6
			// 
			this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(350, 284);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(89, 59);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn5
			// 
			this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(206, 284);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(89, 59);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn4
			// 
			this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(72, 284);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(89, 59);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btnMul
			// 
			this->btnMul->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(476, 363);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(89, 59);
			this->btnMul->TabIndex = 16;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btn3
			// 
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(350, 363);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(89, 59);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn2
			// 
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(206, 363);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(89, 59);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btn1
			// 
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(72, 363);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(89, 59);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// btnDiv
			// 
			this->btnDiv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(476, 439);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(89, 59);
			this->btnDiv->TabIndex = 20;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btnEq
			// 
			this->btnEq->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEq->Location = System::Drawing::Point(350, 439);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(89, 59);
			this->btnEq->TabIndex = 19;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = true;
			this->btnEq->Click += gcnew System::EventHandler(this, &Form1::btnEq_Click);
			// 
			// btnPoint
			// 
			this->btnPoint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoint->Location = System::Drawing::Point(206, 439);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(89, 59);
			this->btnPoint->TabIndex = 18;
			this->btnPoint->Text = L".";
			this->btnPoint->UseVisualStyleBackColor = true;
			this->btnPoint->Click += gcnew System::EventHandler(this, &Form1::btnPoint_Click);
			// 
			// btn0
			// 
			this->btn0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(72, 439);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(89, 59);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(605, 556);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnEq);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->txtDisplay);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::numbersOnly);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   double firstnum, secondnum, answer;
	   String^ charOp;

private: System::Void numbersOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ numb = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0") {
		txtDisplay->Text = numb->Text ;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + numb->Text;
	}
}

private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text =   txtDisplay->Text + "-";
	}
}

private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	firstnum = double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOp = Aop->Text;

}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnPoint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void btnEq_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = double::Parse(txtDisplay->Text);
	if (charOp == "+") {
		answer = firstnum + secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOp == "-") {
		answer = firstnum - secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOp == "*") {
		answer = firstnum * secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOp == "/") {
		answer = firstnum / secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
}
};
}
