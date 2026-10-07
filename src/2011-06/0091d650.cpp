// roc 2011-06 0091d650  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091d650
//
// 0091d650  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 0091d653  e9c8df0000           jmp 0x92b620
// auto-matched from its assembly shape

struct P_func_0091d650 { void g(); };
struct S_func_0091d650 {
    char pad[64];
    P_func_0091d650* m_p;
    void f();
};
void S_func_0091d650::f()
{
    m_p->g();
}
