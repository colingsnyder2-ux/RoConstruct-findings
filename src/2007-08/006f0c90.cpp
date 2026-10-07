// roc 2007-08 006f0c90  unit: CXTPShadowsManager::CShadowWnd  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0c90
//
// 006f0c90  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006f0c93  8b80500a0000         mov eax, dword ptr [eax + 0xa50]
// 006f0c99  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006f0c90 {
    char pad[2640];
    int m_x;
};
struct S_func_006f0c90 {
    char pad[100];
    I_func_006f0c90* m_p;
    int f();
};
int S_func_006f0c90::f()
{
    return m_p->m_x;
}
