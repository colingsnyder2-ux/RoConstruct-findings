// roc 2007-08 0069ab30  unit: CXTPPropertyGridView  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ab30
//
// 0069ab30  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0069ab36  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 0069ab3c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0069ab30 {
    char pad[316];
    int m_x;
};
struct S_func_0069ab30 {
    char pad[176];
    I_func_0069ab30* m_p;
    int f();
};
int S_func_0069ab30::f()
{
    return m_p->m_x;
}
