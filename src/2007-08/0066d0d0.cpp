// roc 2007-08 0066d0d0  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066d0d0
//
// 0066d0d0  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 0066d0d6  e9d5e5ffff           jmp 0x66b6b0
// auto-matched from its assembly shape

struct P_func_0066d0d0 { void g(); };
struct S_func_0066d0d0 {
    char pad[248];
    P_func_0066d0d0* m_p;
    void f();
};
void S_func_0066d0d0::f()
{
    m_p->g();
}
