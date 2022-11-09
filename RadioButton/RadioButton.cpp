#include <windows.h>
#include <tchar.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

HWND hButton, hEdit1, hEdit2;
int TrueAnswer = 0, MaxAnswer = 8;

TCHAR str[50];
TCHAR percent[] = TEXT("%");
TCHAR idok1[50];
TCHAR idok2[50];

TCHAR CorrectBoxAnswer1[] = TEXT("������ ������");
TCHAR CorrectBoxAnswer2[] = TEXT("�����");
char szImageName[] = "BMImage"; 



int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case  WM_INITDIALOG: {
		//SendDlgItemMessage(hWnd, IDC_RADIO2, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO6, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO9, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO22, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO19, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO13, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO29, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO11, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO12, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO14, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO23, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
		//SendDlgItemMessage(hWnd, IDC_RADIO28, BM_SETCHECK, WPARAM(BST_CHECKED), 0);

		hButton = GetDlgItem(hWnd, IDC_BUTTON1);
		hEdit1 = GetDlgItem(hWnd, IDC_EDIT1);
		hEdit2 = GetDlgItem(hWnd, IDC_EDIT2);
	}
					   return TRUE;

	case WM_COMMAND: {
		if (LOWORD(wParam) == IDC_RADIO2) {
			SendDlgItemMessage(hWnd, IDC_RADIO2, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO6) {
			SendDlgItemMessage(hWnd, IDC_RADIO6, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO22) {
			SendDlgItemMessage(hWnd, IDC_RADIO22, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO11) {
			SendDlgItemMessage(hWnd, IDC_RADIO11, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO12) {
			SendDlgItemMessage(hWnd, IDC_RADIO12, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO13) {
			SendDlgItemMessage(hWnd, IDC_RADIO13, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO17) {
			SendDlgItemMessage(hWnd, IDC_RADIO17, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO23) {
			SendDlgItemMessage(hWnd, IDC_RADIO23, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO14) {
			SendDlgItemMessage(hWnd, IDC_RADIO14, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO17) {
			SendDlgItemMessage(hWnd, IDC_RADIO17, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO19) {
			SendDlgItemMessage(hWnd, IDC_RADIO19, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO28) {
			SendDlgItemMessage(hWnd, IDC_RADIO28, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_RADIO29) {
			SendDlgItemMessage(hWnd, IDC_RADIO29, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_CHECK1) {
			SendDlgItemMessage(hWnd, IDC_CHECK1, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_CHECK2) {
			SendDlgItemMessage(hWnd, IDC_CHECK2, BM_SETCHECK, WPARAM(BST_CHECKED), 0);
			TrueAnswer++;
		}
		if (LOWORD(wParam) == IDC_CHECK3 || LOWORD(wParam) == IDC_CHECK4) {
			TrueAnswer--;
		}
		if (LOWORD(wParam) == IDOK1) {
			int size1 = GetWindowTextLength(hEdit1);
			GetWindowText(hEdit1, idok1, size1 + 1);
			if (idok1 == CorrectBoxAnswer1) {
				TrueAnswer++;
			}
			else if (idok1 == NULL) {
				TrueAnswer--;
			}
			else if (idok1 != CorrectBoxAnswer1) {
				TrueAnswer--;
			}
		}
		if (LOWORD(wParam) == IDOK2) {
			int size2 = GetWindowTextLength(hEdit2);
			GetWindowText(hEdit2, idok2, size2 + 1);
			if (idok2 == CorrectBoxAnswer2) {
				TrueAnswer++;
			}
			else if (idok2 == NULL) {
				TrueAnswer--;
			}
			else if (idok2 != CorrectBoxAnswer2) {
				TrueAnswer--;
			}
		}

		if (LOWORD(wParam) == IDC_BUTTON1) {
			TrueAnswer = (double(TrueAnswer) / MaxAnswer) * 100;
			wsprintf(str, TEXT("��� ��������� = %d %hs"), TrueAnswer, percent);
			MessageBox(hWnd, str, TEXT("Result"), MB_OK);
			EndDialog(hWnd, 0);
		}
	}
				   return TRUE;
	}
	return FALSE;
}