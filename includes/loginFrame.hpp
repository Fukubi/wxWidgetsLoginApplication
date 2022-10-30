#ifndef LOGINFRAME_HPP
#define LOGINFRAME_HPP

#include <wx/frame.h>

class LoginFrame : public wxFrame {
public:
    LoginFrame();

private:
    enum {
        LOGIN_BTN = 1,
    };
};

#endif