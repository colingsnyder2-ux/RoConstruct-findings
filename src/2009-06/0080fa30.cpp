// roc 2009-06 0080fa30  unit: CXTPRibbonTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fa30
//
// 0080fa30  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0080fa36  e9d5260000           jmp 0x812110
// auto-matched from its assembly shape

struct P_func_0080fa30 { void g(); };
struct S_func_0080fa30 {
    char pad[132];
    P_func_0080fa30* m_p;
    void f();
};
void S_func_0080fa30::f()
{
    m_p->g();
}
