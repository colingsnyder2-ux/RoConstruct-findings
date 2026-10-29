// Links every exact function the module swaps in (force_verified.h, written by roc/rebuild.py build_module).
#include "force_verified.h"
#include <afxwin.h>
#include <stdio.h>
#pragma comment(lib, "oleacc.lib")
#pragma comment(lib, "gdiplus.lib")

int main()
{
    if (!AfxWinInit(GetModuleHandle(NULL), NULL, GetCommandLine(), 0))
        return 1;
    CString text("native");
    text += " MFC";
    printf("%s\n", (LPCSTR)text);
    return text == "native MFC" ? 0 : 2;
}
