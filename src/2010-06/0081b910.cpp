// roc 2010-06 0081b910  unit: CXTPPropertyGridView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081b910
//
// 0081b910  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0081b916  e96563feff           jmp 0x801c80
// auto-matched from its assembly shape

struct P_func_0081b910 { void g(); };
struct S_func_0081b910 {
    char pad[176];
    P_func_0081b910* m_p;
    void f();
};
void S_func_0081b910::f()
{
    m_p->g();
}
