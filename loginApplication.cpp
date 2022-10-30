#include "loginApplication.hpp"

#include "loginFrame.hpp"

bool LoginApplication::OnInit() {
    LoginFrame *loginFrame = new LoginFrame();
    loginFrame->Show(true);
    return true;
}