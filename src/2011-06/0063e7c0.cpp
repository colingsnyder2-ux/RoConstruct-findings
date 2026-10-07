// roc 2011-06 0063e7c0  unit: RBX::Workspace  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e7c0
//
// 0063e7c0  8b8970010000         mov ecx, dword ptr [ecx + 0x170]
// 0063e7c6  e9b5c1f4ff           jmp 0x58a980
// auto-matched from its assembly shape

struct P_func_0063e7c0 { void g(); };
struct S_func_0063e7c0 {
    char pad[368];
    P_func_0063e7c0* m_p;
    void f();
};
void S_func_0063e7c0::f()
{
    m_p->g();
}
