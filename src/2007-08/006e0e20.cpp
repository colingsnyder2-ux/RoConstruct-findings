// from server: 100% by colin
// roc 2007-08 006e0e20  unit: CXTPDockingPaneTabbedContainer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0e20
//
// 006e0e20  83b9f000000000       cmp dword ptr [ecx + 0xf0], 0
// 006e0e27  7524                 jne 0x6e0e4d
// 006e0e29  8d8158ffffff         lea eax, [ecx - 0xa8]
// 006e0e2f  85c0                 test eax, eax
// 006e0e31  741a                 je 0x6e0e4d
// 006e0e33  83782000             cmp dword ptr [eax + 0x20], 0
// 006e0e37  7414                 je 0x6e0e4d
// 006e0e39  8b442404             mov eax, dword ptr [esp + 4]
// 006e0e3d  8b8978ffffff         mov ecx, dword ptr [ecx - 0x88]
// 006e0e43  6a00                 push 0
// 006e0e45  50                   push eax
// 006e0e46  51                   push ecx
// 006e0e47  ff15dcec7700         call dword ptr [0x77ecdc]
// 006e0e4d  c20800               ret 8

extern "C" __declspec(dllimport) int __stdcall InvalidateRect(void*, const void*, int);

struct CXTPDockingPaneTabbedContainer {
    char pad[0xf0];
    int field_f0;
    void CheckAndInvalidate(void* p, int bErase);
};

void CXTPDockingPaneTabbedContainer::CheckAndInvalidate(void* p, int bErase) {
    if (field_f0 != 0)
        return;
    char* base = (char*)this - 0xa8;
    if (base == 0)
        return;
    if (*(int*)(base + 0x20) == 0)
        return;
    void* hwnd = *(void**)((char*)this - 0x88);
    InvalidateRect(hwnd, p, 0);
}
