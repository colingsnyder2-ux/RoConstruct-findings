// roc 2012-06 004b9d50  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9d50
//
// 004b9d50  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 004b9d53  e968280100           jmp 0x4cc5c0
// auto-matched from its assembly shape

struct P_func_004b9d50 { void g(); };
struct S_func_004b9d50 {
    char pad[64];
    P_func_004b9d50* m_p;
    void f();
};
void S_func_004b9d50::f()
{
    m_p->g();
}
