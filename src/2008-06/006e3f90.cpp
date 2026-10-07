// roc 2008-06 006e3f90  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3f90
//
// 006e3f90  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006e3f96  e955e5ffff           jmp 0x6e24f0
// auto-matched from its assembly shape

struct P_func_006e3f90 { void g(); };
struct S_func_006e3f90 {
    char pad[252];
    P_func_006e3f90* m_p;
    void f();
};
void S_func_006e3f90::f()
{
    m_p->g();
}
