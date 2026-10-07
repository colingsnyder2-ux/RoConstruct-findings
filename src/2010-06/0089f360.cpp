// roc 2010-06 0089f360  unit: CXTPRibbonTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f360
//
// 0089f360  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0089f366  e9e52a0000           jmp 0x8a1e50
// auto-matched from its assembly shape

struct P_func_0089f360 { void g(); };
struct S_func_0089f360 {
    char pad[132];
    P_func_0089f360* m_p;
    void f();
};
void S_func_0089f360::f()
{
    m_p->g();
}
