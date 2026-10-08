// from server: 76% by colin
// roc 2007-08 00456800  unit: CRobloxView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456800
//
// 00456800  83b99801000000       cmp dword ptr [ecx + 0x198], 0
// 00456807  6a01                 push 1
// 00456809  0f94c0               sete al
// 0045680c  50                   push eax
// 0045680d  e8aefeffff           call 0x4566c0
// 00456812  c3                   ret 

struct CRobloxView {
    char pad[0x198];
    int field_0x198;
    void func_4566c0(int, int);
    void target();
};

void CRobloxView::target() {
    func_4566c0(field_0x198 == 0, 1);
}
