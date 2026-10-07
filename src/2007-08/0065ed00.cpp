// roc 2007-08 0065ed00  unit: CXTPReportColumn  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ed00
//
// 0065ed00  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0065ed03  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 0065ed09  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0065ed00 {
    char pad[176];
    int m_x;
};
struct S_func_0065ed00 {
    char pad[36];
    I_func_0065ed00* m_p;
    int f();
};
int S_func_0065ed00::f()
{
    return m_p->m_x;
}
