// roc 2010-06 008c3410  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c3410
//
// 008c3410  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008c3413  e9c8910000           jmp 0x8cc5e0
// auto-matched from its assembly shape

struct P_func_008c3410 { void g(); };
struct S_func_008c3410 {
    char pad[40];
    P_func_008c3410* m_p;
    void f();
};
void S_func_008c3410::f()
{
    m_p->g();
}
