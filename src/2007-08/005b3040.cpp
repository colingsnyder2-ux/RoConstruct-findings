// roc 2007-08 005b3040  unit: RBX::Assembly  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3040
//
// 005b3040  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b3043  e948860500           jmp 0x60b690
// auto-matched from its assembly shape

struct P_func_005b3040 { void g(); };
struct S_func_005b3040 {
    char pad[8];
    P_func_005b3040* m_p;
    void f();
};
void S_func_005b3040::f()
{
    m_p->g();
}
