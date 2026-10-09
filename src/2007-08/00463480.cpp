// from server: 63% by colin
// roc 2007-08 00463480  unit: CSettingsDialog  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00463480
//
// 00463480  83ec18               sub esp, 0x18
// 00463483  53                   push ebx
// 00463484  56                   push esi
// 00463485  8bf1                 mov esi, ecx
// 00463487  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0046348d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00463490  57                   push edi
// 00463491  8d442414             lea eax, [esp + 0x14]
// 00463495  50                   push eax
// 00463496  52                   push edx
// 00463497  ff15f4ed7700         call dword ptr [0x77edf4]
// 0046349d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004634a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004634a5  8944240c             mov dword ptr [esp + 0xc], eax
// 004634a9  894c2410             mov dword ptr [esp + 0x10], ecx
// 004634ad  8bf8                 mov edi, eax
// 004634af  8bd9                 mov ebx, ecx
// 004634b1  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 004634b7  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004634ba  8d44240c             lea eax, [esp + 0xc]
// 004634be  50                   push eax
// 004634bf  52                   push edx
// 004634c0  ff15f0ed7700         call dword ptr [0x77edf0]
// 004634c6  397c240c             cmp dword ptr [esp + 0xc], edi
// 004634ca  750f                 jne 0x4634db
// 004634cc  395c2410             cmp dword ptr [esp + 0x10], ebx
// 004634d0  7509                 jne 0x4634db
// 004634d2  5f                   pop edi
// 004634d3  5e                   pop esi
// 004634d4  b001                 mov al, 1
// 004634d6  5b                   pop ebx
// 004634d7  83c418               add esp, 0x18
// 004634da  c3                   ret 
// 004634db  5f                   pop edi
// 004634dc  5e                   pop esi
// 004634dd  32c0                 xor al, al
// 004634df  5b                   pop ebx
// 004634e0  83c418               add esp, 0x18
// 004634e3  c3                   ret 

extern "C" {
    int __stdcall GetClientRect(void* hWnd, void* lpRect);
    int __stdcall ClientToScreen(void* hWnd, void* lpPoint);
}

struct CSettingsDialog {
    char pad[0x180];
    void* field_180;
    bool method_00463480();
};

bool CSettingsDialog::method_00463480()
{
    int rect[4];
    int pt[2];

    GetClientRect(*(void**)((char*)field_180 + 0x20), rect);
    pt[0] = rect[0];
    pt[1] = rect[1];
    ClientToScreen(*(void**)((char*)field_180 + 0x20), pt);

    if (pt[0] == rect[0] && pt[1] == rect[1])
        return true;
    return false;
}
