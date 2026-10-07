// roc 2007-08 00639d60  unit: CXTPControlAction  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00639d60
//
// 00639d60  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00639d63  8b4034               mov eax, dword ptr [eax + 0x34]
// 00639d66  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00639d60 {
    char pad[52];
    int m_x;
};
struct S_func_00639d60 {
    char pad[112];
    I_func_00639d60* m_p;
    int f();
};
int S_func_00639d60::f()
{
    return m_p->m_x;
}
