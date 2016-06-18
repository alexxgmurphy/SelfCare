#include "Profile.h"
#include <exception>

User::User()
{
	try
	{
		std::fstream save;
		save.open("user_data.txt");
		std::string line;
		if (std::getline(save, line))
		{
			LoadUser();
		}
		else
		{
			NewUser();
		}
	}
	catch (std::exception &e)
	{
		wxMessageBox("There was an error creating your user profile.\nPlease restart the application.\n\nError: ", e.what());
	}
}

void User::LoadUser()
{
	std::fstream save;
	save.open("user_data.txt");
}

void User::NewUser()
{

}