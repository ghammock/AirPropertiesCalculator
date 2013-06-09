#pragma once

namespace AirProperties {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    using namespace System::IO;
    using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
            : state(new Air)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            usingTemp = true;
            validState = false;

            this->output->Text  = L"Pressure is required.";
            this->output->Text += L"\r\n\r\n";
            this->output->Text += L"Select either temperature or enthalpy";
            this->output->Text += L"\r\n";
            this->output->Text += L"as the second property.";
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
    private: System::Windows::Forms::Button^  calculateButton;
    private: System::Windows::Forms::Label^  pressureLabel;
    private: System::Windows::Forms::TextBox^  pressureInput;
    private: System::Windows::Forms::Label^  pressureUnits;
    private: System::Windows::Forms::Label^  TH_Units;





    private: System::Windows::Forms::TextBox^  TH_Input;
    private: System::Windows::Forms::Label^  TH_Label;
    private: System::Windows::Forms::Panel^  outputContainer;





    private: System::Windows::Forms::Button^  exitButton;

    private: System::Windows::Forms::RadioButton^  temperatureRadioButton;
    private: System::Windows::Forms::RadioButton^  enthalpyRadioButton;
    private: System::Windows::Forms::Label^  propertyInstructions;
    protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
        Air *state;
        bool usingTemp;
        bool validState;

    private: System::Windows::Forms::Label^  attribution;
    private: System::Windows::Forms::PictureBox^  attributionImage;
    private: System::Windows::Forms::TextBox^  output;
    private: System::Windows::Forms::SaveFileDialog^  saveOutputDialog;
    private: System::Windows::Forms::Button^  aboutButton;
    private: System::Windows::Forms::Button^  writeOutButton;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->calculateButton = (gcnew System::Windows::Forms::Button());
            this->pressureLabel = (gcnew System::Windows::Forms::Label());
            this->pressureInput = (gcnew System::Windows::Forms::TextBox());
            this->pressureUnits = (gcnew System::Windows::Forms::Label());
            this->TH_Units = (gcnew System::Windows::Forms::Label());
            this->TH_Input = (gcnew System::Windows::Forms::TextBox());
            this->TH_Label = (gcnew System::Windows::Forms::Label());
            this->outputContainer = (gcnew System::Windows::Forms::Panel());
            this->output = (gcnew System::Windows::Forms::TextBox());
            this->exitButton = (gcnew System::Windows::Forms::Button());
            this->temperatureRadioButton = (gcnew System::Windows::Forms::RadioButton());
            this->enthalpyRadioButton = (gcnew System::Windows::Forms::RadioButton());
            this->propertyInstructions = (gcnew System::Windows::Forms::Label());
            this->attribution = (gcnew System::Windows::Forms::Label());
            this->attributionImage = (gcnew System::Windows::Forms::PictureBox());
            this->writeOutButton = (gcnew System::Windows::Forms::Button());
            this->saveOutputDialog = (gcnew System::Windows::Forms::SaveFileDialog());
            this->aboutButton = (gcnew System::Windows::Forms::Button());
            this->outputContainer->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->attributionImage))->BeginInit();
            this->SuspendLayout();
            // 
            // calculateButton
            // 
            this->calculateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->calculateButton->Location = System::Drawing::Point(12, 177);
            this->calculateButton->Name = L"calculateButton";
            this->calculateButton->Size = System::Drawing::Size(94, 32);
            this->calculateButton->TabIndex = 4;
            this->calculateButton->Text = L"Calculate";
            this->calculateButton->UseVisualStyleBackColor = true;
            this->calculateButton->Click += gcnew System::EventHandler(this, &Form1::calculateButton_Click);
            // 
            // pressureLabel
            // 
            this->pressureLabel->AutoSize = true;
            this->pressureLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->pressureLabel->Location = System::Drawing::Point(9, 12);
            this->pressureLabel->Name = L"pressureLabel";
            this->pressureLabel->Size = System::Drawing::Size(65, 17);
            this->pressureLabel->TabIndex = 1;
            this->pressureLabel->Text = L"Pressure";
            // 
            // pressureInput
            // 
            this->pressureInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->pressureInput->Location = System::Drawing::Point(100, 12);
            this->pressureInput->Name = L"pressureInput";
            this->pressureInput->Size = System::Drawing::Size(79, 23);
            this->pressureInput->TabIndex = 0;
            this->pressureInput->TextChanged += gcnew System::EventHandler(this, &Form1::pressureInput_TextChanged);
            // 
            // pressureUnits
            // 
            this->pressureUnits->AutoSize = true;
            this->pressureUnits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->pressureUnits->Location = System::Drawing::Point(185, 15);
            this->pressureUnits->Name = L"pressureUnits";
            this->pressureUnits->Size = System::Drawing::Size(36, 17);
            this->pressureUnits->TabIndex = 3;
            this->pressureUnits->Text = L"MPa";
            // 
            // TH_Units
            // 
            this->TH_Units->AutoSize = true;
            this->TH_Units->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->TH_Units->Location = System::Drawing::Point(187, 145);
            this->TH_Units->Name = L"TH_Units";
            this->TH_Units->Size = System::Drawing::Size(17, 17);
            this->TH_Units->TabIndex = 9;
            this->TH_Units->Text = L"K";
            // 
            // TH_Input
            // 
            this->TH_Input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->TH_Input->Location = System::Drawing::Point(102, 142);
            this->TH_Input->Name = L"TH_Input";
            this->TH_Input->Size = System::Drawing::Size(79, 23);
            this->TH_Input->TabIndex = 3;
            this->TH_Input->TextChanged += gcnew System::EventHandler(this, &Form1::TH_Input_TextChanged);
            // 
            // TH_Label
            // 
            this->TH_Label->AutoSize = true;
            this->TH_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->TH_Label->Location = System::Drawing::Point(9, 145);
            this->TH_Label->Name = L"TH_Label";
            this->TH_Label->Size = System::Drawing::Size(90, 17);
            this->TH_Label->TabIndex = 7;
            this->TH_Label->Text = L"Temperature";
            // 
            // outputContainer
            // 
            this->outputContainer->Controls->Add(this->output);
            this->outputContainer->Location = System::Drawing::Point(245, 12);
            this->outputContainer->Name = L"outputContainer";
            this->outputContainer->Size = System::Drawing::Size(297, 361);
            this->outputContainer->TabIndex = 10;
            // 
            // output
            // 
            this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->output->Location = System::Drawing::Point(0, 0);
            this->output->Multiline = true;
            this->output->Name = L"output";
            this->output->ReadOnly = true;
            this->output->Size = System::Drawing::Size(297, 361);
            this->output->TabIndex = 0;
            this->output->TabStop = false;
            // 
            // exitButton
            // 
            this->exitButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->exitButton->Location = System::Drawing::Point(455, 379);
            this->exitButton->Name = L"exitButton";
            this->exitButton->Size = System::Drawing::Size(84, 32);
            this->exitButton->TabIndex = 7;
            this->exitButton->Text = L"Exit";
            this->exitButton->UseVisualStyleBackColor = true;
            this->exitButton->Click += gcnew System::EventHandler(this, &Form1::exitButton_Click);
            // 
            // temperatureRadioButton
            // 
            this->temperatureRadioButton->AutoSize = true;
            this->temperatureRadioButton->Checked = true;
            this->temperatureRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->temperatureRadioButton->Location = System::Drawing::Point(21, 74);
            this->temperatureRadioButton->Name = L"temperatureRadioButton";
            this->temperatureRadioButton->Size = System::Drawing::Size(108, 21);
            this->temperatureRadioButton->TabIndex = 1;
            this->temperatureRadioButton->TabStop = true;
            this->temperatureRadioButton->Text = L"Temperature";
            this->temperatureRadioButton->UseVisualStyleBackColor = true;
            this->temperatureRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::temperatureRadioButton_CheckedChanged);
            // 
            // enthalpyRadioButton
            // 
            this->enthalpyRadioButton->AutoSize = true;
            this->enthalpyRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->enthalpyRadioButton->Location = System::Drawing::Point(21, 97);
            this->enthalpyRadioButton->Name = L"enthalpyRadioButton";
            this->enthalpyRadioButton->Size = System::Drawing::Size(81, 21);
            this->enthalpyRadioButton->TabIndex = 2;
            this->enthalpyRadioButton->Text = L"Enthalpy";
            this->enthalpyRadioButton->UseVisualStyleBackColor = true;
            this->enthalpyRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::enthalpyRadioButton_CheckedChanged);
            // 
            // propertyInstructions
            // 
            this->propertyInstructions->AutoSize = true;
            this->propertyInstructions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->propertyInstructions->Location = System::Drawing::Point(7, 55);
            this->propertyInstructions->Name = L"propertyInstructions";
            this->propertyInstructions->Size = System::Drawing::Size(213, 17);
            this->propertyInstructions->TabIndex = 13;
            this->propertyInstructions->Text = L"Select the second property type.";
            // 
            // attribution
            // 
            this->attribution->AutoSize = true;
            this->attribution->Location = System::Drawing::Point(82, 381);
            this->attribution->Name = L"attribution";
            this->attribution->Size = System::Drawing::Size(163, 26);
            this->attribution->TabIndex = 14;
            this->attribution->Text = L"Air Properties Calculator\r\nCopyright (C) Gary Hammock, PE";
            // 
            // attributionImage
            // 
            this->attributionImage->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"attributionImage.Image")));
            this->attributionImage->Location = System::Drawing::Point(12, 347);
            this->attributionImage->Name = L"attributionImage";
            this->attributionImage->Size = System::Drawing::Size(64, 64);
            this->attributionImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->attributionImage->TabIndex = 15;
            this->attributionImage->TabStop = false;
            // 
            // writeOutButton
            // 
            this->writeOutButton->Enabled = false;
            this->writeOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->writeOutButton->Location = System::Drawing::Point(12, 228);
            this->writeOutButton->Name = L"writeOutButton";
            this->writeOutButton->Size = System::Drawing::Size(94, 32);
            this->writeOutButton->TabIndex = 5;
            this->writeOutButton->Text = L"Write to File";
            this->writeOutButton->UseVisualStyleBackColor = true;
            this->writeOutButton->Click += gcnew System::EventHandler(this, &Form1::writeOutButton_Click);
            // 
            // saveOutputDialog
            // 
            this->saveOutputDialog->DefaultExt = L"txt";
            this->saveOutputDialog->Filter = L"Text Files | *.txt";
            this->saveOutputDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveOutputDialog_FileOk);
            // 
            // aboutButton
            // 
            this->aboutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->aboutButton->Location = System::Drawing::Point(284, 379);
            this->aboutButton->Name = L"aboutButton";
            this->aboutButton->Size = System::Drawing::Size(84, 32);
            this->aboutButton->TabIndex = 6;
            this->aboutButton->Text = L"About";
            this->aboutButton->UseVisualStyleBackColor = true;
            this->aboutButton->Click += gcnew System::EventHandler(this, &Form1::aboutButton_Click);
            // 
            // Form1
            // 
            this->AcceptButton = this->calculateButton;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->CancelButton = this->exitButton;
            this->ClientSize = System::Drawing::Size(551, 428);
            this->Controls->Add(this->aboutButton);
            this->Controls->Add(this->writeOutButton);
            this->Controls->Add(this->attributionImage);
            this->Controls->Add(this->attribution);
            this->Controls->Add(this->propertyInstructions);
            this->Controls->Add(this->enthalpyRadioButton);
            this->Controls->Add(this->temperatureRadioButton);
            this->Controls->Add(this->exitButton);
            this->Controls->Add(this->outputContainer);
            this->Controls->Add(this->TH_Units);
            this->Controls->Add(this->TH_Input);
            this->Controls->Add(this->TH_Label);
            this->Controls->Add(this->pressureUnits);
            this->Controls->Add(this->pressureInput);
            this->Controls->Add(this->pressureLabel);
            this->Controls->Add(this->calculateButton);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(567, 466);
            this->MinimumSize = System::Drawing::Size(567, 466);
            this->Name = L"Form1";
            this->Text = L"Air Properties (SI)";
            this->outputContainer->ResumeLayout(false);
            this->outputContainer->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->attributionImage))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {
             Application::Exit();
         }
private: System::Void temperatureRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
             this->TH_Units->Text = L"K";
             this->TH_Label->Text = L"Temperature";
             usingTemp = true;
         }
private: System::Void enthalpyRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
             this->TH_Units->Text = L"kJ/kg";
             this->TH_Label->Text = L"Enthalpy";
             usingTemp = false;
         }
private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) {
             // Setup for marshaling the System::String
             using namespace Runtime::InteropServices;

             // Marshal the strings and convert them to double
			 const char* cstring;
             double pressure    = 0.0,
                    temperature = 0.0,
                    enthalpy    = 0.0;

             Double ^ P;
             Double ^ T;
             Double ^ h;
             Double ^ u;
             Double ^ s;
             Double ^ rho;
             Double ^ gamma;
             Double ^ a;
             Double ^ cp;
             Double ^ k;
             Double ^ pr;
             Double ^ mu;
             Double ^ nu;
             Double ^ z;
             Double ^ R;
             Double ^ M;
             Double ^ G;
             Double ^ H;
             Double ^ refr;

             cstring  = (const char*)(Marshal::StringToHGlobalAnsi(pressureInput->Text)).ToPointer();
			 pressure = strtod(cstring, NULL);

             cstring  = (const char*)(Marshal::StringToHGlobalAnsi(TH_Input->Text)).ToPointer();
             if (TH_Input->TextLength > 0)
                 validState = true;

             if (usingTemp && validState)
             {
                 temperature = strtod(cstring, NULL);
                 if(state->calculateProperties(pressure, temperature))
                     validState = true;
                 else
                     validState = false;
             }

             else if (!usingTemp && validState)
             {
                 enthalpy = strtod(cstring, NULL);
                 if (state->calculateProps_PH(pressure, enthalpy))
                     validState = true;
                 else
                     validState = false;
             }

             Marshal::FreeHGlobal(IntPtr((void*)cstring));

             if (validState)
             {
                 this->writeOutButton->Enabled = true;

                 P = state->getPressure();
                 T = state->getTemperature();
                 h = state->getEnthalpy();
                 u = state->getInternalEnergy();
                 s = state->getEntropy();
                 rho = state->getDensity();
                 gamma = state->getGamma();
                 a = state->getSoundSpeed();
                 cp = state->getSpecificHeat();
                 k = state->getThermalConductivity();
                 pr = state->getPrandtlNumber();
                 mu = state->getDynamicViscosity();
                 nu = state->getKinematicViscosity();
                 z = state->getCompressibilityFactor();
                 R = state->getGasConstant();
                 M = state->getMolarMass();
                 G = state->getGibbsFreeEnergy();
                 H = state->getHelmholtzFreeEnergy();
                 refr = state->getRefractionIndex();

                 this->output->Text = L"Calculated Properties:\r\n\r\n";

                 this->output->Text += L"P: ";
                 this->output->Text += P->ToString("F3");
                 this->output->Text += L" MPa\r\n";

                 this->output->Text += L"T: ";
                 this->output->Text += T->ToString("F2");
                 this->output->Text += L" K\r\n";

                 this->output->Text += L"h: ";
                 this->output->Text += h->ToString("F2");
                 this->output->Text += L" kJ/kg\r\n";

                 this->output->Text += L"u: ";
                 this->output->Text += u->ToString("F2");
                 this->output->Text += L" kJ/kg\r\n";

                 this->output->Text += L"s: ";
                 this->output->Text += s->ToString("F2");
                 this->output->Text += L" kJ/kg-K\r\n";

                 this->output->Text += L"Density: ";
                 this->output->Text += rho->ToString("#0.0000");
                 this->output->Text += L" kg/m^3\r\n";

                 this->output->Text += L"Gamma: ";
                 this->output->Text += gamma->ToString("F3");
                 this->output->Text += L"\r\n";

                 this->output->Text += L"Sonic Velocity: ";
                 this->output->Text += a->ToString("F1");
                 this->output->Text += L" m/s\r\n";

                 this->output->Text += L"cp: ";
                 this->output->Text += cp->ToString("#0.00000");
                 this->output->Text += L" kJ/kg-K\r\n";

                 this->output->Text += L"k: ";
                 this->output->Text += k->ToString("#0.00000");
                 this->output->Text += L" W/m-K\r\n";

                 this->output->Text += L"Pr: ";
                 this->output->Text += pr->ToString("F3");
                 this->output->Text += L"\r\n";

                 this->output->Text += L"Dynamic Viscosity (mu): ";
                 this->output->Text += mu->ToString("E3");
                 this->output->Text += L" kg/m-s\r\n";

                 this->output->Text += L"Kinematic Viscosity (nu): ";
                 this->output->Text += nu->ToString("E3");
                 this->output->Text += L" m^2/s\r\n";

                 this->output->Text += L"Z: ";
                 this->output->Text += z->ToString("F3");
                 this->output->Text += L"\r\n";

                 this->output->Text += L"R: ";
                 this->output->Text += R->ToString("F3");
                 this->output->Text += L" kJ/kg-K\r\n";

                 this->output->Text += L"M: ";
                 this->output->Text += M->ToString("F3");
                 this->output->Text += L" kg/kmol\r\n";

                 this->output->Text += L"G: ";
                 this->output->Text += G->ToString("F2");
                 this->output->Text += L" kJ/kg\r\n";

                 this->output->Text += L"H: ";
                 this->output->Text += H->ToString("F2");
                 this->output->Text += L" kJ/kg\r\n";

                 this->output->Text += L"Index of Refraction: ";
                 this->output->Text += refr->ToString("#0.000000");
                 this->output->Text += L"\r\n";
             }
             else
             {
                 this->output->Text = L"The inputs that you provided were not valid.";
                 this->output->Text += L"\r\n\r\n";
                 this->output->Text += L"The valid range for Pressure is:\r\n";
                 this->output->Text += L"    1E-5 MPa to 10 MPa.\r\n\r\n";
                 this->output->Text += L"The valid range for Temperature is:\r\n";
                 this->output->Text += L"    0 to 30,000 K.";
             }
         }
private: System::Void pressureInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
            this->output->Text = L"Pressure is required.";
            this->output->Text += L"\r\n\r\n";
            this->output->Text += L"Select either temperature or enthalpy";
            this->output->Text += L"\r\n";
            this->output->Text += L"as the second property.";
         }
private: System::Void TH_Input_TextChanged(System::Object^  sender, System::EventArgs^  e) {
            this->output->Text = L"Pressure is required.";
            this->output->Text += L"\r\n\r\n";
            this->output->Text += L"Select either temperature or enthalpy";
            this->output->Text += L"\r\n";
            this->output->Text += L"as the second property.";
         }
private: System::Void writeOutButton_Click(System::Object^  sender, System::EventArgs^  e) {
             saveOutputDialog->InitialDirectory = Application::StartupPath;
             saveOutputDialog->RestoreDirectory = true;

             Stream ^ filestream;
             MemoryStream ^ fileoutput;

             String ^ toWriteOut;
             toWriteOut  = L"Air Properties Calculator\r\n";
             toWriteOut += L"By: Gary Hammock, PE\r\n\r\n";

             toWriteOut += this->output->Text;

             UnicodeEncoding ^ uniEncoding = gcnew UnicodeEncoding;
             array <Byte> ^ outText = uniEncoding->GetBytes(toWriteOut);

             if (saveOutputDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
             {
                 filestream = saveOutputDialog->OpenFile();

                 fileoutput = gcnew MemoryStream (outText->Length);
                 fileoutput->Write(outText, 0, outText->Length);

                 fileoutput->Position = 0;
                 fileoutput->WriteTo(filestream);

                 filestream->Close();
                 fileoutput->Close();
             }
         }
private: System::Void saveOutputDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

         }
private: System::Void aboutButton_Click(System::Object^  sender, System::EventArgs^  e) {
             airProperties::about ^ aboutDialog = gcnew airProperties::about();
             aboutDialog->Show();
         }
};
}

