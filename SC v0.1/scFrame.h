#pragma once

#include "wx/wx.h"

// Define a new frame type derived from wxFrame
class scFrame : public wxFrame
{
public:
	// ctor(s)
	scFrame(const wxString & title, int xpos, int ypos, int width, int height);

	// event handlers
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);

private:
	// any class wishing to process wxWidgets events must use this macro
	wxDECLARE_EVENT_TABLE();
};