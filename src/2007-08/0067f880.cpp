// from server: 75% by colin
// roc 2007-08 0067f880  unit: CXTPControlSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f880
//
// 0067f880  56                   push esi
// 0067f881  57                   push edi
// 0067f882  ff15e4ec7700         call dword ptr [0x77ece4]
// 0067f888  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067f88c  56                   push esi
// 0067f88d  8bf8                 mov edi, eax
// 0067f88f  e8e68f0b00           call 0x73887a
// 0067f894  85c0                 test eax, eax
// 0067f896  740c                 je 0x67f8a4
// 0067f898  50                   push eax
// 0067f899  8bf0                 mov esi, eax
// 0067f89b  e8da8f0b00           call 0x73887a
// 0067f8a0  85c0                 test eax, eax
// 0067f8a2  75f4                 jne 0x67f898
// 0067f8a4  56                   push esi
// 0067f8a5  ff1590ee7700         call dword ptr [0x77ee90]
// 0067f8ab  33c9                 xor ecx, ecx
// 0067f8ad  3bf8                 cmp edi, eax
// 0067f8af  0f94c1               sete cl
// 0067f8b2  5f                   pop edi
// 0067f8b3  5e                   pop esi
// 0067f8b4  8bc1                 mov eax, ecx
// 0067f8b6  c3                   ret 

extern "C" void* __stdcall GetForegroundWindow();
extern "C" void* __stdcall GetLastActivePopup(void* hWnd);
extern "C" void* __stdcall sub_73887A(void* hWnd);

struct CXTPControlSelector
{
    int IsForeground();
};

int CXTPControlSelector::IsForeground()
{
    void* fg = GetForegroundWindow();
    void* wnd = (void*)0;
    void* p = sub_73887A(fg);
    if (p != 0)
    {
        wnd = p;
        do
        {
            p = sub_73887A(p);
        } while (p != 0);
    }
    void* active = GetLastActivePopup(wnd);
    return fg == active;
}
