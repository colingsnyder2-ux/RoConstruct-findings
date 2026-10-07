// roc 2007-08 005b3020  unit: RBX::Assembly  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3020
//
// 005b3020  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b3023  e9c8870500           jmp 0x60b7f0
// auto-matched from its assembly shape

struct P_func_005b3020 { void g(); };
struct S_func_005b3020 {
    char pad[8];
    P_func_005b3020* m_p;
    void f();
};
void S_func_005b3020::f()
{
    m_p->g();
}
