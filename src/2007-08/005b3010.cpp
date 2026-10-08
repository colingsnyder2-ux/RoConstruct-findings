// roc 2007-08 005b3010  unit: RBX::Assembly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3010
//
// 005b3010  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b3013  e958870500           jmp 0x60b770
// auto-matched from its assembly shape

struct P_func_005b3010 { void g(); };
struct S_func_005b3010 {
    char pad[8];
    P_func_005b3010* m_p;
    void f();
};
void S_func_005b3010::f()
{
    m_p->g();
}
