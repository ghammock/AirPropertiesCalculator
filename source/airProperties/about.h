#pragma once

#include "references.h"

namespace airProperties {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for about
	/// </summary>
	public ref class about : public System::Windows::Forms::Form
	{
	public:
		about(void)
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
		~about()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^  license;
    protected: 
    private: System::Windows::Forms::PictureBox^  aboutImage;
    private: System::Windows::Forms::Button^  closeButton;
    private: System::Windows::Forms::Button^  referencesButton;

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(about::typeid));
            this->license = (gcnew System::Windows::Forms::Label());
            this->aboutImage = (gcnew System::Windows::Forms::PictureBox());
            this->closeButton = (gcnew System::Windows::Forms::Button());
            this->referencesButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->aboutImage))->BeginInit();
            this->SuspendLayout();
            // 
            // license
            // 
            this->license->AutoSize = true;
            this->license->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->license->Location = System::Drawing::Point(148, 9);
            this->license->Name = L"license";
            this->license->Size = System::Drawing::Size(492, 336);
            this->license->TabIndex = 0;
            this->license->Text = resources->GetString(L"license.Text");
            // 
            // aboutImage
            // 
            this->aboutImage->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutImage.Image")));
            this->aboutImage->Location = System::Drawing::Point(12, 12);
            this->aboutImage->Name = L"aboutImage";
            this->aboutImage->Size = System::Drawing::Size(120, 120);
            this->aboutImage->TabIndex = 1;
            this->aboutImage->TabStop = false;
            // 
            // closeButton
            // 
            this->closeButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->closeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->closeButton->Location = System::Drawing::Point(564, 357);
            this->closeButton->Name = L"closeButton";
            this->closeButton->Size = System::Drawing::Size(84, 32);
            this->closeButton->TabIndex = 2;
            this->closeButton->Text = L"Close";
            this->closeButton->UseVisualStyleBackColor = true;
            this->closeButton->Click += gcnew System::EventHandler(this, &about::closeButton_Click);
            // 
            // referencesButton
            // 
            this->referencesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->referencesButton->Location = System::Drawing::Point(151, 357);
            this->referencesButton->Name = L"referencesButton";
            this->referencesButton->Size = System::Drawing::Size(100, 32);
            this->referencesButton->TabIndex = 3;
            this->referencesButton->Text = L"References";
            this->referencesButton->UseVisualStyleBackColor = true;
            this->referencesButton->Click += gcnew System::EventHandler(this, &about::referencesButton_Click);
            // 
            // about
            // 
            this->AcceptButton = this->closeButton;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->CancelButton = this->closeButton;
            this->ClientSize = System::Drawing::Size(660, 401);
            this->Controls->Add(this->referencesButton);
            this->Controls->Add(this->closeButton);
            this->Controls->Add(this->aboutImage);
            this->Controls->Add(this->license);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"about";
            this->Text = L"Air Properties - About";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->aboutImage))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
                 this->Close();
             }
private: System::Void referencesButton_Click(System::Object^  sender, System::EventArgs^  e) {
             airProperties::references ^ refDialog = gcnew airProperties::references();
             refDialog->Show();
         }
};
}
