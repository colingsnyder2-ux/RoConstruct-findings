// roc 2007-08 005b2fc0  unit: RBX::Assembly  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2fc0
//
// 005b2fc0  8b4108               mov eax, dword ptr [ecx + 8]
// 005b2fc3  8b00                 mov eax, dword ptr [eax]
// 005b2fc5  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005b2fc0 {
    int m_x;
};
struct S_func_005b2fc0 {
    char pad[8];
    I_func_005b2fc0* m_p;
    int f();
};
int S_func_005b2fc0::f()
{
    return m_p->m_x;
}
