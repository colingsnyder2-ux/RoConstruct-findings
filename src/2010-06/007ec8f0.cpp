// roc 2010-06 007ec8f0  unit: CXTPControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec8f0
//
// 007ec8f0  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 007ec8f6  e92573fdff           jmp 0x7c3c20
// auto-matched from its assembly shape

struct P_func_007ec8f0 { void g(); };
struct S_func_007ec8f0 {
    char pad[228];
    P_func_007ec8f0* m_p;
    void f();
};
void S_func_007ec8f0::f()
{
    m_p->g();
}
