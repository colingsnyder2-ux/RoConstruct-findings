// from server: 76% by colin
// roc 2007-08 0063c010  unit: CRobloxControlColorSelector  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063c010
//
// 0063c010  56                   push esi
// 0063c011  8bf1                 mov esi, ecx
// 0063c013  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0063c019  85c9                 test ecx, ecx
// 0063c01b  7410                 je 0x63c02d
// 0063c01d  56                   push esi
// 0063c01e  e82dfbffff           call 0x63bb50
// 0063c023  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0063c02d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063c031  85c9                 test ecx, ecx
// 0063c033  740c                 je 0x63c041
// 0063c035  56                   push esi
// 0063c036  898e58010000         mov dword ptr [esi + 0x158], ecx
// 0063c03c  e86ffaffff           call 0x63bab0
// 0063c041  5e                   pop esi
// 0063c042  c20400               ret 4

struct CRobloxControlColorSelector {
    char pad[0x158];
    void* field_158;
    void SetColor(void* color);
    void sub_63BB50();
    void sub_63BAB0();
};

void CRobloxControlColorSelector::SetColor(void* color) {
    if (field_158) {
        sub_63BB50();
        field_158 = 0;
    }
    if (color) {
        field_158 = color;
        sub_63BAB0();
    }
}
