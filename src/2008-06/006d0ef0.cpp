// roc 2008-06 006d0ef0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0ef0
//
// 006d0ef0  8b442404             mov eax, dword ptr [esp + 4]
// 006d0ef4  898184020000         mov dword ptr [ecx + 0x284], eax
// 006d0efa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006d0ef0 {
    char pad0[644];
    int m_x;
    void f(int a1);
};
void S_func_006d0ef0::f(int a1)
{
    m_x = (int)a1;
}
