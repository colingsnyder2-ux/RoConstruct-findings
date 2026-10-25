// from server: 100% by tester
// roc 2011-06 004423f0  unit: CProgressDialog  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004423f0
//
// 004423f0  8b4104               mov eax, dword ptr [ecx + 4]
// 004423f3  6814040000           push 0x414
// 004423f8  50                   push eax
// 004423f9  ff15341ca400         call dword ptr [0xa41c34]
// 004423ff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00442403  51                   push ecx
// 00442404  50                   push eax
// 00442405  ff15381ca400         call dword ptr [0xa41c38]
// 0044240b  c20400               ret 4

typedef int HWND;
typedef unsigned int UINT;
typedef const char *LPCSTR;

extern "C" HWND __declspec(dllimport) __stdcall GetDlgItem(HWND, int);
extern "C" int __declspec(dllimport) __stdcall SetWindowTextA(HWND, LPCSTR);

struct CProgressDialog
{
    int unused;
    HWND hWnd;
    void f(LPCSTR);
};

void CProgressDialog::f(LPCSTR text)
{
    HWND control = GetDlgItem(hWnd, 0x414);
    SetWindowTextA(control, text);
}
