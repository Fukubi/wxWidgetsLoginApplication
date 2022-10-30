#include "loginFrame.hpp"

#include <wx/wx.h>

LoginFrame::LoginFrame() : wxFrame(NULL, wxID_ANY, "Login Application") {
  wxSize inputSize(200, 40);
  wxBoxSizer *verticalBox = new wxBoxSizer(wxVERTICAL);

  this->SetSizer(verticalBox);

  wxBoxSizer *usernameInputBox = new wxBoxSizer(wxHORIZONTAL);
  wxStaticText *usernameLabel = new wxStaticText(this, -1, "Username: ");
  wxTextCtrl *usernameInput = new wxTextCtrl(this, -1);

  usernameInput->SetMinSize(inputSize);
  usernameInput->SetMaxSize(inputSize);

  usernameInputBox->Add(usernameLabel);
  usernameInputBox->AddSpacer(10);
  usernameInputBox->Add(usernameInput);

  wxBoxSizer *passwordInputBox = new wxBoxSizer(wxHORIZONTAL);
  wxStaticText *passwordLabel = new wxStaticText(this, -1, "Password: ");

  wxTextCtrl *passwordInput = new wxTextCtrl(
      this, -1, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD);

  passwordInput->SetMinSize(inputSize);
  passwordInput->SetMaxSize(inputSize);

  passwordInputBox->Add(passwordLabel);
  passwordInputBox->AddSpacer(10);
  passwordInputBox->Add(passwordInput);

  wxButton *loginButton = new wxButton(this, LoginFrame::LOGIN_BTN, "Login");

  verticalBox->AddSpacer(20);
  verticalBox->Add(usernameInputBox);
  verticalBox->AddSpacer(20);
  verticalBox->Add(passwordInputBox);
  verticalBox->Add(loginButton);

  Bind(
      wxEVT_BUTTON,
      [=](wxCommandEvent &event) {
        if (passwordInput->GetValue() != "admin" ||
            usernameInput->GetValue() != "admin") {
          wxLogMessage("Usuario ou senha incorretos");
          return;
        }

        wxLogMessage("Login feito com sucesso!");
        this->Close(true);
      },
      LoginFrame::LOGIN_BTN);
}