#include "pch.h"
#include <iostream>
#include <Windows.h>

void Set_rus_cursor()
{
	//подгружаем русские курсоры
	HCURSOR rus_arrow = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgarro.cur");
	HCURSOR rus_help = LoadCursorFromFile(L"c:\\Windows\\Cursors\\help_i_rus.cur");
	HCURSOR rus_move = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dsmove.cur");
	HCURSOR rus_no = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgno.cur");
	HCURSOR rus_pen = LoadCursorFromFile(L"c:\\Windows\\Cursors\\text_rus_cursor.cur");
	HCURSOR rus_diag_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgnesw.cur");
	HCURSOR rus_vert_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgns.cur");
	HCURSOR rus_diag_arrows2 = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgnwse.cur");
	HCURSOR rus_horizont_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\3dgwe.cur");
	HCURSOR rus_href = LoadCursorFromFile(L"c:\\Windows\\Cursors\\up_i_rus.cur");
	HCURSOR rus_wait = LoadCursorFromFile(L"c:\\Windows\\Cursors\\dinosaur2.ani");
	SetSystemCursor(rus_arrow, 32512);
	SetSystemCursor(rus_help, 32650);
	SetSystemCursor(rus_move, 32515);
	SetSystemCursor(rus_href, 32649);
	SetSystemCursor(rus_help, 32651);
	SetSystemCursor(rus_pen, 32513);
	SetSystemCursor(rus_no, 32648);
	SetSystemCursor(rus_move, 32646);
	SetSystemCursor(rus_diag_arrows, 32643);
	SetSystemCursor(rus_vert_arrows, 32645);
	SetSystemCursor(rus_diag_arrows2, 32642);
	SetSystemCursor(rus_horizont_arrows, 32644);
	SetSystemCursor(rus_href, 32516);
	SetSystemCursor(rus_wait, 32514);

}
void Set_en_cursor()
{
	//подгружаем английские курсоры
	HCURSOR en_arrow = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_arrow.cur");
	HCURSOR en_help = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_helpsel.cur");
	HCURSOR en_move = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_move.cur");
	HCURSOR en_no = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_unavail.cur");
	HCURSOR en_pen = LoadCursorFromFile(L"c:\\Windows\\Cursors\\beam_r.cur");
	HCURSOR en_diag_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_nesw.cur");
	HCURSOR en_vert_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_ns.cur");
	HCURSOR en_diag_arrows2 = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_nwse.cur");
	HCURSOR en_horizont_arrows = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_ew.cur");
	HCURSOR en_href = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_link.cur");
	HCURSOR en_wait = LoadCursorFromFile(L"c:\\Windows\\Cursors\\aero_busy.ani");

	SetSystemCursor(en_arrow, 32512);
	SetSystemCursor(en_help, 32650);
	SetSystemCursor(en_move, 32515);
	SetSystemCursor(en_href, 32649);
	SetSystemCursor(en_help, 32651);
	SetSystemCursor(en_pen, 32513);
	SetSystemCursor(en_no, 32648);
	SetSystemCursor(en_move, 32646);
	SetSystemCursor(en_diag_arrows, 32643);
	SetSystemCursor(en_vert_arrows, 32645);
	SetSystemCursor(en_diag_arrows2, 32642);
	SetSystemCursor(en_horizont_arrows, 32644);
	SetSystemCursor(en_href, 32516);
	SetSystemCursor(en_wait, 32514);
}

int main(int argc, char **argv)
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	while (true)
	{

		HWND window_handle = GetForegroundWindow();
		DWORD thread = GetWindowThreadProcessId(window_handle, 0);
		HKL locale = GetKeyboardLayout(thread);
		std::cout << LOWORD(locale) << "\n";
		if (LOWORD(locale) == 1033)
		{
			std::cout << "en" << "\n";
			Set_en_cursor();
		}
		if (LOWORD(locale) == 1049)
		{
			std::cout << "ru" << "\n";
			Set_rus_cursor();
		}
		//en 1033 ru 1049
		Sleep(500); //milliseconds for waiting
	}
}