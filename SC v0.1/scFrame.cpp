#include "scFrame.h"
#include <fstream>

// IDs for the controls and the menu commands
enum
{
	// menu items
	SelfCare_Quit = wxID_EXIT,
	SelfCare_About = wxID_ABOUT
};

// event tables connect wxWidgets events with the event handlers
// which process them.
wxBEGIN_EVENT_TABLE(scFrame, wxFrame)
EVT_MENU(SelfCare_Quit, scFrame::OnQuit)
EVT_MENU(SelfCare_About, scFrame::OnAbout)
wxEND_EVENT_TABLE()

// frame constructor
scFrame::scFrame(const wxString & title, int xpos, int ypos, int width, int height)
	: wxFrame(NULL, wxID_ANY, title, wxPoint(xpos, ypos), wxSize(width, height))
{
	// set the frame icon
	SetIcon(wxICON(sample));

	// create a menu bar
	wxMenu *fileMenu = new wxMenu;

	// the "About" item should be in the help menu
	wxMenu *helpMenu = new wxMenu;
	helpMenu->Append(SelfCare_About, "&About\tF1", "Show about dialog");

	fileMenu->Append(SelfCare_Quit, "E&xit\tAlt-X", "Quit this program");

	// now append the freshly created menu to the menu bar...
	wxMenuBar *menuBar = new wxMenuBar();
	menuBar->Append(fileMenu, "&File");
	menuBar->Append(helpMenu, "&Help");

	// ... and attach this menu bar to the frame
	SetMenuBar(menuBar);

	// add a panel
	wxPanel *panel = new wxPanel(this, wxID_ANY);

#if wxUSE_STATUSBAR
	// create a status bar just for fun (by default with 1 pane only)
	CreateStatusBar(2);
	SetStatusText("Welcome to wxWidgets!");
#endif // wxUSE_STATUSBAR
}

// event handlers
void scFrame::OnQuit(wxCommandEvent& WXUNUSED(event))
{
	// true is to force the frame to close
	Close(true);
}

void scFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
	// displays build/OS information
	wxMessageBox(wxString::Format
	(
		"Welcome to SelfCare!\n"
		"\n"
		"This is the SelfCare Alpha version 0.1\n"
		"running under %s.",
		wxGetOsDescription()
	),
		"About SlefCare v0.1 Alpha",
		wxOK | wxICON_INFORMATION,
		this);
}