// roc 2011-06 0091d640  unit: RBX::ViewRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091d640
//
// 0091d640  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 0091d643  e948e10000           jmp 0x92b790
// auto-matched from its assembly shape

struct P_func_0091d640 { void g(); };
struct S_func_0091d640 {
    char pad[64];
    P_func_0091d640* m_p;
    void f();
};
void S_func_0091d640::f()
{
    m_p->g();
}
