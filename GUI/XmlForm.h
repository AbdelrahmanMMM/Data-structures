#pragma once


/*
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QPrinter>
#include<QPrintDialog>
#include "XML_Parser.h"
#include "XML_Pretify.h"
#include "XML_Minify.h"
#include "XML_JSON.h"
#include "XML_Parser.h"
#include "main.h"
#include "fixdialog.h"
#include"XML_Compression.h"
//#include"stdafx.h"
//#include"XmlToJSON.h"
//#include <bits/stdc++.h>
*/


#include<string>
#include<sstream>
#include<fstream>
#include<tchar.h>
#include <iostream>
#include <vector>
#include <stack>
#include <msclr\marshal_cppstd.h>
#include "formatting.h"
#include "huffman.h"
#include "parcing.h"
#include "Xml_JSON.h"



#using<mscorlib.dll>
#using<System.xml.dll>


namespace XmlEditor {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace Runtime::InteropServices;


	/// <summary>
	/// Summary for XmlForm
	/// </summary>
	public ref class XmlForm : public System::Windows::Forms::Form
	{
	public:
		XmlForm(void)
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
		~XmlForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^  tb2;
	protected:


	protected:

	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::GroupBox^  gb;
	private: System::Windows::Forms::RadioButton^  rb4;
	private: System::Windows::Forms::RadioButton^  rb3;
	private: System::Windows::Forms::RadioButton^  rb2;

	private: System::Windows::Forms::RadioButton^  rb;
	private: System::Windows::Forms::RadioButton^  rb5;
	private: System::Windows::Forms::RadioButton^  rb6;
	private: System::Windows::Forms::RichTextBox^  tb1;
	private: System::Windows::Forms::RadioButton^  rb7;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(XmlForm::typeid));
			this->tb2 = (gcnew System::Windows::Forms::RichTextBox());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->gb = (gcnew System::Windows::Forms::GroupBox());
			this->rb6 = (gcnew System::Windows::Forms::RadioButton());
			this->rb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rb = (gcnew System::Windows::Forms::RadioButton());
			this->rb7 = (gcnew System::Windows::Forms::RadioButton());
			this->rb4 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->tb1 = (gcnew System::Windows::Forms::RichTextBox());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->gb->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb2
			// 
			resources->ApplyResources(this->tb2, L"tb2");
			this->tb2->Name = L"tb2";
			// 
			// b1
			// 
			resources->ApplyResources(this->b1, L"b1");
			this->b1->Name = L"b1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &XmlForm::b1_Click);
			// 
			// b2
			// 
			resources->ApplyResources(this->b2, L"b2");
			this->b2->Name = L"b2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &XmlForm::b2_Click);
			// 
			// gb
			// 
			resources->ApplyResources(this->gb, L"gb");
			this->gb->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->gb->Controls->Add(this->rb6);
			this->gb->Controls->Add(this->rb5);
			this->gb->Controls->Add(this->rb);
			this->gb->Controls->Add(this->rb7);
			this->gb->Controls->Add(this->rb4);
			this->gb->Controls->Add(this->rb3);
			this->gb->Controls->Add(this->rb2);
			this->gb->Name = L"gb";
			this->gb->TabStop = false;
			// 
			// rb6
			// 
			resources->ApplyResources(this->rb6, L"rb6");
			this->rb6->Name = L"rb6";
			this->rb6->TabStop = true;
			this->rb6->UseVisualStyleBackColor = true;
			// 
			// rb5
			// 
			resources->ApplyResources(this->rb5, L"rb5");
			this->rb5->Name = L"rb5";
			this->rb5->UseVisualStyleBackColor = true;
			// 
			// rb
			// 
			resources->ApplyResources(this->rb, L"rb");
			this->rb->Name = L"rb";
			this->rb->TabStop = true;
			this->rb->UseVisualStyleBackColor = true;
			this->rb->CheckedChanged += gcnew System::EventHandler(this, &XmlForm::rb5_CheckedChanged);
			// 
			// rb7
			// 
			resources->ApplyResources(this->rb7, L"rb7");
			this->rb7->Name = L"rb7";
			this->rb7->TabStop = true;
			this->rb7->UseVisualStyleBackColor = true;
			this->rb7->CheckedChanged += gcnew System::EventHandler(this, &XmlForm::rb4_CheckedChanged);
			// 
			// rb4
			// 
			resources->ApplyResources(this->rb4, L"rb4");
			this->rb4->Name = L"rb4";
			this->rb4->TabStop = true;
			this->rb4->UseVisualStyleBackColor = true;
			this->rb4->CheckedChanged += gcnew System::EventHandler(this, &XmlForm::rb4_CheckedChanged);
			// 
			// rb3
			// 
			resources->ApplyResources(this->rb3, L"rb3");
			this->rb3->Name = L"rb3";
			this->rb3->TabStop = true;
			this->rb3->UseVisualStyleBackColor = true;
			this->rb3->CheckedChanged += gcnew System::EventHandler(this, &XmlForm::rb3_CheckedChanged);
			// 
			// rb2
			// 
			resources->ApplyResources(this->rb2, L"rb2");
			this->rb2->Name = L"rb2";
			this->rb2->TabStop = true;
			this->rb2->UseVisualStyleBackColor = true;
			this->rb2->CheckedChanged += gcnew System::EventHandler(this, &XmlForm::rb2_CheckedChanged);
			// 
			// tb1
			// 
			resources->ApplyResources(this->tb1, L"tb1");
			this->tb1->Name = L"tb1";
			// 
			// l1
			// 
			this->l1->BackColor = System::Drawing::SystemColors::Info;
			this->l1->ForeColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->l1, L"l1");
			this->l1->Name = L"l1";
			// 
			// l2
			// 
			resources->ApplyResources(this->l2, L"l2");
			this->l2->BackColor = System::Drawing::SystemColors::Info;
			this->l2->ForeColor = System::Drawing::Color::Black;
			this->l2->Name = L"l2";
			// 
			// XmlForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->gb);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->tb2);
			this->HelpButton = true;
			this->Name = L"XmlForm";
			this->Load += gcnew System::EventHandler(this, &XmlForm::XmlForm_Load);
			this->gb->ResumeLayout(false);
			this->gb->PerformLayout();
			this->ResumeLayout(false);

		}

			


#pragma endregion
private: System::Void XmlForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rb1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}







public: System::Void b1_Click(System::Object^  sender, System::EventArgs^  e) {

	Stream^ s;
	

	String^ fn;



	OpenFileDialog^ f1 = gcnew OpenFileDialog;
	if (f1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((s = f1->OpenFile()) != nullptr) {
			fn = f1->InitialDirectory + f1->FileName;

			String^ rf = File::ReadAllText(fn);
			//MessageBox::Show(fn);

			s->Close();
			tb1->Text = rf;
		}
	}

		string str = msclr::interop::marshal_as<string>(fn);

		ifstream x(str);
		string z;
		ofstream y("test.xml");

		while (!x.eof()) {

			getline(x, z);
			y << z << endl;

		}

		y.close();
		x.close();

}


			//String^ fn = msclr::interop::marshal_as<String^>(str);

			//string str = msclr::interop::marshal_as<string>(tb1->Text);
			




	public: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) {


		//String^ fname;

		//string str1 = msclr::interop::marshal_as<string>(fname);
		//string path = str1 + ".xml";


		string Path = "test.xml";


		







		if (rb6->Checked == true) { //Fix erorrs

			//StreamReader inFile("te.xml", System::Text::Encoding::Default);

			//tb1->Text = inFile.ReadLine();
			//inFile.Close();

			

			check(unformattingInOneLine(Path));

			StreamReader File("fix.xml");

			tb2->Text = File.ReadToEnd();

			File.Close();

			

		}







		else if (rb5->Checked == true) { //Menifying

			//StreamWriter^ outFile = gcnew StreamWriter("test.xml");
			//outFile->Write(tb1->Text);
			//outFile->Close();

			
			unformattingInOneLine(Path);


			StreamReader File("oneLine.xml");

			tb2->Text = File.ReadToEnd();
			
			File.Close();
		
		}






		else if (rb2->Checked == true) { //Formatting

			unFormatting(Path);

			FORMAT("test2.xml");


			StreamReader File("test3.xml");

			tb2->Text = File.ReadToEnd();

			File.Close();

		}



		else if (rb3->Checked == true) { //Xml to JSON

			XMLJSON(Path);

			StreamReader File("Json.txt");

			tb2->Text = File.ReadToEnd();

			File.Close();


		}





		else if (rb4->Checked == true) { //Compressing


			ostringstream i, o;

			ifstream in(Path);
			in.seekg(0, ios::end);
			int x = in.tellg();
			i << x;
			string is = i.str();

			compresing(Path);

			
			ifstream out("test.txt.huf");
			out.seekg(0, ios::end);
			int y = out.tellg();
			o << y;
			string os = o.str();

			//String^ isize = msclr::interop::marshal_as<String^>(is);
			//String^ osize = msclr::interop::marshal_as<String^>(os);

			string output = "The file size before compresing is: " + is + " bytes\nThe file size after compresing is:" + os + " bytes";

			String^ show = msclr::interop::marshal_as<String^>(output);

			StreamReader File("test.txt.huf");

			tb2->Text = File.ReadToEnd();

			File.Close();

			MessageBox::Show(show);

			
		}




		else if (rb7->Checked == true) { //UnCompressing



			String^ path = msclr::interop::marshal_as<String^>(Path);

			StreamReader File(path);

			tb2->Text = File.ReadToEnd();

			File.Close();


		}




		else { //Saving

			//StreamWriter^ outFile = gcnew StreamWriter(tb->Text + ".xml");
			//outFile->Write(tb2->Text);
			//outFile->Close();
			//MessageBox::Show("Your file saved in the program files...");

			Stream^ s1;
			SaveFileDialog^ f2 = gcnew SaveFileDialog;
			if (f2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((s1 = f2->OpenFile()) != nullptr) {
					String^ fname = f2->InitialDirectory + f2->FileName;

					StreamWriter^ outFile = gcnew StreamWriter(fname + ".xml");
					outFile->Write(tb2->Text);
					outFile->Close();
					MessageBox::Show("The file saved ...\n\n" + fname + ".xml");
					s1->Close();

					
				}
			}
		}



	}



private: System::Void rb2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rb3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rb4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rb5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
