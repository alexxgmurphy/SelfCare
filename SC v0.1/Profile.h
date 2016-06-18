#pragma once

#include <fstream>
#include <memory>
#include <vector>
#include <wx\msgdlg.h>

class User
{
private:
	std::string mName;
	int mAge;
	std::string mGender;
	std::vector<std::string> mPronouns;

public:
	User();
	void LoadUser();
	void NewUser();
};