// roc 2007-08 0068b6a0  unit: CXTPTabClientWnd  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b6a0
//
// 0068b6a0  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0068b6a6  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0068b6ac  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0068b6a0 {
    char pad[216];
    int m_x;
};
struct S_func_0068b6a0 {
    char pad[132];
    I_func_0068b6a0* m_p;
    int f();
};
int S_func_0068b6a0::f()
{
    return m_p->m_x;
}
