// roc 2008-06 006e5080  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5080
//
// 006e5080  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 006e5086  e9c5b4fdff           jmp 0x6c0550
// auto-matched from its assembly shape

struct P_func_006e5080 { void g(); };
struct S_func_006e5080 {
    char pad[228];
    P_func_006e5080* m_p;
    void f();
};
void S_func_006e5080::f()
{
    m_p->g();
}
