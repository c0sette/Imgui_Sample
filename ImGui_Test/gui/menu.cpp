#include "gui.h"

#include <thread>

int __stdcall wWinMain(HINSTANCE hIns, HINSTANCE previousIns, PWSTR argu, int cmdShow)
{
	//create gui
	GUI::CreateHWin("Menu");
	GUI::CreateDev();
	GUI::Create_Imgui();

	while (GUI::exit)
	{
		//Render then delete each 10s
		GUI::begin_render();
		GUI::render();
		GUI::end_render();

		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}

	//destroy gui
	GUI::Destry_Imgui();
	GUI::DestroyDev();
	GUI::DestroyHWin();
	return EXIT_SUCCESS;
}