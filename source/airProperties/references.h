#pragma once

namespace airProperties {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for references
	/// </summary>
	public ref class references : public System::Windows::Forms::Form
	{
	public:
		references(void)
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
		~references()
		{
			if (components)
			{
				delete components;
			}
		}

    private: System::Windows::Forms::Label^  referencesHeader;
    protected: 

    protected: 

    private: System::Windows::Forms::Button^  closeButton;
    private: System::Windows::Forms::TextBox^  referencesText;


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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(references::typeid));
            this->referencesHeader = (gcnew System::Windows::Forms::Label());
            this->closeButton = (gcnew System::Windows::Forms::Button());
            this->referencesText = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // referencesHeader
            // 
            this->referencesHeader->AutoSize = true;
            this->referencesHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->referencesHeader->Location = System::Drawing::Point(11, 8);
            this->referencesHeader->Name = L"referencesHeader";
            this->referencesHeader->Size = System::Drawing::Size(179, 20);
            this->referencesHeader->TabIndex = 1;
            this->referencesHeader->Text = L"Program References:";
            // 
            // closeButton
            // 
            this->closeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->closeButton->Location = System::Drawing::Point(492, 238);
            this->closeButton->Name = L"closeButton";
            this->closeButton->Size = System::Drawing::Size(84, 32);
            this->closeButton->TabIndex = 2;
            this->closeButton->Text = L"Close";
            this->closeButton->UseVisualStyleBackColor = true;
            this->closeButton->Click += gcnew System::EventHandler(this, &references::closeButton_Click);
            // 
            // referencesText
            // 
            this->referencesText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->referencesText->Location = System::Drawing::Point(15, 31);
            this->referencesText->Multiline = true;
            this->referencesText->Name = L"referencesText";
            this->referencesText->ReadOnly = true;
            this->referencesText->Size = System::Drawing::Size(563, 201);
            this->referencesText->TabIndex = 3;
            this->referencesText->Text = resources->GetString(L"referencesText.Text");
            // 
            // references
            // 
            this->AcceptButton = this->closeButton;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->CancelButton = this->closeButton;
            this->ClientSize = System::Drawing::Size(590, 282);
            this->Controls->Add(this->referencesText);
            this->Controls->Add(this->closeButton);
            this->Controls->Add(this->referencesHeader);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
            this->Name = L"references";
            this->Text = L"Air Properties - References";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
                 this->Close();
             }
    };
}
