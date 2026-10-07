// roc 2008-06 006d0ed0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0ed0
//
// 006d0ed0  8b442404             mov eax, dword ptr [esp + 4]
// 006d0ed4  8981bc010000         mov dword ptr [ecx + 0x1bc], eax
// 006d0eda  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006d0ed0 {
    char pad0[444];
    int m_x;
    void f(int a1);
};
void S_func_006d0ed0::f(int a1)
{
    m_x = (int)a1;
}
