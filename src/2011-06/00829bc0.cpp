// roc 2011-06 00829bc0  unit: CXTPCommandBars  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829bc0
//
// 00829bc0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00829bc6  e9254afeff           jmp 0x80e5f0
// auto-matched from its assembly shape

struct P_func_00829bc0 { void g(); };
struct S_func_00829bc0 {
    char pad[188];
    P_func_00829bc0* m_p;
    void f();
};
void S_func_00829bc0::f()
{
    m_p->g();
}
