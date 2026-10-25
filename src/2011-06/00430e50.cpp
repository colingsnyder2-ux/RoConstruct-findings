// from server: 100% by tester
// roc 2011-06 00430e50  unit: CMainFrame  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430e50
//
// 00430e50  b801000000           mov eax, 1
// 00430e55  8405ac26cb00         test byte ptr [0xcb26ac], al
// 00430e5b  750d                 jne 0x430e6a
// 00430e5d  0905ac26cb00         or dword ptr [0xcb26ac], eax
// 00430e63  c605a826cb0000       mov byte ptr [0xcb26a8], 0
// 00430e6a  c3                   ret 

typedef unsigned char byte;

static byte g_00D1F0E0;
static int g_00D1F0E4;

void f0092b920()
{
    if ((g_00D1F0E4 & 1) == 0)
    {
        g_00D1F0E4 |= 1;
        g_00D1F0E0 = 0;
    }
}
