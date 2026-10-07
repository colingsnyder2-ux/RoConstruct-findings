// roc 2011-06 006a4b30  unit: RBX::Primitive  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a4b30
//
// 006a4b30  8b8908010000         mov ecx, dword ptr [ecx + 0x108]
// 006a4b36  e965f7ffff           jmp 0x6a42a0
// auto-matched from its assembly shape

struct P_func_006a4b30 { void g(); };
struct S_func_006a4b30 {
    char pad[264];
    P_func_006a4b30* m_p;
    void f();
};
void S_func_006a4b30::f()
{
    m_p->g();
}
