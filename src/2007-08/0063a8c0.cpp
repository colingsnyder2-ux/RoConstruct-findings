// from server: 100% by colin
// roc 2007-08 0063a8c0  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a8c0
//
// 0063a8c0  83ec08               sub esp, 8
// 0063a8c3  56                   push esi
// 0063a8c4  8d442404             lea eax, [esp + 4]
// 0063a8c8  50                   push eax
// 0063a8c9  8bf1                 mov esi, ecx
// 0063a8cb  ff1554ec7700         call dword ptr [0x77ec54]
// 0063a8d1  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0063a8d7  8b4220               mov eax, dword ptr [edx + 0x20]
// 0063a8da  8d4c2404             lea ecx, [esp + 4]
// 0063a8de  51                   push ecx
// 0063a8df  50                   push eax
// 0063a8e0  ff1550ec7700         call dword ptr [0x77ec50]
// 0063a8e6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063a8ea  8b542404             mov edx, dword ptr [esp + 4]
// 0063a8ee  51                   push ecx
// 0063a8ef  52                   push edx
// 0063a8f0  81c6c0000000         add esi, 0xc0
// 0063a8f6  56                   push esi
// 0063a8f7  ff1594ed7700         call dword ptr [0x77ed94]
// 0063a8fd  5e                   pop esi
// 0063a8fe  83c408               add esp, 8
// 0063a901  c3                   ret 

struct CXTPControl {
    char pad[0xc0];
    int field_c0;
    char pad2[0xfc - 0xc4];
    void* field_fc;
    void GetRect();
};

extern "C" {
    __declspec(dllimport) int __stdcall GetCursorPos(void*);
    __declspec(dllimport) int __stdcall PtInRect(const void*, int, int);
    __declspec(dllimport) int __stdcall ScreenToClient(void*, void*);
}

void CXTPControl::GetRect()
{
    int pt[2];
    GetCursorPos(pt);
    void* p = field_fc;
    void* r = *(void**)((char*)p + 0x20);
    ScreenToClient(r, pt);
    PtInRect((char*)this + 0xc0, pt[0], pt[1]);
}
