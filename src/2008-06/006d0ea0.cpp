// roc 2008-06 006d0ea0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0ea0
//
// 006d0ea0  8b442404             mov eax, dword ptr [esp + 4]
// 006d0ea4  8981b8020000         mov dword ptr [ecx + 0x2b8], eax
// 006d0eaa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006d0ea0 {
    char pad0[696];
    int m_x;
    void f(int a1);
};
void S_func_006d0ea0::f(int a1)
{
    m_x = (int)a1;
}
