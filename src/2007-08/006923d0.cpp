// from server: 79% by colin
// roc 2007-08 006923d0  unit: CXTPStatusBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006923d0
//
// 006923d0  83b9bc00000000       cmp dword ptr [ecx + 0xbc], 0
// 006923d7  7503                 jne 0x6923dc
// 006923d9  33c0                 xor eax, eax
// 006923db  c3                   ret 
// 006923dc  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 006923e2  85c9                 test ecx, ecx
// 006923e4  7405                 je 0x6923eb
// 006923e6  e9e5fdf9ff           jmp 0x6321d0
// 006923eb  833dd8868c0000       cmp dword ptr [0x8c86d8], 0
// 006923f2  750a                 jne 0x6923fe
// 006923f4  6a00                 push 0
// 006923f6  e8b5b8faff           call 0x63dcb0
// 006923fb  83c404               add esp, 4
// 006923fe  a1d8868c00           mov eax, dword ptr [0x8c86d8]
// 00692403  c3                   ret 

struct CXTPStatusBar {
    char pad[0xb8];
    void* m_pFrameHelper;
    void* m_pFrameHelperWin;
    void* GetFrameHelper();
};

extern "C" void* __stdcall sub_63dcb0(void*);
extern "C" void* __stdcall sub_6321d0(void*);
extern void* g_8c86d8;

void* CXTPStatusBar::GetFrameHelper()
{
    if (m_pFrameHelperWin == 0)
        return 0;
    if (m_pFrameHelper != 0)
        return sub_6321d0(m_pFrameHelper);
    if (g_8c86d8 == 0)
        sub_63dcb0(0);
    return g_8c86d8;
}
