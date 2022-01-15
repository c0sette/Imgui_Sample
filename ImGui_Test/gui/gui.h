#pragma once
#include <d3d9.h>

namespace GUI
{
	//Chieu rong,cao GUI
	constexpr int chieu_cao = 300;
	constexpr int chieu_rong = 500;

	inline bool exit = true;

	//Thiet lap WINAPI
	inline HWND window = nullptr;
	inline WNDCLASSEX windowClass = {};

	//points for window movement
	inline POINTS pos = {};

	//d3d9
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentPara = {};

	//handle window create & destroy
	void CreateHWin(const char* WinName) noexcept;
	void DestroyHWin() noexcept;

	//handle device create & destroy
	bool CreateDev() noexcept;
	void ResetDev() noexcept;
	void DestroyDev() noexcept;

	//imgui create & destry
	void Create_Imgui() noexcept;
	void Destry_Imgui() noexcept;

	//Render imGui
	void begin_render() noexcept;
	void end_render() noexcept;
	void render() noexcept;
}