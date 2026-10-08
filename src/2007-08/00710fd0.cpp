// from server: 92% by colin
// roc 2007-08 00710fd0  unit: CXTColorSelectorCtrl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710fd0
//
// 00710fd0  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 00710fd6  85c0                 test eax, eax
// 00710fd8  7414                 je 0x710fee
// 00710fda  8b4020               mov eax, dword ptr [eax + 0x20]
// 00710fdd  50                   push eax
// 00710fde  ff15bced7700         call dword ptr [0x77edbc]
// 00710fe4  85c0                 test eax, eax
// 00710fe6  7406                 je 0x710fee
// 00710fe8  b801000000           mov eax, 1
// 00710fed  c3                   ret 
// 00710fee  33c0                 xor eax, eax
// 00710ff0  c3                   ret 

extern "C" int __stdcall IsWindow(void*);

struct CXTColorSelectorCtrl {
    char pad[0x160];
    void* m_hwnd;
    int IsVisible();
};

int CXTColorSelectorCtrl::IsVisible()
{
    if (m_hwnd != 0) {
        if (IsWindow(*(void**)((char*)m_hwnd + 0x20)) != 0)
            return 1;
    }
    return 0;
}
