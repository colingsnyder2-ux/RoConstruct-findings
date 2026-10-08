// from server: 100% by colin
// roc 2007-08 00458540  unit: CRobloxWnd  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458540
//
// 00458540  807c240400           cmp byte ptr [esp + 4], 0
// 00458545  750c                 jne 0x458553
// 00458547  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0045854a  85c9                 test ecx, ecx
// 0045854c  7405                 je 0x458553
// 0045854e  e8cdc10000           call 0x464720
// 00458553  c20400               ret 4

struct CRobloxWnd {
    void m();
    char pad[0x74];
    void* field_74;

    void func_00458540(char arg);
};

void CRobloxWnd::func_00458540(char arg) {
    if (arg == 0) {
        void* p = this->field_74;
        if (p != 0) {
            ((CRobloxWnd*)p)->m();
        }
    }
}
