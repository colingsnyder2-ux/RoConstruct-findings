// from server: 100% by auto
// roc 2008-06 006d45e0  unit: CXTPReportControl  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d45e0
//
// 006d45e0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 006d45e3  c3                   ret 

struct S_func_006d45e0 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_006d45e0::f()
{
    return m_x;
}
