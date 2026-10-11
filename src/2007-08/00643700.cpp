// from server: 100% by colin
// roc 2007-08 00643700  unit: CXTPCommandBar::CCommandBarCmdUI  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643700
//
// 00643700  8b442404             mov eax, dword ptr [esp + 4]
// 00643704  c7412c01000000       mov dword ptr [ecx + 0x2c], 1
// 0064370b  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0064370e  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00643714  7413                 je 0x643729
// 00643716  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0064371c  c744240401000000     mov dword ptr [esp + 4], 1
// 00643724  e9676fffff           jmp 0x63a690
// 00643729  c20400               ret 4

struct CXTPCommandBarCmdUI {
    char pad[0x28];
    void* field_28;
    int field_2c;
    void SetCheck(int nCheck);
};

void CXTPCommandBarCmdUI::SetCheck(int nCheck) {
    field_2c = 1;
    void* p = field_28;
    if (*(int*)((char*)p + 0xa0) != nCheck) {
        *(int*)((char*)p + 0xa0) = nCheck;
        nCheck = 1;
        extern void __stdcall sub_63A690(int);
        sub_63A690(nCheck);
    }
}
