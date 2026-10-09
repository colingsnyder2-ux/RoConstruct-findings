// roc 2009-12 008243f0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008243f0
//
// 008243f0  8b442404             mov eax, dword ptr [esp + 4]
// 008243f4  8981b8020000         mov dword ptr [ecx + 0x2b8], eax
// 008243fa  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_007495e0@ns_ROCX000013@@QAEXH@Z)

namespace ns_ROCX000013 {
struct S_func_007495e0 {
    char pad0[696];
    int m_x;
    void f(int a1);
};
void S_func_007495e0::f(int a1)
{
    m_x = (int)a1;
}
}
