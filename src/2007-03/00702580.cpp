// roc 2007-03 00702580  unit: seg_00700000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00702580
//
// 00702580  83ec10               sub esp, 0x10
// 00702583  56                   push esi
// 00702584  8bf1                 mov esi, ecx
// 00702586  e8d5fdffff           call 0x702360
// 0070258b  84c0                 test al, al
// 0070258d  7543                 jne 0x7025d2
// 0070258f  8bce                 mov ecx, esi
// 00702591  e83cc1f1ff           call 0x61e6d2
// 00702596  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00702599  8d442404             lea eax, [esp + 4]
// 0070259d  50                   push eax
// 0070259e  51                   push ecx
// 0070259f  ff153ced7700         call dword ptr [0x77ed3c]
// 007025a5  8b542420             mov edx, dword ptr [esp + 0x20]
// 007025a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007025ad  52                   push edx
// 007025ae  50                   push eax
// 007025af  8d4c240c             lea ecx, [esp + 0xc]
// 007025b3  51                   push ecx
// 007025b4  ff1598ed7700         call dword ptr [0x77ed98]
// 007025ba  85c0                 test eax, eax
// 007025bc  7414                 je 0x7025d2
// 007025be  8b4620               mov eax, dword ptr [esi + 0x20]
// 007025c1  8b5678               mov edx, dword ptr [esi + 0x78]
// 007025c4  6a00                 push 0
// 007025c6  6a00                 push 0
// 007025c8  50                   push eax
// 007025c9  89567c               mov dword ptr [esi + 0x7c], edx
// 007025cc  ff1554ee7700         call dword ptr [0x77ee54]
// 007025d2  5e                   pop esi
// 007025d3  83c410               add esp, 0x10
// 007025d6  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTColorSelectorCtrl@ns_ROCX00000b@@QAEXIHH@Z)

namespace ns_ROCX00000b {
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
}
