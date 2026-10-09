// roc 2009-12 00824440  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824440
//
// 00824440  8b442404             mov eax, dword ptr [esp + 4]
// 00824444  898184020000         mov dword ptr [ecx + 0x284], eax
// 0082444a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00749650@ns_ROCX000018@@QAEXH@Z)

namespace ns_ROCX000018 {
struct S_func_00749650 {
    char pad0[644];
    int m_x;
    void f(int a1);
};
void S_func_00749650::f(int a1)
{
    m_x = (int)a1;
}
}
