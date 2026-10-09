// from server: 100% by colin
// roc 2007-08 00711220  unit: CXTColorSelectorCtrl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00711220
//
// 00711220  83ec10               sub esp, 0x10
// 00711223  56                   push esi
// 00711224  8bf1                 mov esi, ecx
// 00711226  e8a5fdffff           call 0x710fd0
// 0071122b  84c0                 test al, al
// 0071122d  7543                 jne 0x711272
// 0071122f  8bce                 mov ecx, esi
// 00711231  e808f0f1ff           call 0x63023e
// 00711236  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00711239  8d442404             lea eax, [esp + 4]
// 0071123d  50                   push eax
// 0071123e  51                   push ecx
// 0071123f  ff15f4ed7700         call dword ptr [0x77edf4]
// 00711245  8b542420             mov edx, dword ptr [esp + 0x20]
// 00711249  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071124d  52                   push edx
// 0071124e  50                   push eax
// 0071124f  8d4c240c             lea ecx, [esp + 0xc]
// 00711253  51                   push ecx
// 00711254  ff1594ed7700         call dword ptr [0x77ed94]
// 0071125a  85c0                 test eax, eax
// 0071125c  7414                 je 0x711272
// 0071125e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00711261  8b5678               mov edx, dword ptr [esi + 0x78]
// 00711264  6a00                 push 0
// 00711266  6a00                 push 0
// 00711268  50                   push eax
// 00711269  89567c               mov dword ptr [esi + 0x7c], edx
// 0071126c  ff15dcec7700         call dword ptr [0x77ecdc]
// 00711272  5e                   pop esi
// 00711273  83c410               add esp, 0x10
// 00711276  c20c00               ret 0xc

struct CXTColorSelectorCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0x54];
    int field78;
    int field7c;
    bool sub_710fd0();
    void sub_63023e();
    void OnLButtonDown(unsigned int nFlags, int x, int y);
};

extern "C" {
    int (__stdcall *GetClientRect)(void* hwnd, void* rect);
    int (__stdcall *PtInRect)(const void* rect, int x, int y);
    int (__stdcall *InvalidateRect)(void* hwnd, const void* rect, int erase);
}

void CXTColorSelectorCtrl::OnLButtonDown(unsigned int nFlags, int x, int y)
{
    if (sub_710fd0())
        return;

    sub_63023e();

    int rect[4];
    GetClientRect(hwnd, rect);

    if (!PtInRect(rect, x, y))
        return;

    field7c = field78;
    InvalidateRect(hwnd, 0, 0);
}
