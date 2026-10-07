// roc 2010-06 00804620  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804620
//
// 00804620  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 00804623  e9063ffaff           jmp 0x7a852e
// auto-matched from its assembly shape

struct P_func_00804620 { void g(); };
struct S_func_00804620 {
    char pad[68];
    P_func_00804620* m_p;
    void f();
};
void S_func_00804620::f()
{
    m_p->g();
}
