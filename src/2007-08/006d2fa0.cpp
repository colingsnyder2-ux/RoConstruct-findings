// roc 2007-08 006d2fa0  unit: CXTPReportRow_Batch  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2fa0
//
// 006d2fa0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006d2fa3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2fa0 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_006d2fa0::f()
{
    return m_x;
}
