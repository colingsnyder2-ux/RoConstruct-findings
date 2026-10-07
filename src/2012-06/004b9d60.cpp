// roc 2012-06 004b9d60  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b9d60
//
// 004b9d60  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 004b9d63  e9e8260100           jmp 0x4cc450
// auto-matched from its assembly shape

struct P_func_004b9d60 { void g(); };
struct S_func_004b9d60 {
    char pad[64];
    P_func_004b9d60* m_p;
    void f();
};
void S_func_004b9d60::f()
{
    m_p->g();
}
