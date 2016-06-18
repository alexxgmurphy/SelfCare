#pragma once

#include "wx/wx.h"

// new application type, derived from wxApp
class scApp : public wxApp
{
public:
	// override base class virtuals

	// called on application startup
	virtual bool OnInit() wxOVERRIDE;
};