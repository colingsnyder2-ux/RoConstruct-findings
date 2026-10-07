// roc 2010-06 008c3400  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c3400
//
// 008c3400  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008c3403  e948930000           jmp 0x8cc750
// auto-matched from its assembly shape

struct P_func_008c3400 { void g(); };
struct S_func_008c3400 {
    char pad[40];
    P_func_008c3400* m_p;
    void f();
};
void S_func_008c3400::f()
{
    m_p->g();
}
