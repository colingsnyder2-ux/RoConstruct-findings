// roc 2007-08 005b3050  unit: RBX::Assembly  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3050
//
// 005b3050  8b4908               mov ecx, dword ptr [ecx + 8]
// 005b3053  e9a88b0500           jmp 0x60bc00
// auto-matched from its assembly shape

struct P_func_005b3050 { void g(); };
struct S_func_005b3050 {
    char pad[8];
    P_func_005b3050* m_p;
    void f();
};
void S_func_005b3050::f()
{
    m_p->g();
}
