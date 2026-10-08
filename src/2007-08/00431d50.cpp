// from server: 100% by colin
// roc 2007-08 00431d50  unit: CDataModelPropGrid  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00431d50
//
// 00431d50  80b9ec00000000       cmp byte ptr [ecx + 0xec], 0
// 00431d57  7408                 je 0x431d61
// 00431d59  6a00                 push 0
// 00431d5b  e840faffff           call 0x4317a0
// 00431d60  c3                   ret 
// 00431d61  e98af3ffff           jmp 0x4310f0

struct CDataModelPropGrid {
    char pad0[0xec];
    unsigned char m_flag;
    void other(int);
    void alt();
    void f();
};

void CDataModelPropGrid::f() {
    if (m_flag)
        other(0);
    else
        alt();
}
