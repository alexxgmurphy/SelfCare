#include "scApp.h"
#include "scFrame.h"
#include "Profile.h"

// application icon
#ifndef wxHAS_IMAGES_IN_RESOURCES
    #include "../sample.xpm"
#endif

// create a new application object
wxIMPLEMENT_APP(scApp);

// program execution starts here; equivalent to main()
bool scApp::OnInit()
{
    // call the base class initialization method, currently only parses a
    // few common command-line options
    if ( !wxApp::OnInit() )
        return false;

    // create the main application window
    scFrame *frame = new scFrame("SelfCare wxWidgets App", 20, 20, 1000, 700);

    // and show it
    frame->Show(true);

	// create user profile
	std::shared_ptr<User> user = std::make_shared<User>();

    // success: wxApp::OnRun() will be called
    return true;
}
