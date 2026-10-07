// roc 2010-06 007eb800  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eb800
//
// 007eb800  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007eb806  e9b5e5ffff           jmp 0x7e9dc0
// auto-matched from its assembly shape

struct P_func_007eb800 { void g(); };
struct S_func_007eb800 {
    char pad[252];
    P_func_007eb800* m_p;
    void f();
};
void S_func_007eb800::f()
{
    m_p->g();
}
