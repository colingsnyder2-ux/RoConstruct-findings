// from server: 100% by tester
// roc 2008-06 004314c0  unit: CDataModelPropGrid  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004314c0
//
// 004314c0  80b90401000000       cmp byte ptr [ecx + 0x104], 0
// 004314c7  7408                 je 0x4314d1
// 004314c9  6a00                 push 0
// 004314cb  e880faffff           call 0x430f50
// 004314d0  c3                   ret 
// 004314d1  e91af5ffff           jmp 0x4309f0

struct CDataModelPropGrid {
    char pad0[0x104];
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
