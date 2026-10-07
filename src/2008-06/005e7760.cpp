// roc 2008-06 005e7760  unit: RBX::Ball  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7760
//
// 005e7760  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 005e7766  e9d5c80200           jmp 0x614040
// auto-matched from its assembly shape

struct P_func_005e7760 { void g(); };
struct S_func_005e7760 {
    char pad[160];
    P_func_005e7760* m_p;
    void f();
};
void S_func_005e7760::f()
{
    m_p->g();
}
