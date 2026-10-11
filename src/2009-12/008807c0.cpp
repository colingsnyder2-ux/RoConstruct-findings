// from server: 63% by atomic.potato
typedef unsigned long DWORD;
typedef void* HWND;
typedef long LRESULT;
typedef unsigned int UINT;
typedef unsigned int WPARAM;
typedef long LPARAM;

extern "C" DWORD __stdcall GetClassLongA(HWND, int);
extern "C" LRESULT __stdcall SendMessageA(HWND, UINT, WPARAM, LPARAM);

int __stdcall func_008807c0(HWND hWnd)
{
    if (!hWnd)
        return 0;

    HWND value = *(HWND*)((char*)hWnd + 0x20);
    if (GetClassLongA(value, 0x7f))
        return 0;

    value = *(HWND*)((char*)hWnd + 0x20);
    SendMessageA(value, 1, 0, (LPARAM)-14);
    return 0;
}
