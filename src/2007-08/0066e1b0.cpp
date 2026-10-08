// roc 2007-08 0066e1b0  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e1b0
//
// 0066e1b0  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0066e1b6  e9f5f7fdff           jmp 0x64d9b0
// auto-matched from its assembly shape

struct P_func_0066e1b0 { void g(); };
struct S_func_0066e1b0 {
    char pad[228];
    P_func_0066e1b0* m_p;
    void f();
};
void S_func_0066e1b0::f()
{
    m_p->g();
}
