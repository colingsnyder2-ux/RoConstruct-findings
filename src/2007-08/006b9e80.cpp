// from server: 52% by colin
// roc 2007-08 006b9e80  unit: XTPPaintThemes::CXTPDefaultTheme  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b9e80
//
// 006b9e80  8b442408             mov eax, dword ptr [esp + 8]
// 006b9e84  83b8f800000005       cmp dword ptr [eax + 0xf8], 5
// 006b9e8b  7458                 je 0x6b9ee5
// 006b9e8d  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006b9e93  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 006b9e9a  7433                 je 0x6b9ecf
// 006b9e9c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006b9ea1  7416                 je 0x6b9eb9
// 006b9ea3  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006b9eab  c744240800000000     mov dword ptr [esp + 8], 0
// 006b9eb3  ff2590ed7700         jmp dword ptr [0x77ed90]
// 006b9eb9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b9ec1  c744240801000000     mov dword ptr [esp + 8], 1
// 006b9ec9  ff2590ed7700         jmp dword ptr [0x77ed90]
// 006b9ecf  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b9ed7  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 006b9edf  ff2590ed7700         jmp dword ptr [0x77ed90]
// 006b9ee5  c20c00               ret 0xc

extern "C" __declspec(dllimport) int __stdcall InflateRect(void*, int, int);

struct CXTPDefaultTheme
{
    char pad[0xf8];
    int m_nTheme;
    void* m_pPaintManager;
};

void __stdcall func_006b9e80(CXTPDefaultTheme* pTheme, int nLeft, int nTop, int nRight, int nBottom)
{
    if (pTheme->m_nTheme == 5)
        return;

    void* pManager = pTheme->m_pPaintManager;
    if (*(int*)((char*)pManager + 0xf4) == 2)
    {
        nLeft = 0;
        nTop = -1;
        InflateRect(&nLeft, nTop, nRight);
        return;
    }

    if (nRight != 0)
    {
        nRight = 1;
        nLeft = 0;
    }
    else
    {
        nRight = 0;
        nLeft = 1;
    }
    InflateRect(&nLeft, nTop, nRight);
}
